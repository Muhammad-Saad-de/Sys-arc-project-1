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
void getBitWidth_a_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_0(result);
           svSetScope(prev);
        }
void getBits_a_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_0(result);
           svSetScope(prev);
        }
void setBits_a_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_0(data);
           svSetScope(prev);
        }
void getBitWidth_a_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_1(result);
           svSetScope(prev);
        }
void getBits_a_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_1(result);
           svSetScope(prev);
        }
void setBits_a_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_1(data);
           svSetScope(prev);
        }
void getBitWidth_a_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_2(result);
           svSetScope(prev);
        }
void getBits_a_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_2(result);
           svSetScope(prev);
        }
void setBits_a_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_2(data);
           svSetScope(prev);
        }
void getBitWidth_a_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_3(result);
           svSetScope(prev);
        }
void getBits_a_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_3(result);
           svSetScope(prev);
        }
void setBits_a_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_3(data);
           svSetScope(prev);
        }
void getBitWidth_a_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_4(result);
           svSetScope(prev);
        }
void getBits_a_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_4(result);
           svSetScope(prev);
        }
void setBits_a_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_4(data);
           svSetScope(prev);
        }
void getBitWidth_a_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_5(result);
           svSetScope(prev);
        }
void getBits_a_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_5(result);
           svSetScope(prev);
        }
void setBits_a_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_5(data);
           svSetScope(prev);
        }
void getBitWidth_a_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_6(result);
           svSetScope(prev);
        }
void getBits_a_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_6(result);
           svSetScope(prev);
        }
void setBits_a_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_6(data);
           svSetScope(prev);
        }
void getBitWidth_a_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_7(result);
           svSetScope(prev);
        }
void getBits_a_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_7(result);
           svSetScope(prev);
        }
void setBits_a_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_7(data);
           svSetScope(prev);
        }
void getBitWidth_a_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_8(result);
           svSetScope(prev);
        }
void getBits_a_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_8(result);
           svSetScope(prev);
        }
void setBits_a_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_8(data);
           svSetScope(prev);
        }
void getBitWidth_a_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_9(result);
           svSetScope(prev);
        }
void getBits_a_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_9(result);
           svSetScope(prev);
        }
void setBits_a_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_9(data);
           svSetScope(prev);
        }
void getBitWidth_a_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_10(result);
           svSetScope(prev);
        }
void getBits_a_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_10(result);
           svSetScope(prev);
        }
void setBits_a_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_10(data);
           svSetScope(prev);
        }
void getBitWidth_a_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_11(result);
           svSetScope(prev);
        }
void getBits_a_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_11(result);
           svSetScope(prev);
        }
void setBits_a_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_11(data);
           svSetScope(prev);
        }
void getBitWidth_a_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_12(result);
           svSetScope(prev);
        }
void getBits_a_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_12(result);
           svSetScope(prev);
        }
void setBits_a_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_12(data);
           svSetScope(prev);
        }
void getBitWidth_a_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_13(result);
           svSetScope(prev);
        }
void getBits_a_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_13(result);
           svSetScope(prev);
        }
void setBits_a_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_13(data);
           svSetScope(prev);
        }
void getBitWidth_a_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_14(result);
           svSetScope(prev);
        }
void getBits_a_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_14(result);
           svSetScope(prev);
        }
void setBits_a_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_14(data);
           svSetScope(prev);
        }
void getBitWidth_a_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_15(result);
           svSetScope(prev);
        }
void getBits_a_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_15(result);
           svSetScope(prev);
        }
void setBits_a_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_15(data);
           svSetScope(prev);
        }
void getBitWidth_a_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_16(result);
           svSetScope(prev);
        }
void getBits_a_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_16(result);
           svSetScope(prev);
        }
void setBits_a_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_16(data);
           svSetScope(prev);
        }
void getBitWidth_a_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_17(result);
           svSetScope(prev);
        }
void getBits_a_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_17(result);
           svSetScope(prev);
        }
void setBits_a_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_17(data);
           svSetScope(prev);
        }
void getBitWidth_a_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_18(result);
           svSetScope(prev);
        }
void getBits_a_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_18(result);
           svSetScope(prev);
        }
