package sysarch.circuits.integer

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class SignedMagnitudeToTwosComplement(width: Int) extends Module {
  val signedMagnitude = IO(Input(Vec(width, Bool())))
  val twosComplement  = IO(Output(Vec(width, Bool())))

  val signBit = signedMagnitude(width - 1)
  twosComplement(width - 1) := signBit // sign bit is the same no matter what.

  // again we flip all the bits other than sign bit.

  val flipped = Wire(Vec(width - 1, Bool())) // stores flipped bits after passing through NOT gate.

  for (i <- 0 until width - 1) {
    val flipGate = Module(new NOTGate)
    flipGate.a := signedMagnitude(i)
    flipped(i) := flipGate.out
  }

// now we have to handle the case of adding 1.
  val addGate     = Wire(Vec(width - 1, Bool())) // Add +1
  var carry: Bool = true.B

  for (i <- 0 until width - 1) {
    val fa = Module(new FullAdder)
    fa.a       := flipped(i) // flipped magnitude bit
    fa.b       := false.B    // adding zero (carry provides the +1)
    fa.cin     := carry
    addGate(i) := fa.sum
    carry = fa.cout
  }

// Mux selects between original and flipped bits.
  // sel=0 (positive) → a = original
  // sel=1 (negative) → b = flipped

  for (i <- 0 until width - 1) {
    val mux = Module(new Mux(1))
    mux.sel           := signBit
    mux.a(0)          := signedMagnitude(i) // positive: keep original
    mux.b(0)          := addGate(i)         // negative: use flip+add1 result
    twosComplement(i) := mux.out(0)
  }
}
