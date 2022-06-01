// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top.h for the primary calling header

#ifndef VERILATED_VCPU_TOP___024UNIT_H_
#define VERILATED_VCPU_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcpu_top__Syms;
class Vcpu_top_VerilatedVcd;


//----------

VL_MODULE(Vcpu_top___024unit) {
  public:

    // INTERNAL VARIABLES
    Vcpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu_top___024unit);  ///< Copying not allowed
  public:
    Vcpu_top___024unit(const char* name);
    ~Vcpu_top___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vcpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
