// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_22040750__Syms.h"
#include "Vysyx_22040750.h"
#include "Vysyx_22040750___024root.h"

// FUNCTIONS
Vysyx_22040750__Syms::~Vysyx_22040750__Syms()
{
}

Vysyx_22040750__Syms::Vysyx_22040750__Syms(VerilatedContext* contextp, const char* namep, Vysyx_22040750* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
