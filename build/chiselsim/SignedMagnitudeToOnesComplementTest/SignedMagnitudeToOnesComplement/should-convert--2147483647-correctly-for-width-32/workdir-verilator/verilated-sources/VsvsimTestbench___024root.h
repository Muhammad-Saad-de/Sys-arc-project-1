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
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_0;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_1;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_2;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_3;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_4;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_5;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_6;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_7;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_8;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_9;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_10;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_11;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_12;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_13;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_14;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_15;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_16;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_17;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_18;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_19;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_20;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_21;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_22;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_23;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_24;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_25;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_26;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_27;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_28;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_29;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_30;
    CData/*0:0*/ svsimTestbench__DOT__signedMagnitude_31;
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
