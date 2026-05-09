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

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_0 
        = value_signedMagnitude_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_0_TOP\n"); );
    // Body
    value_signedMagnitude_0 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_1 
        = value_signedMagnitude_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_1_TOP\n"); );
    // Body
    value_signedMagnitude_1 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_2 
        = value_signedMagnitude_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_2_TOP\n"); );
    // Body
    value_signedMagnitude_2 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_3 
        = value_signedMagnitude_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_3_TOP\n"); );
    // Body
    value_signedMagnitude_3 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_4 
        = value_signedMagnitude_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_4_TOP\n"); );
    // Body
    value_signedMagnitude_4 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_5 
        = value_signedMagnitude_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_5_TOP\n"); );
    // Body
    value_signedMagnitude_5 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_6 
        = value_signedMagnitude_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_6_TOP\n"); );
    // Body
    value_signedMagnitude_6 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_7 
        = value_signedMagnitude_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_7_TOP\n"); );
    // Body
    value_signedMagnitude_7 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_8 
        = value_signedMagnitude_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_8_TOP\n"); );
    // Body
    value_signedMagnitude_8 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_9 
        = value_signedMagnitude_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_9_TOP\n"); );
    // Body
    value_signedMagnitude_9 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_10 
        = value_signedMagnitude_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_10_TOP\n"); );
    // Body
    value_signedMagnitude_10 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_11 
        = value_signedMagnitude_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_11_TOP\n"); );
    // Body
    value_signedMagnitude_11 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_12 
        = value_signedMagnitude_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_12_TOP\n"); );
    // Body
    value_signedMagnitude_12 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_13 
        = value_signedMagnitude_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_13_TOP\n"); );
    // Body
    value_signedMagnitude_13 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_14 
        = value_signedMagnitude_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_14_TOP\n"); );
    // Body
    value_signedMagnitude_14 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_15 
        = value_signedMagnitude_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_15_TOP\n"); );
    // Body
    value_signedMagnitude_15 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_16 
        = value_signedMagnitude_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_16_TOP\n"); );
    // Body
    value_signedMagnitude_16 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_17 
        = value_signedMagnitude_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_17_TOP\n"); );
    // Body
    value_signedMagnitude_17 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_18 
        = value_signedMagnitude_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_18_TOP\n"); );
    // Body
    value_signedMagnitude_18 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_19 
        = value_signedMagnitude_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_19_TOP\n"); );
    // Body
    value_signedMagnitude_19 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_20 
        = value_signedMagnitude_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_20_TOP\n"); );
    // Body
    value_signedMagnitude_20 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_21 
        = value_signedMagnitude_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_21_TOP\n"); );
    // Body
    value_signedMagnitude_21 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_22 
        = value_signedMagnitude_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_22_TOP\n"); );
    // Body
    value_signedMagnitude_22 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_23 
        = value_signedMagnitude_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_23_TOP\n"); );
    // Body
    value_signedMagnitude_23 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_24_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_24 
        = value_signedMagnitude_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_24_TOP\n"); );
    // Body
    value_signedMagnitude_24 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_25_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_25 
        = value_signedMagnitude_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_25_TOP\n"); );
    // Body
    value_signedMagnitude_25 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_26_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_26 
        = value_signedMagnitude_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_26_TOP\n"); );
    // Body
    value_signedMagnitude_26 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_27_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_27 
        = value_signedMagnitude_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_27_TOP\n"); );
    // Body
    value_signedMagnitude_27 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_28_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_28 
        = value_signedMagnitude_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_28_TOP\n"); );
    // Body
    value_signedMagnitude_28 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_29_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_29 
        = value_signedMagnitude_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_29_TOP\n"); );
    // Body
    value_signedMagnitude_29 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_30_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_30 
        = value_signedMagnitude_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_30_TOP\n"); );
    // Body
    value_signedMagnitude_30 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_signedMagnitude_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_signedMagnitude_31_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31 
        = value_signedMagnitude_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_31_TOP\n"); );
    // Body
    value_signedMagnitude_31 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_0_TOP\n"); );
    // Body
    value_onesComplement_0 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_0)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_0)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_1_TOP\n"); );
    // Body
    value_onesComplement_1 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_1)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_1)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_2_TOP\n"); );
    // Body
    value_onesComplement_2 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_2)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_2)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_3_TOP\n"); );
    // Body
    value_onesComplement_3 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_3)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_3)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_4_TOP\n"); );
    // Body
    value_onesComplement_4 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_4)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_4)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_5_TOP\n"); );
    // Body
    value_onesComplement_5 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_5)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_5)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_6_TOP\n"); );
    // Body
    value_onesComplement_6 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_6)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_6)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_7_TOP\n"); );
    // Body
    value_onesComplement_7 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_7)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_7)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_8_TOP\n"); );
    // Body
    value_onesComplement_8 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_8)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_8)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_9_TOP\n"); );
    // Body
    value_onesComplement_9 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_9)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_9)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_10_TOP\n"); );
    // Body
    value_onesComplement_10 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_10)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_10)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_11_TOP\n"); );
    // Body
    value_onesComplement_11 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_11)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_11)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_12_TOP\n"); );
    // Body
    value_onesComplement_12 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_12)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_12)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_13_TOP\n"); );
    // Body
    value_onesComplement_13 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_13)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_13)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_14_TOP\n"); );
    // Body
    value_onesComplement_14 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_14)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_14)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_15_TOP\n"); );
    // Body
    value_onesComplement_15 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_15)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_15)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_16_TOP\n"); );
    // Body
    value_onesComplement_16 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_16)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_16)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_17_TOP\n"); );
    // Body
    value_onesComplement_17 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_17)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_17)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_18_TOP\n"); );
    // Body
    value_onesComplement_18 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_18)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_18)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_19_TOP\n"); );
    // Body
    value_onesComplement_19 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_19)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_19)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_20_TOP\n"); );
    // Body
    value_onesComplement_20 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_20)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_20)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_21_TOP\n"); );
    // Body
    value_onesComplement_21 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_21)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_21)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_22_TOP\n"); );
    // Body
    value_onesComplement_22 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_22)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_22)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_23_TOP\n"); );
    // Body
    value_onesComplement_23 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_23)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_23)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_24_TOP\n"); );
    // Body
    value_onesComplement_24 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_24)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_24)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_25_TOP\n"); );
    // Body
    value_onesComplement_25 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_25)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_25)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_26_TOP\n"); );
    // Body
    value_onesComplement_26 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_26)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_26)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_27_TOP\n"); );
    // Body
    value_onesComplement_27 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_27)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_27)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_28_TOP\n"); );
    // Body
    value_onesComplement_28 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_28)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_28)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_29_TOP\n"); );
    // Body
    value_onesComplement_29 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_29)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_29)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_30_TOP\n"); );
    // Body
    value_onesComplement_30 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_30)) 
                               | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_30)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_31_TOP\n"); );
    // Body
    value_onesComplement_31 = vlSymsp->TOP.svsimTestbench__DOT__signedMagnitude_31;
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
                                                                                "/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/SignedMagnitudeToOnesComplementTest/SignedMagnitudeToOnesComplement/should-convert-2147483647-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 0x00000456U);
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
        VsvsimTestbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VsvsimTestbench___024root___eval(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/SignedMagnitudeToOnesComplementTest/SignedMagnitudeToOnesComplement/should-convert-2147483647-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/SignedMagnitudeToOnesComplementTest/SignedMagnitudeToOnesComplement/should-convert-2147483647-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Active region did not converge after 100 tries");
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
