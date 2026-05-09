module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.twosComplement_0)-1:0] twosComplement_0 = '0;
  reg  [$bits(dut.twosComplement_1)-1:0] twosComplement_1 = '0;
  reg  [$bits(dut.twosComplement_2)-1:0] twosComplement_2 = '0;
  reg  [$bits(dut.twosComplement_3)-1:0] twosComplement_3 = '0;
  wire [$bits(dut.onesComplement_0)-1:0] onesComplement_0;
  wire [$bits(dut.onesComplement_1)-1:0] onesComplement_1;
  wire [$bits(dut.onesComplement_2)-1:0] onesComplement_2;
  wire [$bits(dut.onesComplement_3)-1:0] onesComplement_3;

TwosComplementToOnesComplement dut (
    .clock(clock),
    .reset(reset),
    .twosComplement_0(twosComplement_0),
    .twosComplement_1(twosComplement_1),
    .twosComplement_2(twosComplement_2),
    .twosComplement_3(twosComplement_3),
    .onesComplement_0(onesComplement_0),
    .onesComplement_1(onesComplement_1),
    .onesComplement_2(onesComplement_2),
    .onesComplement_3(onesComplement_3)
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

  // Port 6: onesComplement_0
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

  // Port 7: onesComplement_1
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

  // Port 8: onesComplement_2
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

  // Port 9: onesComplement_3
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
