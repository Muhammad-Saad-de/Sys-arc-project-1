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
void getBitWidth_intInput_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_0(result);
           svSetScope(prev);
        }
void getBits_intInput_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_0(result);
           svSetScope(prev);
        }
void setBits_intInput_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_0(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_1(result);
           svSetScope(prev);
        }
void getBits_intInput_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_1(result);
           svSetScope(prev);
        }
void setBits_intInput_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_1(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_2(result);
           svSetScope(prev);
        }
void getBits_intInput_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_2(result);
           svSetScope(prev);
        }
void setBits_intInput_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_2(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_3(result);
           svSetScope(prev);
        }
void getBits_intInput_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_3(result);
           svSetScope(prev);
        }
void setBits_intInput_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_3(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_4(result);
           svSetScope(prev);
        }
void getBits_intInput_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_4(result);
           svSetScope(prev);
        }
void setBits_intInput_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_4(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_5(result);
           svSetScope(prev);
        }
void getBits_intInput_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_5(result);
           svSetScope(prev);
        }
void setBits_intInput_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_5(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_6(result);
           svSetScope(prev);
        }
void getBits_intInput_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_6(result);
           svSetScope(prev);
        }
void setBits_intInput_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_6(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_7(result);
           svSetScope(prev);
        }
void getBits_intInput_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_7(result);
           svSetScope(prev);
        }
void setBits_intInput_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_7(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_8(result);
           svSetScope(prev);
        }
void getBits_intInput_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_8(result);
           svSetScope(prev);
        }
void setBits_intInput_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_8(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_9(result);
           svSetScope(prev);
        }
void getBits_intInput_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_9(result);
           svSetScope(prev);
        }
void setBits_intInput_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_9(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_10(result);
           svSetScope(prev);
        }
void getBits_intInput_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_10(result);
           svSetScope(prev);
        }
void setBits_intInput_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_10(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_11(result);
           svSetScope(prev);
        }
void getBits_intInput_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_11(result);
           svSetScope(prev);
        }
void setBits_intInput_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_11(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_12(result);
           svSetScope(prev);
        }
void getBits_intInput_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_12(result);
           svSetScope(prev);
        }
void setBits_intInput_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_12(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_13(result);
           svSetScope(prev);
        }
void getBits_intInput_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_13(result);
           svSetScope(prev);
        }
void setBits_intInput_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_13(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_14(result);
           svSetScope(prev);
        }
void getBits_intInput_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_14(result);
           svSetScope(prev);
        }
void setBits_intInput_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_14(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_15(result);
           svSetScope(prev);
        }
void getBits_intInput_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_15(result);
           svSetScope(prev);
        }
void setBits_intInput_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_15(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_16(result);
           svSetScope(prev);
        }
void getBits_intInput_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_16(result);
           svSetScope(prev);
        }
void setBits_intInput_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_16(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_17(result);
           svSetScope(prev);
        }
void getBits_intInput_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_17(result);
           svSetScope(prev);
        }
void setBits_intInput_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_17(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_18(result);
           svSetScope(prev);
        }
void getBits_intInput_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_18(result);
           svSetScope(prev);
        }
void setBits_intInput_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_18(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_19(result);
           svSetScope(prev);
        }
void getBits_intInput_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_19(result);
           svSetScope(prev);
        }
void setBits_intInput_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_19(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_20(result);
           svSetScope(prev);
        }
void getBits_intInput_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_20(result);
           svSetScope(prev);
        }
void setBits_intInput_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_20(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_21(result);
           svSetScope(prev);
        }
void getBits_intInput_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_21(result);
           svSetScope(prev);
        }
void setBits_intInput_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_21(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_22(result);
           svSetScope(prev);
        }
void getBits_intInput_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_22(result);
           svSetScope(prev);
        }
void setBits_intInput_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_22(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_23(result);
           svSetScope(prev);
        }
void getBits_intInput_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_23(result);
           svSetScope(prev);
        }
void setBits_intInput_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_23(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_24(result);
           svSetScope(prev);
        }
void getBits_intInput_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_24(result);
           svSetScope(prev);
        }
void setBits_intInput_24(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_24(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_25(result);
           svSetScope(prev);
        }
void getBits_intInput_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_25(result);
           svSetScope(prev);
        }