void setBits_a_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_18(data);
           svSetScope(prev);
        }
void getBitWidth_a_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_19(result);
           svSetScope(prev);
        }
void getBits_a_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_19(result);
           svSetScope(prev);
        }
void setBits_a_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_19(data);
           svSetScope(prev);
        }
void getBitWidth_a_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_20(result);
           svSetScope(prev);
        }
void getBits_a_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_20(result);
           svSetScope(prev);
        }
void setBits_a_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_20(data);
           svSetScope(prev);
        }
void getBitWidth_a_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_21(result);
           svSetScope(prev);
        }
void getBits_a_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_21(result);
           svSetScope(prev);
        }
void setBits_a_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_21(data);
           svSetScope(prev);
        }
void getBitWidth_a_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_22(result);
           svSetScope(prev);
        }
void getBits_a_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_22(result);
           svSetScope(prev);
        }
void setBits_a_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_22(data);
           svSetScope(prev);
        }
void getBitWidth_a_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_23(result);
           svSetScope(prev);
        }
void getBits_a_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_23(result);
           svSetScope(prev);
        }
void setBits_a_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_23(data);
           svSetScope(prev);
        }
void getBitWidth_a_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_24(result);
           svSetScope(prev);
        }
void getBits_a_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_24(result);
           svSetScope(prev);
        }
void setBits_a_24(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_24(data);
           svSetScope(prev);
        }
void getBitWidth_a_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_25(result);
           svSetScope(prev);
        }
void getBits_a_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_25(result);
           svSetScope(prev);
        }
void setBits_a_25(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_25(data);
           svSetScope(prev);
        }
void getBitWidth_a_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_26(result);
           svSetScope(prev);
        }
void getBits_a_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_26(result);
           svSetScope(prev);
        }
void setBits_a_26(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_26(data);
           svSetScope(prev);
        }
void getBitWidth_a_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_27(result);
           svSetScope(prev);
        }
void getBits_a_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_27(result);
           svSetScope(prev);
        }
void setBits_a_27(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_27(data);
           svSetScope(prev);
        }
void getBitWidth_a_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_28(result);
           svSetScope(prev);
        }
void getBits_a_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_28(result);
           svSetScope(prev);
        }
void setBits_a_28(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_28(data);
           svSetScope(prev);
        }
void getBitWidth_a_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_29(result);
           svSetScope(prev);
        }
void getBits_a_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_29(result);
           svSetScope(prev);
        }
void setBits_a_29(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_29(data);
           svSetScope(prev);
        }
void getBitWidth_a_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_30(result);
           svSetScope(prev);
        }
void getBits_a_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_30(result);
           svSetScope(prev);
        }
void setBits_a_30(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_30(data);
           svSetScope(prev);
        }
void getBitWidth_a_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a_31(result);
           svSetScope(prev);
        }
void getBits_a_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a_31(result);
           svSetScope(prev);
        }
void setBits_a_31(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a_31(data);
           svSetScope(prev);
        }
void getBitWidth_b_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_0(result);
           svSetScope(prev);
        }
void getBits_b_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_0(result);
           svSetScope(prev);
        }
void setBits_b_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_0(data);
           svSetScope(prev);
        }
void getBitWidth_b_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_1(result);
           svSetScope(prev);
        }
void getBits_b_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_1(result);
           svSetScope(prev);
        }
void setBits_b_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_1(data);
           svSetScope(prev);
        }
void getBitWidth_b_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_2(result);
           svSetScope(prev);
        }
void getBits_b_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_2(result);
           svSetScope(prev);
        }
void setBits_b_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_2(data);
           svSetScope(prev);
        }
void getBitWidth_b_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_3(result);
           svSetScope(prev);
        }
void getBits_b_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_3(result);
           svSetScope(prev);
        }
void setBits_b_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_3(data);
           svSetScope(prev);
        }
void getBitWidth_b_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_4(result);
           svSetScope(prev);
        }
void getBits_b_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_4(result);
           svSetScope(prev);
        }
void setBits_b_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_4(data);
           svSetScope(prev);
        }
void getBitWidth_b_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_5(result);
           svSetScope(prev);
        }
