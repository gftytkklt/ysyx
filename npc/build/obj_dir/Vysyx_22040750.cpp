// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22040750.h"
#include "Vysyx_22040750__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22040750::Vysyx_22040750(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_22040750__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_interrupt{vlSymsp->TOP.io_interrupt}
    , io_master_awready{vlSymsp->TOP.io_master_awready}
    , io_master_awvalid{vlSymsp->TOP.io_master_awvalid}
    , io_master_awid{vlSymsp->TOP.io_master_awid}
    , io_master_awlen{vlSymsp->TOP.io_master_awlen}
    , io_master_awsize{vlSymsp->TOP.io_master_awsize}
    , io_master_awburst{vlSymsp->TOP.io_master_awburst}
    , io_master_wready{vlSymsp->TOP.io_master_wready}
    , io_master_wvalid{vlSymsp->TOP.io_master_wvalid}
    , io_master_wstrb{vlSymsp->TOP.io_master_wstrb}
    , io_master_wlast{vlSymsp->TOP.io_master_wlast}
    , io_master_bready{vlSymsp->TOP.io_master_bready}
    , io_master_bvalid{vlSymsp->TOP.io_master_bvalid}
    , io_master_bid{vlSymsp->TOP.io_master_bid}
    , io_master_bresp{vlSymsp->TOP.io_master_bresp}
    , io_master_arready{vlSymsp->TOP.io_master_arready}
    , io_master_arvalid{vlSymsp->TOP.io_master_arvalid}
    , io_master_arid{vlSymsp->TOP.io_master_arid}
    , io_master_arlen{vlSymsp->TOP.io_master_arlen}
    , io_master_arsize{vlSymsp->TOP.io_master_arsize}
    , io_master_arburst{vlSymsp->TOP.io_master_arburst}
    , io_master_rready{vlSymsp->TOP.io_master_rready}
    , io_master_rvalid{vlSymsp->TOP.io_master_rvalid}
    , io_master_rid{vlSymsp->TOP.io_master_rid}
    , io_master_rresp{vlSymsp->TOP.io_master_rresp}
    , io_master_rlast{vlSymsp->TOP.io_master_rlast}
    , io_slave_awready{vlSymsp->TOP.io_slave_awready}
    , io_slave_awvalid{vlSymsp->TOP.io_slave_awvalid}
    , io_slave_awid{vlSymsp->TOP.io_slave_awid}
    , io_slave_awlen{vlSymsp->TOP.io_slave_awlen}
    , io_slave_awsize{vlSymsp->TOP.io_slave_awsize}
    , io_slave_awburst{vlSymsp->TOP.io_slave_awburst}
    , io_slave_wready{vlSymsp->TOP.io_slave_wready}
    , io_slave_wvalid{vlSymsp->TOP.io_slave_wvalid}
    , io_slave_wstrb{vlSymsp->TOP.io_slave_wstrb}
    , io_slave_wlast{vlSymsp->TOP.io_slave_wlast}
    , io_slave_bready{vlSymsp->TOP.io_slave_bready}
    , io_slave_bvalid{vlSymsp->TOP.io_slave_bvalid}
    , io_slave_bid{vlSymsp->TOP.io_slave_bid}
    , io_slave_bresp{vlSymsp->TOP.io_slave_bresp}
    , io_slave_arready{vlSymsp->TOP.io_slave_arready}
    , io_slave_arvalid{vlSymsp->TOP.io_slave_arvalid}
    , io_slave_arid{vlSymsp->TOP.io_slave_arid}
    , io_slave_arlen{vlSymsp->TOP.io_slave_arlen}
    , io_slave_arsize{vlSymsp->TOP.io_slave_arsize}
    , io_slave_arburst{vlSymsp->TOP.io_slave_arburst}
    , io_slave_rready{vlSymsp->TOP.io_slave_rready}
    , io_slave_rvalid{vlSymsp->TOP.io_slave_rvalid}
    , io_slave_rid{vlSymsp->TOP.io_slave_rid}
    , io_slave_rresp{vlSymsp->TOP.io_slave_rresp}
    , io_slave_rlast{vlSymsp->TOP.io_slave_rlast}
    , io_master_awaddr{vlSymsp->TOP.io_master_awaddr}
    , io_master_araddr{vlSymsp->TOP.io_master_araddr}
    , io_slave_awaddr{vlSymsp->TOP.io_slave_awaddr}
    , io_slave_araddr{vlSymsp->TOP.io_slave_araddr}
    , io_master_wdata{vlSymsp->TOP.io_master_wdata}
    , io_master_rdata{vlSymsp->TOP.io_master_rdata}
    , io_slave_wdata{vlSymsp->TOP.io_slave_wdata}
    , io_slave_rdata{vlSymsp->TOP.io_slave_rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_22040750::Vysyx_22040750(const char* _vcname__)
    : Vysyx_22040750(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22040750::~Vysyx_22040750() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_22040750___024root___eval_debug_assertions(Vysyx_22040750___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22040750___024root___eval_static(Vysyx_22040750___024root* vlSelf);
void Vysyx_22040750___024root___eval_initial(Vysyx_22040750___024root* vlSelf);
void Vysyx_22040750___024root___eval_settle(Vysyx_22040750___024root* vlSelf);
void Vysyx_22040750___024root___eval(Vysyx_22040750___024root* vlSelf);

void Vysyx_22040750::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22040750::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22040750___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_22040750___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_22040750___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_22040750___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_22040750___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_22040750::eventsPending() { return false; }

uint64_t Vysyx_22040750::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_22040750::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_22040750___024root___eval_final(Vysyx_22040750___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040750::final() {
    Vysyx_22040750___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_22040750::hierName() const { return vlSymsp->name(); }
const char* Vysyx_22040750::modelName() const { return "Vysyx_22040750"; }
unsigned Vysyx_22040750::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vysyx_22040750::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_22040750___024root__trace_init_top(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22040750___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040750___024root*>(voidSelf);
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_22040750___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_22040750___024root__trace_register(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040750::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_22040750::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_22040750___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

//============================================================
// Model serialization

VerilatedSerialize& operator<<(VerilatedSerialize& os, Vysyx_22040750& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vserialize(os);
    return os;
}

VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vysyx_22040750& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vdeserialize(os);
    return os;
}