void setBits_intInput_25(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_25(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_26(result);
           svSetScope(prev);
        }
void getBits_intInput_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_26(result);
           svSetScope(prev);
        }
void setBits_intInput_26(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_26(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_27(result);
           svSetScope(prev);
        }
void getBits_intInput_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_27(result);
           svSetScope(prev);
        }
void setBits_intInput_27(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_27(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_28(result);
           svSetScope(prev);
        }
void getBits_intInput_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_28(result);
           svSetScope(prev);
        }
void setBits_intInput_28(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_28(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_29(result);
           svSetScope(prev);
        }
void getBits_intInput_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_29(result);
           svSetScope(prev);
        }
void setBits_intInput_29(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_29(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_30(result);
           svSetScope(prev);
        }
void getBits_intInput_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_30(result);
           svSetScope(prev);
        }
void setBits_intInput_30(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_30(data);
           svSetScope(prev);
        }
void getBitWidth_intInput_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_intInput_31(result);
           svSetScope(prev);
        }
void getBits_intInput_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_intInput_31(result);
           svSetScope(prev);
        }
void setBits_intInput_31(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_intInput_31(data);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_0(result);
           svSetScope(prev);
        }
void getBits_floatOutput_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_0(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_1(result);
           svSetScope(prev);
        }
void getBits_floatOutput_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_1(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_2(result);
           svSetScope(prev);
        }
void getBits_floatOutput_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_2(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_3(result);
           svSetScope(prev);
        }
void getBits_floatOutput_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_3(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_4(result);
           svSetScope(prev);
        }
void getBits_floatOutput_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_4(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_5(result);
           svSetScope(prev);
        }
void getBits_floatOutput_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_5(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_6(result);
           svSetScope(prev);
        }
void getBits_floatOutput_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_6(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_7(result);
           svSetScope(prev);
        }
void getBits_floatOutput_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_7(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_8(result);
           svSetScope(prev);
        }
void getBits_floatOutput_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_8(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_9(result);
           svSetScope(prev);
        }
void getBits_floatOutput_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_9(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_10(result);
           svSetScope(prev);
        }
void getBits_floatOutput_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_10(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_11(result);
           svSetScope(prev);
        }
void getBits_floatOutput_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_11(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_12(result);
           svSetScope(prev);
        }
void getBits_floatOutput_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_12(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_13(result);
           svSetScope(prev);
        }
void getBits_floatOutput_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_13(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_14(result);
           svSetScope(prev);
        }
void getBits_floatOutput_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_14(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_15(result);
           svSetScope(prev);
        }
void getBits_floatOutput_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_15(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_16(result);
           svSetScope(prev);
        }
void getBits_floatOutput_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_16(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_17(result);
           svSetScope(prev);
        }
void getBits_floatOutput_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_17(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_18(result);
           svSetScope(prev);
        }
void getBits_floatOutput_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_18(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_19(result);
           svSetScope(prev);
        }
void getBits_floatOutput_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_19(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_20(result);
           svSetScope(prev);
        }
void getBits_floatOutput_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_20(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_21(result);
           svSetScope(prev);
        }
void getBits_floatOutput_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_21(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_22(result);
           svSetScope(prev);
        }
void getBits_floatOutput_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_22(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_23(result);
           svSetScope(prev);
        }
void getBits_floatOutput_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_23(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_24(result);
           svSetScope(prev);
        }
void getBits_floatOutput_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_24(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_25(result);
           svSetScope(prev);
        }
void getBits_floatOutput_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_25(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_26(result);
           svSetScope(prev);
        }
void getBits_floatOutput_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_26(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_27(result);
           svSetScope(prev);
        }
void getBits_floatOutput_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_27(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_28(result);
           svSetScope(prev);
        }
void getBits_floatOutput_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_28(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_29(result);
           svSetScope(prev);
        }
void getBits_floatOutput_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_29(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_30(result);
           svSetScope(prev);
        }
void getBits_floatOutput_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_30(result);
           svSetScope(prev);
        }
void getBitWidth_floatOutput_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_floatOutput_31(result);
           svSetScope(prev);
        }
