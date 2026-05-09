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
void getBitWidth_out(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_out(result);
           svSetScope(prev);
        }
void getBits_out(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_out(result);
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
    case 3: // out
      getBitWidth_out(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_out;
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
    default:
      return -1;
  }
}

} // extern "C"

