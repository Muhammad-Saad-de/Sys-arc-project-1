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
    static void getBitWidthImpl_onesComplement_0(int* value);
    static void getBitWidthImpl_onesComplement_1(int* value);
    static void getBitWidthImpl_onesComplement_10(int* value);
    static void getBitWidthImpl_onesComplement_11(int* value);
    static void getBitWidthImpl_onesComplement_12(int* value);
    static void getBitWidthImpl_onesComplement_13(int* value);
    static void getBitWidthImpl_onesComplement_14(int* value);
    static void getBitWidthImpl_onesComplement_15(int* value);
    static void getBitWidthImpl_onesComplement_16(int* value);
    static void getBitWidthImpl_onesComplement_17(int* value);
    static void getBitWidthImpl_onesComplement_18(int* value);
    static void getBitWidthImpl_onesComplement_19(int* value);
    static void getBitWidthImpl_onesComplement_2(int* value);
    static void getBitWidthImpl_onesComplement_20(int* value);
    static void getBitWidthImpl_onesComplement_21(int* value);
    static void getBitWidthImpl_onesComplement_22(int* value);
    static void getBitWidthImpl_onesComplement_23(int* value);
    static void getBitWidthImpl_onesComplement_24(int* value);
    static void getBitWidthImpl_onesComplement_25(int* value);
    static void getBitWidthImpl_onesComplement_26(int* value);
    static void getBitWidthImpl_onesComplement_27(int* value);
    static void getBitWidthImpl_onesComplement_28(int* value);
    static void getBitWidthImpl_onesComplement_29(int* value);
    static void getBitWidthImpl_onesComplement_3(int* value);
    static void getBitWidthImpl_onesComplement_30(int* value);
    static void getBitWidthImpl_onesComplement_31(int* value);
    static void getBitWidthImpl_onesComplement_4(int* value);
    static void getBitWidthImpl_onesComplement_5(int* value);
    static void getBitWidthImpl_onesComplement_6(int* value);
    static void getBitWidthImpl_onesComplement_7(int* value);
    static void getBitWidthImpl_onesComplement_8(int* value);
    static void getBitWidthImpl_onesComplement_9(int* value);
    static void getBitWidthImpl_reset(int* value);
    static void getBitWidthImpl_signedMagnitude_0(int* value);
    static void getBitWidthImpl_signedMagnitude_1(int* value);
    static void getBitWidthImpl_signedMagnitude_10(int* value);
    static void getBitWidthImpl_signedMagnitude_11(int* value);
    static void getBitWidthImpl_signedMagnitude_12(int* value);
    static void getBitWidthImpl_signedMagnitude_13(int* value);
    static void getBitWidthImpl_signedMagnitude_14(int* value);
    static void getBitWidthImpl_signedMagnitude_15(int* value);
    static void getBitWidthImpl_signedMagnitude_16(int* value);
    static void getBitWidthImpl_signedMagnitude_17(int* value);
    static void getBitWidthImpl_signedMagnitude_18(int* value);
    static void getBitWidthImpl_signedMagnitude_19(int* value);
    static void getBitWidthImpl_signedMagnitude_2(int* value);
    static void getBitWidthImpl_signedMagnitude_20(int* value);
    static void getBitWidthImpl_signedMagnitude_21(int* value);
    static void getBitWidthImpl_signedMagnitude_22(int* value);
    static void getBitWidthImpl_signedMagnitude_23(int* value);
    static void getBitWidthImpl_signedMagnitude_24(int* value);
    static void getBitWidthImpl_signedMagnitude_25(int* value);
    static void getBitWidthImpl_signedMagnitude_26(int* value);
    static void getBitWidthImpl_signedMagnitude_27(int* value);
    static void getBitWidthImpl_signedMagnitude_28(int* value);
    static void getBitWidthImpl_signedMagnitude_29(int* value);
    static void getBitWidthImpl_signedMagnitude_3(int* value);
    static void getBitWidthImpl_signedMagnitude_30(int* value);
    static void getBitWidthImpl_signedMagnitude_31(int* value);
    static void getBitWidthImpl_signedMagnitude_4(int* value);
    static void getBitWidthImpl_signedMagnitude_5(int* value);
    static void getBitWidthImpl_signedMagnitude_6(int* value);
    static void getBitWidthImpl_signedMagnitude_7(int* value);
    static void getBitWidthImpl_signedMagnitude_8(int* value);
    static void getBitWidthImpl_signedMagnitude_9(int* value);
    static void getBitsImpl_clock(svBitVecVal* value_clock);
    static void getBitsImpl_onesComplement_0(svBitVecVal* value_onesComplement_0);
    static void getBitsImpl_onesComplement_1(svBitVecVal* value_onesComplement_1);
    static void getBitsImpl_onesComplement_10(svBitVecVal* value_onesComplement_10);
    static void getBitsImpl_onesComplement_11(svBitVecVal* value_onesComplement_11);
    static void getBitsImpl_onesComplement_12(svBitVecVal* value_onesComplement_12);
    static void getBitsImpl_onesComplement_13(svBitVecVal* value_onesComplement_13);
    static void getBitsImpl_onesComplement_14(svBitVecVal* value_onesComplement_14);
    static void getBitsImpl_onesComplement_15(svBitVecVal* value_onesComplement_15);
    static void getBitsImpl_onesComplement_16(svBitVecVal* value_onesComplement_16);
    static void getBitsImpl_onesComplement_17(svBitVecVal* value_onesComplement_17);
    static void getBitsImpl_onesComplement_18(svBitVecVal* value_onesComplement_18);
    static void getBitsImpl_onesComplement_19(svBitVecVal* value_onesComplement_19);
    static void getBitsImpl_onesComplement_2(svBitVecVal* value_onesComplement_2);
    static void getBitsImpl_onesComplement_20(svBitVecVal* value_onesComplement_20);
    static void getBitsImpl_onesComplement_21(svBitVecVal* value_onesComplement_21);
    static void getBitsImpl_onesComplement_22(svBitVecVal* value_onesComplement_22);
    static void getBitsImpl_onesComplement_23(svBitVecVal* value_onesComplement_23);
    static void getBitsImpl_onesComplement_24(svBitVecVal* value_onesComplement_24);
    static void getBitsImpl_onesComplement_25(svBitVecVal* value_onesComplement_25);
    static void getBitsImpl_onesComplement_26(svBitVecVal* value_onesComplement_26);
    static void getBitsImpl_onesComplement_27(svBitVecVal* value_onesComplement_27);
    static void getBitsImpl_onesComplement_28(svBitVecVal* value_onesComplement_28);
    static void getBitsImpl_onesComplement_29(svBitVecVal* value_onesComplement_29);
    static void getBitsImpl_onesComplement_3(svBitVecVal* value_onesComplement_3);
    static void getBitsImpl_onesComplement_30(svBitVecVal* value_onesComplement_30);
    static void getBitsImpl_onesComplement_31(svBitVecVal* value_onesComplement_31);
    static void getBitsImpl_onesComplement_4(svBitVecVal* value_onesComplement_4);
    static void getBitsImpl_onesComplement_5(svBitVecVal* value_onesComplement_5);
    static void getBitsImpl_onesComplement_6(svBitVecVal* value_onesComplement_6);
    static void getBitsImpl_onesComplement_7(svBitVecVal* value_onesComplement_7);
    static void getBitsImpl_onesComplement_8(svBitVecVal* value_onesComplement_8);
    static void getBitsImpl_onesComplement_9(svBitVecVal* value_onesComplement_9);
    static void getBitsImpl_reset(svBitVecVal* value_reset);
    static void getBitsImpl_signedMagnitude_0(svBitVecVal* value_signedMagnitude_0);
    static void getBitsImpl_signedMagnitude_1(svBitVecVal* value_signedMagnitude_1);
    static void getBitsImpl_signedMagnitude_10(svBitVecVal* value_signedMagnitude_10);
    static void getBitsImpl_signedMagnitude_11(svBitVecVal* value_signedMagnitude_11);
    static void getBitsImpl_signedMagnitude_12(svBitVecVal* value_signedMagnitude_12);
    static void getBitsImpl_signedMagnitude_13(svBitVecVal* value_signedMagnitude_13);
    static void getBitsImpl_signedMagnitude_14(svBitVecVal* value_signedMagnitude_14);
    static void getBitsImpl_signedMagnitude_15(svBitVecVal* value_signedMagnitude_15);
    static void getBitsImpl_signedMagnitude_16(svBitVecVal* value_signedMagnitude_16);
    static void getBitsImpl_signedMagnitude_17(svBitVecVal* value_signedMagnitude_17);
    static void getBitsImpl_signedMagnitude_18(svBitVecVal* value_signedMagnitude_18);
    static void getBitsImpl_signedMagnitude_19(svBitVecVal* value_signedMagnitude_19);
    static void getBitsImpl_signedMagnitude_2(svBitVecVal* value_signedMagnitude_2);
    static void getBitsImpl_signedMagnitude_20(svBitVecVal* value_signedMagnitude_20);
    static void getBitsImpl_signedMagnitude_21(svBitVecVal* value_signedMagnitude_21);
    static void getBitsImpl_signedMagnitude_22(svBitVecVal* value_signedMagnitude_22);
    static void getBitsImpl_signedMagnitude_23(svBitVecVal* value_signedMagnitude_23);
    static void getBitsImpl_signedMagnitude_24(svBitVecVal* value_signedMagnitude_24);
    static void getBitsImpl_signedMagnitude_25(svBitVecVal* value_signedMagnitude_25);
    static void getBitsImpl_signedMagnitude_26(svBitVecVal* value_signedMagnitude_26);
    static void getBitsImpl_signedMagnitude_27(svBitVecVal* value_signedMagnitude_27);
    static void getBitsImpl_signedMagnitude_28(svBitVecVal* value_signedMagnitude_28);
    static void getBitsImpl_signedMagnitude_29(svBitVecVal* value_signedMagnitude_29);
    static void getBitsImpl_signedMagnitude_3(svBitVecVal* value_signedMagnitude_3);
    static void getBitsImpl_signedMagnitude_30(svBitVecVal* value_signedMagnitude_30);
    static void getBitsImpl_signedMagnitude_31(svBitVecVal* value_signedMagnitude_31);
    static void getBitsImpl_signedMagnitude_4(svBitVecVal* value_signedMagnitude_4);
    static void getBitsImpl_signedMagnitude_5(svBitVecVal* value_signedMagnitude_5);
    static void getBitsImpl_signedMagnitude_6(svBitVecVal* value_signedMagnitude_6);
    static void getBitsImpl_signedMagnitude_7(svBitVecVal* value_signedMagnitude_7);
    static void getBitsImpl_signedMagnitude_8(svBitVecVal* value_signedMagnitude_8);
    static void getBitsImpl_signedMagnitude_9(svBitVecVal* value_signedMagnitude_9);
    static void setBitsImpl_clock(const svBitVecVal* value_clock);
    static void setBitsImpl_reset(const svBitVecVal* value_reset);
    static void setBitsImpl_signedMagnitude_0(const svBitVecVal* value_signedMagnitude_0);
    static void setBitsImpl_signedMagnitude_1(const svBitVecVal* value_signedMagnitude_1);
    static void setBitsImpl_signedMagnitude_10(const svBitVecVal* value_signedMagnitude_10);
    static void setBitsImpl_signedMagnitude_11(const svBitVecVal* value_signedMagnitude_11);
    static void setBitsImpl_signedMagnitude_12(const svBitVecVal* value_signedMagnitude_12);
    static void setBitsImpl_signedMagnitude_13(const svBitVecVal* value_signedMagnitude_13);
    static void setBitsImpl_signedMagnitude_14(const svBitVecVal* value_signedMagnitude_14);
    static void setBitsImpl_signedMagnitude_15(const svBitVecVal* value_signedMagnitude_15);
    static void setBitsImpl_signedMagnitude_16(const svBitVecVal* value_signedMagnitude_16);
    static void setBitsImpl_signedMagnitude_17(const svBitVecVal* value_signedMagnitude_17);
    static void setBitsImpl_signedMagnitude_18(const svBitVecVal* value_signedMagnitude_18);
    static void setBitsImpl_signedMagnitude_19(const svBitVecVal* value_signedMagnitude_19);
    static void setBitsImpl_signedMagnitude_2(const svBitVecVal* value_signedMagnitude_2);
    static void setBitsImpl_signedMagnitude_20(const svBitVecVal* value_signedMagnitude_20);
    static void setBitsImpl_signedMagnitude_21(const svBitVecVal* value_signedMagnitude_21);
    static void setBitsImpl_signedMagnitude_22(const svBitVecVal* value_signedMagnitude_22);
    static void setBitsImpl_signedMagnitude_23(const svBitVecVal* value_signedMagnitude_23);
    static void setBitsImpl_signedMagnitude_24(const svBitVecVal* value_signedMagnitude_24);
    static void setBitsImpl_signedMagnitude_25(const svBitVecVal* value_signedMagnitude_25);
    static void setBitsImpl_signedMagnitude_26(const svBitVecVal* value_signedMagnitude_26);
    static void setBitsImpl_signedMagnitude_27(const svBitVecVal* value_signedMagnitude_27);
    static void setBitsImpl_signedMagnitude_28(const svBitVecVal* value_signedMagnitude_28);
    static void setBitsImpl_signedMagnitude_29(const svBitVecVal* value_signedMagnitude_29);
    static void setBitsImpl_signedMagnitude_3(const svBitVecVal* value_signedMagnitude_3);
    static void setBitsImpl_signedMagnitude_30(const svBitVecVal* value_signedMagnitude_30);
    static void setBitsImpl_signedMagnitude_31(const svBitVecVal* value_signedMagnitude_31);
    static void setBitsImpl_signedMagnitude_4(const svBitVecVal* value_signedMagnitude_4);
    static void setBitsImpl_signedMagnitude_5(const svBitVecVal* value_signedMagnitude_5);
    static void setBitsImpl_signedMagnitude_6(const svBitVecVal* value_signedMagnitude_6);
    static void setBitsImpl_signedMagnitude_7(const svBitVecVal* value_signedMagnitude_7);
    static void setBitsImpl_signedMagnitude_8(const svBitVecVal* value_signedMagnitude_8);
    static void setBitsImpl_signedMagnitude_9(const svBitVecVal* value_signedMagnitude_9);
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
