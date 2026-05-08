package sysarch.circuits.helpers

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class nBitAND(n: Int) extends Module {
  val a   = IO(Input(Vec(n, Bool())))
  val out = IO(Output(Bool()))

  if (n == 1) {
    out := a(0)
  } else {
    // we start by AND'ing first 2 bits.
    val firstGate = Module(new ANDGate)
    firstGate.a := a(0)
    firstGate.b := a(1)

    // we store this temporary result as we have to re use it in loop.
    var temp = firstGate.out

    // now we AND every remaining bit with temp.

    for (i <- 2 until n) {
      val secGate = Module(new ANDGate)
      secGate.a := temp
      secGate.b := a(i)
      temp = secGate.out
    }
    out := temp
  }
}
