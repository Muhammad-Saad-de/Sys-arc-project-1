package sysarch.circuits.floatingpoint

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class FloatingPointToInteger extends Module {
  val floatInput = IO(Input(Vec(32, Bool())))
  val intOutput  = IO(Output(Vec(32, Bool())))

  val sign = floatInput(31) // sign bit

  val exp = Wire(Vec(8, Bool())) // Extract exponent bits
  for (n <- 0 until 8) {
    exp(n) := floatInput(n + 23)
  }

  val mantissa = Wire(Vec(23, Bool())) // Extract mantissa bits
  for (j <- 0 until 23) {
    mantissa(j) := floatInput(j)
  }

  // build significand = hidden bit + mantissa
  val significand = Wire(Vec(24, Bool()))

  // OR all 8 exponent bits together using a loop of ORGates
  val orGates = Seq.fill(7)(Module(new ORGate()))

  orGates(0).a := exp(0)
  orGates(0).b := exp(1)

  for (i <- 1 until 7) {
    orGates(i).a := orGates(i - 1).out
    orGates(i).b := exp(i + 1)
  }

  // expAllZero = NOR of all exp bits
  val notOrAll = Module(new NOTGate())
  notOrAll.a := orGates(6).out
  val expAllZero = notOrAll.out

  // hidden bit: 1 for normals, 0 for denormals/zero
  significand(23) := orGates(6).out // NOT(NOT(orAll)) = orAll, so just wire directly

  for (i <- 0 until 23) {
    significand(i) := mantissa(i)
  }

  // underflow: exp < 127 means |float| < 1.0, result rounds to zero
  // check by comparing exp directly against 127
  val biasVal = Wire(Vec(8, Bool()))
  biasVal(0) := true.B
  biasVal(1) := true.B
  biasVal(2) := true.B
  biasVal(3) := true.B
  biasVal(4) := true.B
  biasVal(5) := true.B
  biasVal(6) := true.B
  biasVal(7) := false.B

  // swap a and b: biasVal > exp is the same as exp < 127
  val expLess127 = Module(new nBitComparator(8))
  expLess127.a := biasVal
  expLess127.b := exp

  val underflow =
    expLess127.gt // 127 > exp → exp < 127 → realExp < 0 → |value| < 1 → truncates to 0

  // overflow: exp > 157 means realExp > 30, result saturates to max magnitude
  // 157 = 127 + 30 = 0b10011101
  val expMax = Wire(Vec(8, Bool()))
  expMax(0) := true.B
  expMax(1) := false.B
  expMax(2) := true.B
  expMax(3) := true.B
  expMax(4) := true.B
  expMax(5) := false.B
  expMax(6) := false.B
  expMax(7) := true.B

  val expGreater157 = Module(new nBitComparator(8))
  expGreater157.a := exp
  expGreater157.b := expMax

  val overflow = expGreater157.gt // exp > 157 → realExp > 30 → overflow

  // shiftAmount = exp - 150  (combined bias+23 offset in one subtraction)
  // 150 = 127 + 23 = 0b10010110
  // positive shiftAmount → left shift, negative → right shift
  val oneFifty = Wire(Vec(8, Bool()))
  oneFifty(0) := false.B
  oneFifty(1) := true.B
  oneFifty(2) := true.B
  oneFifty(3) := false.B
  oneFifty(4) := true.B
  oneFifty(5) := false.B
  oneFifty(6) := false.B
  oneFifty(7) := true.B

  val shiftSub = Module(new nBitAdderSubtractor(8))
  shiftSub.a          := exp
  shiftSub.b          := oneFifty
  shiftSub.enable_sub := true.B

  val shiftAmount = shiftSub.sum // exp - 150: negative means right-shift

  // absolute value of shiftAmount when negative: NOT all bits then add 1 (two's complement negation)
  // avoids nBitAdderSubtractor carrying issues when a=0
  val notShift = Wire(Vec(8, Bool()))
  for (i <- 0 until 8) {
    val ng = Module(new NOTGate())
    ng.a        := shiftAmount(i)
    notShift(i) := ng.out
  }

  val one8 = Wire(Vec(8, Bool()))
  one8(0) := true.B
  for (i <- 1 until 8) one8(i) := false.B

  val incShift = Module(new nBitAdderSubtractor(8))
  incShift.a          := notShift
  incShift.b          := one8
  incShift.enable_sub := false.B // addition: NOT(shiftAmount) + 1 = -shiftAmount

  val RightShiftAmount = incShift.sum // magnitude of shift when shiftAmount < 0

  // extend significand bcz shift can extend 23 bit to 31 bit signficand atmost
  val extSig = Wire(Vec(31, Bool()))
  for (i <- 0 until 31) {
    if (i < 24) {
      extSig(i) := significand(i)
    } else {
      extSig(i) := false.B
    }
  }

  // ─────────────────────────────────────────────
  // 9. Left barrel shifter  (5 stages: shift by 1/2/4/8/16)
  //    Each stage is a single Mux(31) — if the control bit is 1
  //    the whole 31-bit vector is shifted by that stage's amount,
  //    otherwise it passes through unchanged.
  //    Control bits come from shiftAmount[4:0].
  // ─────────────────────────────────────────────

  // Stage 0: shift left by 1
  val ls0  = Wire(Vec(31, Bool()))
  val mLS0 = Module(new Mux(31))
  mLS0.sel := shiftAmount(0)
  mLS0.a   := extSig // no shift
  for (i <- 0 until 31) {
    mLS0.b(i) := (if (i >= 1) extSig(i - 1) else false.B) // shift left 1
  }
  ls0 := mLS0.out

  // Stage 1: shift left by 2
  val ls1  = Wire(Vec(31, Bool()))
  val mLS1 = Module(new Mux(31))
  mLS1.sel := shiftAmount(1)
  mLS1.a   := ls0
  for (i <- 0 until 31) {
    mLS1.b(i) := (if (i >= 2) ls0(i - 2) else false.B) // shift left 2
  }
  ls1 := mLS1.out

  // Stage 2: shift left by 4
  val ls2  = Wire(Vec(31, Bool()))
  val mLS2 = Module(new Mux(31))
  mLS2.sel := shiftAmount(2)
  mLS2.a   := ls1
  for (i <- 0 until 31) {
    mLS2.b(i) := (if (i >= 4) ls1(i - 4) else false.B) // shift left 4
  }
  ls2 := mLS2.out

  // Stage 3: shift left by 8
  // (max useful left-shift is 7 so this bit is always 0 for valid inputs,
  //  included for correctness)
  val ls3  = Wire(Vec(31, Bool()))
  val mLS3 = Module(new Mux(31))
  mLS3.sel := shiftAmount(3)
  mLS3.a   := ls2
  for (i <- 0 until 31) {
    mLS3.b(i) := (if (i >= 8) ls2(i - 8) else false.B) // shift left 8
  }
  ls3 := mLS3.out

  // Stage 4: shift left by 16
  val ls4  = Wire(Vec(31, Bool()))
  val mLS4 = Module(new Mux(31))
  mLS4.sel := shiftAmount(4)
  mLS4.a   := ls3
  for (i <- 0 until 31) {
    mLS4.b(i) := (if (i >= 16) ls3(i - 16) else false.B) // shift left 16
  }
  ls4 := mLS4.out

  val leftShifted = ls4

  // ─────────────────────────────────────────────
  // 10. Right barrel shifter  (5 stages: shift by 1/2/4/8/16)
  //     Control bits come from RightShiftAmount[4:0].
  //     Max useful right-shift is 23 (realExp=0 → shiftAmount=−23).
  // ─────────────────────────────────────────────

  // Stage 0: shift right by 1
  val rs0  = Wire(Vec(31, Bool()))
  val mRS0 = Module(new Mux(31))
  mRS0.sel := RightShiftAmount(0)
  mRS0.a   := extSig
  for (i <- 0 until 31) {
    mRS0.b(i) := (if (i <= 29) extSig(i + 1) else false.B) // shift right 1
  }
  rs0 := mRS0.out

  // Stage 1: shift right by 2
  val rs1  = Wire(Vec(31, Bool()))
  val mRS1 = Module(new Mux(31))
  mRS1.sel := RightShiftAmount(1)
  mRS1.a   := rs0
  for (i <- 0 until 31) {
    mRS1.b(i) := (if (i <= 28) rs0(i + 2) else false.B) // shift right 2
  }
  rs1 := mRS1.out

  // Stage 2: shift right by 4
  val rs2  = Wire(Vec(31, Bool()))
  val mRS2 = Module(new Mux(31))
  mRS2.sel := RightShiftAmount(2)
  mRS2.a   := rs1
  for (i <- 0 until 31) {
    mRS2.b(i) := (if (i <= 26) rs1(i + 4) else false.B) // shift right 4
  }
  rs2 := mRS2.out

  // Stage 3: shift right by 8
  val rs3  = Wire(Vec(31, Bool()))
  val mRS3 = Module(new Mux(31))
  mRS3.sel := RightShiftAmount(3)
  mRS3.a   := rs2
  for (i <- 0 until 31) {
    mRS3.b(i) := (if (i <= 22) rs2(i + 8) else false.B) // shift right 8
  }
  rs3 := mRS3.out

  // Stage 4: shift right by 16
  val rs4  = Wire(Vec(31, Bool()))
  val mRS4 = Module(new Mux(31))
  mRS4.sel := RightShiftAmount(4)
  mRS4.a   := rs3
  for (i <- 0 until 31) {
    mRS4.b(i) := (if (i <= 14) rs3(i + 16) else false.B) // shift right 16
  }
  rs4 := mRS4.out

  val rightShifted = rs4

  // ── Select left or right result based on sign of shiftAmount ──
  // shiftAmount(7) = 1 → negative → right-shift
  // shiftAmount(7) = 0 → non-negative → left-shift
  val normalResult = Wire(Vec(31, Bool()))
  val mSel         = Module(new Mux(31))
  mSel.sel     := shiftAmount(7) // 1 = right, 0 = left
  mSel.a       := leftShifted
  mSel.b       := rightShifted
  normalResult := mSel.out

  // Mux to get if underflow → 0, else if overflow → 1, else → normalResult

  val magnitude = Wire(Vec(31, Bool()))

  val muxOverflow = Module(new Mux(31))
  muxOverflow.sel := overflow
  muxOverflow.a   := normalResult
  for (i <- 0 until 31) {
    muxOverflow.b(i) := true.B
  } // all-ones for overflow

  val muxUnderflow = Module(new Mux(31))
  muxUnderflow.sel := underflow
  muxUnderflow.a   := muxOverflow.out
  for (i <- 0 until 31) {
    muxUnderflow.b(i) := false.B
  } // all-zeros for underflow

  magnitude := muxUnderflow.out

  intOutput(31) := sign // output integer sign bit

  // output integer magnitude
  for (i <- 0 until 31) {
    intOutput(i) := magnitude(i)
  }
}
