module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.signedMagnitude_0)-1:0] signedMagnitude_0 = '0;
  reg  [$bits(dut.signedMagnitude_1)-1:0] signedMagnitude_1 = '0;
  reg  [$bits(dut.signedMagnitude_2)-1:0] signedMagnitude_2 = '0;
  reg  [$bits(dut.signedMagnitude_3)-1:0] signedMagnitude_3 = '0;
  reg  [$bits(dut.signedMagnitude_4)-1:0] signedMagnitude_4 = '0;
  reg  [$bits(dut.signedMagnitude_5)-1:0] signedMagnitude_5 = '0;
  reg  [$bits(dut.signedMagnitude_6)-1:0] signedMagnitude_6 = '0;
  reg  [$bits(dut.signedMagnitude_7)-1:0] signedMagnitude_7 = '0;
  reg  [$bits(dut.signedMagnitude_8)-1:0] signedMagnitude_8 = '0;
  reg  [$bits(dut.signedMagnitude_9)-1:0] signedMagnitude_9 = '0;
  reg  [$bits(dut.signedMagnitude_10)-1:0] signedMagnitude_10 = '0;
  reg  [$bits(dut.signedMagnitude_11)-1:0] signedMagnitude_11 = '0;
  reg  [$bits(dut.signedMagnitude_12)-1:0] signedMagnitude_12 = '0;
  reg  [$bits(dut.signedMagnitude_13)-1:0] signedMagnitude_13 = '0;
  reg  [$bits(dut.signedMagnitude_14)-1:0] signedMagnitude_14 = '0;
  reg  [$bits(dut.signedMagnitude_15)-1:0] signedMagnitude_15 = '0;
  reg  [$bits(dut.signedMagnitude_16)-1:0] signedMagnitude_16 = '0;
  reg  [$bits(dut.signedMagnitude_17)-1:0] signedMagnitude_17 = '0;
  reg  [$bits(dut.signedMagnitude_18)-1:0] signedMagnitude_18 = '0;
  reg  [$bits(dut.signedMagnitude_19)-1:0] signedMagnitude_19 = '0;
  reg  [$bits(dut.signedMagnitude_20)-1:0] signedMagnitude_20 = '0;
  reg  [$bits(dut.signedMagnitude_21)-1:0] signedMagnitude_21 = '0;
  reg  [$bits(dut.signedMagnitude_22)-1:0] signedMagnitude_22 = '0;
  reg  [$bits(dut.signedMagnitude_23)-1:0] signedMagnitude_23 = '0;
  reg  [$bits(dut.signedMagnitude_24)-1:0] signedMagnitude_24 = '0;
  reg  [$bits(dut.signedMagnitude_25)-1:0] signedMagnitude_25 = '0;
  reg  [$bits(dut.signedMagnitude_26)-1:0] signedMagnitude_26 = '0;
  reg  [$bits(dut.signedMagnitude_27)-1:0] signedMagnitude_27 = '0;
  reg  [$bits(dut.signedMagnitude_28)-1:0] signedMagnitude_28 = '0;
  reg  [$bits(dut.signedMagnitude_29)-1:0] signedMagnitude_29 = '0;
  reg  [$bits(dut.signedMagnitude_30)-1:0] signedMagnitude_30 = '0;
  reg  [$bits(dut.signedMagnitude_31)-1:0] signedMagnitude_31 = '0;
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

