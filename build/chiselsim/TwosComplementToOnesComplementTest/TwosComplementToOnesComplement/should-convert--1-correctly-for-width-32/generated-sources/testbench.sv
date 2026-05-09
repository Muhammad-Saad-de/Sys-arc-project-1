module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.twosComplement_0)-1:0] twosComplement_0 = '0;
  reg  [$bits(dut.twosComplement_1)-1:0] twosComplement_1 = '0;
  reg  [$bits(dut.twosComplement_2)-1:0] twosComplement_2 = '0;
  reg  [$bits(dut.twosComplement_3)-1:0] twosComplement_3 = '0;
  reg  [$bits(dut.twosComplement_4)-1:0] twosComplement_4 = '0;
  reg  [$bits(dut.twosComplement_5)-1:0] twosComplement_5 = '0;
  reg  [$bits(dut.twosComplement_6)-1:0] twosComplement_6 = '0;
  reg  [$bits(dut.twosComplement_7)-1:0] twosComplement_7 = '0;
  reg  [$bits(dut.twosComplement_8)-1:0] twosComplement_8 = '0;
  reg  [$bits(dut.twosComplement_9)-1:0] twosComplement_9 = '0;
  reg  [$bits(dut.twosComplement_10)-1:0] twosComplement_10 = '0;
  reg  [$bits(dut.twosComplement_11)-1:0] twosComplement_11 = '0;
  reg  [$bits(dut.twosComplement_12)-1:0] twosComplement_12 = '0;
  reg  [$bits(dut.twosComplement_13)-1:0] twosComplement_13 = '0;
  reg  [$bits(dut.twosComplement_14)-1:0] twosComplement_14 = '0;
  reg  [$bits(dut.twosComplement_15)-1:0] twosComplement_15 = '0;
  reg  [$bits(dut.twosComplement_16)-1:0] twosComplement_16 = '0;
  reg  [$bits(dut.twosComplement_17)-1:0] twosComplement_17 = '0;
  reg  [$bits(dut.twosComplement_18)-1:0] twosComplement_18 = '0;
  reg  [$bits(dut.twosComplement_19)-1:0] twosComplement_19 = '0;
  reg  [$bits(dut.twosComplement_20)-1:0] twosComplement_20 = '0;
  reg  [$bits(dut.twosComplement_21)-1:0] twosComplement_21 = '0;
  reg  [$bits(dut.twosComplement_22)-1:0] twosComplement_22 = '0;
  reg  [$bits(dut.twosComplement_23)-1:0] twosComplement_23 = '0;
  reg  [$bits(dut.twosComplement_24)-1:0] twosComplement_24 = '0;
  reg  [$bits(dut.twosComplement_25)-1:0] twosComplement_25 = '0;
  reg  [$bits(dut.twosComplement_26)-1:0] twosComplement_26 = '0;
  reg  [$bits(dut.twosComplement_27)-1:0] twosComplement_27 = '0;
  reg  [$bits(dut.twosComplement_28)-1:0] twosComplement_28 = '0;
  reg  [$bits(dut.twosComplement_29)-1:0] twosComplement_29 = '0;
  reg  [$bits(dut.twosComplement_30)-1:0] twosComplement_30 = '0;
  reg  [$bits(dut.twosComplement_31)-1:0] twosComplement_31 = '0;
  wire [$bits(dut.onesComplement_0)-1:0] onesComplement_0;
  wire [$bits(dut.onesComplement_1)-1:0] onesComplement_1;
  wire [$bits(dut.onesComplement_2)-1:0] onesComplement_2;
  wire [$bits(dut.onesComplement_3)-1:0] onesComplement_3;
  wire [$bits(dut.onesComplement_4)-1:0] onesComplement_4;
  wire [$bits(dut.onesComplement_5)-1:0] onesComplement_5;
  wire [$bits(dut.onesComplement_6)-1:0] onesComplement_6;
  wire [$bits(dut.onesComplement_7)-1:0] onesComplement_7;
  wire [$bits(dut.onesComplement_8)-1:0] onesComplement_8;
  wire [$bits(dut.onesComplement_9)-1:0] onesComplement_9;
  wire [$bits(dut.onesComplement_10)-1:0] onesComplement_10;
  wire [$bits(dut.onesComplement_11)-1:0] onesComplement_11;
  wire [$bits(dut.onesComplement_12)-1:0] onesComplement_12;
  wire [$bits(dut.onesComplement_13)-1:0] onesComplement_13;
  wire [$bits(dut.onesComplement_14)-1:0] onesComplement_14;
  wire [$bits(dut.onesComplement_15)-1:0] onesComplement_15;
  wire [$bits(dut.onesComplement_16)-1:0] onesComplement_16;
  wire [$bits(dut.onesComplement_17)-1:0] onesComplement_17;
  wire [$bits(dut.onesComplement_18)-1:0] onesComplement_18;
  wire [$bits(dut.onesComplement_19)-1:0] onesComplement_19;
  wire [$bits(dut.onesComplement_20)-1:0] onesComplement_20;
  wire [$bits(dut.onesComplement_21)-1:0] onesComplement_21;
  wire [$bits(dut.onesComplement_22)-1:0] onesComplement_22;
  wire [$bits(dut.onesComplement_23)-1:0] onesComplement_23;
  wire [$bits(dut.onesComplement_24)-1:0] onesComplement_24;
  wire [$bits(dut.onesComplement_25)-1:0] onesComplement_25;
  wire [$bits(dut.onesComplement_26)-1:0] onesComplement_26;
  wire [$bits(dut.onesComplement_27)-1:0] onesComplement_27;
  wire [$bits(dut.onesComplement_28)-1:0] onesComplement_28;
  wire [$bits(dut.onesComplement_29)-1:0] onesComplement_29;
  wire [$bits(dut.onesComplement_30)-1:0] onesComplement_30;
  wire [$bits(dut.onesComplement_31)-1:0] onesComplement_31;

