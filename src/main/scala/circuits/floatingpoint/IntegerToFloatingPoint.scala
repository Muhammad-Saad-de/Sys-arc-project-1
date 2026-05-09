package sysarch.circuits.floatingpoint

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class IntegerToFloatingPoint extends Module {
  val intInput    = IO(Input(Vec(32, Bool())))
  val floatOutput = IO(Output(Vec(32, Bool())))

  // sign bit
  floatOutput(31) := intInput(31)

  // flag for if leading one has been found
  var found: Bool = false.B

  // var to store leading index
  var leading1Pos = Wire(Vec(31, Bool()))

  for (i <- 30 to 0 by -1) {
    // not found is needed
    val notFound = Module(new NOTGate)
    notFound.a := found

    // check if ith bit is leading1
    val leading1 = Module(new ANDGate)
    leading1.a := notFound.out
    leading1.b := intInput(i)

    // store the position of leading 1
    leading1Pos(i) := leading1.out

    // update found flag
    val newFound = Module(new ORGate)
    newFound.a := found
    newFound.b := leading1.out

    found = newFound.out
  }

  val mantissa = Wire(Vec(23, Bool()))

  for (j <- 0 to 22) { // loop to set mantissa
    var slotVal: Bool = false.B
    for (p <- 30 to 0 by -1) {
      val srcBit = p - 1 - (22 - j) // which input bit feeds slot j if leading is at p
      if (srcBit >= 0) { // skip invalid locations
        if (srcBit <= 30) {
          val andGate = Module(new ANDGate)
          andGate.a := leading1Pos(p) // if p is leading then use srcBit
          andGate.b := intInput(srcBit)
          val orGate = Module(new ORGate)
          orGate.a := slotVal
          orGate.b := andGate.out
          slotVal = orGate.out
        }
      }
    }
    mantissa(j) := slotVal // only one p will contribute, rest are zero
  }

  for (j <- 0 to 22) { // assign the exponent of the floating point
    floatOutput(j) := mantissa(j)
  }

  val exponent = Wire(Vec(8, Bool()))

  for (k <- 0 to 7) {
    var expBit: Bool = false.B
    for (p <- 30 to 0 by -1) {
      val expVal = 127 + p           // Scala Int, computed at elaboration time
      val bit    = (expVal >> k) & 1 // extract kth bit of (127+p)
      if (bit == 1) {
        // if leading 1 is at p, this exponent bit should be 1
        val orGate = Module(new ORGate)
        orGate.a := expBit
        orGate.b := leading1Pos(p)
        expBit = orGate.out
      }
    }
    exponent(k) := expBit
  }

  for (k <- 0 to 7) { // assign the exponent of the floating point
    floatOutput(k + 23) := exponent(k)
  }

}