SignedMagnitudeToOnesComplement dut (
    .clock(clock),
    .reset(reset),
    .signedMagnitude_0(signedMagnitude_0),
    .signedMagnitude_1(signedMagnitude_1),
    .signedMagnitude_2(signedMagnitude_2),
    .signedMagnitude_3(signedMagnitude_3),
    .signedMagnitude_4(signedMagnitude_4),
    .signedMagnitude_5(signedMagnitude_5),
    .signedMagnitude_6(signedMagnitude_6),
    .signedMagnitude_7(signedMagnitude_7),
    .signedMagnitude_8(signedMagnitude_8),
    .signedMagnitude_9(signedMagnitude_9),
    .signedMagnitude_10(signedMagnitude_10),
    .signedMagnitude_11(signedMagnitude_11),
    .signedMagnitude_12(signedMagnitude_12),
    .signedMagnitude_13(signedMagnitude_13),
    .signedMagnitude_14(signedMagnitude_14),
    .signedMagnitude_15(signedMagnitude_15),
    .signedMagnitude_16(signedMagnitude_16),
    .signedMagnitude_17(signedMagnitude_17),
    .signedMagnitude_18(signedMagnitude_18),
    .signedMagnitude_19(signedMagnitude_19),
    .signedMagnitude_20(signedMagnitude_20),
    .signedMagnitude_21(signedMagnitude_21),
    .signedMagnitude_22(signedMagnitude_22),
    .signedMagnitude_23(signedMagnitude_23),
    .signedMagnitude_24(signedMagnitude_24),
    .signedMagnitude_25(signedMagnitude_25),
    .signedMagnitude_26(signedMagnitude_26),
    .signedMagnitude_27(signedMagnitude_27),
    .signedMagnitude_28(signedMagnitude_28),
    .signedMagnitude_29(signedMagnitude_29),
    .signedMagnitude_30(signedMagnitude_30),
    .signedMagnitude_31(signedMagnitude_31),
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

  // Port 2: signedMagnitude_0
  export "DPI-C" function getBitWidthImpl_signedMagnitude_0;
  function void getBitWidthImpl_signedMagnitude_0;
    output int value;
    value = $bits(dut.signedMagnitude_0);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_0;
  function void setBitsImpl_signedMagnitude_0;
    input bit [$bits(dut.signedMagnitude_0)-1:0] value_signedMagnitude_0;
    signedMagnitude_0 = value_signedMagnitude_0;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_0;
  function void getBitsImpl_signedMagnitude_0;
    output bit [$bits(dut.signedMagnitude_0)-1:0] value_signedMagnitude_0;
    value_signedMagnitude_0 = signedMagnitude_0;
  endfunction

  // Port 3: signedMagnitude_1
  export "DPI-C" function getBitWidthImpl_signedMagnitude_1;
  function void getBitWidthImpl_signedMagnitude_1;
    output int value;
    value = $bits(dut.signedMagnitude_1);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_1;
  function void setBitsImpl_signedMagnitude_1;
    input bit [$bits(dut.signedMagnitude_1)-1:0] value_signedMagnitude_1;
    signedMagnitude_1 = value_signedMagnitude_1;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_1;
  function void getBitsImpl_signedMagnitude_1;
    output bit [$bits(dut.signedMagnitude_1)-1:0] value_signedMagnitude_1;
    value_signedMagnitude_1 = signedMagnitude_1;
  endfunction

  // Port 4: signedMagnitude_2
  export "DPI-C" function getBitWidthImpl_signedMagnitude_2;
  function void getBitWidthImpl_signedMagnitude_2;
    output int value;
    value = $bits(dut.signedMagnitude_2);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_2;
  function void setBitsImpl_signedMagnitude_2;
    input bit [$bits(dut.signedMagnitude_2)-1:0] value_signedMagnitude_2;
    signedMagnitude_2 = value_signedMagnitude_2;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_2;
  function void getBitsImpl_signedMagnitude_2;
    output bit [$bits(dut.signedMagnitude_2)-1:0] value_signedMagnitude_2;
    value_signedMagnitude_2 = signedMagnitude_2;
  endfunction

  // Port 5: signedMagnitude_3
  export "DPI-C" function getBitWidthImpl_signedMagnitude_3;
  function void getBitWidthImpl_signedMagnitude_3;
    output int value;
    value = $bits(dut.signedMagnitude_3);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_3;
  function void setBitsImpl_signedMagnitude_3;
    input bit [$bits(dut.signedMagnitude_3)-1:0] value_signedMagnitude_3;
    signedMagnitude_3 = value_signedMagnitude_3;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_3;
  function void getBitsImpl_signedMagnitude_3;
    output bit [$bits(dut.signedMagnitude_3)-1:0] value_signedMagnitude_3;
    value_signedMagnitude_3 = signedMagnitude_3;
  endfunction

  // Port 6: signedMagnitude_4
  export "DPI-C" function getBitWidthImpl_signedMagnitude_4;
  function void getBitWidthImpl_signedMagnitude_4;
    output int value;
    value = $bits(dut.signedMagnitude_4);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_4;
  function void setBitsImpl_signedMagnitude_4;
    input bit [$bits(dut.signedMagnitude_4)-1:0] value_signedMagnitude_4;
    signedMagnitude_4 = value_signedMagnitude_4;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_4;
  function void getBitsImpl_signedMagnitude_4;
    output bit [$bits(dut.signedMagnitude_4)-1:0] value_signedMagnitude_4;
    value_signedMagnitude_4 = signedMagnitude_4;
  endfunction

  // Port 7: signedMagnitude_5
  export "DPI-C" function getBitWidthImpl_signedMagnitude_5;
  function void getBitWidthImpl_signedMagnitude_5;
    output int value;
    value = $bits(dut.signedMagnitude_5);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_5;
  function void setBitsImpl_signedMagnitude_5;
    input bit [$bits(dut.signedMagnitude_5)-1:0] value_signedMagnitude_5;
    signedMagnitude_5 = value_signedMagnitude_5;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_5;
  function void getBitsImpl_signedMagnitude_5;
    output bit [$bits(dut.signedMagnitude_5)-1:0] value_signedMagnitude_5;
    value_signedMagnitude_5 = signedMagnitude_5;
  endfunction

  // Port 8: signedMagnitude_6
  export "DPI-C" function getBitWidthImpl_signedMagnitude_6;
  function void getBitWidthImpl_signedMagnitude_6;
    output int value;
    value = $bits(dut.signedMagnitude_6);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_6;
  function void setBitsImpl_signedMagnitude_6;
    input bit [$bits(dut.signedMagnitude_6)-1:0] value_signedMagnitude_6;
    signedMagnitude_6 = value_signedMagnitude_6;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_6;
  function void getBitsImpl_signedMagnitude_6;
    output bit [$bits(dut.signedMagnitude_6)-1:0] value_signedMagnitude_6;
    value_signedMagnitude_6 = signedMagnitude_6;
  endfunction

  // Port 9: signedMagnitude_7
  export "DPI-C" function getBitWidthImpl_signedMagnitude_7;
  function void getBitWidthImpl_signedMagnitude_7;
    output int value;
    value = $bits(dut.signedMagnitude_7);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_7;
  function void setBitsImpl_signedMagnitude_7;
    input bit [$bits(dut.signedMagnitude_7)-1:0] value_signedMagnitude_7;
    signedMagnitude_7 = value_signedMagnitude_7;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_7;
  function void getBitsImpl_signedMagnitude_7;
    output bit [$bits(dut.signedMagnitude_7)-1:0] value_signedMagnitude_7;
    value_signedMagnitude_7 = signedMagnitude_7;
  endfunction

  // Port a: signedMagnitude_8
  export "DPI-C" function getBitWidthImpl_signedMagnitude_8;
  function void getBitWidthImpl_signedMagnitude_8;
    output int value;
    value = $bits(dut.signedMagnitude_8);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_8;
  function void setBitsImpl_signedMagnitude_8;
    input bit [$bits(dut.signedMagnitude_8)-1:0] value_signedMagnitude_8;
    signedMagnitude_8 = value_signedMagnitude_8;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_8;
  function void getBitsImpl_signedMagnitude_8;
    output bit [$bits(dut.signedMagnitude_8)-1:0] value_signedMagnitude_8;
    value_signedMagnitude_8 = signedMagnitude_8;
  endfunction

  // Port b: signedMagnitude_9
  export "DPI-C" function getBitWidthImpl_signedMagnitude_9;
  function void getBitWidthImpl_signedMagnitude_9;
    output int value;
    value = $bits(dut.signedMagnitude_9);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_9;
  function void setBitsImpl_signedMagnitude_9;
    input bit [$bits(dut.signedMagnitude_9)-1:0] value_signedMagnitude_9;
    signedMagnitude_9 = value_signedMagnitude_9;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_9;
  function void getBitsImpl_signedMagnitude_9;
    output bit [$bits(dut.signedMagnitude_9)-1:0] value_signedMagnitude_9;
    value_signedMagnitude_9 = signedMagnitude_9;
  endfunction

  // Port c: signedMagnitude_10
  export "DPI-C" function getBitWidthImpl_signedMagnitude_10;
  function void getBitWidthImpl_signedMagnitude_10;
    output int value;
    value = $bits(dut.signedMagnitude_10);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_10;
  function void setBitsImpl_signedMagnitude_10;
    input bit [$bits(dut.signedMagnitude_10)-1:0] value_signedMagnitude_10;
    signedMagnitude_10 = value_signedMagnitude_10;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_10;
  function void getBitsImpl_signedMagnitude_10;
    output bit [$bits(dut.signedMagnitude_10)-1:0] value_signedMagnitude_10;
    value_signedMagnitude_10 = signedMagnitude_10;
  endfunction

  // Port d: signedMagnitude_11
  export "DPI-C" function getBitWidthImpl_signedMagnitude_11;
  function void getBitWidthImpl_signedMagnitude_11;
    output int value;
    value = $bits(dut.signedMagnitude_11);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_11;
  function void setBitsImpl_signedMagnitude_11;
    input bit [$bits(dut.signedMagnitude_11)-1:0] value_signedMagnitude_11;
    signedMagnitude_11 = value_signedMagnitude_11;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_11;
  function void getBitsImpl_signedMagnitude_11;
    output bit [$bits(dut.signedMagnitude_11)-1:0] value_signedMagnitude_11;
    value_signedMagnitude_11 = signedMagnitude_11;
  endfunction

  // Port e: signedMagnitude_12
  export "DPI-C" function getBitWidthImpl_signedMagnitude_12;
  function void getBitWidthImpl_signedMagnitude_12;
    output int value;
    value = $bits(dut.signedMagnitude_12);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_12;
  function void setBitsImpl_signedMagnitude_12;
    input bit [$bits(dut.signedMagnitude_12)-1:0] value_signedMagnitude_12;
    signedMagnitude_12 = value_signedMagnitude_12;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_12;
  function void getBitsImpl_signedMagnitude_12;
    output bit [$bits(dut.signedMagnitude_12)-1:0] value_signedMagnitude_12;
    value_signedMagnitude_12 = signedMagnitude_12;
  endfunction

  // Port f: signedMagnitude_13
  export "DPI-C" function getBitWidthImpl_signedMagnitude_13;
  function void getBitWidthImpl_signedMagnitude_13;
    output int value;
    value = $bits(dut.signedMagnitude_13);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_13;
  function void setBitsImpl_signedMagnitude_13;
    input bit [$bits(dut.signedMagnitude_13)-1:0] value_signedMagnitude_13;
    signedMagnitude_13 = value_signedMagnitude_13;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_13;
  function void getBitsImpl_signedMagnitude_13;
    output bit [$bits(dut.signedMagnitude_13)-1:0] value_signedMagnitude_13;
    value_signedMagnitude_13 = signedMagnitude_13;
  endfunction

  // Port 10: signedMagnitude_14
  export "DPI-C" function getBitWidthImpl_signedMagnitude_14;
  function void getBitWidthImpl_signedMagnitude_14;
    output int value;
    value = $bits(dut.signedMagnitude_14);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_14;
  function void setBitsImpl_signedMagnitude_14;
    input bit [$bits(dut.signedMagnitude_14)-1:0] value_signedMagnitude_14;
    signedMagnitude_14 = value_signedMagnitude_14;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_14;
  function void getBitsImpl_signedMagnitude_14;
    output bit [$bits(dut.signedMagnitude_14)-1:0] value_signedMagnitude_14;
    value_signedMagnitude_14 = signedMagnitude_14;
  endfunction

  // Port 11: signedMagnitude_15
  export "DPI-C" function getBitWidthImpl_signedMagnitude_15;
  function void getBitWidthImpl_signedMagnitude_15;
    output int value;
    value = $bits(dut.signedMagnitude_15);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_15;
  function void setBitsImpl_signedMagnitude_15;
    input bit [$bits(dut.signedMagnitude_15)-1:0] value_signedMagnitude_15;
    signedMagnitude_15 = value_signedMagnitude_15;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_15;
  function void getBitsImpl_signedMagnitude_15;
    output bit [$bits(dut.signedMagnitude_15)-1:0] value_signedMagnitude_15;
    value_signedMagnitude_15 = signedMagnitude_15;
  endfunction

  // Port 12: signedMagnitude_16
  export "DPI-C" function getBitWidthImpl_signedMagnitude_16;
  function void getBitWidthImpl_signedMagnitude_16;
    output int value;
    value = $bits(dut.signedMagnitude_16);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_16;
  function void setBitsImpl_signedMagnitude_16;
    input bit [$bits(dut.signedMagnitude_16)-1:0] value_signedMagnitude_16;
    signedMagnitude_16 = value_signedMagnitude_16;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_16;
  function void getBitsImpl_signedMagnitude_16;
    output bit [$bits(dut.signedMagnitude_16)-1:0] value_signedMagnitude_16;
    value_signedMagnitude_16 = signedMagnitude_16;
  endfunction

  // Port 13: signedMagnitude_17
  export "DPI-C" function getBitWidthImpl_signedMagnitude_17;
  function void getBitWidthImpl_signedMagnitude_17;
    output int value;
    value = $bits(dut.signedMagnitude_17);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_17;
  function void setBitsImpl_signedMagnitude_17;
    input bit [$bits(dut.signedMagnitude_17)-1:0] value_signedMagnitude_17;
    signedMagnitude_17 = value_signedMagnitude_17;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_17;
  function void getBitsImpl_signedMagnitude_17;
    output bit [$bits(dut.signedMagnitude_17)-1:0] value_signedMagnitude_17;
    value_signedMagnitude_17 = signedMagnitude_17;
  endfunction

  // Port 14: signedMagnitude_18
  export "DPI-C" function getBitWidthImpl_signedMagnitude_18;
  function void getBitWidthImpl_signedMagnitude_18;
    output int value;
    value = $bits(dut.signedMagnitude_18);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_18;
  function void setBitsImpl_signedMagnitude_18;
    input bit [$bits(dut.signedMagnitude_18)-1:0] value_signedMagnitude_18;
    signedMagnitude_18 = value_signedMagnitude_18;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_18;
  function void getBitsImpl_signedMagnitude_18;
    output bit [$bits(dut.signedMagnitude_18)-1:0] value_signedMagnitude_18;
    value_signedMagnitude_18 = signedMagnitude_18;
  endfunction

  // Port 15: signedMagnitude_19
  export "DPI-C" function getBitWidthImpl_signedMagnitude_19;
  function void getBitWidthImpl_signedMagnitude_19;
    output int value;
    value = $bits(dut.signedMagnitude_19);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_19;
  function void setBitsImpl_signedMagnitude_19;
    input bit [$bits(dut.signedMagnitude_19)-1:0] value_signedMagnitude_19;
    signedMagnitude_19 = value_signedMagnitude_19;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_19;
  function void getBitsImpl_signedMagnitude_19;
    output bit [$bits(dut.signedMagnitude_19)-1:0] value_signedMagnitude_19;
    value_signedMagnitude_19 = signedMagnitude_19;
  endfunction

  // Port 16: signedMagnitude_20
  export "DPI-C" function getBitWidthImpl_signedMagnitude_20;
  function void getBitWidthImpl_signedMagnitude_20;
    output int value;
    value = $bits(dut.signedMagnitude_20);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_20;
  function void setBitsImpl_signedMagnitude_20;
    input bit [$bits(dut.signedMagnitude_20)-1:0] value_signedMagnitude_20;
    signedMagnitude_20 = value_signedMagnitude_20;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_20;
  function void getBitsImpl_signedMagnitude_20;
    output bit [$bits(dut.signedMagnitude_20)-1:0] value_signedMagnitude_20;
    value_signedMagnitude_20 = signedMagnitude_20;
  endfunction

  // Port 17: signedMagnitude_21
  export "DPI-C" function getBitWidthImpl_signedMagnitude_21;
  function void getBitWidthImpl_signedMagnitude_21;
    output int value;
    value = $bits(dut.signedMagnitude_21);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_21;
  function void setBitsImpl_signedMagnitude_21;
    input bit [$bits(dut.signedMagnitude_21)-1:0] value_signedMagnitude_21;
    signedMagnitude_21 = value_signedMagnitude_21;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_21;
  function void getBitsImpl_signedMagnitude_21;
    output bit [$bits(dut.signedMagnitude_21)-1:0] value_signedMagnitude_21;
    value_signedMagnitude_21 = signedMagnitude_21;
  endfunction

  // Port 18: signedMagnitude_22
  export "DPI-C" function getBitWidthImpl_signedMagnitude_22;
  function void getBitWidthImpl_signedMagnitude_22;
    output int value;
    value = $bits(dut.signedMagnitude_22);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_22;
  function void setBitsImpl_signedMagnitude_22;
    input bit [$bits(dut.signedMagnitude_22)-1:0] value_signedMagnitude_22;
    signedMagnitude_22 = value_signedMagnitude_22;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_22;
  function void getBitsImpl_signedMagnitude_22;
    output bit [$bits(dut.signedMagnitude_22)-1:0] value_signedMagnitude_22;
    value_signedMagnitude_22 = signedMagnitude_22;
  endfunction

  // Port 19: signedMagnitude_23
  export "DPI-C" function getBitWidthImpl_signedMagnitude_23;
  function void getBitWidthImpl_signedMagnitude_23;
    output int value;
    value = $bits(dut.signedMagnitude_23);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_23;
  function void setBitsImpl_signedMagnitude_23;
    input bit [$bits(dut.signedMagnitude_23)-1:0] value_signedMagnitude_23;
    signedMagnitude_23 = value_signedMagnitude_23;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_23;
  function void getBitsImpl_signedMagnitude_23;
    output bit [$bits(dut.signedMagnitude_23)-1:0] value_signedMagnitude_23;
    value_signedMagnitude_23 = signedMagnitude_23;
  endfunction

  // Port 1a: signedMagnitude_24
  export "DPI-C" function getBitWidthImpl_signedMagnitude_24;
  function void getBitWidthImpl_signedMagnitude_24;
    output int value;
    value = $bits(dut.signedMagnitude_24);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_24;
  function void setBitsImpl_signedMagnitude_24;
    input bit [$bits(dut.signedMagnitude_24)-1:0] value_signedMagnitude_24;
    signedMagnitude_24 = value_signedMagnitude_24;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_24;
  function void getBitsImpl_signedMagnitude_24;
    output bit [$bits(dut.signedMagnitude_24)-1:0] value_signedMagnitude_24;
    value_signedMagnitude_24 = signedMagnitude_24;
  endfunction

  // Port 1b: signedMagnitude_25
  export "DPI-C" function getBitWidthImpl_signedMagnitude_25;
  function void getBitWidthImpl_signedMagnitude_25;
    output int value;
    value = $bits(dut.signedMagnitude_25);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_25;
  function void setBitsImpl_signedMagnitude_25;
    input bit [$bits(dut.signedMagnitude_25)-1:0] value_signedMagnitude_25;
    signedMagnitude_25 = value_signedMagnitude_25;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_25;
  function void getBitsImpl_signedMagnitude_25;
    output bit [$bits(dut.signedMagnitude_25)-1:0] value_signedMagnitude_25;
    value_signedMagnitude_25 = signedMagnitude_25;
  endfunction

  // Port 1c: signedMagnitude_26
  export "DPI-C" function getBitWidthImpl_signedMagnitude_26;
  function void getBitWidthImpl_signedMagnitude_26;
    output int value;
    value = $bits(dut.signedMagnitude_26);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_26;
  function void setBitsImpl_signedMagnitude_26;
    input bit [$bits(dut.signedMagnitude_26)-1:0] value_signedMagnitude_26;
    signedMagnitude_26 = value_signedMagnitude_26;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_26;
  function void getBitsImpl_signedMagnitude_26;
    output bit [$bits(dut.signedMagnitude_26)-1:0] value_signedMagnitude_26;
    value_signedMagnitude_26 = signedMagnitude_26;
  endfunction

  // Port 1d: signedMagnitude_27
  export "DPI-C" function getBitWidthImpl_signedMagnitude_27;
  function void getBitWidthImpl_signedMagnitude_27;
    output int value;
    value = $bits(dut.signedMagnitude_27);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_27;
  function void setBitsImpl_signedMagnitude_27;
    input bit [$bits(dut.signedMagnitude_27)-1:0] value_signedMagnitude_27;
    signedMagnitude_27 = value_signedMagnitude_27;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_27;
  function void getBitsImpl_signedMagnitude_27;
    output bit [$bits(dut.signedMagnitude_27)-1:0] value_signedMagnitude_27;
    value_signedMagnitude_27 = signedMagnitude_27;
  endfunction

  // Port 1e: signedMagnitude_28
  export "DPI-C" function getBitWidthImpl_signedMagnitude_28;
  function void getBitWidthImpl_signedMagnitude_28;
    output int value;
    value = $bits(dut.signedMagnitude_28);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_28;
  function void setBitsImpl_signedMagnitude_28;
    input bit [$bits(dut.signedMagnitude_28)-1:0] value_signedMagnitude_28;
    signedMagnitude_28 = value_signedMagnitude_28;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_28;
  function void getBitsImpl_signedMagnitude_28;
    output bit [$bits(dut.signedMagnitude_28)-1:0] value_signedMagnitude_28;
    value_signedMagnitude_28 = signedMagnitude_28;
  endfunction

  // Port 1f: signedMagnitude_29
  export "DPI-C" function getBitWidthImpl_signedMagnitude_29;
  function void getBitWidthImpl_signedMagnitude_29;
    output int value;
    value = $bits(dut.signedMagnitude_29);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_29;
  function void setBitsImpl_signedMagnitude_29;
    input bit [$bits(dut.signedMagnitude_29)-1:0] value_signedMagnitude_29;
    signedMagnitude_29 = value_signedMagnitude_29;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_29;
  function void getBitsImpl_signedMagnitude_29;
    output bit [$bits(dut.signedMagnitude_29)-1:0] value_signedMagnitude_29;
    value_signedMagnitude_29 = signedMagnitude_29;
  endfunction

  // Port 20: signedMagnitude_30
  export "DPI-C" function getBitWidthImpl_signedMagnitude_30;
  function void getBitWidthImpl_signedMagnitude_30;
    output int value;
    value = $bits(dut.signedMagnitude_30);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_30;
  function void setBitsImpl_signedMagnitude_30;
    input bit [$bits(dut.signedMagnitude_30)-1:0] value_signedMagnitude_30;
    signedMagnitude_30 = value_signedMagnitude_30;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_30;
  function void getBitsImpl_signedMagnitude_30;
    output bit [$bits(dut.signedMagnitude_30)-1:0] value_signedMagnitude_30;
    value_signedMagnitude_30 = signedMagnitude_30;
  endfunction

  // Port 21: signedMagnitude_31
  export "DPI-C" function getBitWidthImpl_signedMagnitude_31;
  function void getBitWidthImpl_signedMagnitude_31;
    output int value;
    value = $bits(dut.signedMagnitude_31);
  endfunction
  export "DPI-C" function setBitsImpl_signedMagnitude_31;
  function void setBitsImpl_signedMagnitude_31;
    input bit [$bits(dut.signedMagnitude_31)-1:0] value_signedMagnitude_31;
    signedMagnitude_31 = value_signedMagnitude_31;
  endfunction
  export "DPI-C" function getBitsImpl_signedMagnitude_31;
  function void getBitsImpl_signedMagnitude_31;
    output bit [$bits(dut.signedMagnitude_31)-1:0] value_signedMagnitude_31;
    value_signedMagnitude_31 = signedMagnitude_31;
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
