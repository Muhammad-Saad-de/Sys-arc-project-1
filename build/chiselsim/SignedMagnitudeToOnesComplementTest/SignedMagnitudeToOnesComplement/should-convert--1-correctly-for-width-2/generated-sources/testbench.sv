module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  reg  [$bits(dut.signedMagnitude_0)-1:0] signedMagnitude_0 = '0;
  reg  [$bits(dut.signedMagnitude_1)-1:0] signedMagnitude_1 = '0;
  wire [$bits(dut.onesComplement_0)-1:0] onesComplement_0;
  wire [$bits(dut.onesComplement_1)-1:0] onesComplement_1;

SignedMagnitudeToOnesComplement dut (
    .clock(clock),
    .reset(reset),
    .signedMagnitude_0(signedMagnitude_0),
    .signedMagnitude_1(signedMagnitude_1),
    .onesComplement_0(onesComplement_0),
    .onesComplement_1(onesComplement_1)
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

  // Port 4: onesComplement_0
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

  // Port 5: onesComplement_1
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
