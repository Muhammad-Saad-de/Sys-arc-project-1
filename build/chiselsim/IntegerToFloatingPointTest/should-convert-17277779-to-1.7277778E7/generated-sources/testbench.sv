module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.intInput_0)-1:0] intInput_0 = '0;
  reg  [$bits(dut.intInput_1)-1:0] intInput_1 = '0;
  reg  [$bits(dut.intInput_2)-1:0] intInput_2 = '0;
  reg  [$bits(dut.intInput_3)-1:0] intInput_3 = '0;
  reg  [$bits(dut.intInput_4)-1:0] intInput_4 = '0;
  reg  [$bits(dut.intInput_5)-1:0] intInput_5 = '0;
  reg  [$bits(dut.intInput_6)-1:0] intInput_6 = '0;
  reg  [$bits(dut.intInput_7)-1:0] intInput_7 = '0;
  reg  [$bits(dut.intInput_8)-1:0] intInput_8 = '0;
  reg  [$bits(dut.intInput_9)-1:0] intInput_9 = '0;
  reg  [$bits(dut.intInput_10)-1:0] intInput_10 = '0;
  reg  [$bits(dut.intInput_11)-1:0] intInput_11 = '0;
  reg  [$bits(dut.intInput_12)-1:0] intInput_12 = '0;
  reg  [$bits(dut.intInput_13)-1:0] intInput_13 = '0;
  reg  [$bits(dut.intInput_14)-1:0] intInput_14 = '0;
  reg  [$bits(dut.intInput_15)-1:0] intInput_15 = '0;
  reg  [$bits(dut.intInput_16)-1:0] intInput_16 = '0;
  reg  [$bits(dut.intInput_17)-1:0] intInput_17 = '0;
  reg  [$bits(dut.intInput_18)-1:0] intInput_18 = '0;
  reg  [$bits(dut.intInput_19)-1:0] intInput_19 = '0;
  reg  [$bits(dut.intInput_20)-1:0] intInput_20 = '0;
  reg  [$bits(dut.intInput_21)-1:0] intInput_21 = '0;
  reg  [$bits(dut.intInput_22)-1:0] intInput_22 = '0;
  reg  [$bits(dut.intInput_23)-1:0] intInput_23 = '0;
  reg  [$bits(dut.intInput_24)-1:0] intInput_24 = '0;
  reg  [$bits(dut.intInput_25)-1:0] intInput_25 = '0;
  reg  [$bits(dut.intInput_26)-1:0] intInput_26 = '0;
  reg  [$bits(dut.intInput_27)-1:0] intInput_27 = '0;
  reg  [$bits(dut.intInput_28)-1:0] intInput_28 = '0;
  reg  [$bits(dut.intInput_29)-1:0] intInput_29 = '0;
  reg  [$bits(dut.intInput_30)-1:0] intInput_30 = '0;
  reg  [$bits(dut.intInput_31)-1:0] intInput_31 = '0;
  wire [$bits(dut.floatOutput_0)-1:0] floatOutput_0;
  wire [$bits(dut.floatOutput_1)-1:0] floatOutput_1;
  wire [$bits(dut.floatOutput_2)-1:0] floatOutput_2;
  wire [$bits(dut.floatOutput_3)-1:0] floatOutput_3;
  wire [$bits(dut.floatOutput_4)-1:0] floatOutput_4;
  wire [$bits(dut.floatOutput_5)-1:0] floatOutput_5;
  wire [$bits(dut.floatOutput_6)-1:0] floatOutput_6;
  wire [$bits(dut.floatOutput_7)-1:0] floatOutput_7;
  wire [$bits(dut.floatOutput_8)-1:0] floatOutput_8;
  wire [$bits(dut.floatOutput_9)-1:0] floatOutput_9;
  wire [$bits(dut.floatOutput_10)-1:0] floatOutput_10;
  wire [$bits(dut.floatOutput_11)-1:0] floatOutput_11;
  wire [$bits(dut.floatOutput_12)-1:0] floatOutput_12;
  wire [$bits(dut.floatOutput_13)-1:0] floatOutput_13;
  wire [$bits(dut.floatOutput_14)-1:0] floatOutput_14;
  wire [$bits(dut.floatOutput_15)-1:0] floatOutput_15;
  wire [$bits(dut.floatOutput_16)-1:0] floatOutput_16;
  wire [$bits(dut.floatOutput_17)-1:0] floatOutput_17;
  wire [$bits(dut.floatOutput_18)-1:0] floatOutput_18;
  wire [$bits(dut.floatOutput_19)-1:0] floatOutput_19;
  wire [$bits(dut.floatOutput_20)-1:0] floatOutput_20;
  wire [$bits(dut.floatOutput_21)-1:0] floatOutput_21;
  wire [$bits(dut.floatOutput_22)-1:0] floatOutput_22;
  wire [$bits(dut.floatOutput_23)-1:0] floatOutput_23;
  wire [$bits(dut.floatOutput_24)-1:0] floatOutput_24;
  wire [$bits(dut.floatOutput_25)-1:0] floatOutput_25;
  wire [$bits(dut.floatOutput_26)-1:0] floatOutput_26;
  wire [$bits(dut.floatOutput_27)-1:0] floatOutput_27;
  wire [$bits(dut.floatOutput_28)-1:0] floatOutput_28;
  wire [$bits(dut.floatOutput_29)-1:0] floatOutput_29;
  wire [$bits(dut.floatOutput_30)-1:0] floatOutput_30;
  wire [$bits(dut.floatOutput_31)-1:0] floatOutput_31;

