// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040750_cpu_top.h for the primary calling header

#include "Vysyx_22040750_cpu_top___024root.h"
#include "Vysyx_22040750_cpu_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040750_cpu_top___024root___ctor_var_reset(Vysyx_22040750_cpu_top___024root* vlSelf);

Vysyx_22040750_cpu_top___024root::Vysyx_22040750_cpu_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040750_cpu_top___024root___ctor_var_reset(this);
}

void Vysyx_22040750_cpu_top___024root::__Vconfigure(Vysyx_22040750_cpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040750_cpu_top___024root::~Vysyx_22040750_cpu_top___024root() {
}

void Vysyx_22040750_cpu_top___024root___settle__TOP__2(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp161;
    VlWide<4>/*127:0*/ __Vtemp167;
    VlWide<5>/*159:0*/ __Vtemp194;
    VlWide<5>/*159:0*/ __Vtemp195;
    VlWide<5>/*159:0*/ __Vtemp196;
    VlWide<5>/*159:0*/ __Vtemp197;
    VlWide<5>/*159:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp209;
    VlWide<3>/*95:0*/ __Vtemp210;
    VlWide<3>/*95:0*/ __Vtemp211;
    VlWide<3>/*95:0*/ __Vtemp212;
    VlWide<3>/*95:0*/ __Vtemp213;
    // Body
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0U] = 0U;
    vlSelf->O_mem_addr = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr;
    vlSelf->O_mem_rd_en = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en;
    vlSelf->O_mem_wr_strb = (0xffU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb) 
                                      << (7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_valid 
        = ((IData)((0U != (0xc00U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_valid 
        = ((IData)((0U != (0x3000U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
    vlSelf->O_mem_wr_data = ((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb))
                              ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2
                              : ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb))
                                  ? (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))
                                  : ((2U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))))))
                                      : (((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2))))))))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__current_inst 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid)
            ? vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache
            : vlSelf->I_inst);
    VL_SUB_W(4, __Vtemp161, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_dividend, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_divisor);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_sub_result[0U] 
        = __Vtemp161[0U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_sub_result[1U] 
        = __Vtemp161[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_sub_result[2U] 
        = __Vtemp161[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_sub_result[3U] 
        = __Vtemp161[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD 
        = (IData)((0x3003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU 
        = (IData)((0x6003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH 
        = (IData)((0x1003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU 
        = (IData)((0x5003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB 
        = (IData)((3U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go 
        = ((IData)(vlSelf->I_inst_valid) | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL 
        = (IData)(((0x33U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH 
        = (IData)(((0x1033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU 
        = (IData)(((0x2033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV 
        = (IData)(((0x4033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM 
        = (IData)(((0x6033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW 
        = (IData)(((0x3bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW 
        = (IData)(((0x403bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW 
        = (IData)(((0x603bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin = 1U;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_out_valid 
        = (1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt) 
                  >> 5U) | ((~ (IData)((0U != ((((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                | ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                                                      >> 1U))) 
                                               | (3U 
                                                  & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                                                     >> 1U)))))) 
                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__mul_process))));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid) 
            & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en))) 
           | (IData)(vlSelf->I_mem_rd_data_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS 
        = ((0xfe0U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 7U)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB 
        = ((0x1000U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                       >> 0x13U)) | ((0x800U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                            >> 7U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ 
        = ((0x100000U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
                                      | ((0x800U & 
                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x14U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU 
        = ((0x17U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
           | (0x37U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                  >> 2U) & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                              >> 1U) & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                            | ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                   >> 1U)) & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                   >> 2U) & (~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                >> 1U))) & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI 
        = ((((0x67U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
             | (3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
            | (0x13U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
           | (0x1bU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))
            ? 1ULL : 0ULL);
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data 
           >> ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt) 
               << 3U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[4U] = 4U;
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[5U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp167, vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U] 
        = __Vtemp167[0U];
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U] 
        = __Vtemp167[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U] 
        = __Vtemp167[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U] 
        = __Vtemp167[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_q 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__div_process)
            ? (1U & (~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_sub_result[3U] 
                        >> 0x1fU))) : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb = 
        (((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW) 
            | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH)) 
           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB)) 
          << 8U) | ((0xf0U & ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD))) 
                              << 4U)) | ((0xcU & ((- (IData)(
                                                             (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD) 
                                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW)) 
                                                              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU)))) 
                                                  << 2U)) 
                                         | (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW)) 
                                                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU)) 
                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH)) 
                                              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU)) 
                                             << 1U) 
                                            | (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD) 
                                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW)) 
                                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU)) 
                                                  | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH)) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU)) 
                                                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB)) 
                                               | (IData)(
                                                         (0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid = 
        ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext 
        = ((((((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH)) 
                  | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV)) 
                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM)) 
               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)) 
              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
             | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)) 
            << 1U) | (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH)) 
                          | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV)) 
                         | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM)) 
                        | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)) 
                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid 
        = ((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                           >> 0xaU))) ? (1U & ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_out_valid) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_out_valid)) 
                                                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)) 
                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)))
            : 1U);
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)) 
                 | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag 
        = ((((((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU) 
                   | (0x63U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                  | (0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                 | (3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                | (0x6fU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)) 
              | (IData)((0x13U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))) 
             | (IData)((0x1bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))) 
            | (IData)(((0x33U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                       & (0U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                 >> 0x19U))))) | (IData)(
                                                         ((0x3bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                              >> 0x19U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1U] 
        = ((1U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2U] 
        = ((2U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3U] 
        = ((3U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4U] 
        = ((4U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5U] 
        = ((5U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6U] 
        = ((6U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7U] 
        = ((7U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8U] 
        = ((8U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9U] 
        = ((9U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xaU] 
        = ((0xaU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xbU] 
        = ((0xbU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xcU] 
        = ((0xcU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xdU] 
        = ((0xdU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xeU] 
        = ((0xeU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xfU] 
        = ((0xfU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x10U] 
        = ((0x10U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x11U] 
        = ((0x11U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x12U] 
        = ((0x12U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x13U] 
        = ((0x13U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x14U] 
        = ((0x14U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x15U] 
        = ((0x15U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x16U] 
        = ((0x16U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x17U] 
        = ((0x17U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x18U] 
        = ((0x18U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x19U] 
        = ((0x19U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1aU] 
        = ((0x1aU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1bU] 
        = ((0x1bU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1cU] 
        = ((0x1cU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1dU] 
        = ((0x1dU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1eU] 
        = ((0x1eU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1fU] 
        = ((0x1fU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    __Vtemp194[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (1U | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                       << 1U))))) & 
                       (~ ((- (IData)((1U & ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                           & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                               << 1U))));
    __Vtemp194[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                  >> 0x1fU) | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                               << 1U))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                             << 1U)))));
    __Vtemp194[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                  >> 0x1fU) | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                               << 1U))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                             << 1U)))));
    __Vtemp194[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                  >> 0x1fU) | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                               << 1U))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                             << 1U)))));
    __Vtemp194[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                  >> 0x1fU) | (0xeU 
                                               & ((~ 
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                                  << 1U)))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                >> 0x1fU) | (0xeU & 
                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                              << 1U))))));
    __Vtemp195[0U] = (~ __Vtemp194[0U]);
    __Vtemp195[1U] = (~ __Vtemp194[1U]);
    __Vtemp195[2U] = (~ __Vtemp194[2U]);
    __Vtemp195[3U] = (~ __Vtemp194[3U]);
    __Vtemp195[4U] = (~ __Vtemp194[4U]);
    VL_ADD_W(5, __Vtemp196, __Vtemp195, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__mid_result);
    VL_EXTEND_WI(132,1, __Vtemp197, ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative)));
    VL_ADD_W(5, __Vtemp198, __Vtemp196, __Vtemp197);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[0U] 
        = __Vtemp198[0U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[1U] 
        = __Vtemp198[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[2U] 
        = __Vtemp198[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[3U] 
        = __Vtemp198[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[4U] 
        = (0xfU & __Vtemp198[4U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen = (
                                                   (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU)) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__imm = (((((
                                                   (- (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x14U))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                     & (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS) 
                                                                                >> 0xbU))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS))))) 
                                                 | ((- (QData)((IData)(
                                                                       (0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                    & (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB) 
                                                                               >> 0xcU))))) 
                                                        << 0xdU) 
                                                       | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB))))) 
                                                | ((- (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))) 
                                                   & (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                                               | ((- (QData)((IData)(
                                                                     (0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                  & (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ 
                                                                             >> 0x14U))))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__stall_en = 
        (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
              | (0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
             | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)) 
            | (0x63U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
           & (0U != (0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                              >> 0xfU)))) << 1U) | 
         ((((0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
            | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)) 
           | (0x63U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
          & (0U != (0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x14U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_in = ((vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                   & (((QData)((IData)(
                                                                       (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 7U)))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 6U)))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 5U)))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 4U)))))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 3U)))) 
                                                                          << 0x18U) 
                                                                         | ((0xff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 2U)))) 
                                                                                << 0x10U)) 
                                                                            | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                               | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                             >> 8U) 
                                                                            & ((0xfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                                                ? (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                                >> 0x1fU))
                                                                                : 
                                                                               ((3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb))) 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                                >> 7U)))))))))) 
                                                     & (((QData)((IData)(
                                                                         (((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 7U))))) 
                                                                           << 0x18U) 
                                                                          | ((0xff0000U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 6U))))) 
                                                                                << 0x10U)) 
                                                                             | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 5U))))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 4U))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 3U))))) 
                                                                            << 0x18U) 
                                                                           | ((0xff0000U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 2U))))) 
                                                                                << 0x10U)) 
                                                                              | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 1U))))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb))))))))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[4U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid));
    vlSelf->O_mem_wen = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen) 
                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)) 
                 | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel 
        = ((((((((((((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                       | (2U & (- (IData)(((IData)(
                                                   ((0x33U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U)))) 
                                           | (IData)(
                                                     ((0x3bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                      & (0x20U 
                                                         == 
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                          >> 0x19U))))))))) 
                      | (4U & (- (IData)(((IData)((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                          | (IData)(
                                                    ((0x2033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))))))) 
                     | (8U & (- (IData)(((IData)((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                         | (IData)(
                                                   ((0x3033U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))))))) 
                    | (0x10U & (- (IData)(((IData)(
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                           | (IData)(
                                                     ((0x4033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                          >> 0x19U))))))))) 
                   | (0x20U & (- (IData)(((IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                          | (IData)(
                                                    ((0x6033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))))))) 
                  | (0x40U & (- (IData)(((IData)((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                         | (IData)(
                                                   ((0x7033U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))))))) 
                 | (0x80U & (- (IData)(((((IData)((
                                                   (0x1013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x1aU)))) 
                                          | (IData)(
                                                    ((0x1033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))) 
                                         | (IData)(
                                                   ((0x101bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))) 
                                        | (IData)((
                                                   (0x103bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))))))) 
                | (0x100U & (- (IData)(((((IData)((
                                                   (0x5013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x1aU)))) 
                                          | (IData)(
                                                    ((0x5033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))) 
                                         | (IData)(
                                                   ((0x501bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))) 
                                        | (IData)((
                                                   (0x503bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))))))) 
               | (0x200U & (- (IData)(((((IData)(((0x5013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (0x10U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x1aU)))) 
                                         | (IData)(
                                                   ((0x5033U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))) 
                                        | (IData)((
                                                   (0x501bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x503bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))))))) 
              | (0x400U & (- (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)))))) 
             | (0x800U & (- (IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                     | (IData)(((0x3033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))))))) 
            | (0x1000U & (- (IData)(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
                                       | (IData)(((0x5033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (1U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                     | (IData)(((0x503bU 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))))))) 
           | (0x2000U & (- (IData)(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
                                      | (IData)(((0x7033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U))))) 
                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)) 
                                    | (IData)(((0x703bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U)))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid)
            ? (3U & ((0xfffffffeU & ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                      << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                   >> 0x14U)) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)
            ? (3U & ((0xfffffffeU & ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                      << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                   >> 0x14U)) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)
            ? (3U & ((0xfffffffeU & ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                      << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                   >> 0x14U)) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__mem_in);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__mem_in 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel))))) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data
                                                   [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel) 
                                                                             >> 1U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data
                                                      [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel) 
                                                                             >> 2U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data
                                                      [2U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel))))) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                                   [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel) 
                                                                             >> 1U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                                      [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel) 
                                                                             >> 2U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                                      [2U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid) 
           & ((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                   >> 1U)) | ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                              & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                 >> 1U))) | ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                             & (0U 
                                                != 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                    >> 0xaU))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))
            ? (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)
            : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2 
        = ((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))
            ? (1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                 >> 0x1fU)) : (IData)(
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                       >> 0x3fU))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt 
        = (0x3fU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                     ? (0x1fU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))
                     : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1 
        = ((2U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))
            ? (1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                 >> 0x1fU)) : (IData)(
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                       >> 0x3fU))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x3fU))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1) 
           | ((QData)((IData)((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1)))) 
              << 0x3fU));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid) 
           & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid)) 
                 | ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))));
    vlSelf->ysyx_22040750_cpu_top__DOT__wr_data = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel))))) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data
                                                   [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__wr_data = (vlSelf->ysyx_22040750_cpu_top__DOT__wr_data 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel) 
                                                                             >> 1U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data
                                                      [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__result 
        = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
            + vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2) 
           + vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext[0U] 
        = (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)))
                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext[1U] 
        = (IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)))
                     : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext[2U] 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext[0U] 
        = (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1)))
                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext[1U] 
        = (IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1)))
                     : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext[2U] 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
        = ((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1
            : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
    vlSelf->O_pc_valid = (((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
                           | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))) 
                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__result 
                                               >> 0x3fU)))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__divisor_flag 
        = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext[1U] 
            >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__dividend_flag 
        = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext[1U] 
            >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
             ? (QData)((IData)(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                 ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                            >> 0x20U))
                                 : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))))
             : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op) 
           >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__dividend_flag)
            ? (- (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U]))))
            : (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U]))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
            ^ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__divisor_flag))
            ? (- vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_quotient)
            : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_quotient);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x3fU))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))) 
              << 0x3fU));
    VL_EXTEND_WQ(65,64, __Vtemp209, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
    VL_EXTEND_WQ(65,64, __Vtemp210, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
    VL_ADD_W(3, __Vtemp211, __Vtemp209, __Vtemp210);
    VL_EXTEND_WQ(65,64, __Vtemp212, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
    VL_ADD_W(3, __Vtemp213, __Vtemp211, __Vtemp212);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result 
        = ((((((((((((((- (QData)((IData)((0U != (3U 
                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))))) 
                       & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__result) 
                      | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 2U))))) 
                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slt_result)) 
                     | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                  >> 3U))))) 
                        & (QData)((IData)((1U & (~ 
                                                 (1U 
                                                  & __Vtemp213[2U]))))))) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                 >> 4U))))) 
                       & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                          ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                >> 5U))))) 
                      & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                         | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                               >> 6U))))) 
                     & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                        & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 7U))))) 
                    & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                         >> 0x20U))))
                        : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                             >> 8U))))) 
                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))))) 
                  & (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                            >> 0x1fU))
                                                 : (IData)(
                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                            >> 0x3fU))))))) 
                      & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                          ? (~ (0xffffffffULL >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt)))
                          : (~ (0xffffffffffffffffULL 
                                >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt))))) 
                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                           >> 0xaU))))) 
                 & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                       ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg 
                                                  >> 0x20U))
                                       : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                     << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                                   ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg)
                                                   : 
                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                          >> 0xbU))))) 
                & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_reg 
                                                 >> 0x20U))
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                                  ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_reg)
                                                  : 
                                                 vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))))) 
               & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                     ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg 
                                                >> 0x20U))
                                     : (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result 
                                                >> 0x20U))))) 
                   << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                                 ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg)
                                                 : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result))))))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                        >> 0xdU))))) 
              & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                    ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_reg 
                                               >> 0x20U))
                                    : (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result 
                                               >> 0x20U))))) 
                  << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_reg)
                                                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result)))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_out = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                ((1U 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                                                                & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result 
                                                                                >> 0x1fU)))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result)))
                                                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result);
    vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall) 
            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_out
            : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out
                : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen))
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                    : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                   [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                              >> 0x14U))])));
    vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data 
        = ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall) 
             >> 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_out
            : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall) 
                 >> 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out
                : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall) 
                     >> 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen))
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                    : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                   [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                              >> 0xfU))])));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data 
           == vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data 
           < vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt 
        = VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data, vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr 
        = (((((((IData)((0x63U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)) 
               | ((IData)((0x1063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                  & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))) 
              | ((IData)((0x4063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt))) 
             | ((IData)((0x5063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))) 
            | ((IData)((0x6063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu))) 
           | ((IData)((0x7063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
              & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu))));
    vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel = 
        (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
          << 3U) | (((0x6fU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                     << 2U) | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr) 
                                << 1U) | (1U & (~ (
                                                   ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr)))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel 
        = ((2U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)) 
                  << 1U)) | (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[0U] 
        = (IData)((4ULL + vlSelf->ysyx_22040750_cpu_top__DOT__current_pc));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[1U] 
        = (IData)(((4ULL + vlSelf->ysyx_22040750_cpu_top__DOT__current_pc) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[2U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                   + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                       ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                       : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[3U] 
        = (IData)(((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                    + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                        ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                        : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
        = ((- (QData)((IData)((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel))))) 
           & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data
           [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel) 
                                        >> 1U))))) 
              & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data
              [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__dnpc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc) 
                                                                      & (~ 
                                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                                                          >> 3U)))))));
    vlSelf->O_pc = vlSelf->ysyx_22040750_cpu_top__DOT__dnpc;
}

