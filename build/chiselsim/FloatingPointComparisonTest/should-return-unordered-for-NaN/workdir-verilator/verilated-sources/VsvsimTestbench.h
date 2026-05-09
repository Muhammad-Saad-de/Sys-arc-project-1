// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSVSIMTESTBENCH_H_
#define VERILATED_VSVSIMTESTBENCH_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VsvsimTestbench__Syms;
class VsvsimTestbench___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VsvsimTestbench__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VsvsimTestbench___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VsvsimTestbench(VerilatedContext* contextp, const char* name = "TOP");
    explicit VsvsimTestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VsvsimTestbench();
  private:
    VL_UNCOPYABLE(VsvsimTestbench);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void getBitWidthImpl_a_0(int* value);
    static void getBitWidthImpl_a_1(int* value);
    static void getBitWidthImpl_a_10(int* value);
    static void getBitWidthImpl_a_11(int* value);
    static void getBitWidthImpl_a_12(int* value);
    static void getBitWidthImpl_a_13(int* value);
    static void getBitWidthImpl_a_14(int* value);
    static void getBitWidthImpl_a_15(int* value);
    static void getBitWidthImpl_a_16(int* value);
    static void getBitWidthImpl_a_17(int* value);
    static void getBitWidthImpl_a_18(int* value);
    static void getBitWidthImpl_a_19(int* value);
    static void getBitWidthImpl_a_2(int* value);
    static void getBitWidthImpl_a_20(int* value);
    static void getBitWidthImpl_a_21(int* value);
    static void getBitWidthImpl_a_22(int* value);
    static void getBitWidthImpl_a_23(int* value);
    static void getBitWidthImpl_a_24(int* value);
    static void getBitWidthImpl_a_25(int* value);
    static void getBitWidthImpl_a_26(int* value);
    static void getBitWidthImpl_a_27(int* value);
    static void getBitWidthImpl_a_28(int* value);
    static void getBitWidthImpl_a_29(int* value);
    static void getBitWidthImpl_a_3(int* value);
    static void getBitWidthImpl_a_30(int* value);
    static void getBitWidthImpl_a_31(int* value);
    static void getBitWidthImpl_a_4(int* value);
    static void getBitWidthImpl_a_5(int* value);
    static void getBitWidthImpl_a_6(int* value);
    static void getBitWidthImpl_a_7(int* value);
    static void getBitWidthImpl_a_8(int* value);
    static void getBitWidthImpl_a_9(int* value);
    static void getBitWidthImpl_b_0(int* value);
    static void getBitWidthImpl_b_1(int* value);
    static void getBitWidthImpl_b_10(int* value);
    static void getBitWidthImpl_b_11(int* value);
    static void getBitWidthImpl_b_12(int* value);
    static void getBitWidthImpl_b_13(int* value);
    static void getBitWidthImpl_b_14(int* value);
    static void getBitWidthImpl_b_15(int* value);
    static void getBitWidthImpl_b_16(int* value);
    static void getBitWidthImpl_b_17(int* value);
    static void getBitWidthImpl_b_18(int* value);
    static void getBitWidthImpl_b_19(int* value);
    static void getBitWidthImpl_b_2(int* value);
    static void getBitWidthImpl_b_20(int* value);
    static void getBitWidthImpl_b_21(int* value);
    static void getBitWidthImpl_b_22(int* value);
    static void getBitWidthImpl_b_23(int* value);
    static void getBitWidthImpl_b_24(int* value);
    static void getBitWidthImpl_b_25(int* value);
    static void getBitWidthImpl_b_26(int* value);
    static void getBitWidthImpl_b_27(int* value);
    static void getBitWidthImpl_b_28(int* value);
    static void getBitWidthImpl_b_29(int* value);
    static void getBitWidthImpl_b_3(int* value);
    static void getBitWidthImpl_b_30(int* value);
    static void getBitWidthImpl_b_31(int* value);
    static void getBitWidthImpl_b_4(int* value);
    static void getBitWidthImpl_b_5(int* value);
    static void getBitWidthImpl_b_6(int* value);
    static void getBitWidthImpl_b_7(int* value);
    static void getBitWidthImpl_b_8(int* value);
    static void getBitWidthImpl_b_9(int* value);
    static void getBitWidthImpl_clock(int* value);
    static void getBitWidthImpl_comparisonResult_0(int* value);
    static void getBitWidthImpl_comparisonResult_1(int* value);
    static void getBitWidthImpl_reset(int* value);
    static void getBitsImpl_a_0(svBitVecVal* value_a_0);
    static void getBitsImpl_a_1(svBitVecVal* value_a_1);
    static void getBitsImpl_a_10(svBitVecVal* value_a_10);
    static void getBitsImpl_a_11(svBitVecVal* value_a_11);
    static void getBitsImpl_a_12(svBitVecVal* value_a_12);
    static void getBitsImpl_a_13(svBitVecVal* value_a_13);
    static void getBitsImpl_a_14(svBitVecVal* value_a_14);
    static void getBitsImpl_a_15(svBitVecVal* value_a_15);
    static void getBitsImpl_a_16(svBitVecVal* value_a_16);
    static void getBitsImpl_a_17(svBitVecVal* value_a_17);
    static void getBitsImpl_a_18(svBitVecVal* value_a_18);
    static void getBitsImpl_a_19(svBitVecVal* value_a_19);
    static void getBitsImpl_a_2(svBitVecVal* value_a_2);
    static void getBitsImpl_a_20(svBitVecVal* value_a_20);
    static void getBitsImpl_a_21(svBitVecVal* value_a_21);
    static void getBitsImpl_a_22(svBitVecVal* value_a_22);
    static void getBitsImpl_a_23(svBitVecVal* value_a_23);
    static void getBitsImpl_a_24(svBitVecVal* value_a_24);
    static void getBitsImpl_a_25(svBitVecVal* value_a_25);
    static void getBitsImpl_a_26(svBitVecVal* value_a_26);
    static void getBitsImpl_a_27(svBitVecVal* value_a_27);
    static void getBitsImpl_a_28(svBitVecVal* value_a_28);
    static void getBitsImpl_a_29(svBitVecVal* value_a_29);
    static void getBitsImpl_a_3(svBitVecVal* value_a_3);
    static void getBitsImpl_a_30(svBitVecVal* value_a_30);
    static void getBitsImpl_a_31(svBitVecVal* value_a_31);
    static void getBitsImpl_a_4(svBitVecVal* value_a_4);
    static void getBitsImpl_a_5(svBitVecVal* value_a_5);
    static void getBitsImpl_a_6(svBitVecVal* value_a_6);
    static void getBitsImpl_a_7(svBitVecVal* value_a_7);
    static void getBitsImpl_a_8(svBitVecVal* value_a_8);
    static void getBitsImpl_a_9(svBitVecVal* value_a_9);
    static void getBitsImpl_b_0(svBitVecVal* value_b_0);
    static void getBitsImpl_b_1(svBitVecVal* value_b_1);
    static void getBitsImpl_b_10(svBitVecVal* value_b_10);
    static void getBitsImpl_b_11(svBitVecVal* value_b_11);
    static void getBitsImpl_b_12(svBitVecVal* value_b_12);
    static void getBitsImpl_b_13(svBitVecVal* value_b_13);
    static void getBitsImpl_b_14(svBitVecVal* value_b_14);
    static void getBitsImpl_b_15(svBitVecVal* value_b_15);
    static void getBitsImpl_b_16(svBitVecVal* value_b_16);
    static void getBitsImpl_b_17(svBitVecVal* value_b_17);
    static void getBitsImpl_b_18(svBitVecVal* value_b_18);
    static void getBitsImpl_b_19(svBitVecVal* value_b_19);
    static void getBitsImpl_b_2(svBitVecVal* value_b_2);
    static void getBitsImpl_b_20(svBitVecVal* value_b_20);
    static void getBitsImpl_b_21(svBitVecVal* value_b_21);
    static void getBitsImpl_b_22(svBitVecVal* value_b_22);
    static void getBitsImpl_b_23(svBitVecVal* value_b_23);
    static void getBitsImpl_b_24(svBitVecVal* value_b_24);
    static void getBitsImpl_b_25(svBitVecVal* value_b_25);
    static void getBitsImpl_b_26(svBitVecVal* value_b_26);
    static void getBitsImpl_b_27(svBitVecVal* value_b_27);
    static void getBitsImpl_b_28(svBitVecVal* value_b_28);
    static void getBitsImpl_b_29(svBitVecVal* value_b_29);
    static void getBitsImpl_b_3(svBitVecVal* value_b_3);
    static void getBitsImpl_b_30(svBitVecVal* value_b_30);
    static void getBitsImpl_b_31(svBitVecVal* value_b_31);
    static void getBitsImpl_b_4(svBitVecVal* value_b_4);
    static void getBitsImpl_b_5(svBitVecVal* value_b_5);
    static void getBitsImpl_b_6(svBitVecVal* value_b_6);
    static void getBitsImpl_b_7(svBitVecVal* value_b_7);
    static void getBitsImpl_b_8(svBitVecVal* value_b_8);
    static void getBitsImpl_b_9(svBitVecVal* value_b_9);
    static void getBitsImpl_clock(svBitVecVal* value_clock);
    static void getBitsImpl_comparisonResult_0(svBitVecVal* value_comparisonResult_0);
    static void getBitsImpl_comparisonResult_1(svBitVecVal* value_comparisonResult_1);
    static void getBitsImpl_reset(svBitVecVal* value_reset);
    static void setBitsImpl_a_0(const svBitVecVal* value_a_0);
    static void setBitsImpl_a_1(const svBitVecVal* value_a_1);
    static void setBitsImpl_a_10(const svBitVecVal* value_a_10);
    static void setBitsImpl_a_11(const svBitVecVal* value_a_11);
    static void setBitsImpl_a_12(const svBitVecVal* value_a_12);
    static void setBitsImpl_a_13(const svBitVecVal* value_a_13);
    static void setBitsImpl_a_14(const svBitVecVal* value_a_14);
    static void setBitsImpl_a_15(const svBitVecVal* value_a_15);
    static void setBitsImpl_a_16(const svBitVecVal* value_a_16);
    static void setBitsImpl_a_17(const svBitVecVal* value_a_17);
    static void setBitsImpl_a_18(const svBitVecVal* value_a_18);
    static void setBitsImpl_a_19(const svBitVecVal* value_a_19);
    static void setBitsImpl_a_2(const svBitVecVal* value_a_2);
    static void setBitsImpl_a_20(const svBitVecVal* value_a_20);
    static void setBitsImpl_a_21(const svBitVecVal* value_a_21);
    static void setBitsImpl_a_22(const svBitVecVal* value_a_22);
    static void setBitsImpl_a_23(const svBitVecVal* value_a_23);
    static void setBitsImpl_a_24(const svBitVecVal* value_a_24);
    static void setBitsImpl_a_25(const svBitVecVal* value_a_25);
    static void setBitsImpl_a_26(const svBitVecVal* value_a_26);
    static void setBitsImpl_a_27(const svBitVecVal* value_a_27);
    static void setBitsImpl_a_28(const svBitVecVal* value_a_28);
    static void setBitsImpl_a_29(const svBitVecVal* value_a_29);
    static void setBitsImpl_a_3(const svBitVecVal* value_a_3);
    static void setBitsImpl_a_30(const svBitVecVal* value_a_30);
    static void setBitsImpl_a_31(const svBitVecVal* value_a_31);
    static void setBitsImpl_a_4(const svBitVecVal* value_a_4);
    static void setBitsImpl_a_5(const svBitVecVal* value_a_5);
    static void setBitsImpl_a_6(const svBitVecVal* value_a_6);
    static void setBitsImpl_a_7(const svBitVecVal* value_a_7);
    static void setBitsImpl_a_8(const svBitVecVal* value_a_8);
    static void setBitsImpl_a_9(const svBitVecVal* value_a_9);
    static void setBitsImpl_b_0(const svBitVecVal* value_b_0);
    static void setBitsImpl_b_1(const svBitVecVal* value_b_1);
    static void setBitsImpl_b_10(const svBitVecVal* value_b_10);
    static void setBitsImpl_b_11(const svBitVecVal* value_b_11);
    static void setBitsImpl_b_12(const svBitVecVal* value_b_12);
    static void setBitsImpl_b_13(const svBitVecVal* value_b_13);
    static void setBitsImpl_b_14(const svBitVecVal* value_b_14);
    static void setBitsImpl_b_15(const svBitVecVal* value_b_15);
    static void setBitsImpl_b_16(const svBitVecVal* value_b_16);
    static void setBitsImpl_b_17(const svBitVecVal* value_b_17);
    static void setBitsImpl_b_18(const svBitVecVal* value_b_18);
    static void setBitsImpl_b_19(const svBitVecVal* value_b_19);
    static void setBitsImpl_b_2(const svBitVecVal* value_b_2);
    static void setBitsImpl_b_20(const svBitVecVal* value_b_20);
    static void setBitsImpl_b_21(const svBitVecVal* value_b_21);
    static void setBitsImpl_b_22(const svBitVecVal* value_b_22);
    static void setBitsImpl_b_23(const svBitVecVal* value_b_23);
    static void setBitsImpl_b_24(const svBitVecVal* value_b_24);
    static void setBitsImpl_b_25(const svBitVecVal* value_b_25);
    static void setBitsImpl_b_26(const svBitVecVal* value_b_26);
    static void setBitsImpl_b_27(const svBitVecVal* value_b_27);
    static void setBitsImpl_b_28(const svBitVecVal* value_b_28);
    static void setBitsImpl_b_29(const svBitVecVal* value_b_29);
    static void setBitsImpl_b_3(const svBitVecVal* value_b_3);
    static void setBitsImpl_b_30(const svBitVecVal* value_b_30);
    static void setBitsImpl_b_31(const svBitVecVal* value_b_31);
    static void setBitsImpl_b_4(const svBitVecVal* value_b_4);
    static void setBitsImpl_b_5(const svBitVecVal* value_b_5);
    static void setBitsImpl_b_6(const svBitVecVal* value_b_6);
    static void setBitsImpl_b_7(const svBitVecVal* value_b_7);
    static void setBitsImpl_b_8(const svBitVecVal* value_b_8);
    static void setBitsImpl_b_9(const svBitVecVal* value_b_9);
    static void setBitsImpl_clock(const svBitVecVal* value_clock);
    static void setBitsImpl_reset(const svBitVecVal* value_reset);
    static void simulation_disableTrace(int* success);
    static void simulation_enableTrace(int* success);
    static void simulation_initializeTrace(const char* traceFilePath);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
