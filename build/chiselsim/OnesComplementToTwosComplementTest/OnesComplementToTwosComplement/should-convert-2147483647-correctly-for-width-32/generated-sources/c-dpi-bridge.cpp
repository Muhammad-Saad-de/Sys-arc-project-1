#include <stdint.h>

#ifdef SVSIM_ENABLE_VERILATOR_SUPPORT
#include "verilated-sources/VsvsimTestbench__Dpi.h"
#endif
#ifdef SVSIM_ENABLE_VCS_SUPPORT
#include "vc_hdrs.h"
#endif

extern "C" {
 svScope setScopeToTestBench();
void getBitWidth_clock(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_clock(result);
           svSetScope(prev);
        }
void getBits_clock(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_clock(result);
           svSetScope(prev);
        }
void setBits_clock(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_clock(data);
           svSetScope(prev);
        }
void getBitWidth_reset(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_reset(result);
           svSetScope(prev);
        }
void getBits_reset(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_reset(result);
           svSetScope(prev);
        }
void setBits_reset(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_reset(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_0(result);
           svSetScope(prev);
        }
void getBits_onesComplement_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_0(result);
           svSetScope(prev);
        }
void setBits_onesComplement_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_0(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_1(result);
           svSetScope(prev);
        }
void getBits_onesComplement_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_1(result);
           svSetScope(prev);
        }
void setBits_onesComplement_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_1(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_2(result);
           svSetScope(prev);
        }
void getBits_onesComplement_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_2(result);
           svSetScope(prev);
        }
void setBits_onesComplement_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_2(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_3(result);
           svSetScope(prev);
        }
void getBits_onesComplement_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_3(result);
           svSetScope(prev);
        }
void setBits_onesComplement_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_3(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_4(result);
           svSetScope(prev);
        }
void getBits_onesComplement_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_4(result);
           svSetScope(prev);
        }
void setBits_onesComplement_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_4(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_5(result);
           svSetScope(prev);
        }
void getBits_onesComplement_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_5(result);
           svSetScope(prev);
        }
void setBits_onesComplement_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_5(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_6(result);
           svSetScope(prev);
        }
void getBits_onesComplement_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_6(result);
           svSetScope(prev);
        }
void setBits_onesComplement_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_6(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_7(result);
           svSetScope(prev);
        }
void getBits_onesComplement_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_7(result);
           svSetScope(prev);
        }
void setBits_onesComplement_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_7(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_8(result);
           svSetScope(prev);
        }
void getBits_onesComplement_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_8(result);
           svSetScope(prev);
        }
void setBits_onesComplement_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_8(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_9(result);
           svSetScope(prev);
        }
void getBits_onesComplement_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_9(result);
           svSetScope(prev);
        }
void setBits_onesComplement_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_9(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_10(result);
           svSetScope(prev);
        }
void getBits_onesComplement_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_10(result);
           svSetScope(prev);
        }
void setBits_onesComplement_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_10(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_11(result);
           svSetScope(prev);
        }
void getBits_onesComplement_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_11(result);
           svSetScope(prev);
        }
void setBits_onesComplement_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_11(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_12(result);
           svSetScope(prev);
        }
void getBits_onesComplement_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_12(result);
           svSetScope(prev);
        }
void setBits_onesComplement_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_12(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_13(result);
           svSetScope(prev);
        }
void getBits_onesComplement_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_13(result);
           svSetScope(prev);
        }
void setBits_onesComplement_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_13(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_14(result);
           svSetScope(prev);
        }
void getBits_onesComplement_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_14(result);
           svSetScope(prev);
        }
void setBits_onesComplement_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_14(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_15(result);
           svSetScope(prev);
        }
void getBits_onesComplement_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_15(result);
           svSetScope(prev);
        }
void setBits_onesComplement_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_15(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_16(result);
           svSetScope(prev);
        }
void getBits_onesComplement_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_16(result);
           svSetScope(prev);
        }