void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a);
void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_bubble_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a);
void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_skip_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_inst_ptr__Vdpioc2_TOP(const IData/*31:0*/ &a);
void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__pc_e__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vysyx_22040750_cpu_top___024unit____Vdpiimwrap_set_inst_ptr__Vdpioc2_TOP____024unit(const IData/*31:0*/ &a);
void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22040750_cpu_top___024root___initial__TOP__3(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___initial__TOP__3\n"); );
    // Body
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid);
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_bubble_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble);
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_pc_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc);
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_skip_pc_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc);
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_inst_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst);
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__pc_e__DOT__set_pc_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__current_pc);
    Vysyx_22040750_cpu_top___024unit____Vdpiimwrap_set_inst_ptr__Vdpioc2_TOP____024unit(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst);
    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr);
}

void Vysyx_22040750_cpu_top___024root___eval_initial(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__I_sys_clk = vlSelf->I_sys_clk;
    Vysyx_22040750_cpu_top___024root___initial__TOP__3(vlSelf);
}

void Vysyx_22040750_cpu_top___024root___eval_settle(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040750_cpu_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22040750_cpu_top___024root___final(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___final\n"); );
}

void Vysyx_22040750_cpu_top___024root___ctor_var_reset(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->I_sys_clk = 0;
    vlSelf->I_rst = 0;
    vlSelf->I_inst = 0;
    vlSelf->I_inst_valid = 0;
    vlSelf->I_inst_addr_ready = 0;
    vlSelf->O_pc = 0;
    vlSelf->O_pc_valid = 0;
    vlSelf->O_mem_addr = 0;
    vlSelf->O_mem_rd_en = 0;
    vlSelf->O_mem_wen = 0;
    vlSelf->I_mem_rd_data = 0;
    vlSelf->I_mem_rd_data_valid = 0;
    vlSelf->O_mem_wr_data = 0;
    vlSelf->O_mem_wr_strb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__current_pc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__dnpc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__current_inst = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__imm = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__wr_data = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_out = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_in = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_dnpc_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_data = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__stall_en = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen = 0;
    VL_ZERO_RESET_W(192, vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data);
    VL_ZERO_RESET_W(192, vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[__Vi0] = 0;
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[__Vi0] = 0;
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slt_result = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result = 0;
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext);
    VL_ZERO_RESET_W(65, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_valid_d = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_valid_d = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_out_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_out_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_reg = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_reg = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__result = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1 = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result = 0;
    VL_ZERO_RESET_W(67, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1);
    VL_ZERO_RESET_W(132, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2);
    VL_ZERO_RESET_W(132, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__mid_result);
    VL_ZERO_RESET_W(132, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__S);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__end_flag = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__mul_process = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_dividend);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_divisor);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_sub_result);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__current_q = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__dividend_flag = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__divisor_flag = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__abs_quotient = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__div_process = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__radix2_div_e__DOT__iter_cnt = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid = 0;
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
