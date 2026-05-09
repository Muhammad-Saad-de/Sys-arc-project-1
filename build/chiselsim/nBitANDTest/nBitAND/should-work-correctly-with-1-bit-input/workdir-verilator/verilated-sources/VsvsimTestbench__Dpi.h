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
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:53:17
    extern void getBitWidthImpl_a_0(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:19:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:70:17
    extern void getBitWidthImpl_out(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:36:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:63:17
    extern void getBitsImpl_a_0(svBitVecVal* value_a_0);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:29:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:75:17
    extern void getBitsImpl_out(svBitVecVal* value_out);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:46:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:58:17
    extern void setBitsImpl_a_0(const svBitVecVal* value_a_0);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:24:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:41:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:148:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:133:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:109:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:14:40
    extern void initTestBenchScope();
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:103:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:81:31
    extern int simulation_body();
    // DPI import at /home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/nBitANDTest/nBitAND/should-work-correctly-with-1-bit-input/workdir-verilator/../generated-sources/testbench.sv:91:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
