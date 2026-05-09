// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSVSIMTESTBENCH__DPI_H_
#define VERILATED_VSVSIMTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:57:17
    extern void getBitWidthImpl_a(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:74:17
    extern void getBitWidthImpl_b(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:23:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:103:17
    extern void getBitWidthImpl_cout(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:40:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:91:17
    extern void getBitWidthImpl_sum(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:67:17
    extern void getBitsImpl_a(svBitVecVal* value_a);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:84:17
    extern void getBitsImpl_b(svBitVecVal* value_b);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:33:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:108:17
    extern void getBitsImpl_cout(svBitVecVal* value_cout);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:50:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:96:17
    extern void getBitsImpl_sum(svBitVecVal* value_sum);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:62:17
    extern void setBitsImpl_a(const svBitVecVal* value_a);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:79:17
    extern void setBitsImpl_b(const svBitVecVal* value_b);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:28:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:45:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:181:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:166:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:142:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:18:40
    extern void initTestBenchScope();
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:136:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:114:31
    extern int simulation_body();
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/HalfAdderTest/HalfAdder/should-compute-sum-true-and-carry-false-for-a-false-and-b-true/workdir-verilator/../generated-sources/testbench.sv:124:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
