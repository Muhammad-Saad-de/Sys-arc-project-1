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
void getBitWidth_sel(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_sel(result);
           svSetScope(prev);
        }
void getBits_sel(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_sel(result);
           svSetScope(prev);
        }
void setBits_sel(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_sel(data);
           svSetScope(prev);
        }
void getBitWidth_out_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_out_0(result);
           svSetScope(prev);
        }
void getBits_out_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_out_0(result);
           svSetScope(prev);
        }
void getBitWidth_out_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_out_1(result);
           svSetScope(prev);
        }
void getBits_out_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_out_1(result);
           svSetScope(prev);
        }
void getBitWidth_out_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_out_2(result);
           svSetScope(prev);
        }
void getBits_out_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_out_2(result);
           svSetScope(prev);
        }
void getBitWidth_out_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_out_3(result);
           svSetScope(prev);
        }
void getBits_out_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_out_3(result);
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
    case 6: // b_0
      getBitWidth_b_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_0;
      return 0;
    case 7: // b_1
      getBitWidth_b_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_1;
      return 0;
    case 8: // b_2
      getBitWidth_b_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_2;
      return 0;
    case 9: // b_3
      getBitWidth_b_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b_3;
      return 0;
    case 10: // sel
      getBitWidth_sel(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_sel;
      return 0;
    case 11: // out_0
      getBitWidth_out_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_out_0;
      return 0;
    case 12: // out_1
      getBitWidth_out_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_out_1;
      return 0;
    case 13: // out_2
      getBitWidth_out_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_out_2;
      return 0;
    case 14: // out_3
      getBitWidth_out_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_out_3;
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
    case 6: // b_0
      getBitWidth_b_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_0;
      return 0;
    case 7: // b_1
      getBitWidth_b_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_1;
      return 0;
    case 8: // b_2
      getBitWidth_b_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_2;
      return 0;
    case 9: // b_3
      getBitWidth_b_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b_3;
      return 0;
    case 10: // sel
      getBitWidth_sel(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_sel;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