void setBits_onesComplement_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_16(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_17(result);
           svSetScope(prev);
        }
void getBits_onesComplement_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_17(result);
           svSetScope(prev);
        }
void setBits_onesComplement_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_17(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_18(result);
           svSetScope(prev);
        }
void getBits_onesComplement_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_18(result);
           svSetScope(prev);
        }
void setBits_onesComplement_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_18(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_19(result);
           svSetScope(prev);
        }
void getBits_onesComplement_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_19(result);
           svSetScope(prev);
        }
void setBits_onesComplement_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_19(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_20(result);
           svSetScope(prev);
        }
void getBits_onesComplement_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_20(result);
           svSetScope(prev);
        }
void setBits_onesComplement_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_20(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_21(result);
           svSetScope(prev);
        }
void getBits_onesComplement_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_21(result);
           svSetScope(prev);
        }
void setBits_onesComplement_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_21(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_22(result);
           svSetScope(prev);
        }
void getBits_onesComplement_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_22(result);
           svSetScope(prev);
        }
void setBits_onesComplement_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_22(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_23(result);
           svSetScope(prev);
        }
void getBits_onesComplement_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_23(result);
           svSetScope(prev);
        }
void setBits_onesComplement_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_23(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_24(result);
           svSetScope(prev);
        }
void getBits_onesComplement_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_24(result);
           svSetScope(prev);
        }
void setBits_onesComplement_24(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_24(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_25(result);
           svSetScope(prev);
        }
void getBits_onesComplement_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_25(result);
           svSetScope(prev);
        }
void setBits_onesComplement_25(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_25(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_26(result);
           svSetScope(prev);
        }
void getBits_onesComplement_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_26(result);
           svSetScope(prev);
        }
void setBits_onesComplement_26(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_26(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_27(result);
           svSetScope(prev);
        }
void getBits_onesComplement_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_27(result);
           svSetScope(prev);
        }
void setBits_onesComplement_27(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_27(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_28(result);
           svSetScope(prev);
        }
void getBits_onesComplement_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_28(result);
           svSetScope(prev);
        }
void setBits_onesComplement_28(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_28(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_29(result);
           svSetScope(prev);
        }
void getBits_onesComplement_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_29(result);
           svSetScope(prev);
        }
void setBits_onesComplement_29(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_29(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_30(result);
           svSetScope(prev);
        }
void getBits_onesComplement_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_30(result);
           svSetScope(prev);
        }
void setBits_onesComplement_30(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_30(data);
           svSetScope(prev);
        }
void getBitWidth_onesComplement_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_onesComplement_31(result);
           svSetScope(prev);
        }
void getBits_onesComplement_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_onesComplement_31(result);
           svSetScope(prev);
        }
void setBits_onesComplement_31(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_onesComplement_31(data);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_0(result);
           svSetScope(prev);
        }
void getBits_twosComplement_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_0(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_1(result);
           svSetScope(prev);
        }
void getBits_twosComplement_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_1(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_2(result);
           svSetScope(prev);
        }
void getBits_twosComplement_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_2(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_3(result);
           svSetScope(prev);
        }
void getBits_twosComplement_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_3(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_4(result);
           svSetScope(prev);
        }
void getBits_twosComplement_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_4(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_5(result);
           svSetScope(prev);
        }
void getBits_twosComplement_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_5(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_6(result);
           svSetScope(prev);
        }
void getBits_twosComplement_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_6(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_7(result);
           svSetScope(prev);
        }
void getBits_twosComplement_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_7(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_8(result);
           svSetScope(prev);
        }
void getBits_twosComplement_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_8(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_9(result);
           svSetScope(prev);
        }
void getBits_twosComplement_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_9(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_10(result);
           svSetScope(prev);
        }
void getBits_twosComplement_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_10(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_11(result);
           svSetScope(prev);
        }
void getBits_twosComplement_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_11(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_12(result);
           svSetScope(prev);
        }
void getBits_twosComplement_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_12(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_13(result);
           svSetScope(prev);
        }
