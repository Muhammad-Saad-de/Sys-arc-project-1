// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"

extern "C" void initTestBenchScope();

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    initTestBenchScope();
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_clock_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_clock_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__clock = value_clock;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_clock_TOP\n"); );
    // Body
    value_clock = vlSymsp->TOP.svsimTestbench__DOT__clock;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_reset_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_reset_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__reset = value_reset;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_reset_TOP\n"); );
    // Body
    value_reset = vlSymsp->TOP.svsimTestbench__DOT__reset;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_0 = value_intInput_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_0_TOP\n"); );
    // Body
    value_intInput_0 = vlSymsp->TOP.svsimTestbench__DOT__intInput_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_1 = value_intInput_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_1_TOP\n"); );
    // Body
    value_intInput_1 = vlSymsp->TOP.svsimTestbench__DOT__intInput_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_2 = value_intInput_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_2_TOP\n"); );
    // Body
    value_intInput_2 = vlSymsp->TOP.svsimTestbench__DOT__intInput_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_3 = value_intInput_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_3_TOP\n"); );
    // Body
    value_intInput_3 = vlSymsp->TOP.svsimTestbench__DOT__intInput_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_4 = value_intInput_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_4_TOP\n"); );
    // Body
    value_intInput_4 = vlSymsp->TOP.svsimTestbench__DOT__intInput_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_5 = value_intInput_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_5_TOP\n"); );
    // Body
    value_intInput_5 = vlSymsp->TOP.svsimTestbench__DOT__intInput_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_6 = value_intInput_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_6_TOP\n"); );
    // Body
    value_intInput_6 = vlSymsp->TOP.svsimTestbench__DOT__intInput_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_7 = value_intInput_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_7_TOP\n"); );
    // Body
    value_intInput_7 = vlSymsp->TOP.svsimTestbench__DOT__intInput_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_8 = value_intInput_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_8_TOP\n"); );
    // Body
    value_intInput_8 = vlSymsp->TOP.svsimTestbench__DOT__intInput_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_9 = value_intInput_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_9_TOP\n"); );
    // Body
    value_intInput_9 = vlSymsp->TOP.svsimTestbench__DOT__intInput_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_10 = value_intInput_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_10_TOP\n"); );
    // Body
    value_intInput_10 = vlSymsp->TOP.svsimTestbench__DOT__intInput_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_11 = value_intInput_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_11_TOP\n"); );
    // Body
    value_intInput_11 = vlSymsp->TOP.svsimTestbench__DOT__intInput_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_12 = value_intInput_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_12_TOP\n"); );
    // Body
    value_intInput_12 = vlSymsp->TOP.svsimTestbench__DOT__intInput_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_13 = value_intInput_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_13_TOP\n"); );
    // Body
    value_intInput_13 = vlSymsp->TOP.svsimTestbench__DOT__intInput_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_14 = value_intInput_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_14_TOP\n"); );
    // Body
    value_intInput_14 = vlSymsp->TOP.svsimTestbench__DOT__intInput_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_15 = value_intInput_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_15_TOP\n"); );
    // Body
    value_intInput_15 = vlSymsp->TOP.svsimTestbench__DOT__intInput_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_16 = value_intInput_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_16_TOP\n"); );
    // Body
    value_intInput_16 = vlSymsp->TOP.svsimTestbench__DOT__intInput_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_17 = value_intInput_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_17_TOP\n"); );
    // Body
    value_intInput_17 = vlSymsp->TOP.svsimTestbench__DOT__intInput_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_18 = value_intInput_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_18_TOP\n"); );
    // Body
    value_intInput_18 = vlSymsp->TOP.svsimTestbench__DOT__intInput_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_19 = value_intInput_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_19_TOP\n"); );
    // Body
    value_intInput_19 = vlSymsp->TOP.svsimTestbench__DOT__intInput_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_20 = value_intInput_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_20_TOP\n"); );
    // Body
    value_intInput_20 = vlSymsp->TOP.svsimTestbench__DOT__intInput_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_21 = value_intInput_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_21_TOP\n"); );
    // Body
    value_intInput_21 = vlSymsp->TOP.svsimTestbench__DOT__intInput_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_22 = value_intInput_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_22_TOP\n"); );
    // Body
    value_intInput_22 = vlSymsp->TOP.svsimTestbench__DOT__intInput_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_23 = value_intInput_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_23_TOP\n"); );
    // Body
    value_intInput_23 = vlSymsp->TOP.svsimTestbench__DOT__intInput_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_24_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_24 = value_intInput_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_24_TOP\n"); );
    // Body
    value_intInput_24 = vlSymsp->TOP.svsimTestbench__DOT__intInput_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_25_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_25 = value_intInput_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_25_TOP\n"); );
    // Body
    value_intInput_25 = vlSymsp->TOP.svsimTestbench__DOT__intInput_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_26_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_26 = value_intInput_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_26_TOP\n"); );
    // Body
    value_intInput_26 = vlSymsp->TOP.svsimTestbench__DOT__intInput_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_27_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_27 = value_intInput_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_27_TOP\n"); );
    // Body
    value_intInput_27 = vlSymsp->TOP.svsimTestbench__DOT__intInput_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_28_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_28 = value_intInput_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_28_TOP\n"); );
    // Body
    value_intInput_28 = vlSymsp->TOP.svsimTestbench__DOT__intInput_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_29_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_29 = value_intInput_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_29_TOP\n"); );
    // Body
    value_intInput_29 = vlSymsp->TOP.svsimTestbench__DOT__intInput_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_30_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_30 = value_intInput_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_30_TOP\n"); );
    // Body
    value_intInput_30 = vlSymsp->TOP.svsimTestbench__DOT__intInput_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_intInput_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_intInput_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_intInput_31_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__intInput_31 = value_intInput_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_intInput_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_intInput_31_TOP\n"); );
    // Body
    value_intInput_31 = vlSymsp->TOP.svsimTestbench__DOT__intInput_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_0_TOP\n"); );
    // Body
    value_floatOutput_0 = (((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7)) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_1_TOP\n"); );
    // Body
    value_floatOutput_1 = ((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8)) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_2_TOP\n"); );
    // Body
    value_floatOutput_2 = (((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9)) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_3_TOP\n"); );
    // Body
    value_floatOutput_3 = ((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_4_TOP\n"); );
    // Body
    value_floatOutput_4 = (((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_5_TOP\n"); );
    // Body
    value_floatOutput_5 = ((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_6_TOP\n"); );
    // Body
    value_floatOutput_6 = (((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_7_TOP\n"); );
    // Body
    value_floatOutput_7 = ((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_8_TOP\n"); );
    // Body
    value_floatOutput_8 = (((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_9_TOP\n"); );
    // Body
    value_floatOutput_9 = ((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_10_TOP\n"); );
    // Body
    value_floatOutput_10 = (((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_11_TOP\n"); );
    // Body
    value_floatOutput_11 = ((((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_12_TOP\n"); );
    // Body
    value_floatOutput_12 = (((((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_19) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18))) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_13_TOP\n"); );
    // Body
    value_floatOutput_13 = ((((((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_20) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_19))) 
                                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18))) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_14_TOP\n"); );
    // Body
    value_floatOutput_14 = (((((((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_21) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_20))) 
                                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_19))) 
                                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18))) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_15_TOP\n"); );
    // Body
    value_floatOutput_15 = ((((((((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_22) 
                                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_21))) 
                                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_20))) 
                                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_19))) 
                                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18))) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_16_TOP\n"); );
    // Body
    value_floatOutput_16 = (((((((((((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_23) 
                                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_22))) 
                                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_21))) 
                                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_20))) 
                                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_19))) 
                                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18))) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_17_TOP\n"); );
    // Body
    value_floatOutput_17 = ((((((((((((((((((((((((
                                                   ((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_24) 
                                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30)) 
                                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_23))) 
                                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_22))) 
                                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_21))) 
                                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_20))) 
                                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_19))) 
                                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_18))) 
                                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_17))) 
                                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_16))) 
                                           | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                              & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_15))) 
                                          | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                                             & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_14))) 
                                         | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                                            & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_13))) 
                                        | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                                           & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_12))) 
                                       | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                                          & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_11))) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_10))) 
                                     | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                                        & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_9))) 
                                    | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_8))) 
                                   | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                                      & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_7))) 
                                  | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                                     & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_6))) 
                                 | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_5))) 
                                | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_4))) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_3))) 
                              | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_2))) 
                             | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_1))) 
                            | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_0)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_18_TOP\n"); );
    // Body
    value_floatOutput_18 = vlSymsp->TOP.svsimTestbench__DOT__floatOutput_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_19_TOP\n"); );
    // Body
    value_floatOutput_19 = vlSymsp->TOP.svsimTestbench__DOT__floatOutput_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_20_TOP\n"); );
    // Body
    value_floatOutput_20 = vlSymsp->TOP.svsimTestbench__DOT__floatOutput_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_21_TOP\n"); );
    // Body
    value_floatOutput_21 = vlSymsp->TOP.svsimTestbench__DOT__floatOutput_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_22_TOP\n"); );
    // Body
    value_floatOutput_22 = vlSymsp->TOP.svsimTestbench__DOT__floatOutput_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_23_TOP\n"); );
    // Body
    value_floatOutput_23 = ((((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__intInput_30) 
                                          | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a)) 
                                         | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a)) 
                                        | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a)) 
                                       | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a)) 
                                      | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a)) 
                                     | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a)) 
                                    | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a)) 
                                   | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a)) 
                                  | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a)) 
                                 | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a)) 
                                | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a)) 
                               | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a)) 
                              | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a)) 
                             | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_406__DOT__a)) 
                            | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_24_TOP\n"); );
    // Body
    value_floatOutput_24 = (((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                         | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a)) 
                                        | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a)) 
                                       | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a)) 
                                      | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a)) 
                                     | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a)) 
                                    | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a)) 
                                   | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a)) 
                                  | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a)) 
                                 | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a)) 
                                | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a)) 
                               | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a)) 
                              | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a)) 
                             | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_377__DOT__a)) 
                            | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_25_TOP\n"); );
    // Body
    value_floatOutput_25 = ((((((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__newFound_2__DOT__a) 
                                        | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a)) 
                                       | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a)) 
                                      | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a)) 
                                     | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a)) 
                                    | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a)) 
                                   | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a)) 
                                  | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a)) 
                                 | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a)) 
                                | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a)) 
                               | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a)) 
                              | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a)) 
                             | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a)) 
                            | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_26_TOP\n"); );
    // Body
    value_floatOutput_26 = ((((((((((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__newFound_6__DOT__a) 
                                    | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a)) 
                                   | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a)) 
                                  | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a)) 
                                 | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a)) 
                                | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a)) 
                               | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a)) 
                              | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a)) 
                             | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a)) 
                            | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_27_TOP\n"); );
    // Body
    value_floatOutput_27 = ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__newFound_14__DOT__a) 
                            | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_28_TOP\n"); );
    // Body
    value_floatOutput_28 = vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_29_TOP\n"); );
    // Body
    value_floatOutput_29 = vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___leading1_30_out;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_30_TOP\n"); );
    // Body
    value_floatOutput_30 = vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___newFound_29_out;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_floatOutput_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_floatOutput_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_floatOutput_31_TOP\n"); );
    // Body
    value_floatOutput_31 = vlSymsp->TOP.svsimTestbench__DOT__intInput_31;
}