void getBits_floatOutput_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_floatOutput_31(result);
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
    case 2: // intInput_0
      getBitWidth_intInput_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_0;
      return 0;
    case 3: // intInput_1
      getBitWidth_intInput_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_1;
      return 0;
    case 4: // intInput_2
      getBitWidth_intInput_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_2;
      return 0;
    case 5: // intInput_3
      getBitWidth_intInput_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_3;
      return 0;
    case 6: // intInput_4
      getBitWidth_intInput_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_4;
      return 0;
    case 7: // intInput_5
      getBitWidth_intInput_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_5;
      return 0;
    case 8: // intInput_6
      getBitWidth_intInput_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_6;
      return 0;
    case 9: // intInput_7
      getBitWidth_intInput_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_7;
      return 0;
    case 10: // intInput_8
      getBitWidth_intInput_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_8;
      return 0;
    case 11: // intInput_9
      getBitWidth_intInput_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_9;
      return 0;
    case 12: // intInput_10
      getBitWidth_intInput_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_10;
      return 0;
    case 13: // intInput_11
      getBitWidth_intInput_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_11;
      return 0;
    case 14: // intInput_12
      getBitWidth_intInput_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_12;
      return 0;
    case 15: // intInput_13
      getBitWidth_intInput_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_13;
      return 0;
    case 16: // intInput_14
      getBitWidth_intInput_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_14;
      return 0;
    case 17: // intInput_15
      getBitWidth_intInput_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_15;
      return 0;
    case 18: // intInput_16
      getBitWidth_intInput_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_16;
      return 0;
    case 19: // intInput_17
      getBitWidth_intInput_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_17;
      return 0;
    case 20: // intInput_18
      getBitWidth_intInput_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_18;
      return 0;
    case 21: // intInput_19
      getBitWidth_intInput_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_19;
      return 0;
    case 22: // intInput_20
      getBitWidth_intInput_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_20;
      return 0;
    case 23: // intInput_21
      getBitWidth_intInput_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_21;
      return 0;
    case 24: // intInput_22
      getBitWidth_intInput_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_22;
      return 0;
    case 25: // intInput_23
      getBitWidth_intInput_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_23;
      return 0;
    case 26: // intInput_24
      getBitWidth_intInput_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_24;
      return 0;
    case 27: // intInput_25
      getBitWidth_intInput_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_25;
      return 0;
    case 28: // intInput_26
      getBitWidth_intInput_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_26;
      return 0;
    case 29: // intInput_27
      getBitWidth_intInput_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_27;
      return 0;
    case 30: // intInput_28
      getBitWidth_intInput_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_28;
      return 0;
    case 31: // intInput_29
      getBitWidth_intInput_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_29;
      return 0;
    case 32: // intInput_30
      getBitWidth_intInput_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_30;
      return 0;
    case 33: // intInput_31
      getBitWidth_intInput_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_intInput_31;
      return 0;
    case 34: // floatOutput_0
      getBitWidth_floatOutput_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_0;
      return 0;
    case 35: // floatOutput_1
      getBitWidth_floatOutput_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_1;
      return 0;
    case 36: // floatOutput_2
      getBitWidth_floatOutput_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_2;
      return 0;
    case 37: // floatOutput_3
      getBitWidth_floatOutput_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_3;
      return 0;
    case 38: // floatOutput_4
      getBitWidth_floatOutput_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_4;
      return 0;
    case 39: // floatOutput_5
      getBitWidth_floatOutput_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_5;
      return 0;
    case 40: // floatOutput_6
      getBitWidth_floatOutput_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_6;
      return 0;
    case 41: // floatOutput_7
      getBitWidth_floatOutput_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_7;
      return 0;
    case 42: // floatOutput_8
      getBitWidth_floatOutput_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_8;
      return 0;
    case 43: // floatOutput_9
      getBitWidth_floatOutput_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_9;
      return 0;
    case 44: // floatOutput_10
      getBitWidth_floatOutput_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_10;
      return 0;
    case 45: // floatOutput_11
      getBitWidth_floatOutput_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_11;
      return 0;
    case 46: // floatOutput_12
      getBitWidth_floatOutput_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_12;
      return 0;
    case 47: // floatOutput_13
      getBitWidth_floatOutput_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_13;
      return 0;
    case 48: // floatOutput_14
      getBitWidth_floatOutput_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_14;
      return 0;
    case 49: // floatOutput_15
      getBitWidth_floatOutput_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_15;
      return 0;
    case 50: // floatOutput_16
      getBitWidth_floatOutput_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_16;
      return 0;
    case 51: // floatOutput_17
      getBitWidth_floatOutput_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_17;
      return 0;
    case 52: // floatOutput_18
      getBitWidth_floatOutput_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_18;
      return 0;
    case 53: // floatOutput_19
      getBitWidth_floatOutput_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_19;
      return 0;
    case 54: // floatOutput_20
      getBitWidth_floatOutput_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_20;
      return 0;
    case 55: // floatOutput_21
      getBitWidth_floatOutput_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_21;
      return 0;
    case 56: // floatOutput_22
      getBitWidth_floatOutput_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_22;
      return 0;
    case 57: // floatOutput_23
      getBitWidth_floatOutput_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_23;
      return 0;
    case 58: // floatOutput_24
      getBitWidth_floatOutput_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_24;
      return 0;
    case 59: // floatOutput_25
      getBitWidth_floatOutput_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_25;
      return 0;
    case 60: // floatOutput_26
      getBitWidth_floatOutput_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_26;
      return 0;
    case 61: // floatOutput_27
      getBitWidth_floatOutput_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_27;
      return 0;
    case 62: // floatOutput_28
      getBitWidth_floatOutput_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_28;
      return 0;
    case 63: // floatOutput_29
      getBitWidth_floatOutput_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_29;
      return 0;
    case 64: // floatOutput_30
      getBitWidth_floatOutput_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_30;
      return 0;
    case 65: // floatOutput_31
      getBitWidth_floatOutput_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_floatOutput_31;
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
    case 2: // intInput_0
      getBitWidth_intInput_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_0;
      return 0;
    case 3: // intInput_1
      getBitWidth_intInput_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_1;
      return 0;
    case 4: // intInput_2
      getBitWidth_intInput_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_2;
      return 0;
    case 5: // intInput_3
      getBitWidth_intInput_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_3;
      return 0;
    case 6: // intInput_4
      getBitWidth_intInput_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_4;
      return 0;
    case 7: // intInput_5
      getBitWidth_intInput_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_5;
      return 0;
    case 8: // intInput_6
      getBitWidth_intInput_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_6;
      return 0;
    case 9: // intInput_7
      getBitWidth_intInput_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_7;
      return 0;
    case 10: // intInput_8
      getBitWidth_intInput_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_8;
      return 0;
    case 11: // intInput_9
      getBitWidth_intInput_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_9;
      return 0;
    case 12: // intInput_10
      getBitWidth_intInput_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_10;
      return 0;
    case 13: // intInput_11
      getBitWidth_intInput_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_11;
      return 0;
    case 14: // intInput_12
      getBitWidth_intInput_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_12;
      return 0;
    case 15: // intInput_13
      getBitWidth_intInput_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_13;
      return 0;
    case 16: // intInput_14
      getBitWidth_intInput_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_14;
      return 0;
    case 17: // intInput_15
      getBitWidth_intInput_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_15;
      return 0;
    case 18: // intInput_16
      getBitWidth_intInput_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_16;
      return 0;
    case 19: // intInput_17
      getBitWidth_intInput_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_17;
      return 0;
    case 20: // intInput_18
      getBitWidth_intInput_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_18;
      return 0;
    case 21: // intInput_19
      getBitWidth_intInput_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_19;
      return 0;
    case 22: // intInput_20
      getBitWidth_intInput_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_20;
      return 0;
    case 23: // intInput_21
      getBitWidth_intInput_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_21;
      return 0;
    case 24: // intInput_22
      getBitWidth_intInput_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_22;
      return 0;
    case 25: // intInput_23
      getBitWidth_intInput_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_23;
      return 0;
    case 26: // intInput_24
      getBitWidth_intInput_24(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_24;
      return 0;
    case 27: // intInput_25
      getBitWidth_intInput_25(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_25;
      return 0;
    case 28: // intInput_26
      getBitWidth_intInput_26(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_26;
      return 0;
    case 29: // intInput_27
      getBitWidth_intInput_27(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_27;
      return 0;
    case 30: // intInput_28
      getBitWidth_intInput_28(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_28;
      return 0;
    case 31: // intInput_29
      getBitWidth_intInput_29(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_29;
      return 0;
    case 32: // intInput_30
      getBitWidth_intInput_30(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_30;
      return 0;
    case 33: // intInput_31
      getBitWidth_intInput_31(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_intInput_31;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

