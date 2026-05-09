// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.

#include "VsvsimTestbench.h"
#include "VsvsimTestbench__Syms.h"
#include "verilated_dpi.h"


void VsvsimTestbench::getBitWidthImpl_clock(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_clock\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_clock");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_clock_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_clock_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_clock(const svBitVecVal* value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_clock\n"); );
    // Locals
    CData/*0:0*/ value_clock__Vcvt;
    value_clock__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_clock");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_clock_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_clock_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_clock__Vcvt, value_clock + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clock__Vcvt);
}

void VsvsimTestbench::getBitsImpl_clock(svBitVecVal* value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_clock\n"); );
    // Locals
    CData/*0:0*/ value_clock__Vcvt;
    value_clock__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_clock");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_clock_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_clock_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clock__Vcvt);
    VL_SET_SVBV_I(1, value_clock, value_clock__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_reset(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_reset\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_reset");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_reset_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_reset_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_reset(const svBitVecVal* value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_reset\n"); );
    // Locals
    CData/*0:0*/ value_reset__Vcvt;
    value_reset__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_reset");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_reset_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_reset_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_reset__Vcvt, value_reset + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_reset__Vcvt);
}

void VsvsimTestbench::getBitsImpl_reset(svBitVecVal* value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_reset\n"); );
    // Locals
    CData/*0:0*/ value_reset__Vcvt;
    value_reset__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_reset");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_reset_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_reset_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_reset__Vcvt);
    VL_SET_SVBV_I(1, value_reset, value_reset__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_0(const svBitVecVal* value_signedMagnitude_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_0\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_0__Vcvt;
    value_signedMagnitude_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_0__Vcvt, value_signedMagnitude_0 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_0(svBitVecVal* value_signedMagnitude_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_0\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_0__Vcvt;
    value_signedMagnitude_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_0__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_0, value_signedMagnitude_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_1(const svBitVecVal* value_signedMagnitude_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_1\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_1__Vcvt;
    value_signedMagnitude_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_1__Vcvt, value_signedMagnitude_1 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_1(svBitVecVal* value_signedMagnitude_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_1\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_1__Vcvt;
    value_signedMagnitude_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_1__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_1, value_signedMagnitude_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_2(const svBitVecVal* value_signedMagnitude_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_2\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_2__Vcvt;
    value_signedMagnitude_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_2__Vcvt, value_signedMagnitude_2 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_2(svBitVecVal* value_signedMagnitude_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_2\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_2__Vcvt;
    value_signedMagnitude_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_2__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_2, value_signedMagnitude_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_3(const svBitVecVal* value_signedMagnitude_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_3\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_3__Vcvt;
    value_signedMagnitude_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_3__Vcvt, value_signedMagnitude_3 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_3__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_3(svBitVecVal* value_signedMagnitude_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_3\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_3__Vcvt;
    value_signedMagnitude_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_3__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_3, value_signedMagnitude_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_4(const svBitVecVal* value_signedMagnitude_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_4\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_4__Vcvt;
    value_signedMagnitude_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_4__Vcvt, value_signedMagnitude_4 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_4__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_4(svBitVecVal* value_signedMagnitude_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_4\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_4__Vcvt;
    value_signedMagnitude_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_4__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_4, value_signedMagnitude_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_5(const svBitVecVal* value_signedMagnitude_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_5\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_5__Vcvt;
    value_signedMagnitude_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_5__Vcvt, value_signedMagnitude_5 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_5__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_5(svBitVecVal* value_signedMagnitude_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_5\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_5__Vcvt;
    value_signedMagnitude_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_5__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_5, value_signedMagnitude_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_6(const svBitVecVal* value_signedMagnitude_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_6\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_6__Vcvt;
    value_signedMagnitude_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_6__Vcvt, value_signedMagnitude_6 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_6__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_6(svBitVecVal* value_signedMagnitude_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_6\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_6__Vcvt;
    value_signedMagnitude_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_6__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_6, value_signedMagnitude_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_7(const svBitVecVal* value_signedMagnitude_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_7\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_7__Vcvt;
    value_signedMagnitude_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_7__Vcvt, value_signedMagnitude_7 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_7__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_7(svBitVecVal* value_signedMagnitude_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_7\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_7__Vcvt;
    value_signedMagnitude_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_7__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_7, value_signedMagnitude_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_8(const svBitVecVal* value_signedMagnitude_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_8\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_8__Vcvt;
    value_signedMagnitude_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_8__Vcvt, value_signedMagnitude_8 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_8__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_8(svBitVecVal* value_signedMagnitude_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_8\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_8__Vcvt;
    value_signedMagnitude_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_8__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_8, value_signedMagnitude_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_9(const svBitVecVal* value_signedMagnitude_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_9\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_9__Vcvt;
    value_signedMagnitude_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_9__Vcvt, value_signedMagnitude_9 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_9__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_9(svBitVecVal* value_signedMagnitude_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_9\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_9__Vcvt;
    value_signedMagnitude_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_9__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_9, value_signedMagnitude_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_10(const svBitVecVal* value_signedMagnitude_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_10\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_10__Vcvt;
    value_signedMagnitude_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_10__Vcvt, value_signedMagnitude_10 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_10__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_10(svBitVecVal* value_signedMagnitude_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_10\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_10__Vcvt;
    value_signedMagnitude_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_10__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_10, value_signedMagnitude_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_11(const svBitVecVal* value_signedMagnitude_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_11\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_11__Vcvt;
    value_signedMagnitude_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_11__Vcvt, value_signedMagnitude_11 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_11__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_11(svBitVecVal* value_signedMagnitude_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_11\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_11__Vcvt;
    value_signedMagnitude_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_11__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_11, value_signedMagnitude_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_12(const svBitVecVal* value_signedMagnitude_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_12\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_12__Vcvt;
    value_signedMagnitude_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_12__Vcvt, value_signedMagnitude_12 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_12__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_12(svBitVecVal* value_signedMagnitude_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_12\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_12__Vcvt;
    value_signedMagnitude_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_12__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_12, value_signedMagnitude_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_13(const svBitVecVal* value_signedMagnitude_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_13\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_13__Vcvt;
    value_signedMagnitude_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_13__Vcvt, value_signedMagnitude_13 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_13__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_13(svBitVecVal* value_signedMagnitude_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_13\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_13__Vcvt;
    value_signedMagnitude_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_13__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_13, value_signedMagnitude_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_14(const svBitVecVal* value_signedMagnitude_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_14\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_14__Vcvt;
    value_signedMagnitude_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_14__Vcvt, value_signedMagnitude_14 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_14__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_14(svBitVecVal* value_signedMagnitude_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_14\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_14__Vcvt;
    value_signedMagnitude_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_14__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_14, value_signedMagnitude_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_15(const svBitVecVal* value_signedMagnitude_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_15\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_15__Vcvt;
    value_signedMagnitude_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_15__Vcvt, value_signedMagnitude_15 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_15__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_15(svBitVecVal* value_signedMagnitude_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_15\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_15__Vcvt;
    value_signedMagnitude_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_15__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_15, value_signedMagnitude_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_16(const svBitVecVal* value_signedMagnitude_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_16\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_16__Vcvt;
    value_signedMagnitude_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_16__Vcvt, value_signedMagnitude_16 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_16__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_16(svBitVecVal* value_signedMagnitude_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_16\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_16__Vcvt;
    value_signedMagnitude_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_16__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_16, value_signedMagnitude_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_17(const svBitVecVal* value_signedMagnitude_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_17\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_17__Vcvt;
    value_signedMagnitude_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_17__Vcvt, value_signedMagnitude_17 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_17__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_17(svBitVecVal* value_signedMagnitude_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_17\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_17__Vcvt;
    value_signedMagnitude_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_17__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_17, value_signedMagnitude_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_18(const svBitVecVal* value_signedMagnitude_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_18\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_18__Vcvt;
    value_signedMagnitude_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_18__Vcvt, value_signedMagnitude_18 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_18__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_18(svBitVecVal* value_signedMagnitude_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_18\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_18__Vcvt;
    value_signedMagnitude_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_18__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_18, value_signedMagnitude_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_19(const svBitVecVal* value_signedMagnitude_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_19\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_19__Vcvt;
    value_signedMagnitude_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_19__Vcvt, value_signedMagnitude_19 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_19__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_19(svBitVecVal* value_signedMagnitude_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_19\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_19__Vcvt;
    value_signedMagnitude_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_19__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_19, value_signedMagnitude_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_20(const svBitVecVal* value_signedMagnitude_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_20\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_20__Vcvt;
    value_signedMagnitude_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_20__Vcvt, value_signedMagnitude_20 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_20__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_20(svBitVecVal* value_signedMagnitude_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_20\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_20__Vcvt;
    value_signedMagnitude_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_20__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_20, value_signedMagnitude_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_21(const svBitVecVal* value_signedMagnitude_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_21\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_21__Vcvt;
    value_signedMagnitude_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_21__Vcvt, value_signedMagnitude_21 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_21__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_21(svBitVecVal* value_signedMagnitude_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_21\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_21__Vcvt;
    value_signedMagnitude_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_21__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_21, value_signedMagnitude_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_22(const svBitVecVal* value_signedMagnitude_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_22\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_22__Vcvt;
    value_signedMagnitude_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_22__Vcvt, value_signedMagnitude_22 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_22__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_22(svBitVecVal* value_signedMagnitude_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_22\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_22__Vcvt;
    value_signedMagnitude_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_22__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_22, value_signedMagnitude_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_23(const svBitVecVal* value_signedMagnitude_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_23\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_23__Vcvt;
    value_signedMagnitude_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_23__Vcvt, value_signedMagnitude_23 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_23__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_23(svBitVecVal* value_signedMagnitude_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_23\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_23__Vcvt;
    value_signedMagnitude_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_23__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_23, value_signedMagnitude_23__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_24(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_24\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_24(const svBitVecVal* value_signedMagnitude_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_24\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_24__Vcvt;
    value_signedMagnitude_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_24__Vcvt, value_signedMagnitude_24 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_24__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_24(svBitVecVal* value_signedMagnitude_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_24\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_24__Vcvt;
    value_signedMagnitude_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_24__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_24, value_signedMagnitude_24__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_25(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_25\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_25(const svBitVecVal* value_signedMagnitude_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_25\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_25__Vcvt;
    value_signedMagnitude_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_25__Vcvt, value_signedMagnitude_25 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_25__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_25(svBitVecVal* value_signedMagnitude_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_25\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_25__Vcvt;
    value_signedMagnitude_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_25__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_25, value_signedMagnitude_25__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_26(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_26\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_26(const svBitVecVal* value_signedMagnitude_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_26\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_26__Vcvt;
    value_signedMagnitude_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_26__Vcvt, value_signedMagnitude_26 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_26__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_26(svBitVecVal* value_signedMagnitude_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_26\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_26__Vcvt;
    value_signedMagnitude_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_26__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_26, value_signedMagnitude_26__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_27(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_27\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_27(const svBitVecVal* value_signedMagnitude_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_27\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_27__Vcvt;
    value_signedMagnitude_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_27__Vcvt, value_signedMagnitude_27 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_27__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_27(svBitVecVal* value_signedMagnitude_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_27\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_27__Vcvt;
    value_signedMagnitude_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_27__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_27, value_signedMagnitude_27__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_28(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_28\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_28(const svBitVecVal* value_signedMagnitude_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_28\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_28__Vcvt;
    value_signedMagnitude_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_28__Vcvt, value_signedMagnitude_28 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_28__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_28(svBitVecVal* value_signedMagnitude_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_28\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_28__Vcvt;
    value_signedMagnitude_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_28__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_28, value_signedMagnitude_28__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_29(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_29\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_29(const svBitVecVal* value_signedMagnitude_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_29\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_29__Vcvt;
    value_signedMagnitude_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_29__Vcvt, value_signedMagnitude_29 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_29__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_29(svBitVecVal* value_signedMagnitude_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_29\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_29__Vcvt;
    value_signedMagnitude_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_29__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_29, value_signedMagnitude_29__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_30(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_30\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_30(const svBitVecVal* value_signedMagnitude_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_30\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_30__Vcvt;
    value_signedMagnitude_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_30__Vcvt, value_signedMagnitude_30 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_30__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_30(svBitVecVal* value_signedMagnitude_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_30\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_30__Vcvt;
    value_signedMagnitude_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_30__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_30, value_signedMagnitude_30__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_signedMagnitude_31(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_signedMagnitude_31\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_signedMagnitude_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_signedMagnitude_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_signedMagnitude_31(const svBitVecVal* value_signedMagnitude_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_signedMagnitude_31\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_31__Vcvt;
    value_signedMagnitude_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_signedMagnitude_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_signedMagnitude_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_signedMagnitude_31__Vcvt, value_signedMagnitude_31 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_31__Vcvt);
}

void VsvsimTestbench::getBitsImpl_signedMagnitude_31(svBitVecVal* value_signedMagnitude_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_signedMagnitude_31\n"); );
    // Locals
    CData/*0:0*/ value_signedMagnitude_31__Vcvt;
    value_signedMagnitude_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_signedMagnitude_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_signedMagnitude_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_signedMagnitude_31__Vcvt);
    VL_SET_SVBV_I(1, value_signedMagnitude_31, value_signedMagnitude_31__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_0(svBitVecVal* value_twosComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_0\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_0__Vcvt;
    value_twosComplement_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_0__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_0, value_twosComplement_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_1(svBitVecVal* value_twosComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_1\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_1__Vcvt;
    value_twosComplement_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_1__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_1, value_twosComplement_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_2(svBitVecVal* value_twosComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_2\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_2__Vcvt;
    value_twosComplement_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_2__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_2, value_twosComplement_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_3(svBitVecVal* value_twosComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_3\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_3__Vcvt;
    value_twosComplement_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_3__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_3, value_twosComplement_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_4(svBitVecVal* value_twosComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_4\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_4__Vcvt;
    value_twosComplement_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_4__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_4, value_twosComplement_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_5(svBitVecVal* value_twosComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_5\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_5__Vcvt;
    value_twosComplement_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_5__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_5, value_twosComplement_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_6(svBitVecVal* value_twosComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_6\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_6__Vcvt;
    value_twosComplement_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_6__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_6, value_twosComplement_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_7(svBitVecVal* value_twosComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_7\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_7__Vcvt;
    value_twosComplement_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_7__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_7, value_twosComplement_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_8(svBitVecVal* value_twosComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_8\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_8__Vcvt;
    value_twosComplement_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_8__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_8, value_twosComplement_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_9(svBitVecVal* value_twosComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_9\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_9__Vcvt;
    value_twosComplement_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_9__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_9, value_twosComplement_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_10(svBitVecVal* value_twosComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_10\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_10__Vcvt;
    value_twosComplement_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_10__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_10, value_twosComplement_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_11(svBitVecVal* value_twosComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_11\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_11__Vcvt;
    value_twosComplement_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_11__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_11, value_twosComplement_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_12(svBitVecVal* value_twosComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_12\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_12__Vcvt;
    value_twosComplement_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_12__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_12, value_twosComplement_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_13(svBitVecVal* value_twosComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_13\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_13__Vcvt;
    value_twosComplement_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_13__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_13, value_twosComplement_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_14(svBitVecVal* value_twosComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_14\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_14__Vcvt;
    value_twosComplement_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_14__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_14, value_twosComplement_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_15(svBitVecVal* value_twosComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_15\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_15__Vcvt;
    value_twosComplement_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_15__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_15, value_twosComplement_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_16(svBitVecVal* value_twosComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_16\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_16__Vcvt;
    value_twosComplement_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_16__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_16, value_twosComplement_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_17(svBitVecVal* value_twosComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_17\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_17__Vcvt;
    value_twosComplement_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_17__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_17, value_twosComplement_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_18(svBitVecVal* value_twosComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_18\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_18__Vcvt;
    value_twosComplement_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_18__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_18, value_twosComplement_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_19(svBitVecVal* value_twosComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_19\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_19__Vcvt;
    value_twosComplement_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_19__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_19, value_twosComplement_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_20(svBitVecVal* value_twosComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_20\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_20__Vcvt;
    value_twosComplement_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_20__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_20, value_twosComplement_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_21(svBitVecVal* value_twosComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_21\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_21__Vcvt;
    value_twosComplement_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_21__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_21, value_twosComplement_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_22(svBitVecVal* value_twosComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_22\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_22__Vcvt;
    value_twosComplement_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_22__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_22, value_twosComplement_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_23(svBitVecVal* value_twosComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_23\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_23__Vcvt;
    value_twosComplement_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_23__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_23, value_twosComplement_23__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_24(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_24\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_24(svBitVecVal* value_twosComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_24\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_24__Vcvt;
    value_twosComplement_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_24__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_24, value_twosComplement_24__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_25(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_25\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_25(svBitVecVal* value_twosComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_25\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_25__Vcvt;
    value_twosComplement_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_25__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_25, value_twosComplement_25__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_26(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_26\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_26(svBitVecVal* value_twosComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_26\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_26__Vcvt;
    value_twosComplement_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_26__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_26, value_twosComplement_26__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_27(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_27\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_27(svBitVecVal* value_twosComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_27\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_27__Vcvt;
    value_twosComplement_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_27__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_27, value_twosComplement_27__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_28(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_28\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_28(svBitVecVal* value_twosComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_28\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_28__Vcvt;
    value_twosComplement_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_28__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_28, value_twosComplement_28__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_29(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_29\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_29(svBitVecVal* value_twosComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_29\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_29__Vcvt;
    value_twosComplement_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_29__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_29, value_twosComplement_29__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_30(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_30\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_30(svBitVecVal* value_twosComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_30\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_30__Vcvt;
    value_twosComplement_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_30__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_30, value_twosComplement_30__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_twosComplement_31(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_twosComplement_31\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_twosComplement_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_twosComplement_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_twosComplement_31(svBitVecVal* value_twosComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_twosComplement_31\n"); );
    // Locals
    CData/*0:0*/ value_twosComplement_31__Vcvt;
    value_twosComplement_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_twosComplement_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_twosComplement_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_twosComplement_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_twosComplement_31__Vcvt);
    VL_SET_SVBV_I(1, value_twosComplement_31, value_twosComplement_31__Vcvt);
}

void VsvsimTestbench::simulation_initializeTrace(const char* traceFilePath) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_initializeTrace\n"); );
    // Locals
    static thread_local std::string traceFilePath__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simulation_initializeTrace");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_initializeTrace_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_simulation_initializeTrace_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    traceFilePath__Vcvt = VL_CVT_N_CSTR(traceFilePath);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), traceFilePath__Vcvt);
}

void VsvsimTestbench::simulation_enableTrace(int* success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_enableTrace\n"); );
    // Locals
    IData/*31:0*/ success__Vcvt;
    success__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simulation_enableTrace");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_enableTrace_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_simulation_enableTrace_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), success__Vcvt);
    *success = success__Vcvt;
}

void VsvsimTestbench::simulation_disableTrace(int* success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_disableTrace\n"); );
    // Locals
    IData/*31:0*/ success__Vcvt;
    success__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simulation_disableTrace");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_disableTrace_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_simulation_disableTrace_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), success__Vcvt);
    *success = success__Vcvt;
}
