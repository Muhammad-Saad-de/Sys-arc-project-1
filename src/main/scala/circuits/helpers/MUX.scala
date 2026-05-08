package sysarch.circuits.helpers

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class Mux(width: Int) extends Module {
  val a   = IO(Input(Vec(width, Bool())))
  val b   = IO(Input(Vec(width, Bool())))
  val sel = IO(Input(Bool()))
  val out = IO(Output(Vec(width, Bool())))

  for (i <- 0 until width) {

    // Not(sel)

    val notGate = Module(new NOTGate)

    notGate.a := sel
    // out is now wire carrying Not(Sel)

    // now we compute a(i) AND not(sel)

    val andGate1 = Module(new ANDGate)
    andGate1.a := a(i)
    andGate1.b := notGate.out
    // andGate1.out = a(i) AND NOT(sel)

    // now we compute b(i) AND sel
    val andGate2 = Module(new ANDGate)
    andGate2.a := b(i)
    andGate2.b := sel
    // andGate2.out = b(i) AND sel

    // finally we  compute (a AND NOT sel) OR (b AND sel)
    val orGate = Module(new ORGate)
    orGate.a := andGate1.out
    orGate.b := andGate2.out

    out(i) := orGate.out
  }
}