extern "C" int simulation_body();

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    simulation_body();
}

extern "C" int simulation_final();

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    simulation_final();
}

extern "C" void run_simulation(int timesteps, int* done);

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__run_simulation_TOP(IData/*31:0*/ timesteps, IData/*31:0*/ &done) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__run_simulation_TOP\n"); );
    // Body
    int timesteps__Vcvt;
    timesteps__Vcvt = timesteps;
    int done__Vcvt;
    run_simulation(timesteps__Vcvt, &done__Vcvt);
    done = (done__Vcvt);
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, std::string traceFilePath) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP\n"); );
    // Body
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP\n"); );
    // Body
    success = 0U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP\n"); );
    // Body
    success = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VsvsimTestbench___024root___eval_triggers__ico(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_triggers__ico\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | ((QData)((IData)(vlSelfRef.__Vdpi_export_trigger)) 
                                               << 1U));
    vlSelfRef.__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsvsimTestbench___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool VsvsimTestbench___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VsvsimTestbench___024root___ico_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___ico_sequent__TOP__0\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_3__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_3__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_4__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_4__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_5__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_5__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_7__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_7__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_8__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_8__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_9__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_9__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_10__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_10__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_11__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_11__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_12__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_12__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_13__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_13__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_15__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_15__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_16__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_16__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_17__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_17__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_18__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_18__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_19__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_19__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_20__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_20__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_21__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_21__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_22__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_22__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_23__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_23__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_24__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_24__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_25__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_25__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_26__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_26__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_27__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_27__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_28__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_28__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__newFound_29__DOT__a;
    svsimTestbench__DOT__dut__DOT__newFound_29__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__andGate_436__DOT__a;
    svsimTestbench__DOT__dut__DOT__andGate_436__DOT__a = 0;
    // Body
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__intInput_30)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_29));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_2__DOT__a 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__intInput_30) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_2__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_28));
    svsimTestbench__DOT__dut__DOT__newFound_3__DOT__a 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_2__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_3__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_27));
    svsimTestbench__DOT__dut__DOT__newFound_4__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_3__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_4__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_26));
    svsimTestbench__DOT__dut__DOT__newFound_5__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_4__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_5__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_25));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_6__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_5__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_6__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_24));
    svsimTestbench__DOT__dut__DOT__newFound_7__DOT__a 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_6__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_7__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_23));
    svsimTestbench__DOT__dut__DOT__newFound_8__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_7__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_8__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_22));
    svsimTestbench__DOT__dut__DOT__newFound_9__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_8__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_9__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_21));
    svsimTestbench__DOT__dut__DOT__newFound_10__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_9__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_10__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_20));
    svsimTestbench__DOT__dut__DOT__newFound_11__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_10__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_11__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_19));
    svsimTestbench__DOT__dut__DOT__newFound_12__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_11__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_12__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_18));
    svsimTestbench__DOT__dut__DOT__newFound_13__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_12__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_13__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_17));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_14__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_13__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_14__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_16));
    svsimTestbench__DOT__dut__DOT__newFound_15__DOT__a 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__newFound_14__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_15__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_15));
    svsimTestbench__DOT__dut__DOT__newFound_16__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_15__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_16__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_14));
    svsimTestbench__DOT__dut__DOT__newFound_17__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_16__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_17__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_13));
    svsimTestbench__DOT__dut__DOT__newFound_18__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_17__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_18__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_12));
    svsimTestbench__DOT__dut__DOT__newFound_19__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_18__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_19__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_11));
    svsimTestbench__DOT__dut__DOT__newFound_20__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_19__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_20__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_10));
    svsimTestbench__DOT__dut__DOT__newFound_21__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_20__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_21__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_9));
    svsimTestbench__DOT__dut__DOT__newFound_22__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_21__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_22__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_8));
    svsimTestbench__DOT__dut__DOT__newFound_23__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_22__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_23__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_7));
    svsimTestbench__DOT__dut__DOT__newFound_24__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_23__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_24__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_6));
    svsimTestbench__DOT__dut__DOT__newFound_25__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_24__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_25__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_5));
    vlSelfRef.svsimTestbench__DOT__floatOutput_18 = 
        (((((((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__intInput_25) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_30)) 
                                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_24))) 
                                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_23))) 
                               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_22))) 
                              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_21))) 
                             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_20))) 
                            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_19))) 
                           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_18))) 
                          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_17))) 
                         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_16))) 
                        | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_15))) 
                       | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                          & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_14))) 
                      | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_13))) 
                     | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                        & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_12))) 
                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_11))) 
                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_10))) 
                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_9))) 
                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_8))) 
                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_7))) 
               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_6))) 
              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_5))) 
             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_4))) 
            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_3))) 
           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_2))) 
          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_1))) 
         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a) 
            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_0)));
    svsimTestbench__DOT__dut__DOT__newFound_26__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_25__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_26__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_4));
    vlSelfRef.svsimTestbench__DOT__floatOutput_19 = 
        ((((((((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__intInput_26) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_30)) 
                                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_25))) 
                                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_24))) 
                                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_23))) 
                               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_22))) 
                              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_21))) 
                             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_20))) 
                            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_19))) 
                           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_18))) 
                          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_17))) 
                         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_16))) 
                        | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_15))) 
                       | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                          & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_14))) 
                      | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_13))) 
                     | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                        & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_12))) 
                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_11))) 
                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_10))) 
                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_9))) 
                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_8))) 
                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_7))) 
               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_6))) 
              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_5))) 
             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_4))) 
            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_3))) 
           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a) 
              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_2))) 
          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_1))) 
         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a) 
            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_0)));
    svsimTestbench__DOT__dut__DOT__newFound_27__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_26__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_377__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_27__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_3));
    vlSelfRef.svsimTestbench__DOT__floatOutput_20 = 
        (((((((((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__intInput_27) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_30)) 
                                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_26))) 
                                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_25))) 
                                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_24))) 
                                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_23))) 
                               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_22))) 
                              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_21))) 
                             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_20))) 
                            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_19))) 
                           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_18))) 
                          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_17))) 
                         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_16))) 
                        | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_15))) 
                       | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                          & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_14))) 
                      | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_13))) 
                     | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                        & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_12))) 
                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_11))) 
                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_10))) 
                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_9))) 
                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_8))) 
                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_7))) 
               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_6))) 
              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_5))) 
             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_4))) 
            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_3))) 
           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a) 
              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_2))) 
          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_1))) 
         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_377__DOT__a) 
            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_0)));
    svsimTestbench__DOT__dut__DOT__newFound_28__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_27__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_377__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_406__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_28__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_2));
    vlSelfRef.svsimTestbench__DOT__floatOutput_21 = 
        ((((((((((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__intInput_28) 
                                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_30)) 
                                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_27))) 
                                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_26))) 
                                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_25))) 
                                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_24))) 
                                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_23))) 
                               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_22))) 
                              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_21))) 
                             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_20))) 
                            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_19))) 
                           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_18))) 
                          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_17))) 
                         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_16))) 
                        | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_15))) 
                       | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                          & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_14))) 
                      | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_13))) 
                     | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                        & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_12))) 
                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_11))) 
                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_10))) 
                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_9))) 
                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_8))) 
                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_7))) 
               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_6))) 
              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_5))) 
             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_4))) 
            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_3))) 
           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a) 
              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_2))) 
          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_377__DOT__a) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_1))) 
         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_406__DOT__a) 
            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_0)));
    svsimTestbench__DOT__dut__DOT__newFound_29__DOT__a 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_28__DOT__a) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_406__DOT__a));
    svsimTestbench__DOT__dut__DOT__andGate_436__DOT__a 
        = ((~ (IData)(svsimTestbench__DOT__dut__DOT__newFound_29__DOT__a)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_1));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___newFound_29_out 
        = ((IData)(svsimTestbench__DOT__dut__DOT__newFound_29__DOT__a) 
           | (IData)(svsimTestbench__DOT__dut__DOT__andGate_436__DOT__a));
    vlSelfRef.svsimTestbench__DOT__floatOutput_22 = 
        (((((((((((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__intInput_29) 
                                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_30)) 
                                     | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_109__DOT__a) 
                                        & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_28))) 
                                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_10__DOT__a) 
                                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_27))) 
                                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_111__DOT__a) 
                                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_26))) 
                                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_112__DOT__a) 
                                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_25))) 
                                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_113__DOT__a) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_24))) 
                                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_114__DOT__a) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_23))) 
                               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_115__DOT__a) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_22))) 
                              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_100__DOT__a) 
                                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_21))) 
                             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_101__DOT__a) 
                                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_20))) 
                            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_102__DOT__a) 
                               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_19))) 
                           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_103__DOT__a) 
                              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_18))) 
                          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_104__DOT__a) 
                             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_17))) 
                         | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_105__DOT__a) 
                            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_16))) 
                        | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_106__DOT__a) 
                           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_15))) 
                       | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_107__DOT__a) 
                          & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_14))) 
                      | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_124__DOT__a) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_13))) 
                     | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_142__DOT__a) 
                        & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_12))) 
                    | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_161__DOT__a) 
                       & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_11))) 
                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_181__DOT__a) 
                      & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_10))) 
                  | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_202__DOT__a) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_9))) 
                 | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_224__DOT__a) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_8))) 
                | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_247__DOT__a) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_7))) 
               | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_271__DOT__a) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_6))) 
              | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_296__DOT__a) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_5))) 
             | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_322__DOT__a) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_4))) 
            | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_349__DOT__a) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_3))) 
           | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_377__DOT__a) 
              & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_2))) 
          | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__andGate_406__DOT__a) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_1))) 
         | ((IData)(svsimTestbench__DOT__dut__DOT__andGate_436__DOT__a) 
            & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_0)));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___leading1_30_out 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___newFound_29_out)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__intInput_0));
}

