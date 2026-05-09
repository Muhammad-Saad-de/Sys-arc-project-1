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
    static void getBitWidthImpl_clock(int* value);
    static void getBitWidthImpl_floatOutput_0(int* value);
    static void getBitWidthImpl_floatOutput_1(int* value);
    static void getBitWidthImpl_floatOutput_10(int* value);
    static void getBitWidthImpl_floatOutput_11(int* value);
    static void getBitWidthImpl_floatOutput_12(int* value);
    static void getBitWidthImpl_floatOutput_13(int* value);
    static void getBitWidthImpl_floatOutput_14(int* value);
    static void getBitWidthImpl_floatOutput_15(int* value);
    static void getBitWidthImpl_floatOutput_16(int* value);
    static void getBitWidthImpl_floatOutput_17(int* value);
    static void getBitWidthImpl_floatOutput_18(int* value);
    static void getBitWidthImpl_floatOutput_19(int* value);
    static void getBitWidthImpl_floatOutput_2(int* value);
    static void getBitWidthImpl_floatOutput_20(int* value);
    static void getBitWidthImpl_floatOutput_21(int* value);
    static void getBitWidthImpl_floatOutput_22(int* value);
    static void getBitWidthImpl_floatOutput_23(int* value);
    static void getBitWidthImpl_floatOutput_24(int* value);
    static void getBitWidthImpl_floatOutput_25(int* value);
    static void getBitWidthImpl_floatOutput_26(int* value);
    static void getBitWidthImpl_floatOutput_27(int* value);
    static void getBitWidthImpl_floatOutput_28(int* value);
    static void getBitWidthImpl_floatOutput_29(int* value);
    static void getBitWidthImpl_floatOutput_3(int* value);
    static void getBitWidthImpl_floatOutput_30(int* value);
    static void getBitWidthImpl_floatOutput_31(int* value);
    static void getBitWidthImpl_floatOutput_4(int* value);
    static void getBitWidthImpl_floatOutput_5(int* value);
    static void getBitWidthImpl_floatOutput_6(int* value);
    static void getBitWidthImpl_floatOutput_7(int* value);
    static void getBitWidthImpl_floatOutput_8(int* value);
    static void getBitWidthImpl_floatOutput_9(int* value);
    static void getBitWidthImpl_intInput_0(int* value);
    static void getBitWidthImpl_intInput_1(int* value);
    static void getBitWidthImpl_intInput_10(int* value);
    static void getBitWidthImpl_intInput_11(int* value);
    static void getBitWidthImpl_intInput_12(int* value);
    static void getBitWidthImpl_intInput_13(int* value);
    static void getBitWidthImpl_intInput_14(int* value);
    static void getBitWidthImpl_intInput_15(int* value);
    static void getBitWidthImpl_intInput_16(int* value);
    static void getBitWidthImpl_intInput_17(int* value);
    static void getBitWidthImpl_intInput_18(int* value);
    static void getBitWidthImpl_intInput_19(int* value);
    static void getBitWidthImpl_intInput_2(int* value);
    static void getBitWidthImpl_intInput_20(int* value);
    static void getBitWidthImpl_intInput_21(int* value);
    static void getBitWidthImpl_intInput_22(int* value);
    static void getBitWidthImpl_intInput_23(int* value);
    static void getBitWidthImpl_intInput_24(int* value);
    static void getBitWidthImpl_intInput_25(int* value);
    static void getBitWidthImpl_intInput_26(int* value);
    static void getBitWidthImpl_intInput_27(int* value);
    static void getBitWidthImpl_intInput_28(int* value);
    static void getBitWidthImpl_intInput_29(int* value);
    static void getBitWidthImpl_intInput_3(int* value);
    static void getBitWidthImpl_intInput_30(int* value);
    static void getBitWidthImpl_intInput_31(int* value);
    static void getBitWidthImpl_intInput_4(int* value);
    static void getBitWidthImpl_intInput_5(int* value);
    static void getBitWidthImpl_intInput_6(int* value);
    static void getBitWidthImpl_intInput_7(int* value);
    static void getBitWidthImpl_intInput_8(int* value);
    static void getBitWidthImpl_intInput_9(int* value);
    static void getBitWidthImpl_reset(int* value);
    static void getBitsImpl_clock(svBitVecVal* value_clock);
    static void getBitsImpl_floatOutput_0(svBitVecVal* value_floatOutput_0);
    static void getBitsImpl_floatOutput_1(svBitVecVal* value_floatOutput_1);
    static void getBitsImpl_floatOutput_10(svBitVecVal* value_floatOutput_10);
    static void getBitsImpl_floatOutput_11(svBitVecVal* value_floatOutput_11);
    static void getBitsImpl_floatOutput_12(svBitVecVal* value_floatOutput_12);
    static void getBitsImpl_floatOutput_13(svBitVecVal* value_floatOutput_13);
    static void getBitsImpl_floatOutput_14(svBitVecVal* value_floatOutput_14);
    static void getBitsImpl_floatOutput_15(svBitVecVal* value_floatOutput_15);
    static void getBitsImpl_floatOutput_16(svBitVecVal* value_floatOutput_16);
    static void getBitsImpl_floatOutput_17(svBitVecVal* value_floatOutput_17);
    static void getBitsImpl_floatOutput_18(svBitVecVal* value_floatOutput_18);
    static void getBitsImpl_floatOutput_19(svBitVecVal* value_floatOutput_19);
    static void getBitsImpl_floatOutput_2(svBitVecVal* value_floatOutput_2);
    static void getBitsImpl_floatOutput_20(svBitVecVal* value_floatOutput_20);
    static void getBitsImpl_floatOutput_21(svBitVecVal* value_floatOutput_21);
    static void getBitsImpl_floatOutput_22(svBitVecVal* value_floatOutput_22);
    static void getBitsImpl_floatOutput_23(svBitVecVal* value_floatOutput_23);
    static void getBitsImpl_floatOutput_24(svBitVecVal* value_floatOutput_24);
    static void getBitsImpl_floatOutput_25(svBitVecVal* value_floatOutput_25);
    static void getBitsImpl_floatOutput_26(svBitVecVal* value_floatOutput_26);
    static void getBitsImpl_floatOutput_27(svBitVecVal* value_floatOutput_27);
    static void getBitsImpl_floatOutput_28(svBitVecVal* value_floatOutput_28);
    static void getBitsImpl_floatOutput_29(svBitVecVal* value_floatOutput_29);
    static void getBitsImpl_floatOutput_3(svBitVecVal* value_floatOutput_3);
    static void getBitsImpl_floatOutput_30(svBitVecVal* value_floatOutput_30);
    static void getBitsImpl_floatOutput_31(svBitVecVal* value_floatOutput_31);
    static void getBitsImpl_floatOutput_4(svBitVecVal* value_floatOutput_4);
    static void getBitsImpl_floatOutput_5(svBitVecVal* value_floatOutput_5);
    static void getBitsImpl_floatOutput_6(svBitVecVal* value_floatOutput_6);
    static void getBitsImpl_floatOutput_7(svBitVecVal* value_floatOutput_7);
    static void getBitsImpl_floatOutput_8(svBitVecVal* value_floatOutput_8);
    static void getBitsImpl_floatOutput_9(svBitVecVal* value_floatOutput_9);
    static void getBitsImpl_intInput_0(svBitVecVal* value_intInput_0);
    static void getBitsImpl_intInput_1(svBitVecVal* value_intInput_1);
    static void getBitsImpl_intInput_10(svBitVecVal* value_intInput_10);
    static void getBitsImpl_intInput_11(svBitVecVal* value_intInput_11);
    static void getBitsImpl_intInput_12(svBitVecVal* value_intInput_12);
    static void getBitsImpl_intInput_13(svBitVecVal* value_intInput_13);
    static void getBitsImpl_intInput_14(svBitVecVal* value_intInput_14);
    static void getBitsImpl_intInput_15(svBitVecVal* value_intInput_15);
    static void getBitsImpl_intInput_16(svBitVecVal* value_intInput_16);
    static void getBitsImpl_intInput_17(svBitVecVal* value_intInput_17);
    static void getBitsImpl_intInput_18(svBitVecVal* value_intInput_18);
    static void getBitsImpl_intInput_19(svBitVecVal* value_intInput_19);
    static void getBitsImpl_intInput_2(svBitVecVal* value_intInput_2);
    static void getBitsImpl_intInput_20(svBitVecVal* value_intInput_20);
    static void getBitsImpl_intInput_21(svBitVecVal* value_intInput_21);
    static void getBitsImpl_intInput_22(svBitVecVal* value_intInput_22);
    static void getBitsImpl_intInput_23(svBitVecVal* value_intInput_23);
    static void getBitsImpl_intInput_24(svBitVecVal* value_intInput_24);
    static void getBitsImpl_intInput_25(svBitVecVal* value_intInput_25);
    static void getBitsImpl_intInput_26(svBitVecVal* value_intInput_26);
    static void getBitsImpl_intInput_27(svBitVecVal* value_intInput_27);
    static void getBitsImpl_intInput_28(svBitVecVal* value_intInput_28);
    static void getBitsImpl_intInput_29(svBitVecVal* value_intInput_29);
    static void getBitsImpl_intInput_3(svBitVecVal* value_intInput_3);
    static void getBitsImpl_intInput_30(svBitVecVal* value_intInput_30);
    static void getBitsImpl_intInput_31(svBitVecVal* value_intInput_31);
    static void getBitsImpl_intInput_4(svBitVecVal* value_intInput_4);
    static void getBitsImpl_intInput_5(svBitVecVal* value_intInput_5);
    static void getBitsImpl_intInput_6(svBitVecVal* value_intInput_6);
    static void getBitsImpl_intInput_7(svBitVecVal* value_intInput_7);
    static void getBitsImpl_intInput_8(svBitVecVal* value_intInput_8);
    static void getBitsImpl_intInput_9(svBitVecVal* value_intInput_9);
    static void getBitsImpl_reset(svBitVecVal* value_reset);
    static void setBitsImpl_clock(const svBitVecVal* value_clock);
    static void setBitsImpl_intInput_0(const svBitVecVal* value_intInput_0);
    static void setBitsImpl_intInput_1(const svBitVecVal* value_intInput_1);
    static void setBitsImpl_intInput_10(const svBitVecVal* value_intInput_10);
    static void setBitsImpl_intInput_11(const svBitVecVal* value_intInput_11);
    static void setBitsImpl_intInput_12(const svBitVecVal* value_intInput_12);
    static void setBitsImpl_intInput_13(const svBitVecVal* value_intInput_13);
    static void setBitsImpl_intInput_14(const svBitVecVal* value_intInput_14);
    static void setBitsImpl_intInput_15(const svBitVecVal* value_intInput_15);
    static void setBitsImpl_intInput_16(const svBitVecVal* value_intInput_16);
    static void setBitsImpl_intInput_17(const svBitVecVal* value_intInput_17);
    static void setBitsImpl_intInput_18(const svBitVecVal* value_intInput_18);
    static void setBitsImpl_intInput_19(const svBitVecVal* value_intInput_19);
    static void setBitsImpl_intInput_2(const svBitVecVal* value_intInput_2);
    static void setBitsImpl_intInput_20(const svBitVecVal* value_intInput_20);
    static void setBitsImpl_intInput_21(const svBitVecVal* value_intInput_21);
    static void setBitsImpl_intInput_22(const svBitVecVal* value_intInput_22);
    static void setBitsImpl_intInput_23(const svBitVecVal* value_intInput_23);
    static void setBitsImpl_intInput_24(const svBitVecVal* value_intInput_24);
    static void setBitsImpl_intInput_25(const svBitVecVal* value_intInput_25);
    static void setBitsImpl_intInput_26(const svBitVecVal* value_intInput_26);
    static void setBitsImpl_intInput_27(const svBitVecVal* value_intInput_27);
    static void setBitsImpl_intInput_28(const svBitVecVal* value_intInput_28);
    static void setBitsImpl_intInput_29(const svBitVecVal* value_intInput_29);
    static void setBitsImpl_intInput_3(const svBitVecVal* value_intInput_3);
    static void setBitsImpl_intInput_30(const svBitVecVal* value_intInput_30);
    static void setBitsImpl_intInput_31(const svBitVecVal* value_intInput_31);
    static void setBitsImpl_intInput_4(const svBitVecVal* value_intInput_4);
    static void setBitsImpl_intInput_5(const svBitVecVal* value_intInput_5);
    static void setBitsImpl_intInput_6(const svBitVecVal* value_intInput_6);
    static void setBitsImpl_intInput_7(const svBitVecVal* value_intInput_7);
    static void setBitsImpl_intInput_8(const svBitVecVal* value_intInput_8);
    static void setBitsImpl_intInput_9(const svBitVecVal* value_intInput_9);
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
