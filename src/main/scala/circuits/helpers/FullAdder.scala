package sysarch.circuits.helpers

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class FullAdder extends Module {
  val a    = IO(Input(Bool()))
  val b    = IO(Input(Bool()))
  val cin  = IO(Input(Bool()))
  val sum  = IO(Output(Bool()))
  val cout = IO(Output(Bool()))

  // Full Adder uses 2 half Adders and one OR Gate

  // 1st HA. (a + b)
  val ha1 = Module(new HalfAdder)
  ha1.a := a
  ha1.b := b

  // 2nd HA (a XOR b) + cin
  val ha2 = Module(new HalfAdder)
  ha2.a := ha1.sum
  ha2.b := cin

  sum := ha2.sum

  // Or Gate this makes sure carry out is 1 if either HA produced a carry.
  val orGate = Module(new ORGate)
  orGate.a := ha1.cout
  orGate.b := ha2.cout

  cout := orGate.out

}