IntegerToFloatingPoint dut (
    .clock(clock),
    .reset(reset),
    .intInput_0(intInput_0),
    .intInput_1(intInput_1),
    .intInput_2(intInput_2),
    .intInput_3(intInput_3),
    .intInput_4(intInput_4),
    .intInput_5(intInput_5),
    .intInput_6(intInput_6),
    .intInput_7(intInput_7),
    .intInput_8(intInput_8),
    .intInput_9(intInput_9),
    .intInput_10(intInput_10),
    .intInput_11(intInput_11),
    .intInput_12(intInput_12),
    .intInput_13(intInput_13),
    .intInput_14(intInput_14),
    .intInput_15(intInput_15),
    .intInput_16(intInput_16),
    .intInput_17(intInput_17),
    .intInput_18(intInput_18),
    .intInput_19(intInput_19),
    .intInput_20(intInput_20),
    .intInput_21(intInput_21),
    .intInput_22(intInput_22),
    .intInput_23(intInput_23),
    .intInput_24(intInput_24),
    .intInput_25(intInput_25),
    .intInput_26(intInput_26),
    .intInput_27(intInput_27),
    .intInput_28(intInput_28),
    .intInput_29(intInput_29),
    .intInput_30(intInput_30),
    .intInput_31(intInput_31),
    .floatOutput_0(floatOutput_0),
    .floatOutput_1(floatOutput_1),
    .floatOutput_2(floatOutput_2),
    .floatOutput_3(floatOutput_3),
    .floatOutput_4(floatOutput_4),
    .floatOutput_5(floatOutput_5),
    .floatOutput_6(floatOutput_6),
    .floatOutput_7(floatOutput_7),
    .floatOutput_8(floatOutput_8),
    .floatOutput_9(floatOutput_9),
    .floatOutput_10(floatOutput_10),
    .floatOutput_11(floatOutput_11),
    .floatOutput_12(floatOutput_12),
    .floatOutput_13(floatOutput_13),
    .floatOutput_14(floatOutput_14),
    .floatOutput_15(floatOutput_15),
    .floatOutput_16(floatOutput_16),
    .floatOutput_17(floatOutput_17),
    .floatOutput_18(floatOutput_18),
    .floatOutput_19(floatOutput_19),
    .floatOutput_20(floatOutput_20),
    .floatOutput_21(floatOutput_21),
    .floatOutput_22(floatOutput_22),
    .floatOutput_23(floatOutput_23),
    .floatOutput_24(floatOutput_24),
    .floatOutput_25(floatOutput_25),
    .floatOutput_26(floatOutput_26),
    .floatOutput_27(floatOutput_27),
    .floatOutput_28(floatOutput_28),
    .floatOutput_29(floatOutput_29),
    .floatOutput_30(floatOutput_30),
    .floatOutput_31(floatOutput_31)
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

  // Port 2: intInput_0
  export "DPI-C" function getBitWidthImpl_intInput_0;
  function void getBitWidthImpl_intInput_0;
    output int value;
    value = $bits(dut.intInput_0);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_0;
  function void setBitsImpl_intInput_0;
    input bit [$bits(dut.intInput_0)-1:0] value_intInput_0;
    intInput_0 = value_intInput_0;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_0;
  function void getBitsImpl_intInput_0;
    output bit [$bits(dut.intInput_0)-1:0] value_intInput_0;
    value_intInput_0 = intInput_0;
  endfunction

  // Port 3: intInput_1
  export "DPI-C" function getBitWidthImpl_intInput_1;
  function void getBitWidthImpl_intInput_1;
    output int value;
    value = $bits(dut.intInput_1);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_1;
  function void setBitsImpl_intInput_1;
    input bit [$bits(dut.intInput_1)-1:0] value_intInput_1;
    intInput_1 = value_intInput_1;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_1;
  function void getBitsImpl_intInput_1;
    output bit [$bits(dut.intInput_1)-1:0] value_intInput_1;
    value_intInput_1 = intInput_1;
  endfunction

  // Port 4: intInput_2
  export "DPI-C" function getBitWidthImpl_intInput_2;
  function void getBitWidthImpl_intInput_2;
    output int value;
    value = $bits(dut.intInput_2);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_2;
  function void setBitsImpl_intInput_2;
    input bit [$bits(dut.intInput_2)-1:0] value_intInput_2;
    intInput_2 = value_intInput_2;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_2;
  function void getBitsImpl_intInput_2;
    output bit [$bits(dut.intInput_2)-1:0] value_intInput_2;
    value_intInput_2 = intInput_2;
  endfunction

  // Port 5: intInput_3
  export "DPI-C" function getBitWidthImpl_intInput_3;
  function void getBitWidthImpl_intInput_3;
    output int value;
    value = $bits(dut.intInput_3);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_3;
  function void setBitsImpl_intInput_3;
    input bit [$bits(dut.intInput_3)-1:0] value_intInput_3;
    intInput_3 = value_intInput_3;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_3;
  function void getBitsImpl_intInput_3;
    output bit [$bits(dut.intInput_3)-1:0] value_intInput_3;
    value_intInput_3 = intInput_3;
  endfunction

  // Port 6: intInput_4
  export "DPI-C" function getBitWidthImpl_intInput_4;
  function void getBitWidthImpl_intInput_4;
    output int value;
    value = $bits(dut.intInput_4);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_4;
  function void setBitsImpl_intInput_4;
    input bit [$bits(dut.intInput_4)-1:0] value_intInput_4;
    intInput_4 = value_intInput_4;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_4;
  function void getBitsImpl_intInput_4;
    output bit [$bits(dut.intInput_4)-1:0] value_intInput_4;
    value_intInput_4 = intInput_4;
  endfunction

  // Port 7: intInput_5
  export "DPI-C" function getBitWidthImpl_intInput_5;
  function void getBitWidthImpl_intInput_5;
    output int value;
    value = $bits(dut.intInput_5);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_5;
  function void setBitsImpl_intInput_5;
    input bit [$bits(dut.intInput_5)-1:0] value_intInput_5;
    intInput_5 = value_intInput_5;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_5;
  function void getBitsImpl_intInput_5;
    output bit [$bits(dut.intInput_5)-1:0] value_intInput_5;
    value_intInput_5 = intInput_5;
  endfunction

  // Port 8: intInput_6
  export "DPI-C" function getBitWidthImpl_intInput_6;
  function void getBitWidthImpl_intInput_6;
    output int value;
    value = $bits(dut.intInput_6);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_6;
  function void setBitsImpl_intInput_6;
    input bit [$bits(dut.intInput_6)-1:0] value_intInput_6;
    intInput_6 = value_intInput_6;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_6;
  function void getBitsImpl_intInput_6;
    output bit [$bits(dut.intInput_6)-1:0] value_intInput_6;
    value_intInput_6 = intInput_6;
  endfunction

  // Port 9: intInput_7
  export "DPI-C" function getBitWidthImpl_intInput_7;
  function void getBitWidthImpl_intInput_7;
    output int value;
    value = $bits(dut.intInput_7);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_7;
  function void setBitsImpl_intInput_7;
    input bit [$bits(dut.intInput_7)-1:0] value_intInput_7;
    intInput_7 = value_intInput_7;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_7;
  function void getBitsImpl_intInput_7;
    output bit [$bits(dut.intInput_7)-1:0] value_intInput_7;
    value_intInput_7 = intInput_7;
  endfunction

  // Port a: intInput_8
  export "DPI-C" function getBitWidthImpl_intInput_8;
  function void getBitWidthImpl_intInput_8;
    output int value;
    value = $bits(dut.intInput_8);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_8;
  function void setBitsImpl_intInput_8;
    input bit [$bits(dut.intInput_8)-1:0] value_intInput_8;
    intInput_8 = value_intInput_8;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_8;
  function void getBitsImpl_intInput_8;
    output bit [$bits(dut.intInput_8)-1:0] value_intInput_8;
    value_intInput_8 = intInput_8;
  endfunction

  // Port b: intInput_9
  export "DPI-C" function getBitWidthImpl_intInput_9;
  function void getBitWidthImpl_intInput_9;
    output int value;
    value = $bits(dut.intInput_9);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_9;
  function void setBitsImpl_intInput_9;
    input bit [$bits(dut.intInput_9)-1:0] value_intInput_9;
    intInput_9 = value_intInput_9;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_9;
  function void getBitsImpl_intInput_9;
    output bit [$bits(dut.intInput_9)-1:0] value_intInput_9;
    value_intInput_9 = intInput_9;
  endfunction

  // Port c: intInput_10
  export "DPI-C" function getBitWidthImpl_intInput_10;
  function void getBitWidthImpl_intInput_10;
    output int value;
    value = $bits(dut.intInput_10);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_10;
  function void setBitsImpl_intInput_10;
    input bit [$bits(dut.intInput_10)-1:0] value_intInput_10;
    intInput_10 = value_intInput_10;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_10;
  function void getBitsImpl_intInput_10;
    output bit [$bits(dut.intInput_10)-1:0] value_intInput_10;
    value_intInput_10 = intInput_10;
  endfunction

  // Port d: intInput_11
  export "DPI-C" function getBitWidthImpl_intInput_11;
  function void getBitWidthImpl_intInput_11;
    output int value;
    value = $bits(dut.intInput_11);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_11;
  function void setBitsImpl_intInput_11;
    input bit [$bits(dut.intInput_11)-1:0] value_intInput_11;
    intInput_11 = value_intInput_11;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_11;
  function void getBitsImpl_intInput_11;
    output bit [$bits(dut.intInput_11)-1:0] value_intInput_11;
    value_intInput_11 = intInput_11;
  endfunction

  // Port e: intInput_12
  export "DPI-C" function getBitWidthImpl_intInput_12;
  function void getBitWidthImpl_intInput_12;
    output int value;
    value = $bits(dut.intInput_12);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_12;
  function void setBitsImpl_intInput_12;
    input bit [$bits(dut.intInput_12)-1:0] value_intInput_12;
    intInput_12 = value_intInput_12;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_12;
  function void getBitsImpl_intInput_12;
    output bit [$bits(dut.intInput_12)-1:0] value_intInput_12;
    value_intInput_12 = intInput_12;
  endfunction

  // Port f: intInput_13
  export "DPI-C" function getBitWidthImpl_intInput_13;
  function void getBitWidthImpl_intInput_13;
    output int value;
    value = $bits(dut.intInput_13);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_13;
  function void setBitsImpl_intInput_13;
    input bit [$bits(dut.intInput_13)-1:0] value_intInput_13;
    intInput_13 = value_intInput_13;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_13;
  function void getBitsImpl_intInput_13;
    output bit [$bits(dut.intInput_13)-1:0] value_intInput_13;
    value_intInput_13 = intInput_13;
  endfunction

  // Port 10: intInput_14
  export "DPI-C" function getBitWidthImpl_intInput_14;
  function void getBitWidthImpl_intInput_14;
    output int value;
    value = $bits(dut.intInput_14);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_14;
  function void setBitsImpl_intInput_14;
    input bit [$bits(dut.intInput_14)-1:0] value_intInput_14;
    intInput_14 = value_intInput_14;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_14;
  function void getBitsImpl_intInput_14;
    output bit [$bits(dut.intInput_14)-1:0] value_intInput_14;
    value_intInput_14 = intInput_14;
  endfunction

  // Port 11: intInput_15
  export "DPI-C" function getBitWidthImpl_intInput_15;
  function void getBitWidthImpl_intInput_15;
    output int value;
    value = $bits(dut.intInput_15);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_15;
  function void setBitsImpl_intInput_15;
    input bit [$bits(dut.intInput_15)-1:0] value_intInput_15;
    intInput_15 = value_intInput_15;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_15;
  function void getBitsImpl_intInput_15;
    output bit [$bits(dut.intInput_15)-1:0] value_intInput_15;
    value_intInput_15 = intInput_15;
  endfunction

  // Port 12: intInput_16
  export "DPI-C" function getBitWidthImpl_intInput_16;
  function void getBitWidthImpl_intInput_16;
    output int value;
    value = $bits(dut.intInput_16);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_16;
  function void setBitsImpl_intInput_16;
    input bit [$bits(dut.intInput_16)-1:0] value_intInput_16;
    intInput_16 = value_intInput_16;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_16;
  function void getBitsImpl_intInput_16;
    output bit [$bits(dut.intInput_16)-1:0] value_intInput_16;
    value_intInput_16 = intInput_16;
  endfunction

  // Port 13: intInput_17
  export "DPI-C" function getBitWidthImpl_intInput_17;
  function void getBitWidthImpl_intInput_17;
    output int value;
    value = $bits(dut.intInput_17);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_17;
  function void setBitsImpl_intInput_17;
    input bit [$bits(dut.intInput_17)-1:0] value_intInput_17;
    intInput_17 = value_intInput_17;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_17;
  function void getBitsImpl_intInput_17;
    output bit [$bits(dut.intInput_17)-1:0] value_intInput_17;
    value_intInput_17 = intInput_17;
  endfunction

  // Port 14: intInput_18
  export "DPI-C" function getBitWidthImpl_intInput_18;
  function void getBitWidthImpl_intInput_18;
    output int value;
    value = $bits(dut.intInput_18);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_18;
  function void setBitsImpl_intInput_18;
    input bit [$bits(dut.intInput_18)-1:0] value_intInput_18;
    intInput_18 = value_intInput_18;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_18;
  function void getBitsImpl_intInput_18;
    output bit [$bits(dut.intInput_18)-1:0] value_intInput_18;
    value_intInput_18 = intInput_18;
  endfunction

  // Port 15: intInput_19
  export "DPI-C" function getBitWidthImpl_intInput_19;
  function void getBitWidthImpl_intInput_19;
    output int value;
    value = $bits(dut.intInput_19);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_19;
  function void setBitsImpl_intInput_19;
    input bit [$bits(dut.intInput_19)-1:0] value_intInput_19;
    intInput_19 = value_intInput_19;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_19;
  function void getBitsImpl_intInput_19;
    output bit [$bits(dut.intInput_19)-1:0] value_intInput_19;
    value_intInput_19 = intInput_19;
  endfunction

  // Port 16: intInput_20
  export "DPI-C" function getBitWidthImpl_intInput_20;
  function void getBitWidthImpl_intInput_20;
    output int value;
    value = $bits(dut.intInput_20);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_20;
  function void setBitsImpl_intInput_20;
    input bit [$bits(dut.intInput_20)-1:0] value_intInput_20;
    intInput_20 = value_intInput_20;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_20;
  function void getBitsImpl_intInput_20;
    output bit [$bits(dut.intInput_20)-1:0] value_intInput_20;
    value_intInput_20 = intInput_20;
  endfunction

  // Port 17: intInput_21
  export "DPI-C" function getBitWidthImpl_intInput_21;
  function void getBitWidthImpl_intInput_21;
    output int value;
    value = $bits(dut.intInput_21);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_21;
  function void setBitsImpl_intInput_21;
    input bit [$bits(dut.intInput_21)-1:0] value_intInput_21;
    intInput_21 = value_intInput_21;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_21;
  function void getBitsImpl_intInput_21;
    output bit [$bits(dut.intInput_21)-1:0] value_intInput_21;
    value_intInput_21 = intInput_21;
  endfunction

  // Port 18: intInput_22
  export "DPI-C" function getBitWidthImpl_intInput_22;
  function void getBitWidthImpl_intInput_22;
    output int value;
    value = $bits(dut.intInput_22);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_22;
  function void setBitsImpl_intInput_22;
    input bit [$bits(dut.intInput_22)-1:0] value_intInput_22;
    intInput_22 = value_intInput_22;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_22;
  function void getBitsImpl_intInput_22;
    output bit [$bits(dut.intInput_22)-1:0] value_intInput_22;
    value_intInput_22 = intInput_22;
  endfunction

  // Port 19: intInput_23
  export "DPI-C" function getBitWidthImpl_intInput_23;
  function void getBitWidthImpl_intInput_23;
    output int value;
    value = $bits(dut.intInput_23);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_23;
  function void setBitsImpl_intInput_23;
    input bit [$bits(dut.intInput_23)-1:0] value_intInput_23;
    intInput_23 = value_intInput_23;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_23;
  function void getBitsImpl_intInput_23;
    output bit [$bits(dut.intInput_23)-1:0] value_intInput_23;
    value_intInput_23 = intInput_23;
  endfunction

  // Port 1a: intInput_24
  export "DPI-C" function getBitWidthImpl_intInput_24;
  function void getBitWidthImpl_intInput_24;
    output int value;
    value = $bits(dut.intInput_24);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_24;
  function void setBitsImpl_intInput_24;
    input bit [$bits(dut.intInput_24)-1:0] value_intInput_24;
    intInput_24 = value_intInput_24;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_24;
  function void getBitsImpl_intInput_24;
    output bit [$bits(dut.intInput_24)-1:0] value_intInput_24;
    value_intInput_24 = intInput_24;
  endfunction

  // Port 1b: intInput_25
  export "DPI-C" function getBitWidthImpl_intInput_25;
  function void getBitWidthImpl_intInput_25;
    output int value;
    value = $bits(dut.intInput_25);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_25;
  function void setBitsImpl_intInput_25;
    input bit [$bits(dut.intInput_25)-1:0] value_intInput_25;
    intInput_25 = value_intInput_25;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_25;
  function void getBitsImpl_intInput_25;
    output bit [$bits(dut.intInput_25)-1:0] value_intInput_25;
    value_intInput_25 = intInput_25;
  endfunction

  // Port 1c: intInput_26
  export "DPI-C" function getBitWidthImpl_intInput_26;
  function void getBitWidthImpl_intInput_26;
    output int value;
    value = $bits(dut.intInput_26);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_26;
  function void setBitsImpl_intInput_26;
    input bit [$bits(dut.intInput_26)-1:0] value_intInput_26;
    intInput_26 = value_intInput_26;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_26;
  function void getBitsImpl_intInput_26;
    output bit [$bits(dut.intInput_26)-1:0] value_intInput_26;
    value_intInput_26 = intInput_26;
  endfunction

  // Port 1d: intInput_27
  export "DPI-C" function getBitWidthImpl_intInput_27;
  function void getBitWidthImpl_intInput_27;
    output int value;
    value = $bits(dut.intInput_27);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_27;
  function void setBitsImpl_intInput_27;
    input bit [$bits(dut.intInput_27)-1:0] value_intInput_27;
    intInput_27 = value_intInput_27;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_27;
  function void getBitsImpl_intInput_27;
    output bit [$bits(dut.intInput_27)-1:0] value_intInput_27;
    value_intInput_27 = intInput_27;
  endfunction

  // Port 1e: intInput_28
  export "DPI-C" function getBitWidthImpl_intInput_28;
  function void getBitWidthImpl_intInput_28;
    output int value;
    value = $bits(dut.intInput_28);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_28;
  function void setBitsImpl_intInput_28;
    input bit [$bits(dut.intInput_28)-1:0] value_intInput_28;
    intInput_28 = value_intInput_28;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_28;
  function void getBitsImpl_intInput_28;
    output bit [$bits(dut.intInput_28)-1:0] value_intInput_28;
    value_intInput_28 = intInput_28;
  endfunction

  // Port 1f: intInput_29
  export "DPI-C" function getBitWidthImpl_intInput_29;
  function void getBitWidthImpl_intInput_29;
    output int value;
    value = $bits(dut.intInput_29);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_29;
  function void setBitsImpl_intInput_29;
    input bit [$bits(dut.intInput_29)-1:0] value_intInput_29;
    intInput_29 = value_intInput_29;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_29;
  function void getBitsImpl_intInput_29;
    output bit [$bits(dut.intInput_29)-1:0] value_intInput_29;
    value_intInput_29 = intInput_29;
  endfunction

  // Port 20: intInput_30
  export "DPI-C" function getBitWidthImpl_intInput_30;
  function void getBitWidthImpl_intInput_30;
    output int value;
    value = $bits(dut.intInput_30);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_30;
  function void setBitsImpl_intInput_30;
    input bit [$bits(dut.intInput_30)-1:0] value_intInput_30;
    intInput_30 = value_intInput_30;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_30;
  function void getBitsImpl_intInput_30;
    output bit [$bits(dut.intInput_30)-1:0] value_intInput_30;
    value_intInput_30 = intInput_30;
  endfunction

  // Port 21: intInput_31
  export "DPI-C" function getBitWidthImpl_intInput_31;
  function void getBitWidthImpl_intInput_31;
    output int value;
    value = $bits(dut.intInput_31);
  endfunction
  export "DPI-C" function setBitsImpl_intInput_31;
  function void setBitsImpl_intInput_31;
    input bit [$bits(dut.intInput_31)-1:0] value_intInput_31;
    intInput_31 = value_intInput_31;
  endfunction
  export "DPI-C" function getBitsImpl_intInput_31;
  function void getBitsImpl_intInput_31;
    output bit [$bits(dut.intInput_31)-1:0] value_intInput_31;
    value_intInput_31 = intInput_31;
  endfunction

  // Port 22: floatOutput_0
  export "DPI-C" function getBitWidthImpl_floatOutput_0;
  function void getBitWidthImpl_floatOutput_0;
    output int value;
    value = $bits(dut.floatOutput_0);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_0;
  function void getBitsImpl_floatOutput_0;
    output bit [$bits(dut.floatOutput_0)-1:0] value_floatOutput_0;
    value_floatOutput_0 = floatOutput_0;
  endfunction

  // Port 23: floatOutput_1
  export "DPI-C" function getBitWidthImpl_floatOutput_1;
  function void getBitWidthImpl_floatOutput_1;
    output int value;
    value = $bits(dut.floatOutput_1);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_1;
  function void getBitsImpl_floatOutput_1;
    output bit [$bits(dut.floatOutput_1)-1:0] value_floatOutput_1;
    value_floatOutput_1 = floatOutput_1;
  endfunction

  // Port 24: floatOutput_2
  export "DPI-C" function getBitWidthImpl_floatOutput_2;
  function void getBitWidthImpl_floatOutput_2;
    output int value;
    value = $bits(dut.floatOutput_2);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_2;
  function void getBitsImpl_floatOutput_2;
    output bit [$bits(dut.floatOutput_2)-1:0] value_floatOutput_2;
    value_floatOutput_2 = floatOutput_2;
  endfunction

  // Port 25: floatOutput_3
  export "DPI-C" function getBitWidthImpl_floatOutput_3;
  function void getBitWidthImpl_floatOutput_3;
    output int value;
    value = $bits(dut.floatOutput_3);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_3;
  function void getBitsImpl_floatOutput_3;
    output bit [$bits(dut.floatOutput_3)-1:0] value_floatOutput_3;
    value_floatOutput_3 = floatOutput_3;
  endfunction

  // Port 26: floatOutput_4
  export "DPI-C" function getBitWidthImpl_floatOutput_4;
  function void getBitWidthImpl_floatOutput_4;
    output int value;
    value = $bits(dut.floatOutput_4);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_4;
  function void getBitsImpl_floatOutput_4;
    output bit [$bits(dut.floatOutput_4)-1:0] value_floatOutput_4;
    value_floatOutput_4 = floatOutput_4;
  endfunction

  // Port 27: floatOutput_5
  export "DPI-C" function getBitWidthImpl_floatOutput_5;
  function void getBitWidthImpl_floatOutput_5;
    output int value;
    value = $bits(dut.floatOutput_5);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_5;
  function void getBitsImpl_floatOutput_5;
    output bit [$bits(dut.floatOutput_5)-1:0] value_floatOutput_5;
    value_floatOutput_5 = floatOutput_5;
  endfunction

  // Port 28: floatOutput_6
  export "DPI-C" function getBitWidthImpl_floatOutput_6;
  function void getBitWidthImpl_floatOutput_6;
    output int value;
    value = $bits(dut.floatOutput_6);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_6;
  function void getBitsImpl_floatOutput_6;
    output bit [$bits(dut.floatOutput_6)-1:0] value_floatOutput_6;
    value_floatOutput_6 = floatOutput_6;
  endfunction

  // Port 29: floatOutput_7
  export "DPI-C" function getBitWidthImpl_floatOutput_7;
  function void getBitWidthImpl_floatOutput_7;
    output int value;
    value = $bits(dut.floatOutput_7);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_7;
  function void getBitsImpl_floatOutput_7;
    output bit [$bits(dut.floatOutput_7)-1:0] value_floatOutput_7;
    value_floatOutput_7 = floatOutput_7;
  endfunction

  // Port 2a: floatOutput_8
  export "DPI-C" function getBitWidthImpl_floatOutput_8;
  function void getBitWidthImpl_floatOutput_8;
    output int value;
    value = $bits(dut.floatOutput_8);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_8;
  function void getBitsImpl_floatOutput_8;
    output bit [$bits(dut.floatOutput_8)-1:0] value_floatOutput_8;
    value_floatOutput_8 = floatOutput_8;
  endfunction

  // Port 2b: floatOutput_9
  export "DPI-C" function getBitWidthImpl_floatOutput_9;
  function void getBitWidthImpl_floatOutput_9;
    output int value;
    value = $bits(dut.floatOutput_9);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_9;
  function void getBitsImpl_floatOutput_9;
    output bit [$bits(dut.floatOutput_9)-1:0] value_floatOutput_9;
    value_floatOutput_9 = floatOutput_9;
  endfunction

  // Port 2c: floatOutput_10
  export "DPI-C" function getBitWidthImpl_floatOutput_10;
  function void getBitWidthImpl_floatOutput_10;
    output int value;
    value = $bits(dut.floatOutput_10);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_10;
  function void getBitsImpl_floatOutput_10;
    output bit [$bits(dut.floatOutput_10)-1:0] value_floatOutput_10;
    value_floatOutput_10 = floatOutput_10;
  endfunction

  // Port 2d: floatOutput_11
  export "DPI-C" function getBitWidthImpl_floatOutput_11;
  function void getBitWidthImpl_floatOutput_11;
    output int value;
    value = $bits(dut.floatOutput_11);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_11;
  function void getBitsImpl_floatOutput_11;
    output bit [$bits(dut.floatOutput_11)-1:0] value_floatOutput_11;
    value_floatOutput_11 = floatOutput_11;
  endfunction

  // Port 2e: floatOutput_12
  export "DPI-C" function getBitWidthImpl_floatOutput_12;
  function void getBitWidthImpl_floatOutput_12;
    output int value;
    value = $bits(dut.floatOutput_12);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_12;
  function void getBitsImpl_floatOutput_12;
    output bit [$bits(dut.floatOutput_12)-1:0] value_floatOutput_12;
    value_floatOutput_12 = floatOutput_12;
  endfunction

  // Port 2f: floatOutput_13
  export "DPI-C" function getBitWidthImpl_floatOutput_13;
  function void getBitWidthImpl_floatOutput_13;
    output int value;
    value = $bits(dut.floatOutput_13);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_13;
  function void getBitsImpl_floatOutput_13;
    output bit [$bits(dut.floatOutput_13)-1:0] value_floatOutput_13;
    value_floatOutput_13 = floatOutput_13;
  endfunction

  // Port 30: floatOutput_14
  export "DPI-C" function getBitWidthImpl_floatOutput_14;
  function void getBitWidthImpl_floatOutput_14;
    output int value;
    value = $bits(dut.floatOutput_14);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_14;
  function void getBitsImpl_floatOutput_14;
    output bit [$bits(dut.floatOutput_14)-1:0] value_floatOutput_14;
    value_floatOutput_14 = floatOutput_14;
  endfunction

  // Port 31: floatOutput_15
  export "DPI-C" function getBitWidthImpl_floatOutput_15;
  function void getBitWidthImpl_floatOutput_15;
    output int value;
    value = $bits(dut.floatOutput_15);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_15;
  function void getBitsImpl_floatOutput_15;
    output bit [$bits(dut.floatOutput_15)-1:0] value_floatOutput_15;
    value_floatOutput_15 = floatOutput_15;
  endfunction

  // Port 32: floatOutput_16
  export "DPI-C" function getBitWidthImpl_floatOutput_16;
  function void getBitWidthImpl_floatOutput_16;
    output int value;
    value = $bits(dut.floatOutput_16);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_16;
  function void getBitsImpl_floatOutput_16;
    output bit [$bits(dut.floatOutput_16)-1:0] value_floatOutput_16;
    value_floatOutput_16 = floatOutput_16;
  endfunction

  // Port 33: floatOutput_17
  export "DPI-C" function getBitWidthImpl_floatOutput_17;
  function void getBitWidthImpl_floatOutput_17;
    output int value;
    value = $bits(dut.floatOutput_17);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_17;
  function void getBitsImpl_floatOutput_17;
    output bit [$bits(dut.floatOutput_17)-1:0] value_floatOutput_17;
    value_floatOutput_17 = floatOutput_17;
  endfunction

  // Port 34: floatOutput_18
  export "DPI-C" function getBitWidthImpl_floatOutput_18;
  function void getBitWidthImpl_floatOutput_18;
    output int value;
    value = $bits(dut.floatOutput_18);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_18;
  function void getBitsImpl_floatOutput_18;
    output bit [$bits(dut.floatOutput_18)-1:0] value_floatOutput_18;
    value_floatOutput_18 = floatOutput_18;
  endfunction

  // Port 35: floatOutput_19
  export "DPI-C" function getBitWidthImpl_floatOutput_19;
  function void getBitWidthImpl_floatOutput_19;
    output int value;
    value = $bits(dut.floatOutput_19);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_19;
  function void getBitsImpl_floatOutput_19;
    output bit [$bits(dut.floatOutput_19)-1:0] value_floatOutput_19;
    value_floatOutput_19 = floatOutput_19;
  endfunction

  // Port 36: floatOutput_20
  export "DPI-C" function getBitWidthImpl_floatOutput_20;
  function void getBitWidthImpl_floatOutput_20;
    output int value;
    value = $bits(dut.floatOutput_20);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_20;
  function void getBitsImpl_floatOutput_20;
    output bit [$bits(dut.floatOutput_20)-1:0] value_floatOutput_20;
    value_floatOutput_20 = floatOutput_20;
  endfunction

  // Port 37: floatOutput_21
  export "DPI-C" function getBitWidthImpl_floatOutput_21;
  function void getBitWidthImpl_floatOutput_21;
    output int value;
    value = $bits(dut.floatOutput_21);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_21;
  function void getBitsImpl_floatOutput_21;
    output bit [$bits(dut.floatOutput_21)-1:0] value_floatOutput_21;
    value_floatOutput_21 = floatOutput_21;
  endfunction

  // Port 38: floatOutput_22
  export "DPI-C" function getBitWidthImpl_floatOutput_22;
  function void getBitWidthImpl_floatOutput_22;
    output int value;
    value = $bits(dut.floatOutput_22);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_22;
  function void getBitsImpl_floatOutput_22;
    output bit [$bits(dut.floatOutput_22)-1:0] value_floatOutput_22;
    value_floatOutput_22 = floatOutput_22;
  endfunction

  // Port 39: floatOutput_23
  export "DPI-C" function getBitWidthImpl_floatOutput_23;
  function void getBitWidthImpl_floatOutput_23;
    output int value;
    value = $bits(dut.floatOutput_23);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_23;
  function void getBitsImpl_floatOutput_23;
    output bit [$bits(dut.floatOutput_23)-1:0] value_floatOutput_23;
    value_floatOutput_23 = floatOutput_23;
  endfunction

  // Port 3a: floatOutput_24
  export "DPI-C" function getBitWidthImpl_floatOutput_24;
  function void getBitWidthImpl_floatOutput_24;
    output int value;
    value = $bits(dut.floatOutput_24);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_24;
  function void getBitsImpl_floatOutput_24;
    output bit [$bits(dut.floatOutput_24)-1:0] value_floatOutput_24;
    value_floatOutput_24 = floatOutput_24;
  endfunction

  // Port 3b: floatOutput_25
  export "DPI-C" function getBitWidthImpl_floatOutput_25;
  function void getBitWidthImpl_floatOutput_25;
    output int value;
    value = $bits(dut.floatOutput_25);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_25;
  function void getBitsImpl_floatOutput_25;
    output bit [$bits(dut.floatOutput_25)-1:0] value_floatOutput_25;
    value_floatOutput_25 = floatOutput_25;
  endfunction

  // Port 3c: floatOutput_26
  export "DPI-C" function getBitWidthImpl_floatOutput_26;
  function void getBitWidthImpl_floatOutput_26;
    output int value;
    value = $bits(dut.floatOutput_26);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_26;
  function void getBitsImpl_floatOutput_26;
    output bit [$bits(dut.floatOutput_26)-1:0] value_floatOutput_26;
    value_floatOutput_26 = floatOutput_26;
  endfunction

  // Port 3d: floatOutput_27
  export "DPI-C" function getBitWidthImpl_floatOutput_27;
  function void getBitWidthImpl_floatOutput_27;
    output int value;
    value = $bits(dut.floatOutput_27);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_27;
  function void getBitsImpl_floatOutput_27;
    output bit [$bits(dut.floatOutput_27)-1:0] value_floatOutput_27;
    value_floatOutput_27 = floatOutput_27;
  endfunction

  // Port 3e: floatOutput_28
  export "DPI-C" function getBitWidthImpl_floatOutput_28;
  function void getBitWidthImpl_floatOutput_28;
    output int value;
    value = $bits(dut.floatOutput_28);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_28;
  function void getBitsImpl_floatOutput_28;
    output bit [$bits(dut.floatOutput_28)-1:0] value_floatOutput_28;
    value_floatOutput_28 = floatOutput_28;
  endfunction

  // Port 3f: floatOutput_29
  export "DPI-C" function getBitWidthImpl_floatOutput_29;
  function void getBitWidthImpl_floatOutput_29;
    output int value;
    value = $bits(dut.floatOutput_29);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_29;
  function void getBitsImpl_floatOutput_29;
    output bit [$bits(dut.floatOutput_29)-1:0] value_floatOutput_29;
    value_floatOutput_29 = floatOutput_29;
  endfunction

  // Port 40: floatOutput_30
  export "DPI-C" function getBitWidthImpl_floatOutput_30;
  function void getBitWidthImpl_floatOutput_30;
    output int value;
    value = $bits(dut.floatOutput_30);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_30;
  function void getBitsImpl_floatOutput_30;
    output bit [$bits(dut.floatOutput_30)-1:0] value_floatOutput_30;
    value_floatOutput_30 = floatOutput_30;
  endfunction

  // Port 41: floatOutput_31
  export "DPI-C" function getBitWidthImpl_floatOutput_31;
  function void getBitWidthImpl_floatOutput_31;
    output int value;
    value = $bits(dut.floatOutput_31);
  endfunction
  export "DPI-C" function getBitsImpl_floatOutput_31;
  function void getBitsImpl_floatOutput_31;
    output bit [$bits(dut.floatOutput_31)-1:0] value_floatOutput_31;
    value_floatOutput_31 = floatOutput_31;
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
