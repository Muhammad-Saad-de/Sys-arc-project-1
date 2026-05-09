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

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_0 
        = value_onesComplement_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_0_TOP\n"); );
    // Body
    value_onesComplement_0 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_1 
        = value_onesComplement_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_1_TOP\n"); );
    // Body
    value_onesComplement_1 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_2 
        = value_onesComplement_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_2_TOP\n"); );
    // Body
    value_onesComplement_2 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_3 
        = value_onesComplement_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_3_TOP\n"); );
    // Body
    value_onesComplement_3 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_4 
        = value_onesComplement_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_4_TOP\n"); );
    // Body
    value_onesComplement_4 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_5 
        = value_onesComplement_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_5_TOP\n"); );
    // Body
    value_onesComplement_5 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_6 
        = value_onesComplement_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_6_TOP\n"); );
    // Body
    value_onesComplement_6 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_7 
        = value_onesComplement_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_7_TOP\n"); );
    // Body
    value_onesComplement_7 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_8 
        = value_onesComplement_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_8_TOP\n"); );
    // Body
    value_onesComplement_8 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_9 
        = value_onesComplement_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_9_TOP\n"); );
    // Body
    value_onesComplement_9 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_10 
        = value_onesComplement_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_10_TOP\n"); );
    // Body
    value_onesComplement_10 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_11 
        = value_onesComplement_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_11_TOP\n"); );
    // Body
    value_onesComplement_11 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_12 
        = value_onesComplement_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_12_TOP\n"); );
    // Body
    value_onesComplement_12 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_13 
        = value_onesComplement_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_13_TOP\n"); );
    // Body
    value_onesComplement_13 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_14 
        = value_onesComplement_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_14_TOP\n"); );
    // Body
    value_onesComplement_14 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_15 
        = value_onesComplement_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_15_TOP\n"); );
    // Body
    value_onesComplement_15 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_16 
        = value_onesComplement_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_16_TOP\n"); );
    // Body
    value_onesComplement_16 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_17 
        = value_onesComplement_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_17_TOP\n"); );
    // Body
    value_onesComplement_17 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_18 
        = value_onesComplement_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_18_TOP\n"); );
    // Body
    value_onesComplement_18 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_19 
        = value_onesComplement_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_19_TOP\n"); );
    // Body
    value_onesComplement_19 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_20 
        = value_onesComplement_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_20_TOP\n"); );
    // Body
    value_onesComplement_20 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_21 
        = value_onesComplement_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_21_TOP\n"); );
    // Body
    value_onesComplement_21 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_22 
        = value_onesComplement_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_22_TOP\n"); );
    // Body
    value_onesComplement_22 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_23 
        = value_onesComplement_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_23_TOP\n"); );
    // Body
    value_onesComplement_23 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_24_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_24 
        = value_onesComplement_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_24_TOP\n"); );
    // Body
    value_onesComplement_24 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_25_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_25 
        = value_onesComplement_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_25_TOP\n"); );
    // Body
    value_onesComplement_25 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_26_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_26 
        = value_onesComplement_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_26_TOP\n"); );
    // Body
    value_onesComplement_26 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_27_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_27 
        = value_onesComplement_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_27_TOP\n"); );
    // Body
    value_onesComplement_27 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_28_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_28 
        = value_onesComplement_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_28_TOP\n"); );
    // Body
    value_onesComplement_28 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_29_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_29 
        = value_onesComplement_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_29_TOP\n"); );
    // Body
    value_onesComplement_29 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_30_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_30 
        = value_onesComplement_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_30_TOP\n"); );
    // Body
    value_onesComplement_30 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_onesComplement_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_onesComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_onesComplement_31_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31 
        = value_onesComplement_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_onesComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_onesComplement_31_TOP\n"); );
    // Body
    value_onesComplement_31 = vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_0_TOP\n"); );
    // Body
    value_twosComplement_0 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_0)) 
                              | ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_0)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_1_TOP\n"); );
    // Body
    value_twosComplement_1 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_1)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_0) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_1)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_2_TOP\n"); );
    // Body
    value_twosComplement_2 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_2)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_2) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_1_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_3_TOP\n"); );
    // Body
    value_twosComplement_3 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_3)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_3) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_2_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_4_TOP\n"); );
    // Body
    value_twosComplement_4 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_4)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_4) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_3_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_5_TOP\n"); );
    // Body
    value_twosComplement_5 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_5)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_5) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_4_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_6_TOP\n"); );
    // Body
    value_twosComplement_6 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_6)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_6) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_5_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_7_TOP\n"); );
    // Body
    value_twosComplement_7 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_7)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_7) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_6_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_8_TOP\n"); );
    // Body
    value_twosComplement_8 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_8)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_8) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_7_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_9_TOP\n"); );
    // Body
    value_twosComplement_9 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_9)) 
                              | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_9) 
                                  ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_8_cout)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_10_TOP\n"); );
    // Body
    value_twosComplement_10 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_10)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_10) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_9_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_11_TOP\n"); );
    // Body
    value_twosComplement_11 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_11)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_11) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_10_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_12_TOP\n"); );
    // Body
    value_twosComplement_12 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_12)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_12) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_11_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_13_TOP\n"); );
    // Body
    value_twosComplement_13 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_13)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_13) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_12_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_14_TOP\n"); );
    // Body
    value_twosComplement_14 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_14)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_14) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_13_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_15_TOP\n"); );
    // Body
    value_twosComplement_15 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_15)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_15) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_14_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_16_TOP\n"); );
    // Body
    value_twosComplement_16 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_16)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_16) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_15_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_17_TOP\n"); );
    // Body
    value_twosComplement_17 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_17)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_17) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_16_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_18_TOP\n"); );
    // Body
    value_twosComplement_18 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_18)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_18) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_17_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_19_TOP\n"); );
    // Body
    value_twosComplement_19 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_19)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_19) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_18_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_20_TOP\n"); );
    // Body
    value_twosComplement_20 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_20)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_20) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_19_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_21_TOP\n"); );
    // Body
    value_twosComplement_21 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_21)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_21) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_20_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_22_TOP\n"); );
    // Body
    value_twosComplement_22 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_22)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_22) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_21_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_23_TOP\n"); );
    // Body
    value_twosComplement_23 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_23)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_23) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_22_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_24_TOP\n"); );
    // Body
    value_twosComplement_24 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_24)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_24) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_23_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_25_TOP\n"); );
    // Body
    value_twosComplement_25 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_25)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_25) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_24_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_26_TOP\n"); );
    // Body
    value_twosComplement_26 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_26)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_26) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_25_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_27_TOP\n"); );
    // Body
    value_twosComplement_27 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_27)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_27) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_26_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_28_TOP\n"); );
    // Body
    value_twosComplement_28 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_28)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_28) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_27_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_29_TOP\n"); );
    // Body
    value_twosComplement_29 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_29)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_29) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_28_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_30_TOP\n"); );
    // Body
    value_twosComplement_30 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_30)) 
                               | (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_30) 
                                   ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_29_cout)) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_31_TOP\n"); );
    // Body
    value_twosComplement_31 = (((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31) 
                                ^ ((IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_30) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT___fa_29_cout))) 
                               & (IData)(vlSymsp->TOP.svsimTestbench__DOT__onesComplement_31));
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
    // Body
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_1_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_0) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_1));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_2_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_2) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_1_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_3_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_3) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_2_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_4_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_4) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_3_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_5_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_5) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_4_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_6_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_6) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_5_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_7_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_7) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_6_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_8_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_8) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_7_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_9_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_9) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_8_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_10_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_10) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_9_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_11_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_11) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_10_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_12_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_12) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_11_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_13_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_13) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_12_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_14_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_14) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_13_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_15_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_15) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_14_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_16_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_16) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_15_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_17_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_17) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_16_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_18_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_18) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_17_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_19_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_19) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_18_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_20_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_20) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_19_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_21_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_21) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_20_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_22_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_22) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_21_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_23_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_23) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_22_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_24_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_24) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_23_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_25_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_25) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_24_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_26_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_26) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_25_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_27_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_27) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_26_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_28_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_28) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_27_cout));
    vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_29_cout 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__onesComplement_29) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT___fa_28_cout));
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
                                                                                "/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/OnesComplementToTwosComplementTest/OnesComplementToTwosComplement/should-convert-1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 0x00000456U);
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
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/OnesComplementToTwosComplementTest/OnesComplementToTwosComplement/should-convert-1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VsvsimTestbench___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/OnesComplementToTwosComplementTest/OnesComplementToTwosComplement/should-convert-1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/OnesComplementToTwosComplementTest/OnesComplementToTwosComplement/should-convert-1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Active region did not converge after 100 tries");
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
