module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.a_0)-1:0] a_0 = '0;
  reg  [$bits(dut.a_1)-1:0] a_1 = '0;
  reg  [$bits(dut.a_2)-1:0] a_2 = '0;
  reg  [$bits(dut.a_3)-1:0] a_3 = '0;
  reg  [$bits(dut.a_4)-1:0] a_4 = '0;
  reg  [$bits(dut.a_5)-1:0] a_5 = '0;
  reg  [$bits(dut.a_6)-1:0] a_6 = '0;
  reg  [$bits(dut.a_7)-1:0] a_7 = '0;
  reg  [$bits(dut.a_8)-1:0] a_8 = '0;
  reg  [$bits(dut.a_9)-1:0] a_9 = '0;
  reg  [$bits(dut.a_10)-1:0] a_10 = '0;
  reg  [$bits(dut.a_11)-1:0] a_11 = '0;
  reg  [$bits(dut.a_12)-1:0] a_12 = '0;
  reg  [$bits(dut.a_13)-1:0] a_13 = '0;
  reg  [$bits(dut.a_14)-1:0] a_14 = '0;
  reg  [$bits(dut.a_15)-1:0] a_15 = '0;
  reg  [$bits(dut.a_16)-1:0] a_16 = '0;
  reg  [$bits(dut.a_17)-1:0] a_17 = '0;
  reg  [$bits(dut.a_18)-1:0] a_18 = '0;
  reg  [$bits(dut.a_19)-1:0] a_19 = '0;
  reg  [$bits(dut.a_20)-1:0] a_20 = '0;
  reg  [$bits(dut.a_21)-1:0] a_21 = '0;
  reg  [$bits(dut.a_22)-1:0] a_22 = '0;
  reg  [$bits(dut.a_23)-1:0] a_23 = '0;
  reg  [$bits(dut.a_24)-1:0] a_24 = '0;
  reg  [$bits(dut.a_25)-1:0] a_25 = '0;
  reg  [$bits(dut.a_26)-1:0] a_26 = '0;
  reg  [$bits(dut.a_27)-1:0] a_27 = '0;
  reg  [$bits(dut.a_28)-1:0] a_28 = '0;
  reg  [$bits(dut.a_29)-1:0] a_29 = '0;
  reg  [$bits(dut.a_30)-1:0] a_30 = '0;
  reg  [$bits(dut.a_31)-1:0] a_31 = '0;
  reg  [$bits(dut.b_0)-1:0] b_0 = '0;
  reg  [$bits(dut.b_1)-1:0] b_1 = '0;
  reg  [$bits(dut.b_2)-1:0] b_2 = '0;
  reg  [$bits(dut.b_3)-1:0] b_3 = '0;
  reg  [$bits(dut.b_4)-1:0] b_4 = '0;
  reg  [$bits(dut.b_5)-1:0] b_5 = '0;
  reg  [$bits(dut.b_6)-1:0] b_6 = '0;
  reg  [$bits(dut.b_7)-1:0] b_7 = '0;
  reg  [$bits(dut.b_8)-1:0] b_8 = '0;
  reg  [$bits(dut.b_9)-1:0] b_9 = '0;
  reg  [$bits(dut.b_10)-1:0] b_10 = '0;
  reg  [$bits(dut.b_11)-1:0] b_11 = '0;
  reg  [$bits(dut.b_12)-1:0] b_12 = '0;
  reg  [$bits(dut.b_13)-1:0] b_13 = '0;
  reg  [$bits(dut.b_14)-1:0] b_14 = '0;
  reg  [$bits(dut.b_15)-1:0] b_15 = '0;
  reg  [$bits(dut.b_16)-1:0] b_16 = '0;
  reg  [$bits(dut.b_17)-1:0] b_17 = '0;
  reg  [$bits(dut.b_18)-1:0] b_18 = '0;
  reg  [$bits(dut.b_19)-1:0] b_19 = '0;
  reg  [$bits(dut.b_20)-1:0] b_20 = '0;
  reg  [$bits(dut.b_21)-1:0] b_21 = '0;
  reg  [$bits(dut.b_22)-1:0] b_22 = '0;
  reg  [$bits(dut.b_23)-1:0] b_23 = '0;
  reg  [$bits(dut.b_24)-1:0] b_24 = '0;
  reg  [$bits(dut.b_25)-1:0] b_25 = '0;
  reg  [$bits(dut.b_26)-1:0] b_26 = '0;
  reg  [$bits(dut.b_27)-1:0] b_27 = '0;
  reg  [$bits(dut.b_28)-1:0] b_28 = '0;
  reg  [$bits(dut.b_29)-1:0] b_29 = '0;
  reg  [$bits(dut.b_30)-1:0] b_30 = '0;
  reg  [$bits(dut.b_31)-1:0] b_31 = '0;
  wire [$bits(dut.comparisonResult_0)-1:0] comparisonResult_0;
  wire [$bits(dut.comparisonResult_1)-1:0] comparisonResult_1;

