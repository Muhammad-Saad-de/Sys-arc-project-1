package sysarch.circuits.integer

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class SignedMagnitudeToOnesComplement(width: Int) extends Module {
  val signedMagnitude = IO(Input(Vec(width, Bool())))
  val onesComplement  = IO(Output(Vec(width, Bool())))

  // if sign bit is +ve, nothing changes.
  // if it is 1 then we flip every bit other than sign bit.

  // sign bit stays same no matter what and it is MSB.
  val signBit = signedMagnitude(width - 1)
  onesComplement(width - 1) := signBit // sign bit is same for one's complement as well.

  for (i <- 0 until width - 1) {
    val flipGate = Module(new NOTGate)
    flipGate.a := signedMagnitude(i) // we flip all bits other than sign bit using NOT gate.

    // MUX selects between original and flipped bits.
    // sel=0 (positive) → a = original
    // sel=1 (negative) → b = flipped

    val mux = Module(new Mux(1))
    mux.sel           := signBit
    mux.a(0)          := signedMagnitude(i)
    mux.b(0)          := flipGate.out
    onesComplement(i) := mux.out(0)

  }
}
