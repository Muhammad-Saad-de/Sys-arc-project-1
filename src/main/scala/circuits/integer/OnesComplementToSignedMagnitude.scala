package sysarch.circuits.integer

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class OnesComplementToSignedMagnitude(width: Int) extends Module {
  val onesComplement  = IO(Input(Vec(width, Bool())))
  val signedMagnitude = IO(Output(Vec(width, Bool())))

  val signBit = onesComplement(width - 1)
  signedMagnitude(width - 1) := signBit // signBit always stays the same.

  for (i <- 0 until width - 1) {
    val flipGate = Module(new NOTGate)
    flipGate.a := onesComplement(i) // we flip all bits other than sign bit using NOT gate.

// Mux selects which number is there, +ve or -ve.
    val mux = Module(new Mux(1))
    mux.sel            := signBit
    mux.a(0)           := onesComplement(i)
    mux.b(0)           := flipGate.out
    signedMagnitude(i) := mux.out(0)
  }

}
