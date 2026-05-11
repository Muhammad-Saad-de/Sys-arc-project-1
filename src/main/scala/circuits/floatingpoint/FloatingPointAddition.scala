package sysarch.circuits.floatingpoint

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

// You do not need to worry about handling special cases like NaN, infinity, or denormalized numbers for this implementation. Focus on the core addition logic for normalized numbers.

class FloatingPointAddition extends Module {
  val a   = IO(Input(Vec(32, Bool())))
  val b   = IO(Input(Vec(32, Bool())))
  val out = IO(Output(Vec(32, Bool())))

  //    sign = bit 31
  val signA = a(31)
  val signB = b(31)

  //    exponent = bits 30..23  (8 bits)
  val expA = Wire(Vec(8, Bool()))
  val expB = Wire(Vec(8, Bool()))
  for (i <- 0 until 8) {
    expA(i) := a(i + 23)
    expB(i) := b(i + 23)
  }

  //    mantissa = bits 22..0   (23 bits)
  //    significand = 1.mantissa (24 bits, hidden 1 prepended at bit 23)
  val sigA = Wire(Vec(24, Bool()))
  val sigB = Wire(Vec(24, Bool()))
  sigA(23) := true.B // hidden 1 (inputs are guaranteed normal)
  sigB(23) := true.B
  for (i <- 0 until 23) {
    sigA(i) := a(i)
    sigB(i) := b(i)
  }

  // Compare exponents

  val expCmp = Module(new nBitComparator(8))
  expCmp.a := expA
  expCmp.b := expB

  // aGtB = expA > expB, aEqB = expA == expB
  // if aGtB or aEqB → A has larger or equal exponent
  val aGeB       = Wire(Bool())
  val orGateAGeB = Module(new ORGate())
  orGateAGeB.a := expCmp.gt
  orGateAGeB.b := expCmp.eq
  aGeB         := orGateAGeB.out

  // expLarge = whichever exponent is larger
  val expLarge    = Wire(Vec(8, Bool()))
  val muxExpLarge = Module(new Mux(8))
  muxExpLarge.sel := aGeB
  muxExpLarge.a   := expB // sel=0 (B >= A) → expB is large
  muxExpLarge.b   := expA // sel=1 (A >= B) → expA is large
  expLarge        := muxExpLarge.out

  // expDiff = expLarge - expSmall  (always non-negative, 8-bit)
  val expSmall    = Wire(Vec(8, Bool()))
  val muxExpSmall = Module(new Mux(8))
  muxExpSmall.sel := aGeB
  muxExpSmall.a   := expA // sel=0 → A is small
  muxExpSmall.b   := expB // sel=1 → B is small
  expSmall        := muxExpSmall.out

  val expDiffSub = Module(new nBitAdderSubtractor(8))
  expDiffSub.a          := expLarge
  expDiffSub.b          := expSmall
  expDiffSub.enable_sub := true.B
  val expDiff = expDiffSub.sum // how many bits to right-shift the smaller significand

  // Align mantissas
  //    Right-shift the significand of the smaller-exponent number (expDiff times)
  //    Both are extended to 25 bits so there is room for a carry bit from addition.

  // Pick which sig is large / small
  val sigLargeRaw = Wire(Vec(24, Bool()))
  val muxSigLarge = Module(new Mux(24))
  muxSigLarge.sel := aGeB
  muxSigLarge.a   := sigB // sel=0 → B is large
  muxSigLarge.b   := sigA // sel=1 → A is large
  sigLargeRaw     := muxSigLarge.out

  val sigSmallRaw = Wire(Vec(24, Bool()))
  val muxSigSmall = Module(new Mux(24))
  muxSigSmall.sel := aGeB
  muxSigSmall.a   := sigA // sel=0 → A is small
  muxSigSmall.b   := sigB // sel=1 → B is small
  sigSmallRaw     := muxSigSmall.out