void getBits_b_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_5(result);
           svSetScope(prev);
        }
void setBits_b_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_5(data);
           svSetScope(prev);
        }
void getBitWidth_b_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_6(result);
           svSetScope(prev);
        }
void getBits_b_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_6(result);
           svSetScope(prev);
        }
void setBits_b_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_6(data);
           svSetScope(prev);
        }
void getBitWidth_b_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_7(result);
           svSetScope(prev);
        }
void getBits_b_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_7(result);
           svSetScope(prev);
        }
void setBits_b_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_7(data);
           svSetScope(prev);
        }
void getBitWidth_b_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_8(result);
           svSetScope(prev);
        }
void getBits_b_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_8(result);
           svSetScope(prev);
        }
void setBits_b_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_8(data);
           svSetScope(prev);
        }
void getBitWidth_b_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_9(result);
           svSetScope(prev);
        }
void getBits_b_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_9(result);
           svSetScope(prev);
        }
void setBits_b_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_9(data);
           svSetScope(prev);
        }
void getBitWidth_b_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_10(result);
           svSetScope(prev);
        }
void getBits_b_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_10(result);
           svSetScope(prev);
        }
void setBits_b_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_10(data);
           svSetScope(prev);
        }
void getBitWidth_b_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_11(result);
           svSetScope(prev);
        }
void getBits_b_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_11(result);
           svSetScope(prev);
        }
void setBits_b_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_11(data);
           svSetScope(prev);
        }
void getBitWidth_b_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_12(result);
           svSetScope(prev);
        }
void getBits_b_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_12(result);
           svSetScope(prev);
        }
void setBits_b_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_12(data);
           svSetScope(prev);
        }
void getBitWidth_b_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_13(result);
           svSetScope(prev);
        }
void getBits_b_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_13(result);
           svSetScope(prev);
        }
void setBits_b_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_13(data);
           svSetScope(prev);
        }
void getBitWidth_b_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_14(result);
           svSetScope(prev);
        }
void getBits_b_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_14(result);
           svSetScope(prev);
        }
void setBits_b_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_14(data);
           svSetScope(prev);
        }
void getBitWidth_b_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_15(result);
           svSetScope(prev);
        }
void getBits_b_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_15(result);
           svSetScope(prev);
        }
void setBits_b_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_15(data);
           svSetScope(prev);
        }
void getBitWidth_b_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_16(result);
           svSetScope(prev);
        }
void getBits_b_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_16(result);
           svSetScope(prev);
        }
void setBits_b_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_16(data);
           svSetScope(prev);
        }
void getBitWidth_b_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_17(result);
           svSetScope(prev);
        }
void getBits_b_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_17(result);
           svSetScope(prev);
        }
void setBits_b_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_17(data);
           svSetScope(prev);
        }
void getBitWidth_b_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_18(result);
           svSetScope(prev);
        }
void getBits_b_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_18(result);
           svSetScope(prev);
        }
void setBits_b_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_18(data);
           svSetScope(prev);
        }
void getBitWidth_b_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_19(result);
           svSetScope(prev);
        }
void getBits_b_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_19(result);
           svSetScope(prev);
        }
void setBits_b_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_19(data);
           svSetScope(prev);
        }
void getBitWidth_b_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_20(result);
           svSetScope(prev);
        }
void getBits_b_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_20(result);
           svSetScope(prev);
        }
void setBits_b_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_20(data);
           svSetScope(prev);
        }
void getBitWidth_b_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_21(result);
           svSetScope(prev);
        }
void getBits_b_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_21(result);
           svSetScope(prev);
        }
void setBits_b_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_21(data);
           svSetScope(prev);
        }
void getBitWidth_b_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_22(result);
           svSetScope(prev);
        }
void getBits_b_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_22(result);
           svSetScope(prev);
        }
void setBits_b_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_22(data);
           svSetScope(prev);
        }
void getBitWidth_b_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_23(result);
           svSetScope(prev);
        }
void getBits_b_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_23(result);
           svSetScope(prev);
        }
void setBits_b_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_23(data);
           svSetScope(prev);
        }
void getBitWidth_b_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_24(result);
           svSetScope(prev);
        }
