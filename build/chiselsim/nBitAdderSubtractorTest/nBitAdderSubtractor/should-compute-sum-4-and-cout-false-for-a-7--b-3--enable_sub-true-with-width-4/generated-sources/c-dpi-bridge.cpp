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
void getBitWidth_enable_sub(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_enable_sub(result);
           svSetScope(prev);
        }
void getBits_enable_sub(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_enable_sub(result);
           svSetScope(prev);
        }
void setBits_enable_sub(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_enable_sub(data);
           svSetScope(prev);
        }
void getBitWidth_sum_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_sum_0(result);
           svSetScope(prev);
        }
void getBits_sum_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_sum_0(result);
           svSetScope(prev);
        }
void getBitWidth_sum_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_sum_1(result);
           svSetScope(prev);
        }
void getBits_sum_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_sum_1(result);
           svSetScope(prev);
        }
void getBitWidth_sum_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_sum_2(result);
           svSetScope(prev);
        }
void getBits_sum_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_sum_2(result);
           svSetScope(prev);
        }
void getBitWidth_sum_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_sum_3(result);
           svSetScope(prev);
        }
void getBits_sum_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_sum_3(result);
           svSetScope(prev);
        }
void getBitWidth_cout(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_cout(result);
           svSetScope(prev);
        }
void getBits_cout(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_cout(result);
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
    case 10: // enable_sub
      getBitWidth_enable_sub(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_enable_sub;
      return 0;
    case 11: // sum_0
      getBitWidth_sum_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_sum_0;
      return 0;
    case 12: // sum_1
      getBitWidth_sum_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_sum_1;
      return 0;
    case 13: // sum_2
      getBitWidth_sum_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_sum_2;
      return 0;
    case 14: // sum_3
      getBitWidth_sum_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_sum_3;
      return 0;
    case 15: // cout
      getBitWidth_cout(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_cout;
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
    case 10: // enable_sub
      getBitWidth_enable_sub(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_enable_sub;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

