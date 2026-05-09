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
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:59:17
    extern void getBitWidthImpl_a(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:76:17
    extern void getBitWidthImpl_b(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:93:17
    extern void getBitWidthImpl_cin(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:25:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:122:17
    extern void getBitWidthImpl_cout(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:42:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:110:17
    extern void getBitWidthImpl_sum(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:69:17
    extern void getBitsImpl_a(svBitVecVal* value_a);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:86:17
    extern void getBitsImpl_b(svBitVecVal* value_b);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:103:17
    extern void getBitsImpl_cin(svBitVecVal* value_cin);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:35:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:127:17
    extern void getBitsImpl_cout(svBitVecVal* value_cout);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:52:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:115:17
    extern void getBitsImpl_sum(svBitVecVal* value_sum);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:64:17
    extern void setBitsImpl_a(const svBitVecVal* value_a);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:81:17
    extern void setBitsImpl_b(const svBitVecVal* value_b);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:98:17
    extern void setBitsImpl_cin(const svBitVecVal* value_cin);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:30:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:47:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:200:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:185:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:161:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:20:40
    extern void initTestBenchScope();
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:155:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:133:31
    extern int simulation_body();
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FullAdderTest/FullAdder/should-compute-sum-false-and-carry-true-for-a-false--b-true--cin-true/workdir-verilator/../generated-sources/testbench.sv:143:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
