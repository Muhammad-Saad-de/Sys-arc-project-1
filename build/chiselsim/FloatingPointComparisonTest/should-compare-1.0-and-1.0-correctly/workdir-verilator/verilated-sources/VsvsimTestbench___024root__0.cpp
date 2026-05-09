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

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_0 = value_a_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_0_TOP\n"); );
    // Body
    value_a_0 = vlSymsp->TOP.svsimTestbench__DOT__a_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_1 = value_a_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_1_TOP\n"); );
    // Body
    value_a_1 = vlSymsp->TOP.svsimTestbench__DOT__a_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_2 = value_a_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_2_TOP\n"); );
    // Body
    value_a_2 = vlSymsp->TOP.svsimTestbench__DOT__a_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_3 = value_a_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_3_TOP\n"); );
    // Body
    value_a_3 = vlSymsp->TOP.svsimTestbench__DOT__a_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_4 = value_a_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_4_TOP\n"); );
    // Body
    value_a_4 = vlSymsp->TOP.svsimTestbench__DOT__a_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_5 = value_a_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_5_TOP\n"); );
    // Body
    value_a_5 = vlSymsp->TOP.svsimTestbench__DOT__a_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_6 = value_a_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_6_TOP\n"); );
    // Body
    value_a_6 = vlSymsp->TOP.svsimTestbench__DOT__a_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_7 = value_a_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_7_TOP\n"); );
    // Body
    value_a_7 = vlSymsp->TOP.svsimTestbench__DOT__a_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_8 = value_a_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_8_TOP\n"); );
    // Body
    value_a_8 = vlSymsp->TOP.svsimTestbench__DOT__a_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_9 = value_a_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_9_TOP\n"); );
    // Body
    value_a_9 = vlSymsp->TOP.svsimTestbench__DOT__a_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_10 = value_a_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_10_TOP\n"); );
    // Body
    value_a_10 = vlSymsp->TOP.svsimTestbench__DOT__a_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_11 = value_a_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_11_TOP\n"); );
    // Body
    value_a_11 = vlSymsp->TOP.svsimTestbench__DOT__a_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_12 = value_a_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_12_TOP\n"); );
    // Body
    value_a_12 = vlSymsp->TOP.svsimTestbench__DOT__a_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_13 = value_a_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_13_TOP\n"); );
    // Body
    value_a_13 = vlSymsp->TOP.svsimTestbench__DOT__a_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_14 = value_a_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_14_TOP\n"); );
    // Body
    value_a_14 = vlSymsp->TOP.svsimTestbench__DOT__a_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_15 = value_a_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_15_TOP\n"); );
    // Body
    value_a_15 = vlSymsp->TOP.svsimTestbench__DOT__a_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_16 = value_a_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_16_TOP\n"); );
    // Body
    value_a_16 = vlSymsp->TOP.svsimTestbench__DOT__a_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_17 = value_a_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_17_TOP\n"); );
    // Body
    value_a_17 = vlSymsp->TOP.svsimTestbench__DOT__a_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_18 = value_a_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_18_TOP\n"); );
    // Body
    value_a_18 = vlSymsp->TOP.svsimTestbench__DOT__a_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_19 = value_a_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_19_TOP\n"); );
    // Body
    value_a_19 = vlSymsp->TOP.svsimTestbench__DOT__a_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_20 = value_a_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_20_TOP\n"); );
    // Body
    value_a_20 = vlSymsp->TOP.svsimTestbench__DOT__a_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_21 = value_a_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_21_TOP\n"); );
    // Body
    value_a_21 = vlSymsp->TOP.svsimTestbench__DOT__a_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_22 = value_a_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_22_TOP\n"); );
    // Body
    value_a_22 = vlSymsp->TOP.svsimTestbench__DOT__a_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_23 = value_a_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_23_TOP\n"); );
    // Body
    value_a_23 = vlSymsp->TOP.svsimTestbench__DOT__a_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_24_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_24 = value_a_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_24_TOP\n"); );
    // Body
    value_a_24 = vlSymsp->TOP.svsimTestbench__DOT__a_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_25_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_25 = value_a_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_25_TOP\n"); );
    // Body
    value_a_25 = vlSymsp->TOP.svsimTestbench__DOT__a_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_26_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_26 = value_a_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_26_TOP\n"); );
    // Body
    value_a_26 = vlSymsp->TOP.svsimTestbench__DOT__a_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_27_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_27 = value_a_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_27_TOP\n"); );
    // Body
    value_a_27 = vlSymsp->TOP.svsimTestbench__DOT__a_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_28_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_28 = value_a_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_28_TOP\n"); );
    // Body
    value_a_28 = vlSymsp->TOP.svsimTestbench__DOT__a_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_29_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_29 = value_a_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_29_TOP\n"); );
    // Body
    value_a_29 = vlSymsp->TOP.svsimTestbench__DOT__a_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_30_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_30 = value_a_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_30_TOP\n"); );
    // Body
    value_a_30 = vlSymsp->TOP.svsimTestbench__DOT__a_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_a_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_31_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a_31 = value_a_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_a_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_31_TOP\n"); );
    // Body
    value_a_31 = vlSymsp->TOP.svsimTestbench__DOT__a_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_0 = value_b_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_0_TOP\n"); );
    // Body
    value_b_0 = vlSymsp->TOP.svsimTestbench__DOT__b_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_1 = value_b_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_1_TOP\n"); );
    // Body
    value_b_1 = vlSymsp->TOP.svsimTestbench__DOT__b_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_2 = value_b_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_2_TOP\n"); );
    // Body
    value_b_2 = vlSymsp->TOP.svsimTestbench__DOT__b_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_3 = value_b_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_3_TOP\n"); );
    // Body
    value_b_3 = vlSymsp->TOP.svsimTestbench__DOT__b_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_4 = value_b_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_4_TOP\n"); );
    // Body
    value_b_4 = vlSymsp->TOP.svsimTestbench__DOT__b_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_5 = value_b_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_5_TOP\n"); );
    // Body
    value_b_5 = vlSymsp->TOP.svsimTestbench__DOT__b_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_6 = value_b_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_6_TOP\n"); );
    // Body
    value_b_6 = vlSymsp->TOP.svsimTestbench__DOT__b_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_7 = value_b_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_7_TOP\n"); );
    // Body
    value_b_7 = vlSymsp->TOP.svsimTestbench__DOT__b_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_8 = value_b_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_8_TOP\n"); );
    // Body
    value_b_8 = vlSymsp->TOP.svsimTestbench__DOT__b_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_9 = value_b_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_9_TOP\n"); );
    // Body
    value_b_9 = vlSymsp->TOP.svsimTestbench__DOT__b_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_10 = value_b_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_10_TOP\n"); );
    // Body
    value_b_10 = vlSymsp->TOP.svsimTestbench__DOT__b_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_11 = value_b_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_11_TOP\n"); );
    // Body
    value_b_11 = vlSymsp->TOP.svsimTestbench__DOT__b_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_12 = value_b_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_12_TOP\n"); );
    // Body
    value_b_12 = vlSymsp->TOP.svsimTestbench__DOT__b_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_13 = value_b_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_13_TOP\n"); );
    // Body
    value_b_13 = vlSymsp->TOP.svsimTestbench__DOT__b_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_14 = value_b_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_14_TOP\n"); );
    // Body
    value_b_14 = vlSymsp->TOP.svsimTestbench__DOT__b_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_15 = value_b_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_15_TOP\n"); );
    // Body
    value_b_15 = vlSymsp->TOP.svsimTestbench__DOT__b_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_16 = value_b_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_16_TOP\n"); );
    // Body
    value_b_16 = vlSymsp->TOP.svsimTestbench__DOT__b_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_17 = value_b_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_17_TOP\n"); );
    // Body
    value_b_17 = vlSymsp->TOP.svsimTestbench__DOT__b_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_18 = value_b_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_18_TOP\n"); );
    // Body
    value_b_18 = vlSymsp->TOP.svsimTestbench__DOT__b_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_19 = value_b_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_19_TOP\n"); );
    // Body
    value_b_19 = vlSymsp->TOP.svsimTestbench__DOT__b_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_20 = value_b_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_20_TOP\n"); );
    // Body
    value_b_20 = vlSymsp->TOP.svsimTestbench__DOT__b_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_21 = value_b_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_21_TOP\n"); );
    // Body
    value_b_21 = vlSymsp->TOP.svsimTestbench__DOT__b_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_22 = value_b_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_22_TOP\n"); );
    // Body
    value_b_22 = vlSymsp->TOP.svsimTestbench__DOT__b_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_23 = value_b_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_23_TOP\n"); );
    // Body
    value_b_23 = vlSymsp->TOP.svsimTestbench__DOT__b_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_24_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_24 = value_b_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_24_TOP\n"); );
    // Body
    value_b_24 = vlSymsp->TOP.svsimTestbench__DOT__b_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_25_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_25 = value_b_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_25_TOP\n"); );
    // Body
    value_b_25 = vlSymsp->TOP.svsimTestbench__DOT__b_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_26_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_26 = value_b_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_26_TOP\n"); );
    // Body
    value_b_26 = vlSymsp->TOP.svsimTestbench__DOT__b_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_27_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_27 = value_b_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_27_TOP\n"); );
    // Body
    value_b_27 = vlSymsp->TOP.svsimTestbench__DOT__b_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_28_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_28 = value_b_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_28_TOP\n"); );
    // Body
    value_b_28 = vlSymsp->TOP.svsimTestbench__DOT__b_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_29_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_29 = value_b_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_29_TOP\n"); );
    // Body
    value_b_29 = vlSymsp->TOP.svsimTestbench__DOT__b_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_30_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_30 = value_b_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_30_TOP\n"); );
    // Body
    value_b_30 = vlSymsp->TOP.svsimTestbench__DOT__b_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_b_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_31_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b_31 = value_b_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_b_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_31_TOP\n"); );
    // Body
    value_b_31 = vlSymsp->TOP.svsimTestbench__DOT__b_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_comparisonResult_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_comparisonResult_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_comparisonResult_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_comparisonResult_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_comparisonResult_0_TOP\n"); );
    // Body
    value_comparisonResult_0 = ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__result0__DOT__a) 
                                | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterThroughSign__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__b_31)) 
                                   | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__b)) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__b)))));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_comparisonResult_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_comparisonResult_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_comparisonResult_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_comparisonResult_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_comparisonResult_1_TOP\n"); );
    // Body
    value_comparisonResult_1 = ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__result0__DOT__a) 
                                | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterThroughSign__DOT__a) 
                                    & (IData)(vlSymsp->TOP.svsimTestbench__DOT__a_31)) 
                                   | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__a) 
                                       & (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__b)) 
                                      | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__a) 
                                         & (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__b)))));
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
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_1__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_1__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_2__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_2__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_3__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_3__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_4__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_4__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_5__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_5__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_6__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_6__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_7__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_7__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_8__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_8__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_9__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_9__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_10__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_10__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_11__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_11__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_12__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_12__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_13__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_13__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_14__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_14__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_15__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_15__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_16__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_16__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_17__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_17__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_18__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_18__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_19__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_19__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_20__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_20__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_21__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_21__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_22__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_22__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_23__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_23__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_24__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_24__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_25__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_25__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_26__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_26__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_27__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_27__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_28__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_28__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_29__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_29__DOT__a = 0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_30__DOT__a;
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_30__DOT__a = 0;
    // Body
    vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterThroughSign__DOT__a 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__a_31) 
           ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_31));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__a 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__a_31) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__b_31));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__result0__DOT__a 
        = ((((((((((IData)(vlSelfRef.svsimTestbench__DOT__a_23) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__a_24)) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__a_25)) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__a_26)) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__a_27)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__a_28)) 
              & (IData)(vlSelfRef.svsimTestbench__DOT__a_29)) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__a_30)) 
            & (((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__a_0) 
                                    | (IData)(vlSelfRef.svsimTestbench__DOT__a_1)) 
                                   | (IData)(vlSelfRef.svsimTestbench__DOT__a_2)) 
                                  | (IData)(vlSelfRef.svsimTestbench__DOT__a_3)) 
                                 | (IData)(vlSelfRef.svsimTestbench__DOT__a_4)) 
                                | (IData)(vlSelfRef.svsimTestbench__DOT__a_5)) 
                               | (IData)(vlSelfRef.svsimTestbench__DOT__a_6)) 
                              | (IData)(vlSelfRef.svsimTestbench__DOT__a_7)) 
                             | (IData)(vlSelfRef.svsimTestbench__DOT__a_8)) 
                            | (IData)(vlSelfRef.svsimTestbench__DOT__a_9)) 
                           | (IData)(vlSelfRef.svsimTestbench__DOT__a_10)) 
                          | (IData)(vlSelfRef.svsimTestbench__DOT__a_11)) 
                         | (IData)(vlSelfRef.svsimTestbench__DOT__a_12)) 
                        | (IData)(vlSelfRef.svsimTestbench__DOT__a_13)) 
                       | (IData)(vlSelfRef.svsimTestbench__DOT__a_14)) 
                      | (IData)(vlSelfRef.svsimTestbench__DOT__a_15)) 
                     | (IData)(vlSelfRef.svsimTestbench__DOT__a_16)) 
                    | (IData)(vlSelfRef.svsimTestbench__DOT__a_17)) 
                   | (IData)(vlSelfRef.svsimTestbench__DOT__a_18)) 
                  | (IData)(vlSelfRef.svsimTestbench__DOT__a_19)) 
                 | (IData)(vlSelfRef.svsimTestbench__DOT__a_20)) 
                | (IData)(vlSelfRef.svsimTestbench__DOT__a_21)) 
               | (IData)(vlSelfRef.svsimTestbench__DOT__a_22))) 
           | (((((((((IData)(vlSelfRef.svsimTestbench__DOT__b_23) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__b_24)) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__b_25)) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__b_26)) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__b_27)) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__b_28)) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__b_29)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__b_30)) 
              & (((((((((((((((((((((((IData)(vlSelfRef.svsimTestbench__DOT__b_0) 
                                      | (IData)(vlSelfRef.svsimTestbench__DOT__b_1)) 
                                     | (IData)(vlSelfRef.svsimTestbench__DOT__b_2)) 
                                    | (IData)(vlSelfRef.svsimTestbench__DOT__b_3)) 
                                   | (IData)(vlSelfRef.svsimTestbench__DOT__b_4)) 
                                  | (IData)(vlSelfRef.svsimTestbench__DOT__b_5)) 
                                 | (IData)(vlSelfRef.svsimTestbench__DOT__b_6)) 
                                | (IData)(vlSelfRef.svsimTestbench__DOT__b_7)) 
                               | (IData)(vlSelfRef.svsimTestbench__DOT__b_8)) 
                              | (IData)(vlSelfRef.svsimTestbench__DOT__b_9)) 
                             | (IData)(vlSelfRef.svsimTestbench__DOT__b_10)) 
                            | (IData)(vlSelfRef.svsimTestbench__DOT__b_11)) 
                           | (IData)(vlSelfRef.svsimTestbench__DOT__b_12)) 
                          | (IData)(vlSelfRef.svsimTestbench__DOT__b_13)) 
                         | (IData)(vlSelfRef.svsimTestbench__DOT__b_14)) 
                        | (IData)(vlSelfRef.svsimTestbench__DOT__b_15)) 
                       | (IData)(vlSelfRef.svsimTestbench__DOT__b_16)) 
                      | (IData)(vlSelfRef.svsimTestbench__DOT__b_17)) 
                     | (IData)(vlSelfRef.svsimTestbench__DOT__b_18)) 
                    | (IData)(vlSelfRef.svsimTestbench__DOT__b_19)) 
                   | (IData)(vlSelfRef.svsimTestbench__DOT__b_20)) 
                  | (IData)(vlSelfRef.svsimTestbench__DOT__b_21)) 
                 | (IData)(vlSelfRef.svsimTestbench__DOT__b_22))));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_1__DOT__a 
        = (1U & (~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_30) 
                    ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_30))));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__a 
        = (1U & ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__a)) 
                 & (~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterThroughSign__DOT__a))));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_2__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_29) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_29))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_1__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_3__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_28) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_28))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_2__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_4__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_27) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_27))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_3__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_5__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_26) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_26))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_4__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_6__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_25) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_25))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_5__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_7__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_24) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_24))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_6__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_8__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_23) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_23))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_7__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_9__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_22) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_22))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_8__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_10__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_21) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_21))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_9__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_11__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_20) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_20))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_10__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_12__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_19) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_19))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_11__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_13__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_18) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_18))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_12__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_14__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_17) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_17))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_13__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_15__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_16) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_16))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_14__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_16__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_15) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_15))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_15__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_17__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_14) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_14))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_16__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_18__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_13) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_13))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_17__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_19__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_12) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_12))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_18__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_20__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_11) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_11))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_19__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_21__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_10) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_10))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_20__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_22__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_9) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_9))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_21__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_23__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_8) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_8))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_22__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_24__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_7) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_7))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_23__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_25__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_6) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_6))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_24__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_26__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_5) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_5))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_25__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_27__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_4) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_4))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_26__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_28__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_3) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_3))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_27__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_29__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_2) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_2))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_28__DOT__a));
    svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_30__DOT__a 
        = ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_1) 
               ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_1))) 
           & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_29__DOT__a));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__b 
        = ((((((((((((((((((((((((((((((((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_30)) 
                                         & (IData)(vlSelfRef.svsimTestbench__DOT__a_30)) 
                                        | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_29)) 
                                           & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_1__DOT__a) 
                                              & (IData)(vlSelfRef.svsimTestbench__DOT__a_29)))) 
                                       | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_28)) 
                                          & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_2__DOT__a) 
                                             & (IData)(vlSelfRef.svsimTestbench__DOT__a_28)))) 
                                      | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_27)) 
                                         & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_3__DOT__a) 
                                            & (IData)(vlSelfRef.svsimTestbench__DOT__a_27)))) 
                                     | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_26)) 
                                        & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_4__DOT__a) 
                                           & (IData)(vlSelfRef.svsimTestbench__DOT__a_26)))) 
                                    | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_25)) 
                                       & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_5__DOT__a) 
                                          & (IData)(vlSelfRef.svsimTestbench__DOT__a_25)))) 
                                   | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_24)) 
                                      & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_6__DOT__a) 
                                         & (IData)(vlSelfRef.svsimTestbench__DOT__a_24)))) 
                                  | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_23)) 
                                     & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_7__DOT__a) 
                                        & (IData)(vlSelfRef.svsimTestbench__DOT__a_23)))) 
                                 | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_22)) 
                                    & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_8__DOT__a) 
                                       & (IData)(vlSelfRef.svsimTestbench__DOT__a_22)))) 
                                | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_21)) 
                                   & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_9__DOT__a) 
                                      & (IData)(vlSelfRef.svsimTestbench__DOT__a_21)))) 
                               | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_20)) 
                                  & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_10__DOT__a) 
                                     & (IData)(vlSelfRef.svsimTestbench__DOT__a_20)))) 
                              | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_19)) 
                                 & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_11__DOT__a) 
                                    & (IData)(vlSelfRef.svsimTestbench__DOT__a_19)))) 
                             | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_18)) 
                                & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_12__DOT__a) 
                                   & (IData)(vlSelfRef.svsimTestbench__DOT__a_18)))) 
                            | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_17)) 
                               & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_13__DOT__a) 
                                  & (IData)(vlSelfRef.svsimTestbench__DOT__a_17)))) 
                           | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_16)) 
                              & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_14__DOT__a) 
                                 & (IData)(vlSelfRef.svsimTestbench__DOT__a_16)))) 
                          | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_15)) 
                             & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_15__DOT__a) 
                                & (IData)(vlSelfRef.svsimTestbench__DOT__a_15)))) 
                         | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_14)) 
                            & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_16__DOT__a) 
                               & (IData)(vlSelfRef.svsimTestbench__DOT__a_14)))) 
                        | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_13)) 
                           & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_17__DOT__a) 
                              & (IData)(vlSelfRef.svsimTestbench__DOT__a_13)))) 
                       | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_12)) 
                          & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_18__DOT__a) 
                             & (IData)(vlSelfRef.svsimTestbench__DOT__a_12)))) 
                      | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_11)) 
                         & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_19__DOT__a) 
                            & (IData)(vlSelfRef.svsimTestbench__DOT__a_11)))) 
                     | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_10)) 
                        & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_20__DOT__a) 
                           & (IData)(vlSelfRef.svsimTestbench__DOT__a_10)))) 
                    | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_9)) 
                       & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_21__DOT__a) 
                          & (IData)(vlSelfRef.svsimTestbench__DOT__a_9)))) 
                   | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_8)) 
                      & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_22__DOT__a) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__a_8)))) 
                  | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_7)) 
                     & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_23__DOT__a) 
                        & (IData)(vlSelfRef.svsimTestbench__DOT__a_7)))) 
                 | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_6)) 
                    & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_24__DOT__a) 
                       & (IData)(vlSelfRef.svsimTestbench__DOT__a_6)))) 
                | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_5)) 
                   & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_25__DOT__a) 
                      & (IData)(vlSelfRef.svsimTestbench__DOT__a_5)))) 
               | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_4)) 
                  & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_26__DOT__a) 
                     & (IData)(vlSelfRef.svsimTestbench__DOT__a_4)))) 
              | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_3)) 
                 & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_27__DOT__a) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__a_3)))) 
             | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_2)) 
                & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_28__DOT__a) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__a_2)))) 
            | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_1)) 
               & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_29__DOT__a) 
                  & (IData)(vlSelfRef.svsimTestbench__DOT__a_1)))) 
           | ((~ (IData)(vlSelfRef.svsimTestbench__DOT__b_0)) 
              & ((IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_30__DOT__a) 
                 & (IData)(vlSelfRef.svsimTestbench__DOT__a_0))));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterWhenNeg__DOT__b 
        = (1U & ((~ ((~ ((IData)(vlSelfRef.svsimTestbench__DOT__a_0) 
                         ^ (IData)(vlSelfRef.svsimTestbench__DOT__b_0))) 
                     & (IData)(svsimTestbench__DOT__dut__DOT__compMag__DOT__eqAnd_30__DOT__a))) 
                 & (~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__greaterWhenPos__DOT__b))));
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
                                                                                "/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FloatingPointComparisonTest/should-compare-1.0-and-1.0-correctly/workdir-verilator/../generated-sources/testbench.sv", 0x00000512U);
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
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FloatingPointComparisonTest/should-compare-1.0-and-1.0-correctly/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VsvsimTestbench___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FloatingPointComparisonTest/should-compare-1.0-and-1.0-correctly/workdir-verilator/../generated-sources/testbench.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/FloatingPointComparisonTest/should-compare-1.0-and-1.0-correctly/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Active region did not converge after 100 tries");
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