  // Extend both to 25 bits (bit 24 = carry room, initially 0)
  val sigLarge25    = Wire(Vec(25, Bool()))
  val sigSmall25ext = Wire(Vec(25, Bool()))
  for (i <- 0 until 24) {
    sigLarge25(i)    := sigLargeRaw(i)
    sigSmall25ext(i) := sigSmallRaw(i)
  }
  sigLarge25(24)    := false.B
  sigSmall25ext(24) := false.B

  // Right barrel shifter on sigSmall25ext (5 stages: 1/2/4/8/16)  //Max useful shift is 24 (beyond that all bits are zero), so bits [4:0] of expDiff are sufficient.
  // Stage 0: shift right by 1 if expDiff(0) = 1
  val rs0  = Wire(Vec(25, Bool()))
  val mRS0 = Module(new Mux(25))
  mRS0.sel := expDiff(0)
  mRS0.a   := sigSmall25ext
  for (i <- 0 until 25) {
    mRS0.b(i) := (if (i <= 23) sigSmall25ext(i + 1) else false.B)
  }
  rs0 := mRS0.out

  // Stage 1: shift right by 2 if expDiff(1) = 1
  val rs1  = Wire(Vec(25, Bool()))
  val mRS1 = Module(new Mux(25))
  mRS1.sel := expDiff(1)
  mRS1.a   := rs0
  for (i <- 0 until 25) {
    mRS1.b(i) := (if (i <= 22) rs0(i + 2) else false.B)
  }
  rs1 := mRS1.out

  // Stage 2: shift right by 4 if expDiff(2) = 1
  val rs2  = Wire(Vec(25, Bool()))
  val mRS2 = Module(new Mux(25))
  mRS2.sel := expDiff(2)
  mRS2.a   := rs1
  for (i <- 0 until 25) {
    mRS2.b(i) := (if (i <= 20) rs1(i + 4) else false.B)
  }
  rs2 := mRS2.out

  // Stage 3: shift right by 8 if expDiff(3) = 1
  val rs3  = Wire(Vec(25, Bool()))
  val mRS3 = Module(new Mux(25))
  mRS3.sel := expDiff(3)
  mRS3.a   := rs2
  for (i <- 0 until 25) {
    mRS3.b(i) := (if (i <= 16) rs2(i + 8) else false.B)
  }
  rs3 := mRS3.out

  // Stage 4: shift right by 16 if expDiff(4) = 1
  val rs4  = Wire(Vec(25, Bool()))
  val mRS4 = Module(new Mux(25))
  mRS4.sel := expDiff(4)
  mRS4.a   := rs3
  for (i <- 0 until 25) {
    mRS4.b(i) := (if (i <= 8) rs3(i + 16) else false.B)
  }
  rs4 := mRS4.out

  val sigSmallAligned = rs4 // sigSmall right-shifted by expDiff

  // 4. Add or subtract the aligned significands
  //    Same sign  → add, Diff sign  → subtract (sigLarge - sigSmallAligned)
  //     sigLarge always >= sigSmallAligned after alignment, so the result is always non-negative.

  //    We detect same/different sign:
  //    sameSign = NOT(XOR(signA, signB))
  //    enable_sub = XOR(signA, signB)  i.e. different signs → subtract

  // XOR gate to detect sign difference
  val xorSign = Module(new XORGate())
  xorSign.a := signA
  xorSign.b := signB
  val diffSign    = xorSign.out // 1 = different signs → subtract
  val sameSign    = Wire(Bool())
  val notDiffSign = Module(new NOTGate())
  notDiffSign.a := diffSign
  sameSign      := notDiffSign.out

  // 25-bit adder/subtractor on the aligned significands
  val sigAdd = Module(new nBitAdderSubtractor(25))
  sigAdd.a          := sigLarge25
  sigAdd.b          := sigSmallAligned
  sigAdd.enable_sub := diffSign // subtract when signs differ

  val sumRaw = sigAdd.sum // 25-bit result (bit 24 = carry/overflow)

  //    Determine result sign
  //    Same sign:  result sign = sign of either input (use signA)
  //    Diff sign:  result sign = sign of the larger-magnitude input (the one with the larger exponent, or signA if equal)

