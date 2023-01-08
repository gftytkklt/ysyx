// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040750_cpu_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040750_CPU_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040750_CPU_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040750_cpu_top__Syms;
class Vysyx_22040750_cpu_top_VerilatedVcd;
class Vysyx_22040750_cpu_top___024unit;


//----------

VL_MODULE(Vysyx_22040750_cpu_top___024root) {
  public:
    // CELLS
    Vysyx_22040750_cpu_top___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(I_sys_clk,0,0);
    VL_IN8(I_rst,0,0);
    VL_IN8(I_inst_valid,0,0);
    VL_IN8(I_inst_addr_ready,0,0);
    VL_OUT8(O_pc_valid,0,0);
    VL_OUT8(O_mem_rd_en,0,0);
    VL_OUT8(O_mem_wen,0,0);
    VL_IN8(I_mem_rd_data_valid,0,0);
    VL_OUT8(O_mem_wr_strb,7,0);
    VL_IN(I_inst,31,0);
    VL_OUT64(O_pc,63,0);
    VL_OUT64(O_mem_addr,63,0);
    VL_IN64(I_mem_rd_data,63,0);
    VL_OUT64(O_mem_wr_data,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ ysyx_22040750_cpu_top__DOT__dnpc_sel;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__reg_wen;
        CData/*1:0*/ ysyx_22040750_cpu_top__DOT__alu_op_sext;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__IF_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_allowin;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_stall;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_bubble;
        CData/*4:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr;
        CData/*7:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_wstrb;
        CData/*2:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel;
        CData/*2:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel;
        CData/*2:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel;
        CData/*1:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_allowin;
        CData/*1:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_stall;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_bubble;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_valid;
        CData/*7:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen;
        CData/*4:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr;
        CData/*2:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_allowin;
        CData/*1:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_stall;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_bubble;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen;
        CData/*4:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr;
        CData/*2:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel;
        CData/*2:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_shamt;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_allowin;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_bubble;
        CData/*1:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_stall;
        CData/*1:0*/ ysyx_22040750_cpu_top__DOT__stall_en;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_EX;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_MEM;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_WB;
        CData/*6:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__O_csr_op_sel;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM;
    };
    struct {
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_output_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__output_valid;
        CData/*4:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_uimm;
        CData/*6:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid_d;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid_d;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid;
        CData/*5:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__end_flag;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process;
        CData/*5:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process;
        CData/*5:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid;
        CData/*0:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid;
        SData/*14:0*/ ysyx_22040750_cpu_top__DOT__alu_op_sel;
        SData/*8:0*/ ysyx_22040750_cpu_top__DOT__mem_rstrb;
        SData/*8:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_rstrb;
        SData/*14:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel;
        SData/*8:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb;
        SData/*8:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb;
        SData/*11:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID;
        SData/*11:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_EX;
        SData/*11:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_MEM;
        SData/*11:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_WB;
        SData/*11:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS;
        SData/*12:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB;
        IData/*31:0*/ ysyx_22040750_cpu_top__DOT__current_inst;
        IData/*31:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_inst;
        IData/*31:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_inst;
        IData/*31:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_inst;
        IData/*31:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_inst;
        IData/*31:0*/ ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache;
        IData/*20:0*/ ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ;
        VlWide<3>/*64:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext;
    };
    struct {
        VlWide<3>/*64:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext;
        VlWide<3>/*66:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1;
        VlWide<5>/*131:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2;
        VlWide<5>/*131:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result;
        VlWide<5>/*131:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S;
        VlWide<4>/*127:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend;
        VlWide<4>/*127:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor;
        VlWide<4>/*127:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__current_pc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__dnpc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__imm;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__wr_data;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_op1;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_op2;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_out;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__mem_in;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__IF_ID_pc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_imm;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_pc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_rs1;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__ID_EX_rs2;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_rs2;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_pc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__EX_MEM_mem_data;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_pc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__rs1_forward_data;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__rs2_forward_data;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__npc_e__DOT__I_intr_pc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_ID;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_EX;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_MEM;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_WB;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_data;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op;
        QData/*63:0*/ ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data;
        VlUnpacked<QData/*63:0*/, 3> ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data;
        VlUnpacked<QData/*63:0*/, 3> ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data;
        VlUnpacked<QData/*63:0*/, 3> ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data;
        VlUnpacked<QData/*63:0*/, 2> ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr;
        VlUnpacked<CData/*0:0*/, 32> ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen;
    CData/*0:0*/ ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen;
    CData/*2:0*/ ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel;
    CData/*0:0*/ __Vclklast__TOP__I_sys_clk;
    VlWide<6>/*191:0*/ ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data;
    VlWide<6>/*191:0*/ ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data;
    VlWide<4>/*127:0*/ ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data;
    VlWide<6>/*191:0*/ ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040750_cpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040750_cpu_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22040750_cpu_top___024root(const char* name);
    ~Vysyx_22040750_cpu_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040750_cpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