void getBits_b_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_24(result);
           svSetScope(prev);
        }
void setBits_b_24(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_24(data);
           svSetScope(prev);
        }
void getBitWidth_b_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_25(result);
           svSetScope(prev);
        }
void getBits_b_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_25(result);
           svSetScope(prev);
        }
void setBits_b_25(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_25(data);
           svSetScope(prev);
        }
void getBitWidth_b_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_26(result);
           svSetScope(prev);
        }
void getBits_b_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_26(result);
           svSetScope(prev);
        }
void setBits_b_26(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_26(data);
           svSetScope(prev);
        }
void getBitWidth_b_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_27(result);
           svSetScope(prev);
        }
void getBits_b_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_27(result);
           svSetScope(prev);
        }
void setBits_b_27(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_27(data);
           svSetScope(prev);
        }
void getBitWidth_b_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_28(result);
           svSetScope(prev);
        }
void getBits_b_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_28(result);
           svSetScope(prev);
        }
void setBits_b_28(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_28(data);
           svSetScope(prev);
        }
void getBitWidth_b_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_29(result);
           svSetScope(prev);
        }
void getBits_b_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_29(result);
           svSetScope(prev);
        }
void setBits_b_29(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_29(data);
           svSetScope(prev);
        }
void getBitWidth_b_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_30(result);
           svSetScope(prev);
        }
void getBits_b_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_30(result);
           svSetScope(prev);
        }
void setBits_b_30(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_30(data);
           svSetScope(prev);
        }
void getBitWidth_b_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b_31(result);
           svSetScope(prev);
        }
void getBits_b_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b_31(result);
           svSetScope(prev);
        }
void setBits_b_31(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b_31(data);
           svSetScope(prev);
        }
void getBitWidth_comparisonResult_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_comparisonResult_0(result);
           svSetScope(prev);
        }
void getBits_comparisonResult_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_comparisonResult_0(result);
           svSetScope(prev);
        }
void getBitWidth_comparisonResult_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_comparisonResult_1(result);
           svSetScope(prev);
        }