void getBits_twosComplement_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_13(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_14(result);
           svSetScope(prev);
        }
void getBits_twosComplement_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_14(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_15(result);
           svSetScope(prev);
        }
void getBits_twosComplement_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_15(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_16(result);
           svSetScope(prev);
        }
void getBits_twosComplement_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_16(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_17(result);
           svSetScope(prev);
        }
void getBits_twosComplement_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_17(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_18(result);
           svSetScope(prev);
        }
void getBits_twosComplement_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_18(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_19(result);
           svSetScope(prev);
        }
void getBits_twosComplement_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_19(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_20(result);
           svSetScope(prev);
        }
void getBits_twosComplement_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_20(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_21(result);
           svSetScope(prev);
        }
void getBits_twosComplement_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_21(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_22(result);
           svSetScope(prev);
        }
void getBits_twosComplement_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_22(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_23(result);
           svSetScope(prev);
        }
void getBits_twosComplement_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_23(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_24(result);
           svSetScope(prev);
        }
void getBits_twosComplement_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_24(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_25(result);
           svSetScope(prev);
        }
void getBits_twosComplement_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_25(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_26(result);
           svSetScope(prev);
        }
void getBits_twosComplement_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_26(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_27(result);
           svSetScope(prev);
        }
void getBits_twosComplement_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_27(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_28(result);
           svSetScope(prev);
        }
void getBits_twosComplement_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_28(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_29(result);
           svSetScope(prev);
        }
void getBits_twosComplement_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_29(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_30(result);
           svSetScope(prev);
        }
void getBits_twosComplement_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_30(result);
           svSetScope(prev);
        }
void getBitWidth_twosComplement_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_twosComplement_31(result);
           svSetScope(prev);
        }
void getBits_twosComplement_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_twosComplement_31(result);
           svSetScope(prev);
        }