void VsvsimTestbench___024root___eval_ico(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_ico\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
        VsvsimTestbench___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool VsvsimTestbench___024root___eval_phase__ico(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__ico\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VsvsimTestbench___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = VsvsimTestbench___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VsvsimTestbench___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VsvsimTestbench___024root___eval_triggers__act(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_triggers__act\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__Vdpi_export_trigger)));
    vlSelfRef.__Vdpi_export_trigger = 0U;
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (vlSelfRef.svsimTestbench__DOT__simulationState 
                                                     != vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 
        = vlSelfRef.svsimTestbench__DOT__simulationState;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VsvsimTestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void VsvsimTestbench___024root___act_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___act_sequent__TOP__0\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U == vlSelfRef.svsimTestbench__DOT__simulationState)) {
        VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP(
                                                                                (vlSymsp->__Vscopep_svsimTestbench), 
                                                                                "/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/IntegerToFloatingPointTest/should-convert--17277777-to--1.7277776E7/workdir-verilator/../generated-sources/testbench.sv", 0x00000456U);
        vlSelfRef.svsimTestbench__DOT__simulationState = 2U;
    }
}

void VsvsimTestbench___024root___eval_act(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_act\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        VsvsimTestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VsvsimTestbench___024root___eval_nba(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_nba\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[1U])) {
        VsvsimTestbench___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VsvsimTestbench___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VsvsimTestbench___024root___eval_phase__act(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__act\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VsvsimTestbench___024root___eval_triggers__act(vlSelf);
    VsvsimTestbench___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VsvsimTestbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        VsvsimTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VsvsimTestbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VsvsimTestbench___024root___eval_phase__nba(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__nba\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VsvsimTestbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VsvsimTestbench___024root___eval_nba(vlSelf);
        VsvsimTestbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VsvsimTestbench___024root___eval(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/IntegerToFloatingPointTest/should-convert--17277777-to--1.7277776E7/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VsvsimTestbench___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/IntegerToFloatingPointTest/should-convert--17277777-to--1.7277776E7/workdir-verilator/../generated-sources/testbench.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/IntegerToFloatingPointTest/should-convert--17277777-to--1.7277776E7/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VsvsimTestbench___024root___eval_phase__act(vlSelf));
    } while (VsvsimTestbench___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VsvsimTestbench___024root___eval_debug_assertions(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_debug_assertions\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
