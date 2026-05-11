package sysarch.circuits.floatingpoint

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class FloatingPointToInteger extends Module {
  val floatInput = IO(Input(Vec(32, Bool())))
  val intOutput  = IO(Output(Vec(32, Bool())))

  val sign = floatInput(31) // sign bit

  val exp = Wire(Vec(8, Bool())) // Extract exponent bits
  for (n <- 0 until 8) {
    exp(n) := floatInput(n + 23)
  }

  val mantissa = Wire(Vec(23, Bool())) // // Extract mantissa bits
  for (j <- 0 until 23) {
    mantissa(j) := floatInput(j)
  }

  // Check exponent zero
  val orExp = Module(new ORGate())
  var expOr = exp(0)
  for (i <- 1 until 8) {
    val orGate = Module(new ORGate())
    orGate.a := expOr
    orGate.b := exp(i)
    expOr = orGate.out
  }

 val isZeroExp = Module(new NOTGate())
  isZeroExp.a := expOr

// build significand = hidden bit + mantissa
  val significand = Wire(Vec(24, Bool()))
// hidden bit: 1 for normals, 0 for denormals/zero
  significand(23) := expOr 

  for (i <- 0 until 23) {
    significand(i) := mantissa(i)
  }

  // realexp = exp - bias (127)
  val bias = Wire(Vec(8, Bool()))
  bias(0) := true.B
  bias(1) := true.B
  bias(2) := true.B
  bias(3) := true.B
  bias(4) := true.B
  bias(5) := true.B
  bias(6) := true.B
  bias(7) := false.B

  val expSub = Module(new nBitAdderSubtractor(8))
  expSub.a          := exp
  expSub.b          := bias
  expSub.enable_sub := true.B

  val realExp = expSub.sum

  // 5. Shift amount = realExp - 23
  val twentyThree = Wire(Vec(8, Bool()))
  twentyThree := Vec(true.B, true.B, false.B, false.B, false.B, false.B, false.B, false.B)

    val shiftSub = Module(new nBitAdderSubtractor(8))
  shiftSub.a := realExp
  shiftSub.b := twentyThree
  shiftSub.enable_sub := true.B

  val shift = shiftSub.sum
  val shiftNeg = shift(7)

  // Build 31-bit extended value
  val ext = Wire(Vec(31, Bool()))
  for (i <- 0 until 24) ext(i) := significand(i)
  for (i <- 24 until 31) ext(i) := false.B

  //  Manual shift 
  val result = Wire(Vec(31, Bool()))

  for (i <- 0 until 31) {

    val shiftedBit = Wire(Bool())
    shiftedBit := false.B

    for (j <- 0 until 31) {

      val matchPos = Module(new ANDGate())
      matchPos.a := (shift === (i - j).S) // conceptual match
      matchPos.b := ext(j)

      val orGate = Module(new ORGate())
      orGate.a := shiftedBit
      orGate.b := matchPos.out
      shiftedBit := orGate.out
    }

    result(i) := shiftedBit
  }

  // 9. Handle underflow and overflow
  val zero = Wire(Vec(31, Bool()))
  for (i <- 0 until 31) zero(i) := false.B

  val ones = Wire(Vec(31, Bool()))
  for (i <- 0 until 31) ones(i) := true.B

  // underflow: exponent too small
  val underflow = realExp(7)

  val muxU = Module(new Mux(31))
  muxU.sel := underflow
  muxU.a := normal
  muxU.b := zero

  val muxO = Module(new Mux(31))
  muxO.sel := false.B 
  muxO.a := muxU.out
  muxO.b := ones

  val magnitude = muxO.out

  intOutput(31) := sign // output integer sign bit

  // output integer magnitude
  for (i <- 0 until 31) {
    intOutput(i) := magnitude(i)
  }
}
