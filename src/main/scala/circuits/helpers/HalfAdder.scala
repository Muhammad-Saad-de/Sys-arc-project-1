package sysarch.circuits.helpers

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class HalfAdder extends Module {
  val a    = IO(Input(Bool()))
  val b    = IO(Input(Bool()))
  val sum  = IO(Output(Bool()))
  val cout = IO(Output(Bool()))

  // we build two things, sum and cout. sum is (a XOR b).
  // Cout is (a AND b)

  val xorGate = Module(new XORGate)
  xorGate.a := a
  xorGate.b := b
  sum       := xorGate.out

  val andGate = Module(new ANDGate)
  andGate.a := a
  andGate.b := b
  cout      := andGate.out
}
