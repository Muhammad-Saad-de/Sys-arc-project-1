package sysarch.circuits.helpers

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class nBitComparator(width: Int) extends Module {
  val a  = IO(Input(Vec(width, Bool())))
  val b  = IO(Input(Vec(width, Bool())))
  val gt = IO(Output(Bool()))
  val eq = IO(Output(Bool()))

  var tempEQ: Bool = true.B  // assume equal until proven otherwise
  var tempGT: Bool = false.B // assume not-greater until proven otherwise

// note for my teammates:
  // tempEQ basically tracks if all the bits examined so far are equal.
  // tempGT tracks if A has been greater than B so far.

  // start comparisons from the MSB down to LSB.

  for (i <- (width - 1) to 0 by -1) {

    // first we check equality. a==b is same as NOT(a XOR b)

    val eqGate1 = Module(new XORGate) // this implements (a XOR b)
    eqGate1.a := a(i)
    eqGate1.b := b(i)

    val eqGate2 = Module(new NOTGate) // implements Not(a XOR b)
    eqGate2.a := eqGate1.out

    val eqAnd = Module(new ANDGate)
    eqAnd.a := tempEQ
    eqAnd.b := eqGate2.out
    val newEQ = eqAnd.out

    // Now we do the GT check
    // this holds if a > b i.e a AND not(b)

    val notB = Module(new NOTGate) // implements NOT(b)
    notB.a := b(i)

    val gtGate1 = Module(new ANDGate) // implements(tempEQ AND a)
    gtGate1.a := tempEQ
    gtGate1.b := a(i)

    val gtGate2 = Module(new ANDGate) // implements final AND
    gtGate2.a := gtGate1.out
    gtGate2.b := notB.out

    val gtOr = Module(new ORGate)
    gtOr.a := tempGT
    gtOr.b := gtGate2.out
    val newGT = gtOr.out

    tempEQ = newEQ
    tempGT = newGT

  }
  eq := tempEQ
  gt := tempGT
}