  //    signLarge = sign of the number that had the larger exponent
  val signLarge    = Wire(Bool())
  val muxSignLarge = Module(new Mux(1))
  muxSignLarge.sel  := aGeB
  muxSignLarge.a(0) := signB // sel=0 → B was large
  muxSignLarge.b(0) := signA // sel=1 → A was large
  signLarge         := muxSignLarge.out(0)

  // Result sign: if same sign use signA, else use sign of larger
  val resultSign    = Wire(Bool())
  val muxResultSign = Module(new Mux(1))
  muxResultSign.sel  := sameSign
  muxResultSign.a(0) := signLarge // sel=0 (diff sign) → sign of larger
  muxResultSign.b(0) := signA     // sel=1 (same sign) → either sign (use A)
  resultSign         := muxResultSign.out(0)

  // 6. Normalize

  //    Normalization shift amount (signed, from sumRaw perspective):
  //      carry=1          → shift = -1 (right by 1), exp += 1
  //      bit23=1, carry=0 → shift =  0,              exp unchanged
  //      bit23=0          → shift = +(leading zeros count), exp -= count

  val carry = sumRaw(24) // carry bit from addition

  // ── Case A: carry → right-shift sumRaw by 1, take bits [24:1] ──
  // after right-shift, bit 23 of result comes from sumRaw bit 24 (=1, correct)
  val carryShifted = Wire(Vec(24, Bool()))
  for (i <- 0 until 24) {
    carryShifted(i) := sumRaw(i + 1)
  }

  // exponent after carry: expLarge + 1
  val one8 = Wire(Vec(8, Bool()))
  one8(0) := true.B
  for (i <- 1 until 8) { one8(i) := false.B }

  val expPlusOne = Module(new nBitAdderSubtractor(8))
  expPlusOne.a          := expLarge
  expPlusOne.b          := one8
  expPlusOne.enable_sub := false.B
  val expAfterCarry = expPlusOne.sum

  // ── Case C: subtraction normalization ──

  // Constants for shift amounts 0..23 in 8-bit binary
  def bitsOf(n: Int, width: Int): Seq[Boolean] =
    (0 until width).map(i => ((n >> i) & 1) == 1)

  // Build the priority-encoded shift amount
  // Start with shift=23 (default: bit0 is leading 1 or all zero — won't happen per task guarantee)
  // Then override with shift=22 if bit1=1, shift=21 if bit2=1, ... shift=0 if bit23=1

  var normShift = Wire(Vec(8, Bool()))

  // Initialize to 23 (= 0001_0111)
  val initShift = Wire(Vec(8, Bool()))
  val s23       = bitsOf(23, 8)
  for (i <- 0 until 8) { initShift(i) := s23(i).B }
  normShift := initShift

  // For each bit position b from 1 to 23:
  //   if sumRaw(b) = 1, override normShift with (23 - b)
  for (b <- 1 to 23) {
    val shiftVal    = 23 - b
    val sv          = bitsOf(shiftVal, 8)
    val overrideVal = Wire(Vec(8, Bool()))
    for (i <- 0 until 8) { overrideVal(i) := sv(i).B }

    val muxNorm = Module(new Mux(8))
    muxNorm.sel := sumRaw(b)
    muxNorm.a   := normShift   // sel=0: bit b is 0, keep current
    muxNorm.b   := overrideVal // sel=1: bit b is 1, use this shift
    val newShift = Wire(Vec(8, Bool()))
    newShift := muxNorm.out
    normShift = newShift
  }
  // After the loop, normShift holds the correct left-shift amount for case C.
  // Note: the loop processes b=1..23 in order, so bit23 overrides last
  // with shift=0, which is correct (bit23=1 means already normalized).

  // Left barrel shifter on sumRaw[23:0] by normShift (5 stages: 1/2/4/8/16)
  val sumLow24 = Wire(Vec(24, Bool()))
  for (i <- 0 until 24) { sumLow24(i) := sumRaw(i) }

