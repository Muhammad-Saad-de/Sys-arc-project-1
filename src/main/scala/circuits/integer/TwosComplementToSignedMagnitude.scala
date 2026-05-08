package sysarch.circuits.integer

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class TwosComplementToSignedMagnitude(width: Int) extends Module {
  val twosComplement  = IO(Input(Vec(width, Bool())))
  val signedMagnitude = IO(Output(Vec(width, Bool())))

  val signBit = twosComplement(width - 1)
  signedMagnitude(width - 1) := signBit

// subtract 1 from the whole number.

  val Subtract_one = Wire(Vec(width, Bool())) // handles -1 part.
  var carry: Bool  = false.B // carry-in = 0 

  for (i <- 0 until width) {
    val fa = Module(new FullAdder)
    fa.a            := twosComplement(i)
    fa.b            := true.B
    fa.cin          := carry
    Subtract_one(i) := fa.sum
    carry = fa.cout
  }

  // flip the magnitude bits of the subtracted result.

  val flipped = Wire(Vec(width - 1, Bool()))
  for (i <- 0 until width - 1) {
    val notGate = Module(new NOTGate)
    notGate.a  := Subtract_one(i)
    flipped(i) := notGate.out
  }
  // Mux , just like we have used in others, decides if number is +ve or -ve.
  for (i <- 0 until width - 1) {
    val mux = Module(new Mux(1))
    mux.sel            := signBit
    mux.a(0)           := twosComplement(i) // positive: unchanged
    mux.b(0)           := flipped(i)        // negative: subtract 1 then flip
    signedMagnitude(i) := mux.out(0)
  }
}
