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
void getBitWidth_signedMagnitude_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_0(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_0(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_0(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_1(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_1(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_1(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_2(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_2(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_2(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_3(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_3(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_3(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_4(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_4(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_4(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_5(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_5(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_5(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_6(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_6(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_6(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_7(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_7(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_7(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_8(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_8(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_8(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_9(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_9(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_9(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_10(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_10(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_10(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_11(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_11(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_11(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_12(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_12(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_12(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_13(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_13(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_13(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_14(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_14(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_14(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_15(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_15(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_15(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_16(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_16(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_16(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_17(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_17(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_17(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_18(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_18(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_18(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_19(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_19(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_19(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_20(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_20(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_20(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_21(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_21(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_21(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_22(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_22(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_22(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_23(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_23(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_23(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_24(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_24(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_24(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_24(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_24(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_24(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_25(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_25(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_25(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_25(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_25(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_25(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_26(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_26(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_26(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_26(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_26(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_26(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_27(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_27(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_27(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_27(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_27(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_27(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_28(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_28(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_28(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_28(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_28(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_28(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_29(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_29(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_29(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_29(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_29(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_29(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_30(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_30(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_30(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_30(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_30(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_30(data);
           svSetScope(prev);
        }
void getBitWidth_signedMagnitude_31(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_signedMagnitude_31(result);
           svSetScope(prev);
        }
void getBits_signedMagnitude_31(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_signedMagnitude_31(result);
           svSetScope(prev);
        }
void setBits_signedMagnitude_31(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_signedMagnitude_31(data);
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
    case 2: // signedMagnitude_0
      getBitWidth_signedMagnitude_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_0;
      return 0;
    case 3: // signedMagnitude_1
      getBitWidth_signedMagnitude_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_1;
      return 0;
    case 4: // signedMagnitude_2
      getBitWidth_signedMagnitude_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_2;
      return 0;
    case 5: // signedMagnitude_3
      getBitWidth_signedMagnitude_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_3;
      return 0;
    case 6: // signedMagnitude_4
      getBitWidth_signedMagnitude_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_4;
      return 0;
    case 7: // signedMagnitude_5
      getBitWidth_signedMagnitude_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_5;
      return 0;
    case 8: // signedMagnitude_6
      getBitWidth_signedMagnitude_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_6;
      return 0;
    case 9: // signedMagnitude_7
      getBitWidth_signedMagnitude_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_7;
      return 0;
    case 10: // signedMagnitude_8
      getBitWidth_signedMagnitude_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_8;
      return 0;
    case 11: // signedMagnitude_9
      getBitWidth_signedMagnitude_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_9;
      return 0;
    case 12: // signedMagnitude_10
      getBitWidth_signedMagnitude_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_10;
      return 0;
    case 13: // signedMagnitude_11
      getBitWidth_signedMagnitude_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_11;
      return 0;
    case 14: // signedMagnitude_12
      getBitWidth_signedMagnitude_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_12;
      return 0;
    case 15: // signedMagnitude_13
      getBitWidth_signedMagnitude_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_13;
      return 0;
    case 16: // signedMagnitude_14
      getBitWidth_signedMagnitude_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_14;
      return 0;
    case 17: // signedMagnitude_15
      getBitWidth_signedMagnitude_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_15;
      return 0;
    case 18: // signedMagnitude_16
      getBitWidth_signedMagnitude_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_16;
      return 0;
    case 19: // signedMagnitude_17
      getBitWidth_signedMagnitude_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_17;
      return 0;
    case 20: // signedMagnitude_18
      getBitWidth_signedMagnitude_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_18;
      return 0;
    case 21: // signedMagnitude_19
      getBitWidth_signedMagnitude_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_19;
      return 0;
    case 22: // signedMagnitude_20
      getBitWidth_signedMagnitude_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_20;
      return 0;
    case 23: // signedMagnitude_21
      getBitWidth_signedMagnitude_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_21;
      return 0;
    case 24: // signedMagnitude_22
      getBitWidth_signedMagnitude_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_22;
      return 0;
    case 25: // signedMagnitude_23
      getBitWidth_signedMagnitude_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_23;
      return 0;
    case 26: // signedMagnitude_24
      getBitWidth_signedMagnitude_24(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_24;
      return 0;
    case 27: // signedMagnitude_25
      getBitWidth_signedMagnitude_25(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_25;
      return 0;
    case 28: // signedMagnitude_26
      getBitWidth_signedMagnitude_26(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_26;
      return 0;
    case 29: // signedMagnitude_27
      getBitWidth_signedMagnitude_27(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_27;
      return 0;
    case 30: // signedMagnitude_28
      getBitWidth_signedMagnitude_28(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_28;
      return 0;
    case 31: // signedMagnitude_29
      getBitWidth_signedMagnitude_29(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_29;
      return 0;
    case 32: // signedMagnitude_30
      getBitWidth_signedMagnitude_30(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_30;
      return 0;
    case 33: // signedMagnitude_31
      getBitWidth_signedMagnitude_31(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_signedMagnitude_31;
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
    case 2: // signedMagnitude_0
      getBitWidth_signedMagnitude_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_0;
      return 0;
    case 3: // signedMagnitude_1
      getBitWidth_signedMagnitude_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_1;
      return 0;
    case 4: // signedMagnitude_2
      getBitWidth_signedMagnitude_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_2;
      return 0;
    case 5: // signedMagnitude_3
      getBitWidth_signedMagnitude_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_3;
      return 0;
    case 6: // signedMagnitude_4
      getBitWidth_signedMagnitude_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_4;
      return 0;
    case 7: // signedMagnitude_5
      getBitWidth_signedMagnitude_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_5;
      return 0;
    case 8: // signedMagnitude_6
      getBitWidth_signedMagnitude_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_6;
      return 0;
    case 9: // signedMagnitude_7
      getBitWidth_signedMagnitude_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_7;
      return 0;
    case 10: // signedMagnitude_8
      getBitWidth_signedMagnitude_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_8;
      return 0;
    case 11: // signedMagnitude_9
      getBitWidth_signedMagnitude_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_9;
      return 0;
    case 12: // signedMagnitude_10
      getBitWidth_signedMagnitude_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_10;
      return 0;
    case 13: // signedMagnitude_11
      getBitWidth_signedMagnitude_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_11;
      return 0;
    case 14: // signedMagnitude_12
      getBitWidth_signedMagnitude_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_12;
      return 0;
    case 15: // signedMagnitude_13
      getBitWidth_signedMagnitude_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_13;
      return 0;
    case 16: // signedMagnitude_14
      getBitWidth_signedMagnitude_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_14;
      return 0;
    case 17: // signedMagnitude_15
      getBitWidth_signedMagnitude_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_15;
      return 0;
    case 18: // signedMagnitude_16
      getBitWidth_signedMagnitude_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_16;
      return 0;
    case 19: // signedMagnitude_17
      getBitWidth_signedMagnitude_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_17;
      return 0;
    case 20: // signedMagnitude_18
      getBitWidth_signedMagnitude_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_18;
      return 0;
    case 21: // signedMagnitude_19
      getBitWidth_signedMagnitude_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_19;
      return 0;
    case 22: // signedMagnitude_20
      getBitWidth_signedMagnitude_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_20;
      return 0;
    case 23: // signedMagnitude_21
      getBitWidth_signedMagnitude_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_21;
      return 0;
    case 24: // signedMagnitude_22
      getBitWidth_signedMagnitude_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_22;
      return 0;
    case 25: // signedMagnitude_23
      getBitWidth_signedMagnitude_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_23;
      return 0;
    case 26: // signedMagnitude_24
      getBitWidth_signedMagnitude_24(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_24;
      return 0;
    case 27: // signedMagnitude_25
      getBitWidth_signedMagnitude_25(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_25;
      return 0;
    case 28: // signedMagnitude_26
      getBitWidth_signedMagnitude_26(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_26;
      return 0;
    case 29: // signedMagnitude_27
      getBitWidth_signedMagnitude_27(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_27;
      return 0;
    case 30: // signedMagnitude_28
      getBitWidth_signedMagnitude_28(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_28;
      return 0;
    case 31: // signedMagnitude_29
      getBitWidth_signedMagnitude_29(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_29;
      return 0;
    case 32: // signedMagnitude_30
      getBitWidth_signedMagnitude_30(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_30;
      return 0;
    case 33: // signedMagnitude_31
      getBitWidth_signedMagnitude_31(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_signedMagnitude_31;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