  // Stage 0: shift left by 1 if normShift(0) = 1
  val ls0  = Wire(Vec(24, Bool()))
  val mLS0 = Module(new Mux(24))
  mLS0.sel := normShift(0)
  mLS0.a   := sumLow24
  for (i <- 0 until 24) {
    mLS0.b(i) := (if (i >= 1) sumLow24(i - 1) else false.B)
  }
  ls0 := mLS0.out

  // Stage 1: shift left by 2 if normShift(1) = 1
  val ls1  = Wire(Vec(24, Bool()))
  val mLS1 = Module(new Mux(24))
  mLS1.sel := normShift(1)
  mLS1.a   := ls0
  for (i <- 0 until 24) {
    mLS1.b(i) := (if (i >= 2) ls0(i - 2) else false.B)
  }
  ls1 := mLS1.out

  // Stage 2: shift left by 4 if normShift(2) = 1
  val ls2  = Wire(Vec(24, Bool()))
  val mLS2 = Module(new Mux(24))
  mLS2.sel := normShift(2)
  mLS2.a   := ls1
  for (i <- 0 until 24) {
    mLS2.b(i) := (if (i >= 4) ls1(i - 4) else false.B)
  }
  ls2 := mLS2.out

  // Stage 3: shift left by 8 if normShift(3) = 1
  val ls3  = Wire(Vec(24, Bool()))
  val mLS3 = Module(new Mux(24))
  mLS3.sel := normShift(3)
  mLS3.a   := ls2
  for (i <- 0 until 24) {
    mLS3.b(i) := (if (i >= 8) ls2(i - 8) else false.B)
  }
  ls3 := mLS3.out

  // Stage 4: shift left by 16 if normShift(4) = 1
  val ls4  = Wire(Vec(24, Bool()))
  val mLS4 = Module(new Mux(24))
  mLS4.sel := normShift(4)
  mLS4.a   := ls3
  for (i <- 0 until 24) {
    mLS4.b(i) := (if (i >= 16) ls3(i - 16) else false.B)
  }
  ls4 := mLS4.out

  val normShifted = ls4 // left-shifted result for case C

  // Exponent after left-shift: expLarge - normShift
  val expAfterLeftShift = Module(new nBitAdderSubtractor(8))
  expAfterLeftShift.a          := expLarge
  expAfterLeftShift.b          := normShift
  expAfterLeftShift.enable_sub := true.B
  val expAfterSubNorm = expAfterLeftShift.sum

  // ── Select the right normalized result ──
  // Priority: carry (case A) > already-normalized (case B & C handled together)
  //
  // For cases B and C we always run the left-shift barrel.
  // When normShift=0 (bit23 already set), the barrel shifts by 0 → no change.
  // So normShifted works for both B and C.

  // First: pick between carry-shifted and norm-shifted result
  val normalizedSig = Wire(Vec(24, Bool()))
  val muxCarrySig   = Module(new Mux(24))
  muxCarrySig.sel := carry
  muxCarrySig.a   := normShifted  // sel=0: no carry → use left-shifted
  muxCarrySig.b   := carryShifted // sel=1: carry → use right-shifted
  normalizedSig   := muxCarrySig.out

  // Pick exponent: carry → expAfterCarry, else → expAfterSubNorm
  val normalizedExp = Wire(Vec(8, Bool()))
  val muxCarryExp   = Module(new Mux(8))
  muxCarryExp.sel := carry
  muxCarryExp.a   := expAfterSubNorm // sel=0: no carry
  muxCarryExp.b   := expAfterCarry   // sel=1: carry
  normalizedExp   := muxCarryExp.out

  // 7. Truncate: drop hidden 1 (bit 23), keep bits 22..0 as mantissa

  val resultMantissa = Wire(Vec(23, Bool()))
  for (i <- 0 until 23) {
    resultMantissa(i) := normalizedSig(i)
  }

  // 8. Pack output: sign(31) | exponent(30..23) | mantissa(22..0)

  out(31) := resultSign
  for (i <- 0 until 8) {
    out(i + 23) := normalizedExp(i)
  }
  for (i <- 0 until 23) {
    out(i) := resultMantissa(i)
  }
}
