package sysarch.circuits.helpers

import sysarch.chisel._
import sysarch.gates._
import sysarch.circuits.helpers._

class nBitAdderSubtractor(width: Int) extends Module {
  val a          = IO(Input(Vec(width, Bool())))
  val b          = IO(Input(Vec(width, Bool())))
  val enable_sub = IO(Input(Bool()))
  val sum        = IO(Output(Vec(width, Bool())))
  val cout       = IO(Output(Bool()))

  // We start by making a condition to flip b using XOR gate.
  // b(i) XOR enable_sub, if enable_sub = 1 then b(i) XOR 1 = NOT (b)

  val bFlipped = Wire(Vec(width, Bool())) // store flipped b in wire vector.

  for (i <- 0 until width) {
    val bGate = Module(new XORGate)
    bGate.a     := b(i)
    bGate.b     := enable_sub
    bFlipped(i) := bGate.out
  }
// now we make a Ripple carry adder by chaining n Full Adders.
// for first FA cin = enable_sub.
// if enable_sub = 0 then cin = 0 and we do addition and subtraction otherwise i.e enable_sub = 1 and cin = 1

  var carry_in: Bool = enable_sub

  for (i <- 0 until width) {
    val fa1 = Module(new FullAdder)
    fa1.a   := a(i)
    fa1.b   := bFlipped(i)
    fa1.cin := carry_in

    sum(i) := fa1.sum // sum becomes output

    carry_in = fa1.cout // carry out for this stage becomes next stage's carryIN
  }

  val notCout = Module(new NOTGate)
  notCout.a := carry_in // carry_in now points at the last FA's cout

  val mux = Module(new Mux(1)) // 1-bit MUX to pick between raw and inverted carry.
  mux.sel  := enable_sub
  mux.a(0) := carry_in    // enable_sub=0 (add)  → use raw carry
  mux.b(0) := notCout.out // enable_sub=1 (sub)  → use inverted carry

  cout := mux.out(0)
}
