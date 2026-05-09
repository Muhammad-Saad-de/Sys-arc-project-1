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

void VsvsimTestbench::getBitWidthImpl_onesComplement_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_0(const svBitVecVal* value_onesComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_0\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_0__Vcvt;
    value_onesComplement_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_0__Vcvt, value_onesComplement_0 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_0(svBitVecVal* value_onesComplement_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_0\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_0__Vcvt;
    value_onesComplement_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_0__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_0, value_onesComplement_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_1(const svBitVecVal* value_onesComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_1\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_1__Vcvt;
    value_onesComplement_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_1__Vcvt, value_onesComplement_1 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_1(svBitVecVal* value_onesComplement_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_1\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_1__Vcvt;
    value_onesComplement_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_1__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_1, value_onesComplement_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_2(const svBitVecVal* value_onesComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_2\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_2__Vcvt;
    value_onesComplement_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_2__Vcvt, value_onesComplement_2 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_2(svBitVecVal* value_onesComplement_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_2\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_2__Vcvt;
    value_onesComplement_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_2__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_2, value_onesComplement_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_3(const svBitVecVal* value_onesComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_3\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_3__Vcvt;
    value_onesComplement_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_3__Vcvt, value_onesComplement_3 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_3__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_3(svBitVecVal* value_onesComplement_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_3\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_3__Vcvt;
    value_onesComplement_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_3__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_3, value_onesComplement_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_4(const svBitVecVal* value_onesComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_4\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_4__Vcvt;
    value_onesComplement_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_4__Vcvt, value_onesComplement_4 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_4__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_4(svBitVecVal* value_onesComplement_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_4\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_4__Vcvt;
    value_onesComplement_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_4__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_4, value_onesComplement_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_5(const svBitVecVal* value_onesComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_5\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_5__Vcvt;
    value_onesComplement_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_5__Vcvt, value_onesComplement_5 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_5__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_5(svBitVecVal* value_onesComplement_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_5\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_5__Vcvt;
    value_onesComplement_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_5__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_5, value_onesComplement_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_6(const svBitVecVal* value_onesComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_6\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_6__Vcvt;
    value_onesComplement_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_6__Vcvt, value_onesComplement_6 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_6__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_6(svBitVecVal* value_onesComplement_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_6\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_6__Vcvt;
    value_onesComplement_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_6__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_6, value_onesComplement_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_7(const svBitVecVal* value_onesComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_7\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_7__Vcvt;
    value_onesComplement_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_7__Vcvt, value_onesComplement_7 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_7__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_7(svBitVecVal* value_onesComplement_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_7\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_7__Vcvt;
    value_onesComplement_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_7__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_7, value_onesComplement_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_8(const svBitVecVal* value_onesComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_8\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_8__Vcvt;
    value_onesComplement_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_8__Vcvt, value_onesComplement_8 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_8__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_8(svBitVecVal* value_onesComplement_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_8\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_8__Vcvt;
    value_onesComplement_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_8__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_8, value_onesComplement_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_9(const svBitVecVal* value_onesComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_9\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_9__Vcvt;
    value_onesComplement_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_9__Vcvt, value_onesComplement_9 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_9__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_9(svBitVecVal* value_onesComplement_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_9\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_9__Vcvt;
    value_onesComplement_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_9__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_9, value_onesComplement_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_10(const svBitVecVal* value_onesComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_10\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_10__Vcvt;
    value_onesComplement_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_10__Vcvt, value_onesComplement_10 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_10__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_10(svBitVecVal* value_onesComplement_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_10\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_10__Vcvt;
    value_onesComplement_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_10__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_10, value_onesComplement_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_11(const svBitVecVal* value_onesComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_11\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_11__Vcvt;
    value_onesComplement_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_11__Vcvt, value_onesComplement_11 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_11__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_11(svBitVecVal* value_onesComplement_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_11\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_11__Vcvt;
    value_onesComplement_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_11__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_11, value_onesComplement_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_12(const svBitVecVal* value_onesComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_12\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_12__Vcvt;
    value_onesComplement_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_12__Vcvt, value_onesComplement_12 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_12__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_12(svBitVecVal* value_onesComplement_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_12\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_12__Vcvt;
    value_onesComplement_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_12__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_12, value_onesComplement_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_13(const svBitVecVal* value_onesComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_13\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_13__Vcvt;
    value_onesComplement_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_13__Vcvt, value_onesComplement_13 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_13__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_13(svBitVecVal* value_onesComplement_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_13\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_13__Vcvt;
    value_onesComplement_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_13__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_13, value_onesComplement_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_14(const svBitVecVal* value_onesComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_14\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_14__Vcvt;
    value_onesComplement_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_14__Vcvt, value_onesComplement_14 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_14__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_14(svBitVecVal* value_onesComplement_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_14\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_14__Vcvt;
    value_onesComplement_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_14__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_14, value_onesComplement_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_15(const svBitVecVal* value_onesComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_15\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_15__Vcvt;
    value_onesComplement_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_15__Vcvt, value_onesComplement_15 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_15__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_15(svBitVecVal* value_onesComplement_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_15\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_15__Vcvt;
    value_onesComplement_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_15__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_15, value_onesComplement_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_16(const svBitVecVal* value_onesComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_16\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_16__Vcvt;
    value_onesComplement_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_16__Vcvt, value_onesComplement_16 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_16__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_16(svBitVecVal* value_onesComplement_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_16\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_16__Vcvt;
    value_onesComplement_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_16__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_16, value_onesComplement_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_17(const svBitVecVal* value_onesComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_17\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_17__Vcvt;
    value_onesComplement_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_17__Vcvt, value_onesComplement_17 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_17__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_17(svBitVecVal* value_onesComplement_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_17\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_17__Vcvt;
    value_onesComplement_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_17__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_17, value_onesComplement_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_18(const svBitVecVal* value_onesComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_18\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_18__Vcvt;
    value_onesComplement_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_18__Vcvt, value_onesComplement_18 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_18__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_18(svBitVecVal* value_onesComplement_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_18\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_18__Vcvt;
    value_onesComplement_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_18__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_18, value_onesComplement_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_19(const svBitVecVal* value_onesComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_19\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_19__Vcvt;
    value_onesComplement_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_19__Vcvt, value_onesComplement_19 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_19__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_19(svBitVecVal* value_onesComplement_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_19\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_19__Vcvt;
    value_onesComplement_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_19__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_19, value_onesComplement_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_20(const svBitVecVal* value_onesComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_20\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_20__Vcvt;
    value_onesComplement_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_20__Vcvt, value_onesComplement_20 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_20__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_20(svBitVecVal* value_onesComplement_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_20\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_20__Vcvt;
    value_onesComplement_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_20__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_20, value_onesComplement_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_21(const svBitVecVal* value_onesComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_21\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_21__Vcvt;
    value_onesComplement_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_21__Vcvt, value_onesComplement_21 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_21__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_21(svBitVecVal* value_onesComplement_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_21\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_21__Vcvt;
    value_onesComplement_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_21__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_21, value_onesComplement_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_22(const svBitVecVal* value_onesComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_22\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_22__Vcvt;
    value_onesComplement_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_22__Vcvt, value_onesComplement_22 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_22__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_22(svBitVecVal* value_onesComplement_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_22\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_22__Vcvt;
    value_onesComplement_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_22__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_22, value_onesComplement_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_23(const svBitVecVal* value_onesComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_23\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_23__Vcvt;
    value_onesComplement_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_23__Vcvt, value_onesComplement_23 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_23__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_23(svBitVecVal* value_onesComplement_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_23\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_23__Vcvt;
    value_onesComplement_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_23__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_23, value_onesComplement_23__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_24(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_24\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_24(const svBitVecVal* value_onesComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_24\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_24__Vcvt;
    value_onesComplement_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_24__Vcvt, value_onesComplement_24 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_24__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_24(svBitVecVal* value_onesComplement_24) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_24\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_24__Vcvt;
    value_onesComplement_24__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_24");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_24_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_24_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_24__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_24, value_onesComplement_24__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_25(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_25\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_25(const svBitVecVal* value_onesComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_25\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_25__Vcvt;
    value_onesComplement_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_25__Vcvt, value_onesComplement_25 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_25__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_25(svBitVecVal* value_onesComplement_25) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_25\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_25__Vcvt;
    value_onesComplement_25__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_25");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_25_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_25_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_25__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_25, value_onesComplement_25__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_26(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_26\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_26(const svBitVecVal* value_onesComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_26\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_26__Vcvt;
    value_onesComplement_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_26__Vcvt, value_onesComplement_26 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_26__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_26(svBitVecVal* value_onesComplement_26) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_26\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_26__Vcvt;
    value_onesComplement_26__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_26");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_26_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_26_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_26__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_26, value_onesComplement_26__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_27(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_27\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_27(const svBitVecVal* value_onesComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_27\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_27__Vcvt;
    value_onesComplement_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_27__Vcvt, value_onesComplement_27 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_27__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_27(svBitVecVal* value_onesComplement_27) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_27\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_27__Vcvt;
    value_onesComplement_27__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_27");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_27_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_27_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_27__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_27, value_onesComplement_27__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_28(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_28\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_28(const svBitVecVal* value_onesComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_28\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_28__Vcvt;
    value_onesComplement_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_28__Vcvt, value_onesComplement_28 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_28__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_28(svBitVecVal* value_onesComplement_28) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_28\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_28__Vcvt;
    value_onesComplement_28__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_28");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_28_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_28_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_28__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_28, value_onesComplement_28__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_29(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_29\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_29(const svBitVecVal* value_onesComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_29\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_29__Vcvt;
    value_onesComplement_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_29__Vcvt, value_onesComplement_29 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_29__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_29(svBitVecVal* value_onesComplement_29) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_29\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_29__Vcvt;
    value_onesComplement_29__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_29");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_29_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_29_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_29__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_29, value_onesComplement_29__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_30(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_30\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_30(const svBitVecVal* value_onesComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_30\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_30__Vcvt;
    value_onesComplement_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_30__Vcvt, value_onesComplement_30 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_30__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_30(svBitVecVal* value_onesComplement_30) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_30\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_30__Vcvt;
    value_onesComplement_30__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_30");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_30_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_30_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_30__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_30, value_onesComplement_30__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_onesComplement_31(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_onesComplement_31\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_onesComplement_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_onesComplement_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_onesComplement_31(const svBitVecVal* value_onesComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_onesComplement_31\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_31__Vcvt;
    value_onesComplement_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_onesComplement_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_onesComplement_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_onesComplement_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_onesComplement_31__Vcvt, value_onesComplement_31 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_31__Vcvt);
}

void VsvsimTestbench::getBitsImpl_onesComplement_31(svBitVecVal* value_onesComplement_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_onesComplement_31\n"); );
    // Locals
    CData/*0:0*/ value_onesComplement_31__Vcvt;
    value_onesComplement_31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_onesComplement_31");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_onesComplement_31_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_onesComplement_31_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_onesComplement_31__Vcvt);
    VL_SET_SVBV_I(1, value_onesComplement_31, value_onesComplement_31__Vcvt);
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
