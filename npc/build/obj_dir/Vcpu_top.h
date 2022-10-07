// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCPU_TOP_H_
#define VERILATED_VCPU_TOP_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vcpu_top__Syms;
class Vcpu_top___024root;
class VerilatedVcdC;
class Vcpu_top_VerilatedVcd;
class Vcpu_top___024unit;


// This class is the main interface to the Verilated model
class Vcpu_top VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcpu_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&I_sys_clk,0,0);
    VL_IN8(&I_rst,0,0);
    VL_IN(&I_inst,31,0);
    VL_IN8(&I_inst_valid,0,0);
    VL_IN8(&I_inst_addr_ready,0,0);
    VL_OUT64(&O_pc,63,0);
    VL_OUT8(&O_pc_valid,0,0);
    VL_OUT64(&O_mem_addr,63,0);
    VL_OUT8(&O_mem_rd_en,0,0);
    VL_OUT8(&O_mem_wen,0,0);
    VL_IN64(&I_mem_rd_data,63,0);
    VL_IN8(&I_mem_rd_data_valid,0,0);
    VL_OUT64(&O_mem_wr_data,63,0);
    VL_OUT8(&O_mem_wr_strb,7,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcpu_top___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcpu_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcpu_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcpu_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcpu_top();
  private:
    VL_UNCOPYABLE(Vcpu_top);  ///< Copying not allowed

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
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