FloatingPointComparison dut (
    .clock(clock),
    .reset(reset),
    .a_0(a_0),
    .a_1(a_1),
    .a_2(a_2),
    .a_3(a_3),
    .a_4(a_4),
    .a_5(a_5),
    .a_6(a_6),
    .a_7(a_7),
    .a_8(a_8),
    .a_9(a_9),
    .a_10(a_10),
    .a_11(a_11),
    .a_12(a_12),
    .a_13(a_13),
    .a_14(a_14),
    .a_15(a_15),
    .a_16(a_16),
    .a_17(a_17),
    .a_18(a_18),
    .a_19(a_19),
    .a_20(a_20),
    .a_21(a_21),
    .a_22(a_22),
    .a_23(a_23),
    .a_24(a_24),
    .a_25(a_25),
    .a_26(a_26),
    .a_27(a_27),
    .a_28(a_28),
    .a_29(a_29),
    .a_30(a_30),
    .a_31(a_31),
    .b_0(b_0),
    .b_1(b_1),
    .b_2(b_2),
    .b_3(b_3),
    .b_4(b_4),
    .b_5(b_5),
    .b_6(b_6),
    .b_7(b_7),
    .b_8(b_8),
    .b_9(b_9),
    .b_10(b_10),
    .b_11(b_11),
    .b_12(b_12),
    .b_13(b_13),
    .b_14(b_14),
    .b_15(b_15),
    .b_16(b_16),
    .b_17(b_17),
    .b_18(b_18),
    .b_19(b_19),
    .b_20(b_20),
    .b_21(b_21),
    .b_22(b_22),
    .b_23(b_23),
    .b_24(b_24),
    .b_25(b_25),
    .b_26(b_26),
    .b_27(b_27),
    .b_28(b_28),
    .b_29(b_29),
    .b_30(b_30),
    .b_31(b_31),
    .comparisonResult_0(comparisonResult_0),
    .comparisonResult_1(comparisonResult_1)
);

  import "DPI-C" context function void initTestBenchScope();
  initial
    initTestBenchScope();
  // Port 0: clock
  export "DPI-C" function getBitWidthImpl_clock;
  function void getBitWidthImpl_clock;
    output int value;
    value = $bits(dut.clock);
  endfunction
  export "DPI-C" function setBitsImpl_clock;
  function void setBitsImpl_clock;
    input bit [$bits(dut.clock)-1:0] value_clock;
    clock = value_clock;
  endfunction
  export "DPI-C" function getBitsImpl_clock;
  function void getBitsImpl_clock;
    output bit [$bits(dut.clock)-1:0] value_clock;
    value_clock = clock;
  endfunction

  // Port 1: reset
  export "DPI-C" function getBitWidthImpl_reset;
  function void getBitWidthImpl_reset;
    output int value;
    value = $bits(dut.reset);
  endfunction
  export "DPI-C" function setBitsImpl_reset;
  function void setBitsImpl_reset;
    input bit [$bits(dut.reset)-1:0] value_reset;
    reset = value_reset;
  endfunction
  export "DPI-C" function getBitsImpl_reset;
  function void getBitsImpl_reset;
    output bit [$bits(dut.reset)-1:0] value_reset;
    value_reset = reset;
  endfunction

  // Port 2: a_0
  export "DPI-C" function getBitWidthImpl_a_0;
  function void getBitWidthImpl_a_0;
    output int value;
    value = $bits(dut.a_0);
  endfunction
  export "DPI-C" function setBitsImpl_a_0;
  function void setBitsImpl_a_0;
    input bit [$bits(dut.a_0)-1:0] value_a_0;
    a_0 = value_a_0;
  endfunction
  export "DPI-C" function getBitsImpl_a_0;
  function void getBitsImpl_a_0;
    output bit [$bits(dut.a_0)-1:0] value_a_0;
    value_a_0 = a_0;
  endfunction

  // Port 3: a_1
  export "DPI-C" function getBitWidthImpl_a_1;
  function void getBitWidthImpl_a_1;
    output int value;
    value = $bits(dut.a_1);
  endfunction
  export "DPI-C" function setBitsImpl_a_1;
  function void setBitsImpl_a_1;
    input bit [$bits(dut.a_1)-1:0] value_a_1;
    a_1 = value_a_1;
  endfunction
  export "DPI-C" function getBitsImpl_a_1;
  function void getBitsImpl_a_1;
    output bit [$bits(dut.a_1)-1:0] value_a_1;
    value_a_1 = a_1;
  endfunction

  // Port 4: a_2
  export "DPI-C" function getBitWidthImpl_a_2;
  function void getBitWidthImpl_a_2;
    output int value;
    value = $bits(dut.a_2);
  endfunction
  export "DPI-C" function setBitsImpl_a_2;
  function void setBitsImpl_a_2;
    input bit [$bits(dut.a_2)-1:0] value_a_2;
    a_2 = value_a_2;
  endfunction
  export "DPI-C" function getBitsImpl_a_2;
  function void getBitsImpl_a_2;
    output bit [$bits(dut.a_2)-1:0] value_a_2;
    value_a_2 = a_2;
  endfunction

  // Port 5: a_3
  export "DPI-C" function getBitWidthImpl_a_3;
  function void getBitWidthImpl_a_3;
    output int value;
    value = $bits(dut.a_3);
  endfunction
  export "DPI-C" function setBitsImpl_a_3;
  function void setBitsImpl_a_3;
    input bit [$bits(dut.a_3)-1:0] value_a_3;
    a_3 = value_a_3;
  endfunction
  export "DPI-C" function getBitsImpl_a_3;
  function void getBitsImpl_a_3;
    output bit [$bits(dut.a_3)-1:0] value_a_3;
    value_a_3 = a_3;
  endfunction

  // Port 6: a_4
  export "DPI-C" function getBitWidthImpl_a_4;
  function void getBitWidthImpl_a_4;
    output int value;
    value = $bits(dut.a_4);
  endfunction
  export "DPI-C" function setBitsImpl_a_4;
  function void setBitsImpl_a_4;
    input bit [$bits(dut.a_4)-1:0] value_a_4;
    a_4 = value_a_4;
  endfunction
  export "DPI-C" function getBitsImpl_a_4;
  function void getBitsImpl_a_4;
    output bit [$bits(dut.a_4)-1:0] value_a_4;
    value_a_4 = a_4;
  endfunction

  // Port 7: a_5
  export "DPI-C" function getBitWidthImpl_a_5;
  function void getBitWidthImpl_a_5;
    output int value;
    value = $bits(dut.a_5);
  endfunction
  export "DPI-C" function setBitsImpl_a_5;
  function void setBitsImpl_a_5;
    input bit [$bits(dut.a_5)-1:0] value_a_5;
    a_5 = value_a_5;
  endfunction
  export "DPI-C" function getBitsImpl_a_5;
  function void getBitsImpl_a_5;
    output bit [$bits(dut.a_5)-1:0] value_a_5;
    value_a_5 = a_5;
  endfunction

  // Port 8: a_6
  export "DPI-C" function getBitWidthImpl_a_6;
  function void getBitWidthImpl_a_6;
    output int value;
    value = $bits(dut.a_6);
  endfunction
  export "DPI-C" function setBitsImpl_a_6;
  function void setBitsImpl_a_6;
    input bit [$bits(dut.a_6)-1:0] value_a_6;
    a_6 = value_a_6;
  endfunction
  export "DPI-C" function getBitsImpl_a_6;
  function void getBitsImpl_a_6;
    output bit [$bits(dut.a_6)-1:0] value_a_6;
    value_a_6 = a_6;
  endfunction

  // Port 9: a_7
  export "DPI-C" function getBitWidthImpl_a_7;
  function void getBitWidthImpl_a_7;
    output int value;
    value = $bits(dut.a_7);
  endfunction
  export "DPI-C" function setBitsImpl_a_7;
  function void setBitsImpl_a_7;
    input bit [$bits(dut.a_7)-1:0] value_a_7;
    a_7 = value_a_7;
  endfunction
  export "DPI-C" function getBitsImpl_a_7;
  function void getBitsImpl_a_7;
    output bit [$bits(dut.a_7)-1:0] value_a_7;
    value_a_7 = a_7;
  endfunction

  // Port a: a_8
  export "DPI-C" function getBitWidthImpl_a_8;
  function void getBitWidthImpl_a_8;
    output int value;
    value = $bits(dut.a_8);
  endfunction
  export "DPI-C" function setBitsImpl_a_8;
  function void setBitsImpl_a_8;
    input bit [$bits(dut.a_8)-1:0] value_a_8;
    a_8 = value_a_8;
  endfunction
  export "DPI-C" function getBitsImpl_a_8;
  function void getBitsImpl_a_8;
    output bit [$bits(dut.a_8)-1:0] value_a_8;
    value_a_8 = a_8;
  endfunction

  // Port b: a_9
  export "DPI-C" function getBitWidthImpl_a_9;
  function void getBitWidthImpl_a_9;
    output int value;
    value = $bits(dut.a_9);
  endfunction
  export "DPI-C" function setBitsImpl_a_9;
  function void setBitsImpl_a_9;
    input bit [$bits(dut.a_9)-1:0] value_a_9;
    a_9 = value_a_9;
  endfunction
  export "DPI-C" function getBitsImpl_a_9;
  function void getBitsImpl_a_9;
    output bit [$bits(dut.a_9)-1:0] value_a_9;
    value_a_9 = a_9;
  endfunction

  // Port c: a_10
  export "DPI-C" function getBitWidthImpl_a_10;
  function void getBitWidthImpl_a_10;
    output int value;
    value = $bits(dut.a_10);
  endfunction
  export "DPI-C" function setBitsImpl_a_10;
  function void setBitsImpl_a_10;
    input bit [$bits(dut.a_10)-1:0] value_a_10;
    a_10 = value_a_10;
  endfunction
  export "DPI-C" function getBitsImpl_a_10;
  function void getBitsImpl_a_10;
    output bit [$bits(dut.a_10)-1:0] value_a_10;
    value_a_10 = a_10;
  endfunction

  // Port d: a_11
  export "DPI-C" function getBitWidthImpl_a_11;
  function void getBitWidthImpl_a_11;
    output int value;
    value = $bits(dut.a_11);
  endfunction
  export "DPI-C" function setBitsImpl_a_11;
  function void setBitsImpl_a_11;
    input bit [$bits(dut.a_11)-1:0] value_a_11;
    a_11 = value_a_11;
  endfunction
  export "DPI-C" function getBitsImpl_a_11;
  function void getBitsImpl_a_11;
    output bit [$bits(dut.a_11)-1:0] value_a_11;
    value_a_11 = a_11;
  endfunction

  // Port e: a_12
  export "DPI-C" function getBitWidthImpl_a_12;
  function void getBitWidthImpl_a_12;
    output int value;
    value = $bits(dut.a_12);
  endfunction
  export "DPI-C" function setBitsImpl_a_12;
  function void setBitsImpl_a_12;
    input bit [$bits(dut.a_12)-1:0] value_a_12;
    a_12 = value_a_12;
  endfunction
  export "DPI-C" function getBitsImpl_a_12;
  function void getBitsImpl_a_12;
    output bit [$bits(dut.a_12)-1:0] value_a_12;
    value_a_12 = a_12;
  endfunction

  // Port f: a_13
  export "DPI-C" function getBitWidthImpl_a_13;
  function void getBitWidthImpl_a_13;
    output int value;
    value = $bits(dut.a_13);
  endfunction
  export "DPI-C" function setBitsImpl_a_13;
  function void setBitsImpl_a_13;
    input bit [$bits(dut.a_13)-1:0] value_a_13;
    a_13 = value_a_13;
  endfunction
  export "DPI-C" function getBitsImpl_a_13;
  function void getBitsImpl_a_13;
    output bit [$bits(dut.a_13)-1:0] value_a_13;
    value_a_13 = a_13;
  endfunction

  // Port 10: a_14
  export "DPI-C" function getBitWidthImpl_a_14;
  function void getBitWidthImpl_a_14;
    output int value;
    value = $bits(dut.a_14);
  endfunction
  export "DPI-C" function setBitsImpl_a_14;
  function void setBitsImpl_a_14;
    input bit [$bits(dut.a_14)-1:0] value_a_14;
    a_14 = value_a_14;
  endfunction
  export "DPI-C" function getBitsImpl_a_14;
  function void getBitsImpl_a_14;
    output bit [$bits(dut.a_14)-1:0] value_a_14;
    value_a_14 = a_14;
  endfunction

  // Port 11: a_15
  export "DPI-C" function getBitWidthImpl_a_15;
  function void getBitWidthImpl_a_15;
    output int value;
    value = $bits(dut.a_15);
  endfunction
  export "DPI-C" function setBitsImpl_a_15;
  function void setBitsImpl_a_15;
    input bit [$bits(dut.a_15)-1:0] value_a_15;
    a_15 = value_a_15;
  endfunction
  export "DPI-C" function getBitsImpl_a_15;
  function void getBitsImpl_a_15;
    output bit [$bits(dut.a_15)-1:0] value_a_15;
    value_a_15 = a_15;
  endfunction

  // Port 12: a_16
  export "DPI-C" function getBitWidthImpl_a_16;
  function void getBitWidthImpl_a_16;
    output int value;
    value = $bits(dut.a_16);
  endfunction
  export "DPI-C" function setBitsImpl_a_16;
  function void setBitsImpl_a_16;
    input bit [$bits(dut.a_16)-1:0] value_a_16;
    a_16 = value_a_16;
  endfunction
  export "DPI-C" function getBitsImpl_a_16;
  function void getBitsImpl_a_16;
    output bit [$bits(dut.a_16)-1:0] value_a_16;
    value_a_16 = a_16;
  endfunction

  // Port 13: a_17
  export "DPI-C" function getBitWidthImpl_a_17;
  function void getBitWidthImpl_a_17;
    output int value;
    value = $bits(dut.a_17);
  endfunction
  export "DPI-C" function setBitsImpl_a_17;
  function void setBitsImpl_a_17;
    input bit [$bits(dut.a_17)-1:0] value_a_17;
    a_17 = value_a_17;
  endfunction
  export "DPI-C" function getBitsImpl_a_17;
  function void getBitsImpl_a_17;
    output bit [$bits(dut.a_17)-1:0] value_a_17;
    value_a_17 = a_17;
  endfunction

  // Port 14: a_18
  export "DPI-C" function getBitWidthImpl_a_18;
  function void getBitWidthImpl_a_18;
    output int value;
    value = $bits(dut.a_18);
  endfunction
  export "DPI-C" function setBitsImpl_a_18;
  function void setBitsImpl_a_18;
    input bit [$bits(dut.a_18)-1:0] value_a_18;
    a_18 = value_a_18;
  endfunction
  export "DPI-C" function getBitsImpl_a_18;
  function void getBitsImpl_a_18;
    output bit [$bits(dut.a_18)-1:0] value_a_18;
    value_a_18 = a_18;
  endfunction

  // Port 15: a_19
  export "DPI-C" function getBitWidthImpl_a_19;
  function void getBitWidthImpl_a_19;
    output int value;
    value = $bits(dut.a_19);
  endfunction
  export "DPI-C" function setBitsImpl_a_19;
  function void setBitsImpl_a_19;
    input bit [$bits(dut.a_19)-1:0] value_a_19;
    a_19 = value_a_19;
  endfunction
  export "DPI-C" function getBitsImpl_a_19;
  function void getBitsImpl_a_19;
    output bit [$bits(dut.a_19)-1:0] value_a_19;
    value_a_19 = a_19;
  endfunction

  // Port 16: a_20
  export "DPI-C" function getBitWidthImpl_a_20;
  function void getBitWidthImpl_a_20;
    output int value;
    value = $bits(dut.a_20);
  endfunction
  export "DPI-C" function setBitsImpl_a_20;
  function void setBitsImpl_a_20;
    input bit [$bits(dut.a_20)-1:0] value_a_20;
    a_20 = value_a_20;
  endfunction
  export "DPI-C" function getBitsImpl_a_20;
  function void getBitsImpl_a_20;
    output bit [$bits(dut.a_20)-1:0] value_a_20;
    value_a_20 = a_20;
  endfunction

  // Port 17: a_21
  export "DPI-C" function getBitWidthImpl_a_21;
  function void getBitWidthImpl_a_21;
    output int value;
    value = $bits(dut.a_21);
  endfunction
  export "DPI-C" function setBitsImpl_a_21;
  function void setBitsImpl_a_21;
    input bit [$bits(dut.a_21)-1:0] value_a_21;
    a_21 = value_a_21;
  endfunction
  export "DPI-C" function getBitsImpl_a_21;
  function void getBitsImpl_a_21;
    output bit [$bits(dut.a_21)-1:0] value_a_21;
    value_a_21 = a_21;
  endfunction

  // Port 18: a_22
  export "DPI-C" function getBitWidthImpl_a_22;
  function void getBitWidthImpl_a_22;
    output int value;
    value = $bits(dut.a_22);
  endfunction
  export "DPI-C" function setBitsImpl_a_22;
  function void setBitsImpl_a_22;
    input bit [$bits(dut.a_22)-1:0] value_a_22;
    a_22 = value_a_22;
  endfunction
  export "DPI-C" function getBitsImpl_a_22;
  function void getBitsImpl_a_22;
    output bit [$bits(dut.a_22)-1:0] value_a_22;
    value_a_22 = a_22;
  endfunction

  // Port 19: a_23
  export "DPI-C" function getBitWidthImpl_a_23;
  function void getBitWidthImpl_a_23;
    output int value;
    value = $bits(dut.a_23);
  endfunction
  export "DPI-C" function setBitsImpl_a_23;
  function void setBitsImpl_a_23;
    input bit [$bits(dut.a_23)-1:0] value_a_23;
    a_23 = value_a_23;
  endfunction
  export "DPI-C" function getBitsImpl_a_23;
  function void getBitsImpl_a_23;
    output bit [$bits(dut.a_23)-1:0] value_a_23;
    value_a_23 = a_23;
  endfunction

  // Port 1a: a_24
  export "DPI-C" function getBitWidthImpl_a_24;
  function void getBitWidthImpl_a_24;
    output int value;
    value = $bits(dut.a_24);
  endfunction
  export "DPI-C" function setBitsImpl_a_24;
  function void setBitsImpl_a_24;
    input bit [$bits(dut.a_24)-1:0] value_a_24;
    a_24 = value_a_24;
  endfunction
  export "DPI-C" function getBitsImpl_a_24;
  function void getBitsImpl_a_24;
    output bit [$bits(dut.a_24)-1:0] value_a_24;
    value_a_24 = a_24;
  endfunction

  // Port 1b: a_25
  export "DPI-C" function getBitWidthImpl_a_25;
  function void getBitWidthImpl_a_25;
    output int value;
    value = $bits(dut.a_25);
  endfunction
  export "DPI-C" function setBitsImpl_a_25;
  function void setBitsImpl_a_25;
    input bit [$bits(dut.a_25)-1:0] value_a_25;
    a_25 = value_a_25;
  endfunction
  export "DPI-C" function getBitsImpl_a_25;
  function void getBitsImpl_a_25;
    output bit [$bits(dut.a_25)-1:0] value_a_25;
    value_a_25 = a_25;
  endfunction

  // Port 1c: a_26
  export "DPI-C" function getBitWidthImpl_a_26;
  function void getBitWidthImpl_a_26;
    output int value;
    value = $bits(dut.a_26);
  endfunction
  export "DPI-C" function setBitsImpl_a_26;
  function void setBitsImpl_a_26;
    input bit [$bits(dut.a_26)-1:0] value_a_26;
    a_26 = value_a_26;
  endfunction
  export "DPI-C" function getBitsImpl_a_26;
  function void getBitsImpl_a_26;
    output bit [$bits(dut.a_26)-1:0] value_a_26;
    value_a_26 = a_26;
  endfunction

  // Port 1d: a_27
  export "DPI-C" function getBitWidthImpl_a_27;
  function void getBitWidthImpl_a_27;
    output int value;
    value = $bits(dut.a_27);
  endfunction
  export "DPI-C" function setBitsImpl_a_27;
  function void setBitsImpl_a_27;
    input bit [$bits(dut.a_27)-1:0] value_a_27;
    a_27 = value_a_27;
  endfunction
  export "DPI-C" function getBitsImpl_a_27;
  function void getBitsImpl_a_27;
    output bit [$bits(dut.a_27)-1:0] value_a_27;
    value_a_27 = a_27;
  endfunction

  // Port 1e: a_28
  export "DPI-C" function getBitWidthImpl_a_28;
  function void getBitWidthImpl_a_28;
    output int value;
    value = $bits(dut.a_28);
  endfunction
  export "DPI-C" function setBitsImpl_a_28;
  function void setBitsImpl_a_28;
    input bit [$bits(dut.a_28)-1:0] value_a_28;
    a_28 = value_a_28;
  endfunction
  export "DPI-C" function getBitsImpl_a_28;
  function void getBitsImpl_a_28;
    output bit [$bits(dut.a_28)-1:0] value_a_28;
    value_a_28 = a_28;
  endfunction

  // Port 1f: a_29
  export "DPI-C" function getBitWidthImpl_a_29;
  function void getBitWidthImpl_a_29;
    output int value;
    value = $bits(dut.a_29);
  endfunction
  export "DPI-C" function setBitsImpl_a_29;
  function void setBitsImpl_a_29;
    input bit [$bits(dut.a_29)-1:0] value_a_29;
    a_29 = value_a_29;
  endfunction
  export "DPI-C" function getBitsImpl_a_29;
  function void getBitsImpl_a_29;
    output bit [$bits(dut.a_29)-1:0] value_a_29;
    value_a_29 = a_29;
  endfunction

  // Port 20: a_30
  export "DPI-C" function getBitWidthImpl_a_30;
  function void getBitWidthImpl_a_30;
    output int value;
    value = $bits(dut.a_30);
  endfunction
  export "DPI-C" function setBitsImpl_a_30;
  function void setBitsImpl_a_30;
    input bit [$bits(dut.a_30)-1:0] value_a_30;
    a_30 = value_a_30;
  endfunction
  export "DPI-C" function getBitsImpl_a_30;
  function void getBitsImpl_a_30;
    output bit [$bits(dut.a_30)-1:0] value_a_30;
    value_a_30 = a_30;
  endfunction

  // Port 21: a_31
  export "DPI-C" function getBitWidthImpl_a_31;
  function void getBitWidthImpl_a_31;
    output int value;
    value = $bits(dut.a_31);
  endfunction
  export "DPI-C" function setBitsImpl_a_31;
  function void setBitsImpl_a_31;
    input bit [$bits(dut.a_31)-1:0] value_a_31;
    a_31 = value_a_31;
  endfunction
  export "DPI-C" function getBitsImpl_a_31;
  function void getBitsImpl_a_31;
    output bit [$bits(dut.a_31)-1:0] value_a_31;
    value_a_31 = a_31;
  endfunction

  // Port 22: b_0
  export "DPI-C" function getBitWidthImpl_b_0;
  function void getBitWidthImpl_b_0;
    output int value;
    value = $bits(dut.b_0);
  endfunction
  export "DPI-C" function setBitsImpl_b_0;
  function void setBitsImpl_b_0;
    input bit [$bits(dut.b_0)-1:0] value_b_0;
    b_0 = value_b_0;
  endfunction
  export "DPI-C" function getBitsImpl_b_0;
  function void getBitsImpl_b_0;
    output bit [$bits(dut.b_0)-1:0] value_b_0;
    value_b_0 = b_0;
  endfunction

  // Port 23: b_1
  export "DPI-C" function getBitWidthImpl_b_1;
  function void getBitWidthImpl_b_1;
    output int value;
    value = $bits(dut.b_1);
  endfunction
  export "DPI-C" function setBitsImpl_b_1;
  function void setBitsImpl_b_1;
    input bit [$bits(dut.b_1)-1:0] value_b_1;
    b_1 = value_b_1;
  endfunction
  export "DPI-C" function getBitsImpl_b_1;
  function void getBitsImpl_b_1;
    output bit [$bits(dut.b_1)-1:0] value_b_1;
    value_b_1 = b_1;
  endfunction

  // Port 24: b_2
  export "DPI-C" function getBitWidthImpl_b_2;
  function void getBitWidthImpl_b_2;
    output int value;
    value = $bits(dut.b_2);
  endfunction
  export "DPI-C" function setBitsImpl_b_2;
  function void setBitsImpl_b_2;
    input bit [$bits(dut.b_2)-1:0] value_b_2;
    b_2 = value_b_2;
  endfunction
  export "DPI-C" function getBitsImpl_b_2;
  function void getBitsImpl_b_2;
    output bit [$bits(dut.b_2)-1:0] value_b_2;
    value_b_2 = b_2;
  endfunction

  // Port 25: b_3
  export "DPI-C" function getBitWidthImpl_b_3;
  function void getBitWidthImpl_b_3;
    output int value;
    value = $bits(dut.b_3);
  endfunction
  export "DPI-C" function setBitsImpl_b_3;
  function void setBitsImpl_b_3;
    input bit [$bits(dut.b_3)-1:0] value_b_3;
    b_3 = value_b_3;
  endfunction
  export "DPI-C" function getBitsImpl_b_3;
  function void getBitsImpl_b_3;
    output bit [$bits(dut.b_3)-1:0] value_b_3;
    value_b_3 = b_3;
  endfunction

  // Port 26: b_4
  export "DPI-C" function getBitWidthImpl_b_4;
  function void getBitWidthImpl_b_4;
    output int value;
    value = $bits(dut.b_4);
  endfunction
  export "DPI-C" function setBitsImpl_b_4;
  function void setBitsImpl_b_4;
    input bit [$bits(dut.b_4)-1:0] value_b_4;
    b_4 = value_b_4;
  endfunction
  export "DPI-C" function getBitsImpl_b_4;
  function void getBitsImpl_b_4;
    output bit [$bits(dut.b_4)-1:0] value_b_4;
    value_b_4 = b_4;
  endfunction

  // Port 27: b_5
  export "DPI-C" function getBitWidthImpl_b_5;
  function void getBitWidthImpl_b_5;
    output int value;
    value = $bits(dut.b_5);
  endfunction
  export "DPI-C" function setBitsImpl_b_5;
  function void setBitsImpl_b_5;
    input bit [$bits(dut.b_5)-1:0] value_b_5;
    b_5 = value_b_5;
  endfunction
  export "DPI-C" function getBitsImpl_b_5;
  function void getBitsImpl_b_5;
    output bit [$bits(dut.b_5)-1:0] value_b_5;
    value_b_5 = b_5;
  endfunction

  // Port 28: b_6
  export "DPI-C" function getBitWidthImpl_b_6;
  function void getBitWidthImpl_b_6;
    output int value;
    value = $bits(dut.b_6);
  endfunction
  export "DPI-C" function setBitsImpl_b_6;
  function void setBitsImpl_b_6;
    input bit [$bits(dut.b_6)-1:0] value_b_6;
    b_6 = value_b_6;
  endfunction
  export "DPI-C" function getBitsImpl_b_6;
  function void getBitsImpl_b_6;
    output bit [$bits(dut.b_6)-1:0] value_b_6;
    value_b_6 = b_6;
  endfunction

  // Port 29: b_7
  export "DPI-C" function getBitWidthImpl_b_7;
  function void getBitWidthImpl_b_7;
    output int value;
    value = $bits(dut.b_7);
  endfunction
  export "DPI-C" function setBitsImpl_b_7;
  function void setBitsImpl_b_7;
    input bit [$bits(dut.b_7)-1:0] value_b_7;
    b_7 = value_b_7;
  endfunction
  export "DPI-C" function getBitsImpl_b_7;
  function void getBitsImpl_b_7;
    output bit [$bits(dut.b_7)-1:0] value_b_7;
    value_b_7 = b_7;
  endfunction

  // Port 2a: b_8
  export "DPI-C" function getBitWidthImpl_b_8;
  function void getBitWidthImpl_b_8;
    output int value;
    value = $bits(dut.b_8);
  endfunction
  export "DPI-C" function setBitsImpl_b_8;
  function void setBitsImpl_b_8;
    input bit [$bits(dut.b_8)-1:0] value_b_8;
    b_8 = value_b_8;
  endfunction
  export "DPI-C" function getBitsImpl_b_8;
  function void getBitsImpl_b_8;
    output bit [$bits(dut.b_8)-1:0] value_b_8;
    value_b_8 = b_8;
  endfunction

  // Port 2b: b_9
  export "DPI-C" function getBitWidthImpl_b_9;
  function void getBitWidthImpl_b_9;
    output int value;
    value = $bits(dut.b_9);
  endfunction
  export "DPI-C" function setBitsImpl_b_9;
  function void setBitsImpl_b_9;
    input bit [$bits(dut.b_9)-1:0] value_b_9;
    b_9 = value_b_9;
  endfunction
  export "DPI-C" function getBitsImpl_b_9;
  function void getBitsImpl_b_9;
    output bit [$bits(dut.b_9)-1:0] value_b_9;
    value_b_9 = b_9;
  endfunction

  // Port 2c: b_10
  export "DPI-C" function getBitWidthImpl_b_10;
  function void getBitWidthImpl_b_10;
    output int value;
    value = $bits(dut.b_10);
  endfunction
  export "DPI-C" function setBitsImpl_b_10;
  function void setBitsImpl_b_10;
    input bit [$bits(dut.b_10)-1:0] value_b_10;
    b_10 = value_b_10;
  endfunction
  export "DPI-C" function getBitsImpl_b_10;
  function void getBitsImpl_b_10;
    output bit [$bits(dut.b_10)-1:0] value_b_10;
    value_b_10 = b_10;
  endfunction

  // Port 2d: b_11
  export "DPI-C" function getBitWidthImpl_b_11;
  function void getBitWidthImpl_b_11;
    output int value;
    value = $bits(dut.b_11);
  endfunction
  export "DPI-C" function setBitsImpl_b_11;
  function void setBitsImpl_b_11;
    input bit [$bits(dut.b_11)-1:0] value_b_11;
    b_11 = value_b_11;
  endfunction
  export "DPI-C" function getBitsImpl_b_11;
  function void getBitsImpl_b_11;
    output bit [$bits(dut.b_11)-1:0] value_b_11;
    value_b_11 = b_11;
  endfunction

  // Port 2e: b_12
  export "DPI-C" function getBitWidthImpl_b_12;
  function void getBitWidthImpl_b_12;
    output int value;
    value = $bits(dut.b_12);
  endfunction
  export "DPI-C" function setBitsImpl_b_12;
  function void setBitsImpl_b_12;
    input bit [$bits(dut.b_12)-1:0] value_b_12;
    b_12 = value_b_12;
  endfunction
  export "DPI-C" function getBitsImpl_b_12;
  function void getBitsImpl_b_12;
    output bit [$bits(dut.b_12)-1:0] value_b_12;
    value_b_12 = b_12;
  endfunction

  // Port 2f: b_13
  export "DPI-C" function getBitWidthImpl_b_13;
  function void getBitWidthImpl_b_13;
    output int value;
    value = $bits(dut.b_13);
  endfunction
  export "DPI-C" function setBitsImpl_b_13;
  function void setBitsImpl_b_13;
    input bit [$bits(dut.b_13)-1:0] value_b_13;
    b_13 = value_b_13;
  endfunction
  export "DPI-C" function getBitsImpl_b_13;
  function void getBitsImpl_b_13;
    output bit [$bits(dut.b_13)-1:0] value_b_13;
    value_b_13 = b_13;
  endfunction

  // Port 30: b_14
  export "DPI-C" function getBitWidthImpl_b_14;
  function void getBitWidthImpl_b_14;
    output int value;
    value = $bits(dut.b_14);
  endfunction
  export "DPI-C" function setBitsImpl_b_14;
  function void setBitsImpl_b_14;
    input bit [$bits(dut.b_14)-1:0] value_b_14;
    b_14 = value_b_14;
  endfunction
  export "DPI-C" function getBitsImpl_b_14;
  function void getBitsImpl_b_14;
    output bit [$bits(dut.b_14)-1:0] value_b_14;
    value_b_14 = b_14;
  endfunction

  // Port 31: b_15
  export "DPI-C" function getBitWidthImpl_b_15;
  function void getBitWidthImpl_b_15;
    output int value;
    value = $bits(dut.b_15);
  endfunction
  export "DPI-C" function setBitsImpl_b_15;
  function void setBitsImpl_b_15;
    input bit [$bits(dut.b_15)-1:0] value_b_15;
    b_15 = value_b_15;
  endfunction
  export "DPI-C" function getBitsImpl_b_15;
  function void getBitsImpl_b_15;
    output bit [$bits(dut.b_15)-1:0] value_b_15;
    value_b_15 = b_15;
  endfunction

  // Port 32: b_16
  export "DPI-C" function getBitWidthImpl_b_16;
  function void getBitWidthImpl_b_16;
    output int value;
    value = $bits(dut.b_16);
  endfunction
  export "DPI-C" function setBitsImpl_b_16;
  function void setBitsImpl_b_16;
    input bit [$bits(dut.b_16)-1:0] value_b_16;
    b_16 = value_b_16;
  endfunction
  export "DPI-C" function getBitsImpl_b_16;
  function void getBitsImpl_b_16;
    output bit [$bits(dut.b_16)-1:0] value_b_16;
    value_b_16 = b_16;
  endfunction

  // Port 33: b_17
  export "DPI-C" function getBitWidthImpl_b_17;
  function void getBitWidthImpl_b_17;
    output int value;
    value = $bits(dut.b_17);
  endfunction
  export "DPI-C" function setBitsImpl_b_17;
  function void setBitsImpl_b_17;
    input bit [$bits(dut.b_17)-1:0] value_b_17;
    b_17 = value_b_17;
  endfunction
  export "DPI-C" function getBitsImpl_b_17;
  function void getBitsImpl_b_17;
    output bit [$bits(dut.b_17)-1:0] value_b_17;
    value_b_17 = b_17;
  endfunction

  // Port 34: b_18
  export "DPI-C" function getBitWidthImpl_b_18;
  function void getBitWidthImpl_b_18;
    output int value;
    value = $bits(dut.b_18);
  endfunction
  export "DPI-C" function setBitsImpl_b_18;
  function void setBitsImpl_b_18;
    input bit [$bits(dut.b_18)-1:0] value_b_18;
    b_18 = value_b_18;
  endfunction
  export "DPI-C" function getBitsImpl_b_18;
  function void getBitsImpl_b_18;
    output bit [$bits(dut.b_18)-1:0] value_b_18;
    value_b_18 = b_18;
  endfunction

  // Port 35: b_19
  export "DPI-C" function getBitWidthImpl_b_19;
  function void getBitWidthImpl_b_19;
    output int value;
    value = $bits(dut.b_19);
  endfunction
  export "DPI-C" function setBitsImpl_b_19;
  function void setBitsImpl_b_19;
    input bit [$bits(dut.b_19)-1:0] value_b_19;
    b_19 = value_b_19;
  endfunction
  export "DPI-C" function getBitsImpl_b_19;
  function void getBitsImpl_b_19;
    output bit [$bits(dut.b_19)-1:0] value_b_19;
    value_b_19 = b_19;
  endfunction

  // Port 36: b_20
  export "DPI-C" function getBitWidthImpl_b_20;
  function void getBitWidthImpl_b_20;
    output int value;
    value = $bits(dut.b_20);
  endfunction
  export "DPI-C" function setBitsImpl_b_20;
  function void setBitsImpl_b_20;
    input bit [$bits(dut.b_20)-1:0] value_b_20;
    b_20 = value_b_20;
  endfunction
  export "DPI-C" function getBitsImpl_b_20;
  function void getBitsImpl_b_20;
    output bit [$bits(dut.b_20)-1:0] value_b_20;
    value_b_20 = b_20;
  endfunction

  // Port 37: b_21
  export "DPI-C" function getBitWidthImpl_b_21;
  function void getBitWidthImpl_b_21;
    output int value;
    value = $bits(dut.b_21);
  endfunction
  export "DPI-C" function setBitsImpl_b_21;
  function void setBitsImpl_b_21;
    input bit [$bits(dut.b_21)-1:0] value_b_21;
    b_21 = value_b_21;
  endfunction
  export "DPI-C" function getBitsImpl_b_21;
  function void getBitsImpl_b_21;
    output bit [$bits(dut.b_21)-1:0] value_b_21;
    value_b_21 = b_21;
  endfunction

  // Port 38: b_22
  export "DPI-C" function getBitWidthImpl_b_22;
  function void getBitWidthImpl_b_22;
    output int value;
    value = $bits(dut.b_22);
  endfunction
  export "DPI-C" function setBitsImpl_b_22;
  function void setBitsImpl_b_22;
    input bit [$bits(dut.b_22)-1:0] value_b_22;
    b_22 = value_b_22;
  endfunction
  export "DPI-C" function getBitsImpl_b_22;
  function void getBitsImpl_b_22;
    output bit [$bits(dut.b_22)-1:0] value_b_22;
    value_b_22 = b_22;
  endfunction

  // Port 39: b_23
  export "DPI-C" function getBitWidthImpl_b_23;
  function void getBitWidthImpl_b_23;
    output int value;
    value = $bits(dut.b_23);
  endfunction
  export "DPI-C" function setBitsImpl_b_23;
  function void setBitsImpl_b_23;
    input bit [$bits(dut.b_23)-1:0] value_b_23;
    b_23 = value_b_23;
  endfunction
  export "DPI-C" function getBitsImpl_b_23;
  function void getBitsImpl_b_23;
    output bit [$bits(dut.b_23)-1:0] value_b_23;
    value_b_23 = b_23;
  endfunction

  // Port 3a: b_24
  export "DPI-C" function getBitWidthImpl_b_24;
  function void getBitWidthImpl_b_24;
    output int value;
    value = $bits(dut.b_24);
  endfunction
  export "DPI-C" function setBitsImpl_b_24;
  function void setBitsImpl_b_24;
    input bit [$bits(dut.b_24)-1:0] value_b_24;
    b_24 = value_b_24;
  endfunction
  export "DPI-C" function getBitsImpl_b_24;
  function void getBitsImpl_b_24;
    output bit [$bits(dut.b_24)-1:0] value_b_24;
    value_b_24 = b_24;
  endfunction

  // Port 3b: b_25
  export "DPI-C" function getBitWidthImpl_b_25;
  function void getBitWidthImpl_b_25;
    output int value;
    value = $bits(dut.b_25);
  endfunction
  export "DPI-C" function setBitsImpl_b_25;
  function void setBitsImpl_b_25;
    input bit [$bits(dut.b_25)-1:0] value_b_25;
    b_25 = value_b_25;
  endfunction
  export "DPI-C" function getBitsImpl_b_25;
  function void getBitsImpl_b_25;
    output bit [$bits(dut.b_25)-1:0] value_b_25;
    value_b_25 = b_25;
  endfunction

  // Port 3c: b_26
  export "DPI-C" function getBitWidthImpl_b_26;
  function void getBitWidthImpl_b_26;
    output int value;
    value = $bits(dut.b_26);
  endfunction
  export "DPI-C" function setBitsImpl_b_26;
  function void setBitsImpl_b_26;
    input bit [$bits(dut.b_26)-1:0] value_b_26;
    b_26 = value_b_26;
  endfunction
  export "DPI-C" function getBitsImpl_b_26;
  function void getBitsImpl_b_26;
    output bit [$bits(dut.b_26)-1:0] value_b_26;
    value_b_26 = b_26;
  endfunction

  // Port 3d: b_27
  export "DPI-C" function getBitWidthImpl_b_27;
  function void getBitWidthImpl_b_27;
    output int value;
    value = $bits(dut.b_27);
  endfunction
  export "DPI-C" function setBitsImpl_b_27;
  function void setBitsImpl_b_27;
    input bit [$bits(dut.b_27)-1:0] value_b_27;
    b_27 = value_b_27;
  endfunction
  export "DPI-C" function getBitsImpl_b_27;
  function void getBitsImpl_b_27;
    output bit [$bits(dut.b_27)-1:0] value_b_27;
    value_b_27 = b_27;
  endfunction

  // Port 3e: b_28
  export "DPI-C" function getBitWidthImpl_b_28;
  function void getBitWidthImpl_b_28;
    output int value;
    value = $bits(dut.b_28);
  endfunction
  export "DPI-C" function setBitsImpl_b_28;
  function void setBitsImpl_b_28;
    input bit [$bits(dut.b_28)-1:0] value_b_28;
    b_28 = value_b_28;
  endfunction
  export "DPI-C" function getBitsImpl_b_28;
  function void getBitsImpl_b_28;
    output bit [$bits(dut.b_28)-1:0] value_b_28;
    value_b_28 = b_28;
  endfunction

  // Port 3f: b_29
  export "DPI-C" function getBitWidthImpl_b_29;
  function void getBitWidthImpl_b_29;
    output int value;
    value = $bits(dut.b_29);
  endfunction
  export "DPI-C" function setBitsImpl_b_29;
  function void setBitsImpl_b_29;
    input bit [$bits(dut.b_29)-1:0] value_b_29;
    b_29 = value_b_29;
  endfunction
  export "DPI-C" function getBitsImpl_b_29;
  function void getBitsImpl_b_29;
    output bit [$bits(dut.b_29)-1:0] value_b_29;
    value_b_29 = b_29;
  endfunction

  // Port 40: b_30
  export "DPI-C" function getBitWidthImpl_b_30;
  function void getBitWidthImpl_b_30;
    output int value;
    value = $bits(dut.b_30);
  endfunction
  export "DPI-C" function setBitsImpl_b_30;
  function void setBitsImpl_b_30;
    input bit [$bits(dut.b_30)-1:0] value_b_30;
    b_30 = value_b_30;
  endfunction
  export "DPI-C" function getBitsImpl_b_30;
  function void getBitsImpl_b_30;
    output bit [$bits(dut.b_30)-1:0] value_b_30;
    value_b_30 = b_30;
  endfunction

  // Port 41: b_31
  export "DPI-C" function getBitWidthImpl_b_31;
  function void getBitWidthImpl_b_31;
    output int value;
    value = $bits(dut.b_31);
  endfunction
  export "DPI-C" function setBitsImpl_b_31;
  function void setBitsImpl_b_31;
    input bit [$bits(dut.b_31)-1:0] value_b_31;
    b_31 = value_b_31;
  endfunction
  export "DPI-C" function getBitsImpl_b_31;
  function void getBitsImpl_b_31;
    output bit [$bits(dut.b_31)-1:0] value_b_31;
    value_b_31 = b_31;
  endfunction

  // Port 42: comparisonResult_0
  export "DPI-C" function getBitWidthImpl_comparisonResult_0;
  function void getBitWidthImpl_comparisonResult_0;
    output int value;
    value = $bits(dut.comparisonResult_0);
  endfunction
  export "DPI-C" function getBitsImpl_comparisonResult_0;
  function void getBitsImpl_comparisonResult_0;
    output bit [$bits(dut.comparisonResult_0)-1:0] value_comparisonResult_0;
    value_comparisonResult_0 = comparisonResult_0;
  endfunction

  // Port 43: comparisonResult_1
  export "DPI-C" function getBitWidthImpl_comparisonResult_1;
  function void getBitWidthImpl_comparisonResult_1;
    output int value;
    value = $bits(dut.comparisonResult_1);
  endfunction
  export "DPI-C" function getBitsImpl_comparisonResult_1;
  function void getBitsImpl_comparisonResult_1;
    output bit [$bits(dut.comparisonResult_1)-1:0] value_comparisonResult_1;
    value_comparisonResult_1 = comparisonResult_1;
  endfunction

  // Simulation
  import "DPI-C" context task simulation_body();
  enum {INIT, RUN, DONE} simulationState = INIT;
  initial
    simulationState = RUN;
  always @(simulationState) begin
    if (simulationState == RUN) begin
      simulation_body();
      simulationState = DONE;
    end
  end
  import "DPI-C" context task simulation_final();
  final
    simulation_final();
  `ifdef SVSIM_BACKEND_SUPPORTS_DELAY_IN_PUBLIC_FUNCTIONS
  export "DPI-C" task run_simulation;
  task run_simulation;
    input int timesteps;
    output int finish;
    #(timesteps*0.1);
    finish = 0;
  endtask
  `else
  import "DPI-C" function void run_simulation(input int timesteps, output int done);
  `endif

  // Tracing
  int traceSupported = 0;
  export "DPI-C" function simulation_initializeTrace;
  function void simulation_initializeTrace;
    input string traceFilePath;
    `ifdef SVSIM_ENABLE_FST_TRACING_SUPPORT
      $dumpfile({traceFilePath,".fst"});
      $dumpvars(0, dut);
      traceSupported = 1;
    `elsif SVSIM_ENABLE_VCD_TRACING_SUPPORT
      $dumpfile({traceFilePath,".vcd"});
      $dumpvars(0, dut);
      traceSupported = 1;
    `endif
    `ifdef SVSIM_ENABLE_VPD_TRACING_SUPPORT
      $vcdplusfile({traceFilePath,".vpd"});
      $dumpvars(0, dut);
      $vcdpluson(0, dut);
      traceSupported = 1;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
      $fsdbDumpfile({traceFilePath,".fsdb"});
      $fsdbDumpvars(0, dut, "+all");
      traceSupported = 1;
    `endif
  endfunction
  export "DPI-C" function simulation_enableTrace;
  function void simulation_enableTrace;
    output int success;
    success = traceSupported;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
    $dumpon;
    `elsif SVSIM_ENABLE_FST_TRACING_SUPPORT
    $dumpon;
    `elsif SVSIM_ENABLE_VPD_TRACING_SUPPORT
    $dumpon;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
    $fsdbDumpon;
    `endif
  endfunction
  export "DPI-C" function simulation_disableTrace;
  function void simulation_disableTrace;
    output int success;
    success = traceSupported;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
    $dumpoff;
    `elsif SVSIM_ENABLE_FST_TRACING_SUPPORT
    $dumpoff;
    `elsif SVSIM_ENABLE_VPD_TRACING_SUPPORT
    $dumpoff;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
    $fsdbDumpoff;
    `endif
  endfunction

endmodule