int port_getter(int id, int *bitWidth, void (**getter)(uint8_t*)) {
  switch (id) {
    case 0: // clock
      getBitWidth_clock(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_clock;
      return 0;
    case 1: // reset
      getBitWidth_reset(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_reset;
      return 0;
    case 2: // onesComplement_0
      getBitWidth_onesComplement_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_0;
      return 0;
    case 3: // onesComplement_1
      getBitWidth_onesComplement_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_1;
      return 0;
    case 4: // onesComplement_2
      getBitWidth_onesComplement_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_2;
      return 0;
    case 5: // onesComplement_3
      getBitWidth_onesComplement_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_3;
      return 0;
    case 6: // onesComplement_4
      getBitWidth_onesComplement_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_4;
      return 0;
    case 7: // onesComplement_5
      getBitWidth_onesComplement_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_5;
      return 0;
    case 8: // onesComplement_6
      getBitWidth_onesComplement_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_6;
      return 0;
    case 9: // onesComplement_7
      getBitWidth_onesComplement_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_7;
      return 0;
    case 10: // onesComplement_8
      getBitWidth_onesComplement_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_8;
      return 0;
    case 11: // onesComplement_9
      getBitWidth_onesComplement_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_9;
      return 0;
    case 12: // onesComplement_10
      getBitWidth_onesComplement_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_10;
      return 0;
    case 13: // onesComplement_11
      getBitWidth_onesComplement_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_11;
      return 0;
    case 14: // onesComplement_12
      getBitWidth_onesComplement_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_12;
      return 0;
    case 15: // onesComplement_13
      getBitWidth_onesComplement_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_13;
      return 0;
    case 16: // onesComplement_14
      getBitWidth_onesComplement_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_14;
      return 0;
    case 17: // onesComplement_15
      getBitWidth_onesComplement_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_15;
      return 0;
    case 18: // onesComplement_16
      getBitWidth_onesComplement_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_16;
      return 0;
    case 19: // onesComplement_17
      getBitWidth_onesComplement_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_17;
      return 0;
    case 20: // onesComplement_18
      getBitWidth_onesComplement_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_18;
      return 0;
    case 21: // onesComplement_19
      getBitWidth_onesComplement_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_19;
      return 0;
    case 22: // onesComplement_20
      getBitWidth_onesComplement_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_20;
      return 0;
    case 23: // onesComplement_21
      getBitWidth_onesComplement_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_21;
      return 0;
    case 24: // onesComplement_22
      getBitWidth_onesComplement_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_22;
      return 0;
    case 25: // onesComplement_23
      getBitWidth_onesComplement_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_23;
      return 0;
    case 26: // onesComplement_24
      getBitWidth_onesComplement_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_24;
      return 0;
    case 27: // onesComplement_25
      getBitWidth_onesComplement_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_25;
      return 0;
    case 28: // onesComplement_26
      getBitWidth_onesComplement_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_26;
      return 0;
    case 29: // onesComplement_27
      getBitWidth_onesComplement_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_27;
      return 0;
    case 30: // onesComplement_28
      getBitWidth_onesComplement_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_28;
      return 0;
    case 31: // onesComplement_29
      getBitWidth_onesComplement_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_29;
      return 0;
    case 32: // onesComplement_30
      getBitWidth_onesComplement_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_30;
      return 0;
    case 33: // onesComplement_31
      getBitWidth_onesComplement_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_31;
      return 0;
    case 34: // twosComplement_0
      getBitWidth_twosComplement_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_0;
      return 0;
    case 35: // twosComplement_1
      getBitWidth_twosComplement_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_1;
      return 0;
    case 36: // twosComplement_2
      getBitWidth_twosComplement_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_2;
      return 0;
    case 37: // twosComplement_3
      getBitWidth_twosComplement_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_3;
      return 0;
    case 38: // twosComplement_4
      getBitWidth_twosComplement_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_4;
      return 0;
    case 39: // twosComplement_5
      getBitWidth_twosComplement_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_5;
      return 0;
    case 40: // twosComplement_6
      getBitWidth_twosComplement_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_6;
      return 0;
    case 41: // twosComplement_7
      getBitWidth_twosComplement_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_7;
      return 0;
    case 42: // twosComplement_8
      getBitWidth_twosComplement_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_8;
      return 0;
    case 43: // twosComplement_9
      getBitWidth_twosComplement_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_9;
      return 0;
    case 44: // twosComplement_10
      getBitWidth_twosComplement_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_10;
      return 0;
    case 45: // twosComplement_11
      getBitWidth_twosComplement_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_11;
      return 0;
    case 46: // twosComplement_12
      getBitWidth_twosComplement_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_12;
      return 0;
    case 47: // twosComplement_13
      getBitWidth_twosComplement_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_13;
      return 0;
    case 48: // twosComplement_14
      getBitWidth_twosComplement_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_14;
      return 0;
    case 49: // twosComplement_15
      getBitWidth_twosComplement_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_15;
      return 0;
    case 50: // twosComplement_16
      getBitWidth_twosComplement_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_16;
      return 0;
    case 51: // twosComplement_17
      getBitWidth_twosComplement_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_17;
      return 0;
    case 52: // twosComplement_18
      getBitWidth_twosComplement_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_18;
      return 0;
    case 53: // twosComplement_19
      getBitWidth_twosComplement_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_19;
      return 0;
    case 54: // twosComplement_20
      getBitWidth_twosComplement_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_20;
      return 0;
    case 55: // twosComplement_21
      getBitWidth_twosComplement_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_21;
      return 0;
    case 56: // twosComplement_22
      getBitWidth_twosComplement_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_22;
      return 0;
    case 57: // twosComplement_23
      getBitWidth_twosComplement_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_23;
      return 0;
    case 58: // twosComplement_24
      getBitWidth_twosComplement_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_24;
      return 0;
    case 59: // twosComplement_25
      getBitWidth_twosComplement_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_25;
      return 0;
    case 60: // twosComplement_26
      getBitWidth_twosComplement_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_26;
      return 0;
    case 61: // twosComplement_27
      getBitWidth_twosComplement_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_27;
      return 0;
    case 62: // twosComplement_28
      getBitWidth_twosComplement_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_28;
      return 0;
    case 63: // twosComplement_29
      getBitWidth_twosComplement_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_29;
      return 0;
    case 64: // twosComplement_30
      getBitWidth_twosComplement_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_30;
      return 0;
    case 65: // twosComplement_31
      getBitWidth_twosComplement_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_twosComplement_31;
      return 0;
    default:
      return -1;
  }
}

int port_setter(int id, int *bitWidth, void (**setter)(const uint8_t*)) {
  switch (id) {
    case 0: // clock
      getBitWidth_clock(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_clock;
      return 0;
    case 1: // reset
      getBitWidth_reset(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_reset;
      return 0;
    case 2: // onesComplement_0
      getBitWidth_onesComplement_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_0;
      return 0;
    case 3: // onesComplement_1
      getBitWidth_onesComplement_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_1;
      return 0;
    case 4: // onesComplement_2
      getBitWidth_onesComplement_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_2;
      return 0;
    case 5: // onesComplement_3
      getBitWidth_onesComplement_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_3;
      return 0;
    case 6: // onesComplement_4
      getBitWidth_onesComplement_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_4;
      return 0;
    case 7: // onesComplement_5
      getBitWidth_onesComplement_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_5;
      return 0;
    case 8: // onesComplement_6
      getBitWidth_onesComplement_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_6;
      return 0;
    case 9: // onesComplement_7
      getBitWidth_onesComplement_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_7;
      return 0;
    case 10: // onesComplement_8
      getBitWidth_onesComplement_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_8;
      return 0;
    case 11: // onesComplement_9
      getBitWidth_onesComplement_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_9;
      return 0;
    case 12: // onesComplement_10
      getBitWidth_onesComplement_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_10;
      return 0;
    case 13: // onesComplement_11
      getBitWidth_onesComplement_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_11;
      return 0;
    case 14: // onesComplement_12
      getBitWidth_onesComplement_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_12;
      return 0;
    case 15: // onesComplement_13
      getBitWidth_onesComplement_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_13;
      return 0;
    case 16: // onesComplement_14
      getBitWidth_onesComplement_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_14;
      return 0;
    case 17: // onesComplement_15
      getBitWidth_onesComplement_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_15;
      return 0;
    case 18: // onesComplement_16
      getBitWidth_onesComplement_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_16;
      return 0;
    case 19: // onesComplement_17
      getBitWidth_onesComplement_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_17;
      return 0;
    case 20: // onesComplement_18
      getBitWidth_onesComplement_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_18;
      return 0;
    case 21: // onesComplement_19
      getBitWidth_onesComplement_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_19;
      return 0;
    case 22: // onesComplement_20
      getBitWidth_onesComplement_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_20;
      return 0;
    case 23: // onesComplement_21
      getBitWidth_onesComplement_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_21;
      return 0;
    case 24: // onesComplement_22
      getBitWidth_onesComplement_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_22;
      return 0;
    case 25: // onesComplement_23
      getBitWidth_onesComplement_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_23;
      return 0;
    case 26: // onesComplement_24
      getBitWidth_onesComplement_24(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_24;
      return 0;
    case 27: // onesComplement_25
      getBitWidth_onesComplement_25(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_25;
      return 0;
    case 28: // onesComplement_26
      getBitWidth_onesComplement_26(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_26;
      return 0;
    case 29: // onesComplement_27
      getBitWidth_onesComplement_27(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_27;
      return 0;
    case 30: // onesComplement_28
      getBitWidth_onesComplement_28(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_28;
      return 0;
    case 31: // onesComplement_29
      getBitWidth_onesComplement_29(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_29;
      return 0;
    case 32: // onesComplement_30
      getBitWidth_onesComplement_30(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_30;
      return 0;
    case 33: // onesComplement_31
      getBitWidth_onesComplement_31(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_onesComplement_31;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

