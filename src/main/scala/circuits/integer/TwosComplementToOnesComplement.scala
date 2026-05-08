package sysarch.circuits.integer

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class TwosComplementToOnesComplement(width: Int) extends Module {
  val twosComplement = IO(Input(Vec(width, Bool())))
  val onesComplement = IO(Output(Vec(width, Bool())))

  val signBit = twosComplement(width - 1)

  val subtract_one = Wire(Vec(width, Bool()))
  var carry: Bool  = false.B // carry in = 0 for addition.
// Full Adders are used.
  for (i <- 0 until width) {
    val fa = Module(new FullAdder)
    fa.a            := twosComplement(i)
    fa.b            := true.B
    fa.cin          := carry
    subtract_one(i) := fa.sum
    carry = fa.cout
  }
  // Mux: again used to decide if number has to be +ve or -ve.
  for (i <- 0 until width) {
    val mux = Module(new Mux(1))
    mux.sel           := signBit
    mux.a(0)          := twosComplement(i)
    mux.b(0)          := subtract_one(i)
    onesComplement(i) := mux.out(0)
  }
}
