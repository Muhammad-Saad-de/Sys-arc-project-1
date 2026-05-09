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
    case 4: // onesComplement_0
      getBitWidth_onesComplement_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_0;
      return 0;
    case 5: // onesComplement_1
      getBitWidth_onesComplement_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_onesComplement_1;
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
    default:
      return -1;
  }
}

} // extern "C"

