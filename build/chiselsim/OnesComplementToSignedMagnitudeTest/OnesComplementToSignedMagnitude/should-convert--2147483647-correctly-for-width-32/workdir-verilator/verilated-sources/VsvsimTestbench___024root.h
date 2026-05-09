// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsvsimTestbench.h for the primary calling header

#ifndef VERILATED_VSVSIMTESTBENCH___024ROOT_H_
#define VERILATED_VSVSIMTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"


class VsvsimTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ svsimTestbench__DOT__clock;
    CData/*0:0*/ svsimTestbench__DOT__reset;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_0;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_1;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_2;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_3;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_4;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_5;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_6;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_7;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_8;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_9;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_10;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_11;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_12;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_13;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_14;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_15;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_16;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_17;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_18;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_19;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_20;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_21;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_22;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_23;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_24;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_25;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_26;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_27;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_28;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_29;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_30;
    CData/*0:0*/ svsimTestbench__DOT__onesComplement_31;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VactDidInit;
    IData/*31:0*/ svsimTestbench__DOT__simulationState;
    IData/*31:0*/ __Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsvsimTestbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VsvsimTestbench___024root(VsvsimTestbench__Syms* symsp, const char* namep);
    ~VsvsimTestbench___024root();
    VL_UNCOPYABLE(VsvsimTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
