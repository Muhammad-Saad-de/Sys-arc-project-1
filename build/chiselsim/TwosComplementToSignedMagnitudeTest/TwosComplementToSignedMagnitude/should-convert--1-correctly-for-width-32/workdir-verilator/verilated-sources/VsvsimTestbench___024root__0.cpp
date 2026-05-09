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

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_0 
        = value_twosComplement_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_0_TOP\n"); );
    // Body
    value_twosComplement_0 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_1 
        = value_twosComplement_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_1_TOP\n"); );
    // Body
    value_twosComplement_1 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_2 
        = value_twosComplement_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_2_TOP\n"); );
    // Body
    value_twosComplement_2 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_3 
        = value_twosComplement_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_3_TOP\n"); );
    // Body
    value_twosComplement_3 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_4 
        = value_twosComplement_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_4_TOP\n"); );
    // Body
    value_twosComplement_4 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_5 
        = value_twosComplement_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_5_TOP\n"); );
    // Body
    value_twosComplement_5 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_6 
        = value_twosComplement_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_6_TOP\n"); );
    // Body
    value_twosComplement_6 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_7 
        = value_twosComplement_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_7_TOP\n"); );
    // Body
    value_twosComplement_7 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_8 
        = value_twosComplement_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_8_TOP\n"); );
    // Body
    value_twosComplement_8 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_9 
        = value_twosComplement_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_9_TOP\n"); );
    // Body
    value_twosComplement_9 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_10 
        = value_twosComplement_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_10_TOP\n"); );
    // Body
    value_twosComplement_10 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_11 
        = value_twosComplement_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_11_TOP\n"); );
    // Body
    value_twosComplement_11 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_12 
        = value_twosComplement_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_12_TOP\n"); );
    // Body
    value_twosComplement_12 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_13 
        = value_twosComplement_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_13_TOP\n"); );
    // Body
    value_twosComplement_13 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_14 
        = value_twosComplement_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_14_TOP\n"); );
    // Body
    value_twosComplement_14 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_15 
        = value_twosComplement_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_15_TOP\n"); );
    // Body
    value_twosComplement_15 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_16 
        = value_twosComplement_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_16_TOP\n"); );
    // Body
    value_twosComplement_16 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_17 
        = value_twosComplement_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_17_TOP\n"); );
    // Body
    value_twosComplement_17 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_18 
        = value_twosComplement_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_18_TOP\n"); );
    // Body
    value_twosComplement_18 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_19 
        = value_twosComplement_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_19_TOP\n"); );
    // Body
    value_twosComplement_19 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_20 
        = value_twosComplement_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_20_TOP\n"); );
    // Body
    value_twosComplement_20 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_21 
        = value_twosComplement_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_21_TOP\n"); );
    // Body
    value_twosComplement_21 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_22 
        = value_twosComplement_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_22_TOP\n"); );
    // Body
    value_twosComplement_22 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_23 
        = value_twosComplement_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_23_TOP\n"); );
    // Body
    value_twosComplement_23 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_24_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_24 
        = value_twosComplement_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_24_TOP\n"); );
    // Body
    value_twosComplement_24 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_24;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_25_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_25 
        = value_twosComplement_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_25_TOP\n"); );
    // Body
    value_twosComplement_25 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_25;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_26_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_26 
        = value_twosComplement_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_26_TOP\n"); );
    // Body
    value_twosComplement_26 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_26;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_27_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_27 
        = value_twosComplement_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_27_TOP\n"); );
    // Body
    value_twosComplement_27 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_27;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_28_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_28 
        = value_twosComplement_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_28_TOP\n"); );
    // Body
    value_twosComplement_28 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_28;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_29_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_29 
        = value_twosComplement_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_29_TOP\n"); );
    // Body
    value_twosComplement_29 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_29;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_30_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_30 
        = value_twosComplement_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_30_TOP\n"); );
    // Body
    value_twosComplement_30 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_30;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_twosComplement_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_twosComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_twosComplement_31_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31 
        = value_twosComplement_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_twosComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_twosComplement_31_TOP\n"); );
    // Body
    value_twosComplement_31 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_0_TOP\n"); );
    // Body
    value_signedMagnitude_0 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_0)) 
                               | ((IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_0) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_1_TOP\n"); );
    // Body
    value_signedMagnitude_1 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_1)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_1)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_0))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_2_TOP\n"); );
    // Body
    value_signedMagnitude_2 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_2)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_2)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_2__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_3_TOP\n"); );
    // Body
    value_signedMagnitude_3 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_3)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_3)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_3__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_4_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_4_TOP\n"); );
    // Body
    value_signedMagnitude_4 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_4)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_4)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_4__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_5_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_5_TOP\n"); );
    // Body
    value_signedMagnitude_5 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_5)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_5)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_5__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_6_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_6_TOP\n"); );
    // Body
    value_signedMagnitude_6 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_6)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_6)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_6__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_7_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_7_TOP\n"); );
    // Body
    value_signedMagnitude_7 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_7)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_7)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_7__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_8_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_8_TOP\n"); );
    // Body
    value_signedMagnitude_8 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_8)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_8)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_8__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_9_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_9_TOP\n"); );
    // Body
    value_signedMagnitude_9 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_9)) 
                               | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_9)) 
                                      ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_9__DOT__ha2__DOT__b))) 
                                  & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_10_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_10_TOP\n"); );
    // Body
    value_signedMagnitude_10 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_10)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_10)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_10__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_11_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_11_TOP\n"); );
    // Body
    value_signedMagnitude_11 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_11)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_11)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_11__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_12_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_12_TOP\n"); );
    // Body
    value_signedMagnitude_12 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_12)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_12)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_12__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_13_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_13_TOP\n"); );
    // Body
    value_signedMagnitude_13 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_13)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_13)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_13__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_14_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_14_TOP\n"); );
    // Body
    value_signedMagnitude_14 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_14)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_14)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_14__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_15_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_15_TOP\n"); );
    // Body
    value_signedMagnitude_15 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_15)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_15)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_15__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_16_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_16_TOP\n"); );
    // Body
    value_signedMagnitude_16 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_16)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_16)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_16__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_17_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_17_TOP\n"); );
    // Body
    value_signedMagnitude_17 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_17)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_17)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_17__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_18_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_18_TOP\n"); );
    // Body
    value_signedMagnitude_18 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_18)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_18)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_18__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_19_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_19_TOP\n"); );
    // Body
    value_signedMagnitude_19 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_19)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_19)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_19__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_20_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_20_TOP\n"); );
    // Body
    value_signedMagnitude_20 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_20)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_20)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_20__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_21_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_21_TOP\n"); );
    // Body
    value_signedMagnitude_21 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_21)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_21)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_21__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_22_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_22_TOP\n"); );
    // Body
    value_signedMagnitude_22 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_22)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_22)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_22__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_23_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_23_TOP\n"); );
    // Body
    value_signedMagnitude_23 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_23)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_23)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_23__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_24_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_24_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_24_TOP\n"); );
    // Body
    value_signedMagnitude_24 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_24)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_24)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_24__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_25_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_25_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_25_TOP\n"); );
    // Body
    value_signedMagnitude_25 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_25)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_25)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_25__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_26_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_26_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_26_TOP\n"); );
    // Body
    value_signedMagnitude_26 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_26)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_26)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_26__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_27_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_27_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_27_TOP\n"); );
    // Body
    value_signedMagnitude_27 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_27)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_27)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_27__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_28_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_28_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_28_TOP\n"); );
    // Body
    value_signedMagnitude_28 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_28)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_28)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_28__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_29_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_29_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_29_TOP\n"); );
    // Body
    value_signedMagnitude_29 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_29)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_29)) 
                                       ^ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_29__DOT__ha2__DOT__b))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_30_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_30_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_30_TOP\n"); );
    // Body
    value_signedMagnitude_30 = (((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)) 
                                 & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_30)) 
                                | ((~ ((~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_30)) 
                                       ^ ((IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_29) 
                                          | (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__fa_29__DOT__ha2__DOT__b)))) 
                                   & (IData)(vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_signedMagnitude_31_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_31_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_signedMagnitude_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_signedMagnitude_31_TOP\n"); );
    // Body
    value_signedMagnitude_31 = vlSymsp->TOP.svsimTestbench__DOT__twosComplement_31;
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
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_2__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_1) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_0));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_3__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_2) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_2__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_4__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_3) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_3__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_5__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_4) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_4__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_6__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_5) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_5__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_7__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_6) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_6__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_8__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_7) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_7__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_9__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_8) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_8__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_10__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_9) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_9__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_11__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_10) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_10__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_12__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_11) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_11__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_13__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_12) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_12__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_14__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_13) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_13__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_15__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_14) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_14__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_16__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_15) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_15__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_17__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_16) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_16__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_18__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_17) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_17__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_19__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_18) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_18__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_20__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_19) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_19__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_21__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_20) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_20__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_22__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_21) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_21__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_23__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_22) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_22__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_24__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_23) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_23__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_25__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_24) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_24__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_26__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_25) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_25__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_27__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_26) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_26__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_28__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_27) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_27__DOT__ha2__DOT__b));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_29__DOT__ha2__DOT__b 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__twosComplement_28) 
           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fa_28__DOT__ha2__DOT__b));
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
                                                                                "/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/TwosComplementToSignedMagnitudeTest/TwosComplementToSignedMagnitude/should-convert--1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 0x00000456U);
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
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/TwosComplementToSignedMagnitudeTest/TwosComplementToSignedMagnitude/should-convert--1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VsvsimTestbench___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/TwosComplementToSignedMagnitudeTest/TwosComplementToSignedMagnitude/should-convert--1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ms/Desktop/saarland_uni/sem2/SysArc/projects/project_1_repo/Sys-arc-project-1/build/chiselsim/TwosComplementToSignedMagnitudeTest/TwosComplementToSignedMagnitude/should-convert--1-correctly-for-width-32/workdir-verilator/../generated-sources/testbench.sv", 1, "", "Active region did not converge after 100 tries");
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
