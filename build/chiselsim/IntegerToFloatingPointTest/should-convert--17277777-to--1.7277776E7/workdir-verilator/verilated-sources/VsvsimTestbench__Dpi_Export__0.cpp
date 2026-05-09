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

void VsvsimTestbench::getBitWidthImpl_intInput_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_0(const svBitVecVal* value_intInput_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_0\n"); );
    // Locals
    CData/*0:0*/ value_intInput_0__Vcvt;
    value_intInput_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_0__Vcvt, value_intInput_0 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_0(svBitVecVal* value_intInput_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_0\n"); );
    // Locals
    CData/*0:0*/ value_intInput_0__Vcvt;
    value_intInput_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_0__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_0, value_intInput_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_1(const svBitVecVal* value_intInput_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_1\n"); );
    // Locals
    CData/*0:0*/ value_intInput_1__Vcvt;
    value_intInput_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_1__Vcvt, value_intInput_1 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_1(svBitVecVal* value_intInput_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_1\n"); );
    // Locals
    CData/*0:0*/ value_intInput_1__Vcvt;
    value_intInput_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_1__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_1, value_intInput_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_2(const svBitVecVal* value_intInput_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_2\n"); );
    // Locals
    CData/*0:0*/ value_intInput_2__Vcvt;
    value_intInput_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_2__Vcvt, value_intInput_2 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_2(svBitVecVal* value_intInput_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_2\n"); );
    // Locals
    CData/*0:0*/ value_intInput_2__Vcvt;
    value_intInput_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_2__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_2, value_intInput_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_3(const svBitVecVal* value_intInput_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_3\n"); );
    // Locals
    CData/*0:0*/ value_intInput_3__Vcvt;
    value_intInput_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_3__Vcvt, value_intInput_3 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_3__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_3(svBitVecVal* value_intInput_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_3\n"); );
    // Locals
    CData/*0:0*/ value_intInput_3__Vcvt;
    value_intInput_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_3__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_3, value_intInput_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_4(const svBitVecVal* value_intInput_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_4\n"); );
    // Locals
    CData/*0:0*/ value_intInput_4__Vcvt;
    value_intInput_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_4__Vcvt, value_intInput_4 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_4__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_4(svBitVecVal* value_intInput_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_4\n"); );
    // Locals
    CData/*0:0*/ value_intInput_4__Vcvt;
    value_intInput_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_4__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_4, value_intInput_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_5(const svBitVecVal* value_intInput_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_5\n"); );
    // Locals
    CData/*0:0*/ value_intInput_5__Vcvt;
    value_intInput_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_5__Vcvt, value_intInput_5 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_5__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_5(svBitVecVal* value_intInput_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_5\n"); );
    // Locals
    CData/*0:0*/ value_intInput_5__Vcvt;
    value_intInput_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_5__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_5, value_intInput_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_6(const svBitVecVal* value_intInput_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_6\n"); );
    // Locals
    CData/*0:0*/ value_intInput_6__Vcvt;
    value_intInput_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_6__Vcvt, value_intInput_6 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_6__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_6(svBitVecVal* value_intInput_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_6\n"); );
    // Locals
    CData/*0:0*/ value_intInput_6__Vcvt;
    value_intInput_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_6__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_6, value_intInput_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_7(const svBitVecVal* value_intInput_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_7\n"); );
    // Locals
    CData/*0:0*/ value_intInput_7__Vcvt;
    value_intInput_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_7__Vcvt, value_intInput_7 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_7__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_7(svBitVecVal* value_intInput_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_7\n"); );
    // Locals
    CData/*0:0*/ value_intInput_7__Vcvt;
    value_intInput_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_7__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_7, value_intInput_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_8(const svBitVecVal* value_intInput_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_8\n"); );
    // Locals
    CData/*0:0*/ value_intInput_8__Vcvt;
    value_intInput_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_8__Vcvt, value_intInput_8 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_8__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_8(svBitVecVal* value_intInput_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_8\n"); );
    // Locals
    CData/*0:0*/ value_intInput_8__Vcvt;
    value_intInput_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_8__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_8, value_intInput_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_9(const svBitVecVal* value_intInput_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_9\n"); );
    // Locals
    CData/*0:0*/ value_intInput_9__Vcvt;
    value_intInput_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_9__Vcvt, value_intInput_9 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_9__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_9(svBitVecVal* value_intInput_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_9\n"); );
    // Locals
    CData/*0:0*/ value_intInput_9__Vcvt;
    value_intInput_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_9__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_9, value_intInput_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_10(const svBitVecVal* value_intInput_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_10\n"); );
    // Locals
    CData/*0:0*/ value_intInput_10__Vcvt;
    value_intInput_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_10__Vcvt, value_intInput_10 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_10__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_10(svBitVecVal* value_intInput_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_10\n"); );
    // Locals
    CData/*0:0*/ value_intInput_10__Vcvt;
    value_intInput_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_10__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_10, value_intInput_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_11(const svBitVecVal* value_intInput_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_11\n"); );
    // Locals
    CData/*0:0*/ value_intInput_11__Vcvt;
    value_intInput_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_11__Vcvt, value_intInput_11 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_11__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_11(svBitVecVal* value_intInput_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_11\n"); );
    // Locals
    CData/*0:0*/ value_intInput_11__Vcvt;
    value_intInput_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_11__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_11, value_intInput_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_12(const svBitVecVal* value_intInput_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_12\n"); );
    // Locals
    CData/*0:0*/ value_intInput_12__Vcvt;
    value_intInput_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_12__Vcvt, value_intInput_12 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_12__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_12(svBitVecVal* value_intInput_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_12\n"); );
    // Locals
    CData/*0:0*/ value_intInput_12__Vcvt;
    value_intInput_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_12__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_12, value_intInput_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_13(const svBitVecVal* value_intInput_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_13\n"); );
    // Locals
    CData/*0:0*/ value_intInput_13__Vcvt;
    value_intInput_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_13__Vcvt, value_intInput_13 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_13__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_13(svBitVecVal* value_intInput_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_13\n"); );
    // Locals
    CData/*0:0*/ value_intInput_13__Vcvt;
    value_intInput_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_13__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_13, value_intInput_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_14(const svBitVecVal* value_intInput_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_14\n"); );
    // Locals
    CData/*0:0*/ value_intInput_14__Vcvt;
    value_intInput_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_14__Vcvt, value_intInput_14 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_14__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_14(svBitVecVal* value_intInput_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_14\n"); );
    // Locals
    CData/*0:0*/ value_intInput_14__Vcvt;
    value_intInput_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_14__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_14, value_intInput_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_15(const svBitVecVal* value_intInput_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_15\n"); );
    // Locals
    CData/*0:0*/ value_intInput_15__Vcvt;
    value_intInput_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_15__Vcvt, value_intInput_15 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_15__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_15(svBitVecVal* value_intInput_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_15\n"); );
    // Locals
    CData/*0:0*/ value_intInput_15__Vcvt;
    value_intInput_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_15__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_15, value_intInput_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_16(const svBitVecVal* value_intInput_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_16\n"); );
    // Locals
    CData/*0:0*/ value_intInput_16__Vcvt;
    value_intInput_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_16__Vcvt, value_intInput_16 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_16__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_16(svBitVecVal* value_intInput_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_16\n"); );
    // Locals
    CData/*0:0*/ value_intInput_16__Vcvt;
    value_intInput_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_16__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_16, value_intInput_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_17(const svBitVecVal* value_intInput_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_17\n"); );
    // Locals
    CData/*0:0*/ value_intInput_17__Vcvt;
    value_intInput_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_17__Vcvt, value_intInput_17 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_17__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_17(svBitVecVal* value_intInput_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_17\n"); );
    // Locals
    CData/*0:0*/ value_intInput_17__Vcvt;
    value_intInput_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_17__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_17, value_intInput_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_18(const svBitVecVal* value_intInput_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_18\n"); );
    // Locals
    CData/*0:0*/ value_intInput_18__Vcvt;
    value_intInput_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_18__Vcvt, value_intInput_18 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_18__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_18(svBitVecVal* value_intInput_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_18\n"); );
    // Locals
    CData/*0:0*/ value_intInput_18__Vcvt;
    value_intInput_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_18__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_18, value_intInput_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_19(const svBitVecVal* value_intInput_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_19\n"); );
    // Locals
    CData/*0:0*/ value_intInput_19__Vcvt;
    value_intInput_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_19__Vcvt, value_intInput_19 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_19__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_19(svBitVecVal* value_intInput_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_19\n"); );
    // Locals
    CData/*0:0*/ value_intInput_19__Vcvt;
    value_intInput_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_19__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_19, value_intInput_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_20(const svBitVecVal* value_intInput_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_20\n"); );
    // Locals
    CData/*0:0*/ value_intInput_20__Vcvt;
    value_intInput_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_20__Vcvt, value_intInput_20 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_20__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_20(svBitVecVal* value_intInput_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_20\n"); );
    // Locals
    CData/*0:0*/ value_intInput_20__Vcvt;
    value_intInput_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_20__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_20, value_intInput_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_21(const svBitVecVal* value_intInput_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_21\n"); );
    // Locals
    CData/*0:0*/ value_intInput_21__Vcvt;
    value_intInput_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_21__Vcvt, value_intInput_21 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_21__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_21(svBitVecVal* value_intInput_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_21\n"); );
    // Locals
    CData/*0:0*/ value_intInput_21__Vcvt;
    value_intInput_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_21__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_21, value_intInput_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_22(const svBitVecVal* value_intInput_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_22\n"); );
    // Locals
    CData/*0:0*/ value_intInput_22__Vcvt;
    value_intInput_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_22__Vcvt, value_intInput_22 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_22__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_22(svBitVecVal* value_intInput_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_22\n"); );
    // Locals
    CData/*0:0*/ value_intInput_22__Vcvt;
    value_intInput_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_22__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_22, value_intInput_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_23(const svBitVecVal* value_intInput_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_23\n"); );
    // Locals
    CData/*0:0*/ value_intInput_23__Vcvt;
    value_intInput_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_23__Vcvt, value_intInput_23 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_23__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_23(svBitVecVal* value_intInput_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_23\n"); );
    // Locals
    CData/*0:0*/ value_intInput_23__Vcvt;
    value_intInput_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_23__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_23, value_intInput_23__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_24(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_24\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_24(const svBitVecVal* value_intInput_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_24\n"); );
    // Locals
    CData/*0:0*/ value_intInput_24__Vcvt;
    value_intInput_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_24__Vcvt, value_intInput_24 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_24__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_24(svBitVecVal* value_intInput_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_24\n"); );
    // Locals
    CData/*0:0*/ value_intInput_24__Vcvt;
    value_intInput_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_24__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_24, value_intInput_24__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_25(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_25\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_25(const svBitVecVal* value_intInput_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_25\n"); );
    // Locals
    CData/*0:0*/ value_intInput_25__Vcvt;
    value_intInput_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_25__Vcvt, value_intInput_25 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_25__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_25(svBitVecVal* value_intInput_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_25\n"); );
    // Locals
    CData/*0:0*/ value_intInput_25__Vcvt;
    value_intInput_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_25__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_25, value_intInput_25__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_26(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_26\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_26(const svBitVecVal* value_intInput_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_26\n"); );
    // Locals
    CData/*0:0*/ value_intInput_26__Vcvt;
    value_intInput_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_26__Vcvt, value_intInput_26 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_26__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_26(svBitVecVal* value_intInput_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_26\n"); );
    // Locals
    CData/*0:0*/ value_intInput_26__Vcvt;
    value_intInput_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_26__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_26, value_intInput_26__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_27(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_27\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_27(const svBitVecVal* value_intInput_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_27\n"); );
    // Locals
    CData/*0:0*/ value_intInput_27__Vcvt;
    value_intInput_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_27__Vcvt, value_intInput_27 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_27__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_27(svBitVecVal* value_intInput_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_27\n"); );
    // Locals
    CData/*0:0*/ value_intInput_27__Vcvt;
    value_intInput_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_27__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_27, value_intInput_27__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_28(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_28\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_28(const svBitVecVal* value_intInput_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_28\n"); );
    // Locals
    CData/*0:0*/ value_intInput_28__Vcvt;
    value_intInput_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_28__Vcvt, value_intInput_28 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_28__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_28(svBitVecVal* value_intInput_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_28\n"); );
    // Locals
    CData/*0:0*/ value_intInput_28__Vcvt;
    value_intInput_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_28__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_28, value_intInput_28__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_29(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_29\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_29(const svBitVecVal* value_intInput_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_29\n"); );
    // Locals
    CData/*0:0*/ value_intInput_29__Vcvt;
    value_intInput_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_29__Vcvt, value_intInput_29 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_29__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_29(svBitVecVal* value_intInput_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_29\n"); );
    // Locals
    CData/*0:0*/ value_intInput_29__Vcvt;
    value_intInput_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_29__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_29, value_intInput_29__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_30(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_30\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_30(const svBitVecVal* value_intInput_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_30\n"); );
    // Locals
    CData/*0:0*/ value_intInput_30__Vcvt;
    value_intInput_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_30__Vcvt, value_intInput_30 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_30__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_30(svBitVecVal* value_intInput_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_30\n"); );
    // Locals
    CData/*0:0*/ value_intInput_30__Vcvt;
    value_intInput_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_30__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_30, value_intInput_30__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_intInput_31(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_intInput_31\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_intInput_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_intInput_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_intInput_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_intInput_31(const svBitVecVal* value_intInput_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_intInput_31\n"); );
    // Locals
    CData/*0:0*/ value_intInput_31__Vcvt;
    value_intInput_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_intInput_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_intInput_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_intInput_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_intInput_31__Vcvt, value_intInput_31 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_31__Vcvt);
}

void VsvsimTestbench::getBitsImpl_intInput_31(svBitVecVal* value_intInput_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_intInput_31\n"); );
    // Locals
    CData/*0:0*/ value_intInput_31__Vcvt;
    value_intInput_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_intInput_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_intInput_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_intInput_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_intInput_31__Vcvt);
    VL_SET_SVBV_I(1, value_intInput_31, value_intInput_31__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_0(svBitVecVal* value_floatOutput_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_0\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_0__Vcvt;
    value_floatOutput_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_0__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_0, value_floatOutput_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_1(svBitVecVal* value_floatOutput_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_1\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_1__Vcvt;
    value_floatOutput_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_1__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_1, value_floatOutput_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_2(svBitVecVal* value_floatOutput_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_2\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_2__Vcvt;
    value_floatOutput_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_2__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_2, value_floatOutput_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_3(svBitVecVal* value_floatOutput_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_3\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_3__Vcvt;
    value_floatOutput_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_3__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_3, value_floatOutput_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_4(svBitVecVal* value_floatOutput_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_4\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_4__Vcvt;
    value_floatOutput_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_4__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_4, value_floatOutput_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_5(svBitVecVal* value_floatOutput_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_5\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_5__Vcvt;
    value_floatOutput_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_5__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_5, value_floatOutput_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_6(svBitVecVal* value_floatOutput_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_6\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_6__Vcvt;
    value_floatOutput_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_6__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_6, value_floatOutput_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_7(svBitVecVal* value_floatOutput_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_7\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_7__Vcvt;
    value_floatOutput_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_7__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_7, value_floatOutput_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_8(svBitVecVal* value_floatOutput_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_8\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_8__Vcvt;
    value_floatOutput_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_8__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_8, value_floatOutput_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_9(svBitVecVal* value_floatOutput_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_9\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_9__Vcvt;
    value_floatOutput_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_9__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_9, value_floatOutput_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_10(svBitVecVal* value_floatOutput_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_10\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_10__Vcvt;
    value_floatOutput_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_10__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_10, value_floatOutput_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_11(svBitVecVal* value_floatOutput_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_11\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_11__Vcvt;
    value_floatOutput_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_11__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_11, value_floatOutput_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_12(svBitVecVal* value_floatOutput_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_12\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_12__Vcvt;
    value_floatOutput_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_12__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_12, value_floatOutput_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_13(svBitVecVal* value_floatOutput_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_13\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_13__Vcvt;
    value_floatOutput_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_13__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_13, value_floatOutput_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_14(svBitVecVal* value_floatOutput_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_14\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_14__Vcvt;
    value_floatOutput_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_14__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_14, value_floatOutput_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_15(svBitVecVal* value_floatOutput_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_15\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_15__Vcvt;
    value_floatOutput_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_15__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_15, value_floatOutput_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_16(svBitVecVal* value_floatOutput_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_16\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_16__Vcvt;
    value_floatOutput_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_16__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_16, value_floatOutput_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_17(svBitVecVal* value_floatOutput_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_17\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_17__Vcvt;
    value_floatOutput_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_17__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_17, value_floatOutput_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_18(svBitVecVal* value_floatOutput_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_18\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_18__Vcvt;
    value_floatOutput_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_18__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_18, value_floatOutput_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_19(svBitVecVal* value_floatOutput_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_19\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_19__Vcvt;
    value_floatOutput_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_19__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_19, value_floatOutput_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_20(svBitVecVal* value_floatOutput_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_20\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_20__Vcvt;
    value_floatOutput_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_20__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_20, value_floatOutput_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_21(svBitVecVal* value_floatOutput_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_21\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_21__Vcvt;
    value_floatOutput_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_21__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_21, value_floatOutput_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_22(svBitVecVal* value_floatOutput_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_22\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_22__Vcvt;
    value_floatOutput_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_22__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_22, value_floatOutput_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_23(svBitVecVal* value_floatOutput_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_23\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_23__Vcvt;
    value_floatOutput_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_23__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_23, value_floatOutput_23__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_24(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_24\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_24(svBitVecVal* value_floatOutput_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_24\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_24__Vcvt;
    value_floatOutput_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_24__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_24, value_floatOutput_24__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_25(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_25\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_25(svBitVecVal* value_floatOutput_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_25\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_25__Vcvt;
    value_floatOutput_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_25__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_25, value_floatOutput_25__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_26(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_26\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_26(svBitVecVal* value_floatOutput_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_26\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_26__Vcvt;
    value_floatOutput_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_26__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_26, value_floatOutput_26__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_27(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_27\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_27(svBitVecVal* value_floatOutput_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_27\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_27__Vcvt;
    value_floatOutput_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_27__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_27, value_floatOutput_27__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_28(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_28\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_28(svBitVecVal* value_floatOutput_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_28\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_28__Vcvt;
    value_floatOutput_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_28__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_28, value_floatOutput_28__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_29(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_29\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_29(svBitVecVal* value_floatOutput_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_29\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_29__Vcvt;
    value_floatOutput_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_29__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_29, value_floatOutput_29__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_30(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_30\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_30(svBitVecVal* value_floatOutput_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_30\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_30__Vcvt;
    value_floatOutput_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_30__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_30, value_floatOutput_30__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_floatOutput_31(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_floatOutput_31\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_floatOutput_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_floatOutput_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_floatOutput_31(svBitVecVal* value_floatOutput_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_floatOutput_31\n"); );
    // Locals
    CData/*0:0*/ value_floatOutput_31__Vcvt;
    value_floatOutput_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_floatOutput_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_floatOutput_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_floatOutput_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_floatOutput_31__Vcvt);
    VL_SET_SVBV_I(1, value_floatOutput_31, value_floatOutput_31__Vcvt);
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
