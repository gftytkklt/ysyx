// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_22040750_H_
#define VERILATED_VYSYX_22040750_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vysyx_22040750__Syms;
class Vysyx_22040750___024root;
class VerilatedVcdC;
class Vysyx_22040750_VerilatedVcd;
class Vysyx_22040750___024unit;


// This class is the main interface to the Verilated model
class Vysyx_22040750 VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_22040750__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_interrupt,0,0);
    VL_IN8(&io_master_awready,0,0);
    VL_OUT8(&io_master_awvalid,0,0);
    VL_OUT8(&io_master_awid,3,0);
    VL_OUT(&io_master_awaddr,31,0);
    VL_OUT8(&io_master_awlen,7,0);
    VL_OUT8(&io_master_awsize,2,0);
    VL_OUT8(&io_master_awburst,1,0);
    VL_IN8(&io_master_wready,0,0);
    VL_OUT8(&io_master_wvalid,0,0);
    VL_OUT64(&io_master_wdata,63,0);
    VL_OUT8(&io_master_wstrb,7,0);
    VL_OUT8(&io_master_wlast,0,0);
    VL_OUT8(&io_master_bready,0,0);
    VL_IN8(&io_master_bvalid,0,0);
    VL_IN8(&io_master_bid,3,0);
    VL_IN8(&io_master_bresp,1,0);
    VL_IN8(&io_master_arready,0,0);
    VL_OUT8(&io_master_arvalid,0,0);
    VL_OUT8(&io_master_arid,3,0);
    VL_OUT(&io_master_araddr,31,0);
    VL_OUT8(&io_master_arlen,7,0);
    VL_OUT8(&io_master_arsize,2,0);
    VL_OUT8(&io_master_arburst,1,0);
    VL_OUT8(&io_master_rready,0,0);
    VL_IN8(&io_master_rvalid,0,0);
    VL_IN8(&io_master_rid,3,0);
    VL_IN8(&io_master_rresp,1,0);
    VL_IN64(&io_master_rdata,63,0);
    VL_IN8(&io_master_rlast,0,0);
    VL_IN8(&io_slave_awready,0,0);
    VL_OUT8(&io_slave_awvalid,0,0);
    VL_OUT8(&io_slave_awid,3,0);
    VL_OUT(&io_slave_awaddr,31,0);
    VL_OUT8(&io_slave_awlen,7,0);
    VL_OUT8(&io_slave_awsize,2,0);
    VL_OUT8(&io_slave_awburst,1,0);
    VL_IN8(&io_slave_wready,0,0);
    VL_OUT8(&io_slave_wvalid,0,0);
    VL_OUT64(&io_slave_wdata,63,0);
    VL_OUT8(&io_slave_wstrb,7,0);
    VL_OUT8(&io_slave_wlast,0,0);
    VL_OUT8(&io_slave_bready,0,0);
    VL_IN8(&io_slave_bvalid,0,0);
    VL_IN8(&io_slave_bid,3,0);
    VL_IN8(&io_slave_bresp,1,0);
    VL_IN8(&io_slave_arready,0,0);
    VL_OUT8(&io_slave_arvalid,0,0);
    VL_OUT8(&io_slave_arid,3,0);
    VL_OUT(&io_slave_araddr,31,0);
    VL_OUT8(&io_slave_arlen,7,0);
    VL_OUT8(&io_slave_arsize,2,0);
    VL_OUT8(&io_slave_arburst,1,0);
    VL_OUT8(&io_slave_rready,0,0);
    VL_IN8(&io_slave_rvalid,0,0);
    VL_IN8(&io_slave_rid,3,0);
    VL_IN8(&io_slave_rresp,1,0);
    VL_IN64(&io_slave_rdata,63,0);
    VL_IN8(&io_slave_rlast,0,0);
    VL_OUT8(&io_sram0_addr,5,0);
    VL_OUT8(&io_sram0_cen,0,0);
    VL_OUT8(&io_sram0_wen,0,0);
    VL_OUTW((&io_sram0_wmask),127,0,4);
    VL_OUTW((&io_sram0_wdata),127,0,4);
    VL_INW((&io_sram0_rdata),127,0,4);
    VL_OUT8(&io_sram1_addr,5,0);
    VL_OUT8(&io_sram1_cen,0,0);
    VL_OUT8(&io_sram1_wen,0,0);
    VL_OUTW((&io_sram1_wmask),127,0,4);
    VL_OUTW((&io_sram1_wdata),127,0,4);
    VL_INW((&io_sram1_rdata),127,0,4);
    VL_OUT8(&io_sram2_addr,5,0);
    VL_OUT8(&io_sram2_cen,0,0);
    VL_OUT8(&io_sram2_wen,0,0);
    VL_OUTW((&io_sram2_wmask),127,0,4);
    VL_OUTW((&io_sram2_wdata),127,0,4);
    VL_INW((&io_sram2_rdata),127,0,4);
    VL_OUT8(&io_sram3_addr,5,0);
    VL_OUT8(&io_sram3_cen,0,0);
    VL_OUT8(&io_sram3_wen,0,0);
    VL_OUTW((&io_sram3_wmask),127,0,4);
    VL_OUTW((&io_sram3_wdata),127,0,4);
    VL_INW((&io_sram3_rdata),127,0,4);
    VL_OUT8(&io_sram4_addr,5,0);
    VL_OUT8(&io_sram4_cen,0,0);
    VL_OUT8(&io_sram4_wen,0,0);
    VL_OUTW((&io_sram4_wmask),127,0,4);
    VL_OUTW((&io_sram4_wdata),127,0,4);
    VL_INW((&io_sram4_rdata),127,0,4);
    VL_OUT8(&io_sram5_addr,5,0);
    VL_OUT8(&io_sram5_cen,0,0);
    VL_OUT8(&io_sram5_wen,0,0);
    VL_OUTW((&io_sram5_wmask),127,0,4);
    VL_OUTW((&io_sram5_wdata),127,0,4);
    VL_INW((&io_sram5_rdata),127,0,4);
    VL_OUT8(&io_sram6_addr,5,0);
    VL_OUT8(&io_sram6_cen,0,0);
    VL_OUT8(&io_sram6_wen,0,0);
    VL_OUTW((&io_sram6_wmask),127,0,4);
    VL_OUTW((&io_sram6_wdata),127,0,4);
    VL_INW((&io_sram6_rdata),127,0,4);
    VL_OUT8(&io_sram7_addr,5,0);
    VL_OUT8(&io_sram7_cen,0,0);
    VL_OUT8(&io_sram7_wen,0,0);
    VL_OUTW((&io_sram7_wmask),127,0,4);
    VL_OUTW((&io_sram7_wdata),127,0,4);
    VL_INW((&io_sram7_rdata),127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vysyx_22040750___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_22040750___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_22040750(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_22040750(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_22040750();
  private:
    VL_UNCOPYABLE(Vysyx_22040750);  ///< Copying not allowed

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
