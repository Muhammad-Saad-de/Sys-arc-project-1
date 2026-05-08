package sysarch.circuits.integer

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class OnesComplementToTwosComplement(width: Int) extends Module {
  val onesComplement = IO(Input(Vec(width, Bool())))
  val twosComplement = IO(Output(Vec(width, Bool())))

  val signBit = onesComplement(width - 1) // sign bit stays same.

  // two's complement = one's complement + 1.

  // now we need to handle +1 part.
  val add_one     = Wire(Vec(width, Bool())) // we use ripple carry chain with carry-in = 1
  var carry: Bool = true.B                   // the +1

  for (i <- 0 until width) {
    val fa = Module(new FullAdder)
    fa.a       := onesComplement(i)
    fa.b       := false.B
    fa.cin     := carry
    add_one(i) := fa.sum
    carry = fa.cout
  }
  // again we use Mux for each bit. Handles the deciding part if number should be +ve or -ve.
  for (i <- 0 until width) {
    val mux = Module(new Mux(1))
    mux.sel           := signBit
    mux.a(0)          := onesComplement(i)
    mux.b(0)          := add_one(i)
    twosComplement(i) := mux.out(0)
  }
}
