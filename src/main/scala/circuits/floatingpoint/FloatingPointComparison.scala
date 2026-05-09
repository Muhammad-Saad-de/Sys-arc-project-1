package sysarch.circuits.floatingpoint

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

// Output: 00 for equal, 01 for floatInput1 > floatInput2, 10 for floatInput1 < floatInput2, 11 for unordered (NaN cases)

class FloatingPointComparison extends Module {
  val a                = IO(Input(Vec(32, Bool())))
  val b                = IO(Input(Vec(32, Bool())))
  val comparisonResult = IO(Output(Vec(2, Bool())))

  val signA = a(31) // sign bit of a

  val expA = Wire(Vec(8, Bool())) // exponent of a
  for (i <- 0 until 8) {
    expA(i) := a(i + 23) // exponent of a is bit 23 to 30
  }

  val mantissaA = Wire(Vec(23, Bool())) // mantissa of a
  for (i <- 0 until 23) {
    mantissaA(i) := a(i) // mantissa of a is bit 0 to 22
  }

  val signB = b(31) // sign bit of b

  val expB = Wire(Vec(8, Bool())) // exponent of b
  for (i <- 0 until 8) {
    expB(i) := b(i + 23) // exponent of a is bit 23 to 30
  }

  val mantissaB = Wire(Vec(23, Bool())) // mantissa of b
  for (i <- 0 until 23) {
    mantissaB(i) := b(i) // mantissa of b is bit 0 to 22
  }

  // nBitAND on expA to check if all are 1s, i.e: if exponent is maximal value
  val expAllOnesA = Module(new nBitAND(8))
  expAllOnesA.a := expA

  // do nBitOR on mantissaA to check if all are 0s, i.e: if mantissa value is non-zero
  val mantissaAllNonZeroA = Module(new nBitOR(23))
  mantissaAllNonZeroA.a := mantissaA

  // if both conditions true then A is a NaN
  val AisNaN = Module(new ANDGate)
  AisNaN.a := expAllOnesA.out
  AisNaN.b := mantissaAllNonZeroA.out

  // nBitAND on expB to check if all are 1s, i.e: if exponent is maximal value
  val expAllOnesB = Module(new nBitAND(8))
  expAllOnesB.a := expB

  // do nBitOR on mantissaB to check if all are 0s, i.e: if mantissa value is non-zero
  val mantissaAllNonZeroB = Module(new nBitOR(23))
  mantissaAllNonZeroB.a := mantissaB

  // if both conditions true then b is a NaN
  val BisNaN = Module(new ANDGate)
  BisNaN.a := expAllOnesB.out
  BisNaN.b := mantissaAllNonZeroB.out

  // use Or to check if either is Nan
  val eitherNaN = Module(new ORGate)
  eitherNaN.a := AisNaN.out
  eitherNaN.b := BisNaN.out

  // do nBitOR on expA to check if all are 0s, i.e: if exp value is non-zero
  val expAllNonZeroA = Module(new nBitOR(8))
  expAllNonZeroA.a := expA

  // do nBitOR on expB to check if all are 0s, i.e: if exp value is non-zero
  val expAllNonZeroB = Module(new nBitOR(8))
  expAllNonZeroB.a := expB

  // if exp is zero then it is not non zero
  val expIsZeroA = Module(new NOTGate)
  expIsZeroA.a := expAllNonZeroA.out

  // if mantissa is zero then it is not non zero
  val mantissaIsZeroA = Module(new NOTGate)
  mantissaIsZeroA.a := mantissaAllNonZeroA.out

  // if both exp and mantissa of A are zero then A is zero
  val AisZero = Module(new ANDGate)
  AisZero.a := mantissaIsZeroA.out
  AisZero.b := expIsZeroA.out

  // if exp is zero then it is not non zero
  val expIsZeroB = Module(new NOTGate)
  expIsZeroB.a := expAllNonZeroB.out

  // if mantissa is zero then it is not non zero
  val mantissaIsZeroB = Module(new NOTGate)
  mantissaIsZeroB.a := mantissaAllNonZeroB.out

  // if both exp and mantissa of B are zero then B is zero
  val BisZero = Module(new ANDGate)
  BisZero.a := mantissaIsZeroB.out
  BisZero.b := expIsZeroB.out

  // A and B are both Zero
  val bothZero = Module(new ANDGate)
  bothZero.a := AisZero.out
  bothZero.b := BisZero.out

