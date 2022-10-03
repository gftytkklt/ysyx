// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_pipline/gpr.v:35:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_pipline/decoder.v:24:30
    extern void set_inst_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_pipline/pc.v:31:34
    extern void set_pc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_pipline/decoder.v:23:30
    extern void sim_end();

#ifdef __cplusplus
}
#endif