TwosComplementToOnesComplement dut (
    .clock(clock),
    .reset(reset),
    .twosComplement_0(twosComplement_0),
    .twosComplement_1(twosComplement_1),
    .twosComplement_2(twosComplement_2),
    .twosComplement_3(twosComplement_3),
    .twosComplement_4(twosComplement_4),
    .twosComplement_5(twosComplement_5),
    .twosComplement_6(twosComplement_6),
    .twosComplement_7(twosComplement_7),
    .twosComplement_8(twosComplement_8),
    .twosComplement_9(twosComplement_9),
    .twosComplement_10(twosComplement_10),
    .twosComplement_11(twosComplement_11),
    .twosComplement_12(twosComplement_12),
    .twosComplement_13(twosComplement_13),
    .twosComplement_14(twosComplement_14),
    .twosComplement_15(twosComplement_15),
    .twosComplement_16(twosComplement_16),
    .twosComplement_17(twosComplement_17),
    .twosComplement_18(twosComplement_18),
    .twosComplement_19(twosComplement_19),
    .twosComplement_20(twosComplement_20),
    .twosComplement_21(twosComplement_21),
    .twosComplement_22(twosComplement_22),
    .twosComplement_23(twosComplement_23),
    .twosComplement_24(twosComplement_24),
    .twosComplement_25(twosComplement_25),
    .twosComplement_26(twosComplement_26),
    .twosComplement_27(twosComplement_27),
    .twosComplement_28(twosComplement_28),
    .twosComplement_29(twosComplement_29),
    .twosComplement_30(twosComplement_30),
    .twosComplement_31(twosComplement_31),
    .onesComplement_0(onesComplement_0),
    .onesComplement_1(onesComplement_1),
    .onesComplement_2(onesComplement_2),
    .onesComplement_3(onesComplement_3),
    .onesComplement_4(onesComplement_4),
    .onesComplement_5(onesComplement_5),
    .onesComplement_6(onesComplement_6),
    .onesComplement_7(onesComplement_7),
    .onesComplement_8(onesComplement_8),
    .onesComplement_9(onesComplement_9),
    .onesComplement_10(onesComplement_10),
    .onesComplement_11(onesComplement_11),
    .onesComplement_12(onesComplement_12),
    .onesComplement_13(onesComplement_13),
    .onesComplement_14(onesComplement_14),
    .onesComplement_15(onesComplement_15),
    .onesComplement_16(onesComplement_16),
    .onesComplement_17(onesComplement_17),
    .onesComplement_18(onesComplement_18),
    .onesComplement_19(onesComplement_19),
    .onesComplement_20(onesComplement_20),
    .onesComplement_21(onesComplement_21),
    .onesComplement_22(onesComplement_22),
    .onesComplement_23(onesComplement_23),
    .onesComplement_24(onesComplement_24),
    .onesComplement_25(onesComplement_25),
    .onesComplement_26(onesComplement_26),
    .onesComplement_27(onesComplement_27),
    .onesComplement_28(onesComplement_28),
    .onesComplement_29(onesComplement_29),
    .onesComplement_30(onesComplement_30),
    .onesComplement_31(onesComplement_31)
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

  // Port 2: twosComplement_0
  export "DPI-C" function getBitWidthImpl_twosComplement_0;
  function void getBitWidthImpl_twosComplement_0;
    output int value;
    value = $bits(dut.twosComplement_0);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_0;
  function void setBitsImpl_twosComplement_0;
    input bit [$bits(dut.twosComplement_0)-1:0] value_twosComplement_0;
    twosComplement_0 = value_twosComplement_0;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_0;
  function void getBitsImpl_twosComplement_0;
    output bit [$bits(dut.twosComplement_0)-1:0] value_twosComplement_0;
    value_twosComplement_0 = twosComplement_0;
  endfunction

  // Port 3: twosComplement_1
  export "DPI-C" function getBitWidthImpl_twosComplement_1;
  function void getBitWidthImpl_twosComplement_1;
    output int value;
    value = $bits(dut.twosComplement_1);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_1;
  function void setBitsImpl_twosComplement_1;
    input bit [$bits(dut.twosComplement_1)-1:0] value_twosComplement_1;
    twosComplement_1 = value_twosComplement_1;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_1;
  function void getBitsImpl_twosComplement_1;
    output bit [$bits(dut.twosComplement_1)-1:0] value_twosComplement_1;
    value_twosComplement_1 = twosComplement_1;
  endfunction

  // Port 4: twosComplement_2
  export "DPI-C" function getBitWidthImpl_twosComplement_2;
  function void getBitWidthImpl_twosComplement_2;
    output int value;
    value = $bits(dut.twosComplement_2);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_2;
  function void setBitsImpl_twosComplement_2;
    input bit [$bits(dut.twosComplement_2)-1:0] value_twosComplement_2;
    twosComplement_2 = value_twosComplement_2;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_2;
  function void getBitsImpl_twosComplement_2;
    output bit [$bits(dut.twosComplement_2)-1:0] value_twosComplement_2;
    value_twosComplement_2 = twosComplement_2;
  endfunction

  // Port 5: twosComplement_3
  export "DPI-C" function getBitWidthImpl_twosComplement_3;
  function void getBitWidthImpl_twosComplement_3;
    output int value;
    value = $bits(dut.twosComplement_3);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_3;
  function void setBitsImpl_twosComplement_3;
    input bit [$bits(dut.twosComplement_3)-1:0] value_twosComplement_3;
    twosComplement_3 = value_twosComplement_3;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_3;
  function void getBitsImpl_twosComplement_3;
    output bit [$bits(dut.twosComplement_3)-1:0] value_twosComplement_3;
    value_twosComplement_3 = twosComplement_3;
  endfunction

  // Port 6: twosComplement_4
  export "DPI-C" function getBitWidthImpl_twosComplement_4;
  function void getBitWidthImpl_twosComplement_4;
    output int value;
    value = $bits(dut.twosComplement_4);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_4;
  function void setBitsImpl_twosComplement_4;
    input bit [$bits(dut.twosComplement_4)-1:0] value_twosComplement_4;
    twosComplement_4 = value_twosComplement_4;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_4;
  function void getBitsImpl_twosComplement_4;
    output bit [$bits(dut.twosComplement_4)-1:0] value_twosComplement_4;
    value_twosComplement_4 = twosComplement_4;
  endfunction

  // Port 7: twosComplement_5
  export "DPI-C" function getBitWidthImpl_twosComplement_5;
  function void getBitWidthImpl_twosComplement_5;
    output int value;
    value = $bits(dut.twosComplement_5);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_5;
  function void setBitsImpl_twosComplement_5;
    input bit [$bits(dut.twosComplement_5)-1:0] value_twosComplement_5;
    twosComplement_5 = value_twosComplement_5;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_5;
  function void getBitsImpl_twosComplement_5;
    output bit [$bits(dut.twosComplement_5)-1:0] value_twosComplement_5;
    value_twosComplement_5 = twosComplement_5;
  endfunction

  // Port 8: twosComplement_6
  export "DPI-C" function getBitWidthImpl_twosComplement_6;
  function void getBitWidthImpl_twosComplement_6;
    output int value;
    value = $bits(dut.twosComplement_6);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_6;
  function void setBitsImpl_twosComplement_6;
    input bit [$bits(dut.twosComplement_6)-1:0] value_twosComplement_6;
    twosComplement_6 = value_twosComplement_6;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_6;
  function void getBitsImpl_twosComplement_6;
    output bit [$bits(dut.twosComplement_6)-1:0] value_twosComplement_6;
    value_twosComplement_6 = twosComplement_6;
  endfunction

  // Port 9: twosComplement_7
  export "DPI-C" function getBitWidthImpl_twosComplement_7;
  function void getBitWidthImpl_twosComplement_7;
    output int value;
    value = $bits(dut.twosComplement_7);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_7;
  function void setBitsImpl_twosComplement_7;
    input bit [$bits(dut.twosComplement_7)-1:0] value_twosComplement_7;
    twosComplement_7 = value_twosComplement_7;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_7;
  function void getBitsImpl_twosComplement_7;
    output bit [$bits(dut.twosComplement_7)-1:0] value_twosComplement_7;
    value_twosComplement_7 = twosComplement_7;
  endfunction

  // Port a: twosComplement_8
  export "DPI-C" function getBitWidthImpl_twosComplement_8;
  function void getBitWidthImpl_twosComplement_8;
    output int value;
    value = $bits(dut.twosComplement_8);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_8;
  function void setBitsImpl_twosComplement_8;
    input bit [$bits(dut.twosComplement_8)-1:0] value_twosComplement_8;
    twosComplement_8 = value_twosComplement_8;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_8;
  function void getBitsImpl_twosComplement_8;
    output bit [$bits(dut.twosComplement_8)-1:0] value_twosComplement_8;
    value_twosComplement_8 = twosComplement_8;
  endfunction

  // Port b: twosComplement_9
  export "DPI-C" function getBitWidthImpl_twosComplement_9;
  function void getBitWidthImpl_twosComplement_9;
    output int value;
    value = $bits(dut.twosComplement_9);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_9;
  function void setBitsImpl_twosComplement_9;
    input bit [$bits(dut.twosComplement_9)-1:0] value_twosComplement_9;
    twosComplement_9 = value_twosComplement_9;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_9;
  function void getBitsImpl_twosComplement_9;
    output bit [$bits(dut.twosComplement_9)-1:0] value_twosComplement_9;
    value_twosComplement_9 = twosComplement_9;
  endfunction

  // Port c: twosComplement_10
  export "DPI-C" function getBitWidthImpl_twosComplement_10;
  function void getBitWidthImpl_twosComplement_10;
    output int value;
    value = $bits(dut.twosComplement_10);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_10;
  function void setBitsImpl_twosComplement_10;
    input bit [$bits(dut.twosComplement_10)-1:0] value_twosComplement_10;
    twosComplement_10 = value_twosComplement_10;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_10;
  function void getBitsImpl_twosComplement_10;
    output bit [$bits(dut.twosComplement_10)-1:0] value_twosComplement_10;
    value_twosComplement_10 = twosComplement_10;
  endfunction

  // Port d: twosComplement_11
  export "DPI-C" function getBitWidthImpl_twosComplement_11;
  function void getBitWidthImpl_twosComplement_11;
    output int value;
    value = $bits(dut.twosComplement_11);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_11;
  function void setBitsImpl_twosComplement_11;
    input bit [$bits(dut.twosComplement_11)-1:0] value_twosComplement_11;
    twosComplement_11 = value_twosComplement_11;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_11;
  function void getBitsImpl_twosComplement_11;
    output bit [$bits(dut.twosComplement_11)-1:0] value_twosComplement_11;
    value_twosComplement_11 = twosComplement_11;
  endfunction

  // Port e: twosComplement_12
  export "DPI-C" function getBitWidthImpl_twosComplement_12;
  function void getBitWidthImpl_twosComplement_12;
    output int value;
    value = $bits(dut.twosComplement_12);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_12;
  function void setBitsImpl_twosComplement_12;
    input bit [$bits(dut.twosComplement_12)-1:0] value_twosComplement_12;
    twosComplement_12 = value_twosComplement_12;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_12;
  function void getBitsImpl_twosComplement_12;
    output bit [$bits(dut.twosComplement_12)-1:0] value_twosComplement_12;
    value_twosComplement_12 = twosComplement_12;
  endfunction

  // Port f: twosComplement_13
  export "DPI-C" function getBitWidthImpl_twosComplement_13;
  function void getBitWidthImpl_twosComplement_13;
    output int value;
    value = $bits(dut.twosComplement_13);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_13;
  function void setBitsImpl_twosComplement_13;
    input bit [$bits(dut.twosComplement_13)-1:0] value_twosComplement_13;
    twosComplement_13 = value_twosComplement_13;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_13;
  function void getBitsImpl_twosComplement_13;
    output bit [$bits(dut.twosComplement_13)-1:0] value_twosComplement_13;
    value_twosComplement_13 = twosComplement_13;
  endfunction

  // Port 10: twosComplement_14
  export "DPI-C" function getBitWidthImpl_twosComplement_14;
  function void getBitWidthImpl_twosComplement_14;
    output int value;
    value = $bits(dut.twosComplement_14);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_14;
  function void setBitsImpl_twosComplement_14;
    input bit [$bits(dut.twosComplement_14)-1:0] value_twosComplement_14;
    twosComplement_14 = value_twosComplement_14;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_14;
  function void getBitsImpl_twosComplement_14;
    output bit [$bits(dut.twosComplement_14)-1:0] value_twosComplement_14;
    value_twosComplement_14 = twosComplement_14;
  endfunction

  // Port 11: twosComplement_15
  export "DPI-C" function getBitWidthImpl_twosComplement_15;
  function void getBitWidthImpl_twosComplement_15;
    output int value;
    value = $bits(dut.twosComplement_15);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_15;
  function void setBitsImpl_twosComplement_15;
    input bit [$bits(dut.twosComplement_15)-1:0] value_twosComplement_15;
    twosComplement_15 = value_twosComplement_15;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_15;
  function void getBitsImpl_twosComplement_15;
    output bit [$bits(dut.twosComplement_15)-1:0] value_twosComplement_15;
    value_twosComplement_15 = twosComplement_15;
  endfunction

  // Port 12: twosComplement_16
  export "DPI-C" function getBitWidthImpl_twosComplement_16;
  function void getBitWidthImpl_twosComplement_16;
    output int value;
    value = $bits(dut.twosComplement_16);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_16;
  function void setBitsImpl_twosComplement_16;
    input bit [$bits(dut.twosComplement_16)-1:0] value_twosComplement_16;
    twosComplement_16 = value_twosComplement_16;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_16;
  function void getBitsImpl_twosComplement_16;
    output bit [$bits(dut.twosComplement_16)-1:0] value_twosComplement_16;
    value_twosComplement_16 = twosComplement_16;
  endfunction

  // Port 13: twosComplement_17
  export "DPI-C" function getBitWidthImpl_twosComplement_17;
  function void getBitWidthImpl_twosComplement_17;
    output int value;
    value = $bits(dut.twosComplement_17);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_17;
  function void setBitsImpl_twosComplement_17;
    input bit [$bits(dut.twosComplement_17)-1:0] value_twosComplement_17;
    twosComplement_17 = value_twosComplement_17;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_17;
  function void getBitsImpl_twosComplement_17;
    output bit [$bits(dut.twosComplement_17)-1:0] value_twosComplement_17;
    value_twosComplement_17 = twosComplement_17;
  endfunction

  // Port 14: twosComplement_18
  export "DPI-C" function getBitWidthImpl_twosComplement_18;
  function void getBitWidthImpl_twosComplement_18;
    output int value;
    value = $bits(dut.twosComplement_18);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_18;
  function void setBitsImpl_twosComplement_18;
    input bit [$bits(dut.twosComplement_18)-1:0] value_twosComplement_18;
    twosComplement_18 = value_twosComplement_18;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_18;
  function void getBitsImpl_twosComplement_18;
    output bit [$bits(dut.twosComplement_18)-1:0] value_twosComplement_18;
    value_twosComplement_18 = twosComplement_18;
  endfunction

  // Port 15: twosComplement_19
  export "DPI-C" function getBitWidthImpl_twosComplement_19;
  function void getBitWidthImpl_twosComplement_19;
    output int value;
    value = $bits(dut.twosComplement_19);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_19;
  function void setBitsImpl_twosComplement_19;
    input bit [$bits(dut.twosComplement_19)-1:0] value_twosComplement_19;
    twosComplement_19 = value_twosComplement_19;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_19;
  function void getBitsImpl_twosComplement_19;
    output bit [$bits(dut.twosComplement_19)-1:0] value_twosComplement_19;
    value_twosComplement_19 = twosComplement_19;
  endfunction

  // Port 16: twosComplement_20
  export "DPI-C" function getBitWidthImpl_twosComplement_20;
  function void getBitWidthImpl_twosComplement_20;
    output int value;
    value = $bits(dut.twosComplement_20);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_20;
  function void setBitsImpl_twosComplement_20;
    input bit [$bits(dut.twosComplement_20)-1:0] value_twosComplement_20;
    twosComplement_20 = value_twosComplement_20;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_20;
  function void getBitsImpl_twosComplement_20;
    output bit [$bits(dut.twosComplement_20)-1:0] value_twosComplement_20;
    value_twosComplement_20 = twosComplement_20;
  endfunction

  // Port 17: twosComplement_21
  export "DPI-C" function getBitWidthImpl_twosComplement_21;
  function void getBitWidthImpl_twosComplement_21;
    output int value;
    value = $bits(dut.twosComplement_21);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_21;
  function void setBitsImpl_twosComplement_21;
    input bit [$bits(dut.twosComplement_21)-1:0] value_twosComplement_21;
    twosComplement_21 = value_twosComplement_21;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_21;
  function void getBitsImpl_twosComplement_21;
    output bit [$bits(dut.twosComplement_21)-1:0] value_twosComplement_21;
    value_twosComplement_21 = twosComplement_21;
  endfunction

  // Port 18: twosComplement_22
  export "DPI-C" function getBitWidthImpl_twosComplement_22;
  function void getBitWidthImpl_twosComplement_22;
    output int value;
    value = $bits(dut.twosComplement_22);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_22;
  function void setBitsImpl_twosComplement_22;
    input bit [$bits(dut.twosComplement_22)-1:0] value_twosComplement_22;
    twosComplement_22 = value_twosComplement_22;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_22;
  function void getBitsImpl_twosComplement_22;
    output bit [$bits(dut.twosComplement_22)-1:0] value_twosComplement_22;
    value_twosComplement_22 = twosComplement_22;
  endfunction

  // Port 19: twosComplement_23
  export "DPI-C" function getBitWidthImpl_twosComplement_23;
  function void getBitWidthImpl_twosComplement_23;
    output int value;
    value = $bits(dut.twosComplement_23);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_23;
  function void setBitsImpl_twosComplement_23;
    input bit [$bits(dut.twosComplement_23)-1:0] value_twosComplement_23;
    twosComplement_23 = value_twosComplement_23;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_23;
  function void getBitsImpl_twosComplement_23;
    output bit [$bits(dut.twosComplement_23)-1:0] value_twosComplement_23;
    value_twosComplement_23 = twosComplement_23;
  endfunction

  // Port 1a: twosComplement_24
  export "DPI-C" function getBitWidthImpl_twosComplement_24;
  function void getBitWidthImpl_twosComplement_24;
    output int value;
    value = $bits(dut.twosComplement_24);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_24;
  function void setBitsImpl_twosComplement_24;
    input bit [$bits(dut.twosComplement_24)-1:0] value_twosComplement_24;
    twosComplement_24 = value_twosComplement_24;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_24;
  function void getBitsImpl_twosComplement_24;
    output bit [$bits(dut.twosComplement_24)-1:0] value_twosComplement_24;
    value_twosComplement_24 = twosComplement_24;
  endfunction

  // Port 1b: twosComplement_25
  export "DPI-C" function getBitWidthImpl_twosComplement_25;
  function void getBitWidthImpl_twosComplement_25;
    output int value;
    value = $bits(dut.twosComplement_25);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_25;
  function void setBitsImpl_twosComplement_25;
    input bit [$bits(dut.twosComplement_25)-1:0] value_twosComplement_25;
    twosComplement_25 = value_twosComplement_25;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_25;
  function void getBitsImpl_twosComplement_25;
    output bit [$bits(dut.twosComplement_25)-1:0] value_twosComplement_25;
    value_twosComplement_25 = twosComplement_25;
  endfunction

  // Port 1c: twosComplement_26
  export "DPI-C" function getBitWidthImpl_twosComplement_26;
  function void getBitWidthImpl_twosComplement_26;
    output int value;
    value = $bits(dut.twosComplement_26);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_26;
  function void setBitsImpl_twosComplement_26;
    input bit [$bits(dut.twosComplement_26)-1:0] value_twosComplement_26;
    twosComplement_26 = value_twosComplement_26;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_26;
  function void getBitsImpl_twosComplement_26;
    output bit [$bits(dut.twosComplement_26)-1:0] value_twosComplement_26;
    value_twosComplement_26 = twosComplement_26;
  endfunction

  // Port 1d: twosComplement_27
  export "DPI-C" function getBitWidthImpl_twosComplement_27;
  function void getBitWidthImpl_twosComplement_27;
    output int value;
    value = $bits(dut.twosComplement_27);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_27;
  function void setBitsImpl_twosComplement_27;
    input bit [$bits(dut.twosComplement_27)-1:0] value_twosComplement_27;
    twosComplement_27 = value_twosComplement_27;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_27;
  function void getBitsImpl_twosComplement_27;
    output bit [$bits(dut.twosComplement_27)-1:0] value_twosComplement_27;
    value_twosComplement_27 = twosComplement_27;
  endfunction

  // Port 1e: twosComplement_28
  export "DPI-C" function getBitWidthImpl_twosComplement_28;
  function void getBitWidthImpl_twosComplement_28;
    output int value;
    value = $bits(dut.twosComplement_28);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_28;
  function void setBitsImpl_twosComplement_28;
    input bit [$bits(dut.twosComplement_28)-1:0] value_twosComplement_28;
    twosComplement_28 = value_twosComplement_28;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_28;
  function void getBitsImpl_twosComplement_28;
    output bit [$bits(dut.twosComplement_28)-1:0] value_twosComplement_28;
    value_twosComplement_28 = twosComplement_28;
  endfunction

  // Port 1f: twosComplement_29
  export "DPI-C" function getBitWidthImpl_twosComplement_29;
  function void getBitWidthImpl_twosComplement_29;
    output int value;
    value = $bits(dut.twosComplement_29);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_29;
  function void setBitsImpl_twosComplement_29;
    input bit [$bits(dut.twosComplement_29)-1:0] value_twosComplement_29;
    twosComplement_29 = value_twosComplement_29;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_29;
  function void getBitsImpl_twosComplement_29;
    output bit [$bits(dut.twosComplement_29)-1:0] value_twosComplement_29;
    value_twosComplement_29 = twosComplement_29;
  endfunction

  // Port 20: twosComplement_30
  export "DPI-C" function getBitWidthImpl_twosComplement_30;
  function void getBitWidthImpl_twosComplement_30;
    output int value;
    value = $bits(dut.twosComplement_30);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_30;
  function void setBitsImpl_twosComplement_30;
    input bit [$bits(dut.twosComplement_30)-1:0] value_twosComplement_30;
    twosComplement_30 = value_twosComplement_30;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_30;
  function void getBitsImpl_twosComplement_30;
    output bit [$bits(dut.twosComplement_30)-1:0] value_twosComplement_30;
    value_twosComplement_30 = twosComplement_30;
  endfunction

  // Port 21: twosComplement_31
  export "DPI-C" function getBitWidthImpl_twosComplement_31;
  function void getBitWidthImpl_twosComplement_31;
    output int value;
    value = $bits(dut.twosComplement_31);
  endfunction
  export "DPI-C" function setBitsImpl_twosComplement_31;
  function void setBitsImpl_twosComplement_31;
    input bit [$bits(dut.twosComplement_31)-1:0] value_twosComplement_31;
    twosComplement_31 = value_twosComplement_31;
  endfunction
  export "DPI-C" function getBitsImpl_twosComplement_31;
  function void getBitsImpl_twosComplement_31;
    output bit [$bits(dut.twosComplement_31)-1:0] value_twosComplement_31;
    value_twosComplement_31 = twosComplement_31;
  endfunction

  // Port 22: onesComplement_0
  export "DPI-C" function getBitWidthImpl_onesComplement_0;
  function void getBitWidthImpl_onesComplement_0;
    output int value;
    value = $bits(dut.onesComplement_0);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_0;
  function void getBitsImpl_onesComplement_0;
    output bit [$bits(dut.onesComplement_0)-1:0] value_onesComplement_0;
    value_onesComplement_0 = onesComplement_0;
  endfunction

  // Port 23: onesComplement_1
  export "DPI-C" function getBitWidthImpl_onesComplement_1;
  function void getBitWidthImpl_onesComplement_1;
    output int value;
    value = $bits(dut.onesComplement_1);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_1;
  function void getBitsImpl_onesComplement_1;
    output bit [$bits(dut.onesComplement_1)-1:0] value_onesComplement_1;
    value_onesComplement_1 = onesComplement_1;
  endfunction

  // Port 24: onesComplement_2
  export "DPI-C" function getBitWidthImpl_onesComplement_2;
  function void getBitWidthImpl_onesComplement_2;
    output int value;
    value = $bits(dut.onesComplement_2);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_2;
  function void getBitsImpl_onesComplement_2;
    output bit [$bits(dut.onesComplement_2)-1:0] value_onesComplement_2;
    value_onesComplement_2 = onesComplement_2;
  endfunction

  // Port 25: onesComplement_3
  export "DPI-C" function getBitWidthImpl_onesComplement_3;
  function void getBitWidthImpl_onesComplement_3;
    output int value;
    value = $bits(dut.onesComplement_3);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_3;
  function void getBitsImpl_onesComplement_3;
    output bit [$bits(dut.onesComplement_3)-1:0] value_onesComplement_3;
    value_onesComplement_3 = onesComplement_3;
  endfunction

  // Port 26: onesComplement_4
  export "DPI-C" function getBitWidthImpl_onesComplement_4;
  function void getBitWidthImpl_onesComplement_4;
    output int value;
    value = $bits(dut.onesComplement_4);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_4;
  function void getBitsImpl_onesComplement_4;
    output bit [$bits(dut.onesComplement_4)-1:0] value_onesComplement_4;
    value_onesComplement_4 = onesComplement_4;
  endfunction

  // Port 27: onesComplement_5
  export "DPI-C" function getBitWidthImpl_onesComplement_5;
  function void getBitWidthImpl_onesComplement_5;
    output int value;
    value = $bits(dut.onesComplement_5);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_5;
  function void getBitsImpl_onesComplement_5;
    output bit [$bits(dut.onesComplement_5)-1:0] value_onesComplement_5;
    value_onesComplement_5 = onesComplement_5;
  endfunction

  // Port 28: onesComplement_6
  export "DPI-C" function getBitWidthImpl_onesComplement_6;
  function void getBitWidthImpl_onesComplement_6;
    output int value;
    value = $bits(dut.onesComplement_6);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_6;
  function void getBitsImpl_onesComplement_6;
    output bit [$bits(dut.onesComplement_6)-1:0] value_onesComplement_6;
    value_onesComplement_6 = onesComplement_6;
  endfunction

  // Port 29: onesComplement_7
  export "DPI-C" function getBitWidthImpl_onesComplement_7;
  function void getBitWidthImpl_onesComplement_7;
    output int value;
    value = $bits(dut.onesComplement_7);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_7;
  function void getBitsImpl_onesComplement_7;
    output bit [$bits(dut.onesComplement_7)-1:0] value_onesComplement_7;
    value_onesComplement_7 = onesComplement_7;
  endfunction

  // Port 2a: onesComplement_8
  export "DPI-C" function getBitWidthImpl_onesComplement_8;
  function void getBitWidthImpl_onesComplement_8;
    output int value;
    value = $bits(dut.onesComplement_8);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_8;
  function void getBitsImpl_onesComplement_8;
    output bit [$bits(dut.onesComplement_8)-1:0] value_onesComplement_8;
    value_onesComplement_8 = onesComplement_8;
  endfunction

  // Port 2b: onesComplement_9
  export "DPI-C" function getBitWidthImpl_onesComplement_9;
  function void getBitWidthImpl_onesComplement_9;
    output int value;
    value = $bits(dut.onesComplement_9);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_9;
  function void getBitsImpl_onesComplement_9;
    output bit [$bits(dut.onesComplement_9)-1:0] value_onesComplement_9;
    value_onesComplement_9 = onesComplement_9;
  endfunction

  // Port 2c: onesComplement_10
  export "DPI-C" function getBitWidthImpl_onesComplement_10;
  function void getBitWidthImpl_onesComplement_10;
    output int value;
    value = $bits(dut.onesComplement_10);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_10;
  function void getBitsImpl_onesComplement_10;
    output bit [$bits(dut.onesComplement_10)-1:0] value_onesComplement_10;
    value_onesComplement_10 = onesComplement_10;
  endfunction

  // Port 2d: onesComplement_11
  export "DPI-C" function getBitWidthImpl_onesComplement_11;
  function void getBitWidthImpl_onesComplement_11;
    output int value;
    value = $bits(dut.onesComplement_11);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_11;
  function void getBitsImpl_onesComplement_11;
    output bit [$bits(dut.onesComplement_11)-1:0] value_onesComplement_11;
    value_onesComplement_11 = onesComplement_11;
  endfunction

  // Port 2e: onesComplement_12
  export "DPI-C" function getBitWidthImpl_onesComplement_12;
  function void getBitWidthImpl_onesComplement_12;
    output int value;
    value = $bits(dut.onesComplement_12);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_12;
  function void getBitsImpl_onesComplement_12;
    output bit [$bits(dut.onesComplement_12)-1:0] value_onesComplement_12;
    value_onesComplement_12 = onesComplement_12;
  endfunction

  // Port 2f: onesComplement_13
  export "DPI-C" function getBitWidthImpl_onesComplement_13;
  function void getBitWidthImpl_onesComplement_13;
    output int value;
    value = $bits(dut.onesComplement_13);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_13;
  function void getBitsImpl_onesComplement_13;
    output bit [$bits(dut.onesComplement_13)-1:0] value_onesComplement_13;
    value_onesComplement_13 = onesComplement_13;
  endfunction

  // Port 30: onesComplement_14
  export "DPI-C" function getBitWidthImpl_onesComplement_14;
  function void getBitWidthImpl_onesComplement_14;
    output int value;
    value = $bits(dut.onesComplement_14);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_14;
  function void getBitsImpl_onesComplement_14;
    output bit [$bits(dut.onesComplement_14)-1:0] value_onesComplement_14;
    value_onesComplement_14 = onesComplement_14;
  endfunction

  // Port 31: onesComplement_15
  export "DPI-C" function getBitWidthImpl_onesComplement_15;
  function void getBitWidthImpl_onesComplement_15;
    output int value;
    value = $bits(dut.onesComplement_15);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_15;
  function void getBitsImpl_onesComplement_15;
    output bit [$bits(dut.onesComplement_15)-1:0] value_onesComplement_15;
    value_onesComplement_15 = onesComplement_15;
  endfunction

  // Port 32: onesComplement_16
  export "DPI-C" function getBitWidthImpl_onesComplement_16;
  function void getBitWidthImpl_onesComplement_16;
    output int value;
    value = $bits(dut.onesComplement_16);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_16;
  function void getBitsImpl_onesComplement_16;
    output bit [$bits(dut.onesComplement_16)-1:0] value_onesComplement_16;
    value_onesComplement_16 = onesComplement_16;
  endfunction

  // Port 33: onesComplement_17
  export "DPI-C" function getBitWidthImpl_onesComplement_17;
  function void getBitWidthImpl_onesComplement_17;
    output int value;
    value = $bits(dut.onesComplement_17);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_17;
  function void getBitsImpl_onesComplement_17;
    output bit [$bits(dut.onesComplement_17)-1:0] value_onesComplement_17;
    value_onesComplement_17 = onesComplement_17;
  endfunction

  // Port 34: onesComplement_18
  export "DPI-C" function getBitWidthImpl_onesComplement_18;
  function void getBitWidthImpl_onesComplement_18;
    output int value;
    value = $bits(dut.onesComplement_18);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_18;
  function void getBitsImpl_onesComplement_18;
    output bit [$bits(dut.onesComplement_18)-1:0] value_onesComplement_18;
    value_onesComplement_18 = onesComplement_18;
  endfunction

  // Port 35: onesComplement_19
  export "DPI-C" function getBitWidthImpl_onesComplement_19;
  function void getBitWidthImpl_onesComplement_19;
    output int value;
    value = $bits(dut.onesComplement_19);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_19;
  function void getBitsImpl_onesComplement_19;
    output bit [$bits(dut.onesComplement_19)-1:0] value_onesComplement_19;
    value_onesComplement_19 = onesComplement_19;
  endfunction

  // Port 36: onesComplement_20
  export "DPI-C" function getBitWidthImpl_onesComplement_20;
  function void getBitWidthImpl_onesComplement_20;
    output int value;
    value = $bits(dut.onesComplement_20);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_20;
  function void getBitsImpl_onesComplement_20;
    output bit [$bits(dut.onesComplement_20)-1:0] value_onesComplement_20;
    value_onesComplement_20 = onesComplement_20;
  endfunction

  // Port 37: onesComplement_21
  export "DPI-C" function getBitWidthImpl_onesComplement_21;
  function void getBitWidthImpl_onesComplement_21;
    output int value;
    value = $bits(dut.onesComplement_21);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_21;
  function void getBitsImpl_onesComplement_21;
    output bit [$bits(dut.onesComplement_21)-1:0] value_onesComplement_21;
    value_onesComplement_21 = onesComplement_21;
  endfunction

  // Port 38: onesComplement_22
  export "DPI-C" function getBitWidthImpl_onesComplement_22;
  function void getBitWidthImpl_onesComplement_22;
    output int value;
    value = $bits(dut.onesComplement_22);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_22;
  function void getBitsImpl_onesComplement_22;
    output bit [$bits(dut.onesComplement_22)-1:0] value_onesComplement_22;
    value_onesComplement_22 = onesComplement_22;
  endfunction

  // Port 39: onesComplement_23
  export "DPI-C" function getBitWidthImpl_onesComplement_23;
  function void getBitWidthImpl_onesComplement_23;
    output int value;
    value = $bits(dut.onesComplement_23);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_23;
  function void getBitsImpl_onesComplement_23;
    output bit [$bits(dut.onesComplement_23)-1:0] value_onesComplement_23;
    value_onesComplement_23 = onesComplement_23;
  endfunction

  // Port 3a: onesComplement_24
  export "DPI-C" function getBitWidthImpl_onesComplement_24;
  function void getBitWidthImpl_onesComplement_24;
    output int value;
    value = $bits(dut.onesComplement_24);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_24;
  function void getBitsImpl_onesComplement_24;
    output bit [$bits(dut.onesComplement_24)-1:0] value_onesComplement_24;
    value_onesComplement_24 = onesComplement_24;
  endfunction

  // Port 3b: onesComplement_25
  export "DPI-C" function getBitWidthImpl_onesComplement_25;
  function void getBitWidthImpl_onesComplement_25;
    output int value;
    value = $bits(dut.onesComplement_25);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_25;
  function void getBitsImpl_onesComplement_25;
    output bit [$bits(dut.onesComplement_25)-1:0] value_onesComplement_25;
    value_onesComplement_25 = onesComplement_25;
  endfunction

  // Port 3c: onesComplement_26
  export "DPI-C" function getBitWidthImpl_onesComplement_26;
  function void getBitWidthImpl_onesComplement_26;
    output int value;
    value = $bits(dut.onesComplement_26);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_26;
  function void getBitsImpl_onesComplement_26;
    output bit [$bits(dut.onesComplement_26)-1:0] value_onesComplement_26;
    value_onesComplement_26 = onesComplement_26;
  endfunction

  // Port 3d: onesComplement_27
  export "DPI-C" function getBitWidthImpl_onesComplement_27;
  function void getBitWidthImpl_onesComplement_27;
    output int value;
    value = $bits(dut.onesComplement_27);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_27;
  function void getBitsImpl_onesComplement_27;
    output bit [$bits(dut.onesComplement_27)-1:0] value_onesComplement_27;
    value_onesComplement_27 = onesComplement_27;
  endfunction

  // Port 3e: onesComplement_28
  export "DPI-C" function getBitWidthImpl_onesComplement_28;
  function void getBitWidthImpl_onesComplement_28;
    output int value;
    value = $bits(dut.onesComplement_28);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_28;
  function void getBitsImpl_onesComplement_28;
    output bit [$bits(dut.onesComplement_28)-1:0] value_onesComplement_28;
    value_onesComplement_28 = onesComplement_28;
  endfunction

  // Port 3f: onesComplement_29
  export "DPI-C" function getBitWidthImpl_onesComplement_29;
  function void getBitWidthImpl_onesComplement_29;
    output int value;
    value = $bits(dut.onesComplement_29);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_29;
  function void getBitsImpl_onesComplement_29;
    output bit [$bits(dut.onesComplement_29)-1:0] value_onesComplement_29;
    value_onesComplement_29 = onesComplement_29;
  endfunction

  // Port 40: onesComplement_30
  export "DPI-C" function getBitWidthImpl_onesComplement_30;
  function void getBitWidthImpl_onesComplement_30;
    output int value;
    value = $bits(dut.onesComplement_30);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_30;
  function void getBitsImpl_onesComplement_30;
    output bit [$bits(dut.onesComplement_30)-1:0] value_onesComplement_30;
    value_onesComplement_30 = onesComplement_30;
  endfunction

  // Port 41: onesComplement_31
  export "DPI-C" function getBitWidthImpl_onesComplement_31;
  function void getBitWidthImpl_onesComplement_31;
    output int value;
    value = $bits(dut.onesComplement_31);
  endfunction
  export "DPI-C" function getBitsImpl_onesComplement_31;
  function void getBitsImpl_onesComplement_31;
    output bit [$bits(dut.onesComplement_31)-1:0] value_onesComplement_31;
    value_onesComplement_31 = onesComplement_31;
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