void getBits_comparisonResult_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_comparisonResult_1(result);
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
    case 2: // a_0
      getBitWidth_a_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_0;
      return 0;
    case 3: // a_1
      getBitWidth_a_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_1;
      return 0;
    case 4: // a_2
      getBitWidth_a_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_2;
      return 0;
    case 5: // a_3
      getBitWidth_a_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_3;
      return 0;
    case 6: // a_4
      getBitWidth_a_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_4;
      return 0;
    case 7: // a_5
      getBitWidth_a_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_5;
      return 0;
    case 8: // a_6
      getBitWidth_a_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_6;
      return 0;
    case 9: // a_7
      getBitWidth_a_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_7;
      return 0;
    case 10: // a_8
      getBitWidth_a_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_8;
      return 0;
    case 11: // a_9
      getBitWidth_a_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_9;
      return 0;
    case 12: // a_10
      getBitWidth_a_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_10;
      return 0;
    case 13: // a_11
      getBitWidth_a_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_11;
      return 0;
    case 14: // a_12
      getBitWidth_a_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_12;
      return 0;
    case 15: // a_13
      getBitWidth_a_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_13;
      return 0;
    case 16: // a_14
      getBitWidth_a_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_14;
      return 0;
    case 17: // a_15
      getBitWidth_a_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_15;
      return 0;
    case 18: // a_16
      getBitWidth_a_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_16;
      return 0;
    case 19: // a_17
      getBitWidth_a_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_17;
      return 0;
    case 20: // a_18
      getBitWidth_a_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_18;
      return 0;
    case 21: // a_19
      getBitWidth_a_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_19;
      return 0;
    case 22: // a_20
      getBitWidth_a_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_20;
      return 0;
    case 23: // a_21
      getBitWidth_a_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_21;
      return 0;
    case 24: // a_22
      getBitWidth_a_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_22;
      return 0;
    case 25: // a_23
      getBitWidth_a_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_23;
      return 0;
    case 26: // a_24
      getBitWidth_a_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_24;
      return 0;
    case 27: // a_25
      getBitWidth_a_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_25;
      return 0;
    case 28: // a_26
      getBitWidth_a_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_26;
      return 0;
    case 29: // a_27
      getBitWidth_a_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_27;
      return 0;
    case 30: // a_28
      getBitWidth_a_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_28;
      return 0;
    case 31: // a_29
      getBitWidth_a_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_29;
      return 0;
    case 32: // a_30
      getBitWidth_a_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_30;
      return 0;
    case 33: // a_31
      getBitWidth_a_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a_31;
      return 0;
    case 34: // b_0
      getBitWidth_b_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_0;
      return 0;
    case 35: // b_1
      getBitWidth_b_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_1;
      return 0;
    case 36: // b_2
      getBitWidth_b_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_2;
      return 0;
    case 37: // b_3
      getBitWidth_b_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_3;
      return 0;
    case 38: // b_4
      getBitWidth_b_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_4;
      return 0;
    case 39: // b_5
      getBitWidth_b_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_5;
      return 0;
    case 40: // b_6
      getBitWidth_b_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_6;
      return 0;
    case 41: // b_7
      getBitWidth_b_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_7;
      return 0;
    case 42: // b_8
      getBitWidth_b_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_8;
      return 0;
    case 43: // b_9
      getBitWidth_b_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_9;
      return 0;
    case 44: // b_10
      getBitWidth_b_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_10;
      return 0;
    case 45: // b_11
      getBitWidth_b_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_11;
      return 0;
    case 46: // b_12
      getBitWidth_b_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_12;
      return 0;
    case 47: // b_13
      getBitWidth_b_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_13;
      return 0;
    case 48: // b_14
      getBitWidth_b_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_14;
      return 0;
    case 49: // b_15
      getBitWidth_b_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_15;
      return 0;
    case 50: // b_16
      getBitWidth_b_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_16;
      return 0;
    case 51: // b_17
      getBitWidth_b_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_17;
      return 0;
    case 52: // b_18
      getBitWidth_b_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_18;
      return 0;
    case 53: // b_19
      getBitWidth_b_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_19;
      return 0;
    case 54: // b_20
      getBitWidth_b_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_20;
      return 0;
    case 55: // b_21
      getBitWidth_b_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_21;
      return 0;
    case 56: // b_22
      getBitWidth_b_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_22;
      return 0;
    case 57: // b_23
      getBitWidth_b_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_23;
      return 0;
    case 58: // b_24
      getBitWidth_b_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_24;
      return 0;
    case 59: // b_25
      getBitWidth_b_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_25;
      return 0;
    case 60: // b_26
      getBitWidth_b_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_26;
      return 0;
    case 61: // b_27
      getBitWidth_b_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_27;
      return 0;
    case 62: // b_28
      getBitWidth_b_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_28;
      return 0;
    case 63: // b_29
      getBitWidth_b_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_29;
      return 0;
    case 64: // b_30
      getBitWidth_b_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_30;
      return 0;
    case 65: // b_31
      getBitWidth_b_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_31;
      return 0;
    case 66: // comparisonResult_0
      getBitWidth_comparisonResult_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_comparisonResult_0;
      return 0;
    case 67: // comparisonResult_1
      getBitWidth_comparisonResult_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_comparisonResult_1;
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
    case 2: // a_0
      getBitWidth_a_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_0;
      return 0;
    case 3: // a_1
      getBitWidth_a_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_1;
      return 0;
    case 4: // a_2
      getBitWidth_a_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_2;
      return 0;
    case 5: // a_3
      getBitWidth_a_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_3;
      return 0;
    case 6: // a_4
      getBitWidth_a_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_4;
      return 0;
    case 7: // a_5
      getBitWidth_a_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_5;
      return 0;
    case 8: // a_6
      getBitWidth_a_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_6;
      return 0;
    case 9: // a_7
      getBitWidth_a_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_7;
      return 0;
    case 10: // a_8
      getBitWidth_a_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_8;
      return 0;
    case 11: // a_9
      getBitWidth_a_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_9;
      return 0;
    case 12: // a_10
      getBitWidth_a_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_10;
      return 0;
    case 13: // a_11
      getBitWidth_a_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_11;
      return 0;
    case 14: // a_12
      getBitWidth_a_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_12;
      return 0;
    case 15: // a_13
      getBitWidth_a_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_13;
      return 0;
    case 16: // a_14
      getBitWidth_a_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_14;
      return 0;
    case 17: // a_15
      getBitWidth_a_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_15;
      return 0;
    case 18: // a_16
      getBitWidth_a_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_16;
      return 0;
    case 19: // a_17
      getBitWidth_a_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_17;
      return 0;
    case 20: // a_18
      getBitWidth_a_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_18;
      return 0;
    case 21: // a_19
      getBitWidth_a_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_19;
      return 0;
    case 22: // a_20
      getBitWidth_a_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_20;
      return 0;
    case 23: // a_21
      getBitWidth_a_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_21;
      return 0;
    case 24: // a_22
      getBitWidth_a_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_22;
      return 0;
    case 25: // a_23
      getBitWidth_a_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_23;
      return 0;
    case 26: // a_24
      getBitWidth_a_24(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_24;
      return 0;
    case 27: // a_25
      getBitWidth_a_25(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_25;
      return 0;
    case 28: // a_26
      getBitWidth_a_26(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_26;
      return 0;
    case 29: // a_27
      getBitWidth_a_27(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_27;
      return 0;
    case 30: // a_28
      getBitWidth_a_28(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_28;
      return 0;
    case 31: // a_29
      getBitWidth_a_29(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_29;
      return 0;
    case 32: // a_30
      getBitWidth_a_30(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_30;
      return 0;
    case 33: // a_31
      getBitWidth_a_31(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a_31;
      return 0;
    case 34: // b_0
      getBitWidth_b_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_0;
      return 0;
    case 35: // b_1
      getBitWidth_b_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_1;
      return 0;
    case 36: // b_2
      getBitWidth_b_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_2;
      return 0;
    case 37: // b_3
      getBitWidth_b_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_3;
      return 0;
    case 38: // b_4
      getBitWidth_b_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_4;
      return 0;
    case 39: // b_5
      getBitWidth_b_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_5;
      return 0;
    case 40: // b_6
      getBitWidth_b_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_6;
      return 0;
    case 41: // b_7
      getBitWidth_b_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_7;
      return 0;
    case 42: // b_8
      getBitWidth_b_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_8;
      return 0;
    case 43: // b_9
      getBitWidth_b_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_9;
      return 0;
    case 44: // b_10
      getBitWidth_b_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_10;
      return 0;
    case 45: // b_11
      getBitWidth_b_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_11;
      return 0;
    case 46: // b_12
      getBitWidth_b_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_12;
      return 0;
    case 47: // b_13
      getBitWidth_b_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_13;
      return 0;
    case 48: // b_14
      getBitWidth_b_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_14;
      return 0;
    case 49: // b_15
      getBitWidth_b_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_15;
      return 0;
    case 50: // b_16
      getBitWidth_b_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_16;
      return 0;
    case 51: // b_17
      getBitWidth_b_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_17;
      return 0;
    case 52: // b_18
      getBitWidth_b_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_18;
      return 0;
    case 53: // b_19
      getBitWidth_b_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_19;
      return 0;
    case 54: // b_20
      getBitWidth_b_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_20;
      return 0;
    case 55: // b_21
      getBitWidth_b_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_21;
      return 0;
    case 56: // b_22
      getBitWidth_b_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_22;
      return 0;
    case 57: // b_23
      getBitWidth_b_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_23;
      return 0;
    case 58: // b_24
      getBitWidth_b_24(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_24;
      return 0;
    case 59: // b_25
      getBitWidth_b_25(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_25;
      return 0;
    case 60: // b_26
      getBitWidth_b_26(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_26;
      return 0;
    case 61: // b_27
      getBitWidth_b_27(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_27;
      return 0;
    case 62: // b_28
      getBitWidth_b_28(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_28;
      return 0;
    case 63: // b_29
      getBitWidth_b_29(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_29;
      return 0;
    case 64: // b_30
      getBitWidth_b_30(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_30;
      return 0;
    case 65: // b_31
      getBitWidth_b_31(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_31;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

