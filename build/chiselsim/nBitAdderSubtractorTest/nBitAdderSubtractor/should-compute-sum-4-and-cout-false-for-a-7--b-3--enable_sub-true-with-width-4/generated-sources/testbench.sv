module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.a_0)-1:0] a_0 = '0;
  reg  [$bits(dut.a_1)-1:0] a_1 = '0;
  reg  [$bits(dut.a_2)-1:0] a_2 = '0;
  reg  [$bits(dut.a_3)-1:0] a_3 = '0;
  reg  [$bits(dut.b_0)-1:0] b_0 = '0;
  reg  [$bits(dut.b_1)-1:0] b_1 = '0;
  reg  [$bits(dut.b_2)-1:0] b_2 = '0;
  reg  [$bits(dut.b_3)-1:0] b_3 = '0;
  reg  [$bits(dut.enable_sub)-1:0] enable_sub = '0;
  wire [$bits(dut.sum_0)-1:0] sum_0;
  wire [$bits(dut.sum_1)-1:0] sum_1;
  wire [$bits(dut.sum_2)-1:0] sum_2;
  wire [$bits(dut.sum_3)-1:0] sum_3;
  wire [$bits(dut.cout)-1:0] cout;

nBitAdderSubtractor dut (
    .clock(clock),
    .reset(reset),
    .a_0(a_0),
    .a_1(a_1),
    .a_2(a_2),
    .a_3(a_3),
    .b_0(b_0),
    .b_1(b_1),
    .b_2(b_2),
    .b_3(b_3),
    .enable_sub(enable_sub),
    .sum_0(sum_0),
    .sum_1(sum_1),
    .sum_2(sum_2),
    .sum_3(sum_3),
    .cout(cout)
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

  // Port 6: b_0
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

  // Port 7: b_1
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

  // Port 8: b_2
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

  // Port 9: b_3
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

  // Port a: enable_sub
  export "DPI-C" function getBitWidthImpl_enable_sub;
  function void getBitWidthImpl_enable_sub;
    output int value;
    value = $bits(dut.enable_sub);
  endfunction
  export "DPI-C" function setBitsImpl_enable_sub;
  function void setBitsImpl_enable_sub;
    input bit [$bits(dut.enable_sub)-1:0] value_enable_sub;
    enable_sub = value_enable_sub;
  endfunction
  export "DPI-C" function getBitsImpl_enable_sub;
  function void getBitsImpl_enable_sub;
    output bit [$bits(dut.enable_sub)-1:0] value_enable_sub;
    value_enable_sub = enable_sub;
  endfunction

  // Port b: sum_0
  export "DPI-C" function getBitWidthImpl_sum_0;
  function void getBitWidthImpl_sum_0;
    output int value;
    value = $bits(dut.sum_0);
  endfunction
  export "DPI-C" function getBitsImpl_sum_0;
  function void getBitsImpl_sum_0;
    output bit [$bits(dut.sum_0)-1:0] value_sum_0;
    value_sum_0 = sum_0;
  endfunction

  // Port c: sum_1
  export "DPI-C" function getBitWidthImpl_sum_1;
  function void getBitWidthImpl_sum_1;
    output int value;
    value = $bits(dut.sum_1);
  endfunction
  export "DPI-C" function getBitsImpl_sum_1;
  function void getBitsImpl_sum_1;
    output bit [$bits(dut.sum_1)-1:0] value_sum_1;
    value_sum_1 = sum_1;
  endfunction

  // Port d: sum_2
  export "DPI-C" function getBitWidthImpl_sum_2;
  function void getBitWidthImpl_sum_2;
    output int value;
    value = $bits(dut.sum_2);
  endfunction
  export "DPI-C" function getBitsImpl_sum_2;
  function void getBitsImpl_sum_2;
    output bit [$bits(dut.sum_2)-1:0] value_sum_2;
    value_sum_2 = sum_2;
  endfunction

  // Port e: sum_3
  export "DPI-C" function getBitWidthImpl_sum_3;
  function void getBitWidthImpl_sum_3;
    output int value;
    value = $bits(dut.sum_3);
  endfunction
  export "DPI-C" function getBitsImpl_sum_3;
  function void getBitsImpl_sum_3;
    output bit [$bits(dut.sum_3)-1:0] value_sum_3;
    value_sum_3 = sum_3;
  endfunction

  // Port f: cout
  export "DPI-C" function getBitWidthImpl_cout;
  function void getBitWidthImpl_cout;
    output int value;
    value = $bits(dut.cout);
  endfunction
  export "DPI-C" function getBitsImpl_cout;
  function void getBitsImpl_cout;
    output bit [$bits(dut.cout)-1:0] value_cout;
    value_cout = cout;
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
