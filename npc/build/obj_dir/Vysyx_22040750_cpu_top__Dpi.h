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
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_gpr.v:35:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_decoder.v:24:30
    extern void set_inst_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_pc.v:36:34
    extern void set_pc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_cpu_top.v:125:34
    extern void set_skip_pc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_cpu_top.v:121:34
    extern void set_wb_bubble_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_cpu_top.v:127:34
    extern void set_wb_inst_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_cpu_top.v:123:34
    extern void set_wb_pc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_cpu_top.v:119:34
    extern void set_wb_ptr(const svOpenArrayHandle a);
    // DPI import at /home/gftyt/ysyx-workbench/npc/vsrc_fullpipline/ysyx_22040750_cpu_top.v:129:34
    extern void sim_end();

#ifdef __cplusplus
}
#endif