  // use xor to check if different sign
  val diffSign = Module(new XORGate)
  diffSign.a := signA
  diffSign.b := signB

  // if different signs and sign of B is 1 then greater deduced through sign
  val greaterThroughSign = Module(new ANDGate)
  greaterThroughSign.a := diffSign.out
  greaterThroughSign.b := signB

  // if different signs and sign of A is 1 then less deduced through sign
  val lessThroughSign = Module(new ANDGate)
  lessThroughSign.a := diffSign.out
  lessThroughSign.b := signA

  // concatenating exp and mantissa for comparison, since exp is more significant so it takes left most digits
  val magA = Wire(Vec(31, Bool()))
  for (i <- 0 until 31) {
    magA(i) := a(i) // bits 0-30, i.e. exp+mantissa together
  }
  val magB = Wire(Vec(31, Bool()))
  for (i <- 0 until 31) {
    magB(i) := b(i) // bits 0-30, i.e. exp+mantissa together
  }

  // comparing magnitudes of A and B using 31 bit Comparator
  val compMag = Module(new nBitComparator(31))
  compMag.a := magA
  compMag.b := magB

  // if not different signs then same sign
  val sameSign = Module(new NOTGate)
  sameSign.a := diffSign.out

  // if the same sign and magnitudes equal then it is euqal (case non zero)
  val equalNonZeros = Module(new ANDGate)
  equalNonZeros.a := sameSign.out
  equalNonZeros.b := compMag.eq

  // if euqal in case of non zeros OR if both are zero then A and B are equal
  val equal = Module(new ORGate)
  equal.a := equalNonZeros.out
  equal.b := bothZero.out

  // if both A and B have sign = 1 then both neg
  val bothNeg = Module(new ANDGate)
  bothNeg.a := signA
  bothNeg.b := signB

  val bothNotNeg = Module(new NOTGate)
  bothNotNeg.a := bothNeg.out

  // if both A and B are both not neg, and both signs are same then both pos
  val bothPos = Module(new ANDGate)
  bothPos.a := bothNotNeg.out
  bothPos.b := sameSign.out

  // not eq
  val neq = Module(new NOTGate)
  neq.a := compMag.eq

  // not gt
  val ngt = Module(new NOTGate)
  ngt.a := compMag.gt

  // less than when NOT eq and NOT gt
  val lt = Module(new ANDGate)
  lt.a := neq.out
  lt.b := ngt.out

  // case of both pos and A gt B
  val greaterWhenPos = Module(new ANDGate)
  greaterWhenPos.a := bothPos.out
  greaterWhenPos.b := compMag.gt

  // case of both neg and |A| lt |B| so A gt B
  val greaterWhenNeg = Module(new ANDGate)
  greaterWhenNeg.a := bothNeg.out
  greaterWhenNeg.b := lt.out

  // case of both pos and A lt B
  val lessWhenPos = Module(new ANDGate)
  lessWhenPos.a := bothPos.out
  lessWhenPos.b := lt.out

  // case of both neg and |A| gt |B| so A lt b
  val lessWhenNeg = Module(new ANDGate)
  lessWhenNeg.a := bothNeg.out
  lessWhenNeg.b := compMag.gt

  // greater while having same sign
  val greaterSameSign = Module(new ORGate)
  greaterSameSign.a := greaterWhenNeg.out
  greaterSameSign.b := greaterWhenPos.out

  // less while having same sign
  val lessSameSign = Module(new ORGate)
  lessSameSign.a := lessWhenNeg.out
  lessSameSign.b := lessWhenPos.out

  // greater when either greater through sign OR greater with same sign
  val greater = Module(new ORGate)
  greater.a := greaterThroughSign.out
  greater.b := greaterSameSign.out

  // less when either less through sign OR less with same sign
  val less = Module(new ORGate)
  less.a := lessThroughSign.out
  less.b := lessSameSign.out

  // 0th bit is 1 when either A or B is NaN, or A is greater than B
  val result0 = Module(new ORGate)
  result0.a := eitherNaN.out
  result0.b := greater.out

  // 0th bit is 1 when either A or B is NaN, or A is less than B
  val result1 = Module(new ORGate)
  result1.a := eitherNaN.out
  result1.b := less.out

  // assign final results
  comparisonResult(0) := result0.out
  comparisonResult(1) := result1.out
}
