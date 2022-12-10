// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040750_cpu_top__Syms.h"


void Vysyx_22040750_cpu_top___024root__traceInitSub0(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040750_cpu_top___024root__traceInitTop(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040750_cpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040750_cpu_top___024root__traceInitSub0(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+457,"I_sys_clk", false,-1);
        tracep->declBit(c+458,"I_rst", false,-1);
        tracep->declBus(c+459,"I_inst", false,-1, 31,0);
        tracep->declBit(c+460,"I_inst_valid", false,-1);
        tracep->declBit(c+461,"I_inst_addr_ready", false,-1);
        tracep->declQuad(c+462,"O_pc", false,-1, 63,0);
        tracep->declBit(c+464,"O_pc_valid", false,-1);
        tracep->declQuad(c+465,"O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+467,"O_mem_rd_en", false,-1);
        tracep->declBit(c+468,"O_mem_wen", false,-1);
        tracep->declQuad(c+469,"I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+471,"I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+472,"O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+474,"O_mem_wr_strb", false,-1, 7,0);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top I_rst", false,-1);
        tracep->declBus(c+459,"ysyx_22040750_cpu_top I_inst", false,-1, 31,0);
        tracep->declBit(c+460,"ysyx_22040750_cpu_top I_inst_valid", false,-1);
        tracep->declBit(c+461,"ysyx_22040750_cpu_top I_inst_addr_ready", false,-1);
        tracep->declQuad(c+462,"ysyx_22040750_cpu_top O_pc", false,-1, 63,0);
        tracep->declBit(c+464,"ysyx_22040750_cpu_top O_pc_valid", false,-1);
        tracep->declQuad(c+465,"ysyx_22040750_cpu_top O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+467,"ysyx_22040750_cpu_top O_mem_rd_en", false,-1);
        tracep->declBit(c+468,"ysyx_22040750_cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+469,"ysyx_22040750_cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+471,"ysyx_22040750_cpu_top I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+472,"ysyx_22040750_cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+474,"ysyx_22040750_cpu_top O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+1,"ysyx_22040750_cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"ysyx_22040750_cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22040750_cpu_top snpc", false,-1, 63,0);
        tracep->declBus(c+449,"ysyx_22040750_cpu_top current_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top imm", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top wr_data", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22040750_cpu_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22040750_cpu_top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040750_cpu_top alu_op2", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top alu_out", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22040750_cpu_top mem_in", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top mem_out", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top mem_addr", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top rs1_addr", false,-1, 4,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top rs2_addr", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top rd_addr", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22040750_cpu_top dnpc_sel", false,-1, 3,0);
        tracep->declBus(c+31,"ysyx_22040750_cpu_top regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040750_cpu_top opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22040750_cpu_top opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+34,"ysyx_22040750_cpu_top alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+35,"ysyx_22040750_cpu_top mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22040750_cpu_top mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+37,"ysyx_22040750_cpu_top reg_wen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top mem_wen", false,-1);
        tracep->declBit(c+39,"ysyx_22040750_cpu_top word_op_mask", false,-1);
        tracep->declBus(c+40,"ysyx_22040750_cpu_top alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+450,"ysyx_22040750_cpu_top IF_valid", false,-1);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top IF_ID_pc", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+451,"ysyx_22040750_cpu_top IF_ID_allowin", false,-1);
        tracep->declBit(c+44,"ysyx_22040750_cpu_top IF_ID_valid", false,-1);
        tracep->declBit(c+45,"ysyx_22040750_cpu_top IF_ID_stall", false,-1);
        tracep->declBit(c+46,"ysyx_22040750_cpu_top IF_ID_bubble", false,-1);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top IF_ID_input_valid", false,-1);
        tracep->declQuad(c+48,"ysyx_22040750_cpu_top ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22040750_cpu_top ID_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040750_cpu_top ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040750_cpu_top ID_EX_rs2", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+57,"ysyx_22040750_cpu_top ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+58,"ysyx_22040750_cpu_top ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+476,"ysyx_22040750_cpu_top ID_EX_dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+59,"ysyx_22040750_cpu_top ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+60,"ysyx_22040750_cpu_top ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+61,"ysyx_22040750_cpu_top ID_EX_op2_sel", false,-1, 1,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top ID_EX_reg_wen", false,-1);
        tracep->declBit(c+65,"ysyx_22040750_cpu_top ID_EX_mem_wen", false,-1);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_valid", false,-1);
        tracep->declBit(c+452,"ysyx_22040750_cpu_top ID_EX_allowin", false,-1);
        tracep->declBus(c+68,"ysyx_22040750_cpu_top ID_EX_stall", false,-1, 1,0);
        tracep->declBus(c+69,"ysyx_22040750_cpu_top ID_EX_inst", false,-1, 31,0);
        tracep->declBit(c+70,"ysyx_22040750_cpu_top ID_EX_bubble", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_input_valid", false,-1);
        tracep->declBit(c+453,"ysyx_22040750_cpu_top EX_MEM_valid", false,-1);
        tracep->declBus(c+71,"ysyx_22040750_cpu_top EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+72,"ysyx_22040750_cpu_top EX_MEM_wstrb", false,-1, 7,0);
        tracep->declQuad(c+73,"ysyx_22040750_cpu_top EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040750_cpu_top EX_MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top EX_MEM_rs2", false,-1, 63,0);
        tracep->declBit(c+77,"ysyx_22040750_cpu_top EX_MEM_mem_wen", false,-1);
        tracep->declQuad(c+78,"ysyx_22040750_cpu_top EX_MEM_pc", false,-1, 63,0);
        tracep->declQuad(c+477,"ysyx_22040750_cpu_top EX_MEM_mem_data", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040750_cpu_top EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040750_cpu_top EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+82,"ysyx_22040750_cpu_top EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+83,"ysyx_22040750_cpu_top EX_MEM_shamt", false,-1, 2,0);
        tracep->declBit(c+454,"ysyx_22040750_cpu_top EX_MEM_allowin", false,-1);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top EX_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+85,"ysyx_22040750_cpu_top EX_MEM_inst", false,-1, 31,0);
        tracep->declBit(c+86,"ysyx_22040750_cpu_top EX_MEM_bubble", false,-1);
        tracep->declBit(c+87,"ysyx_22040750_cpu_top EX_MEM_input_valid", false,-1);
        tracep->declQuad(c+88,"ysyx_22040750_cpu_top MEM_WB_pc", false,-1, 63,0);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top MEM_WB_valid", false,-1);
        tracep->declQuad(c+91,"ysyx_22040750_cpu_top MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040750_cpu_top MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+94,"ysyx_22040750_cpu_top MEM_WB_alu_out", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22040750_cpu_top MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+97,"ysyx_22040750_cpu_top MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22040750_cpu_top MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+99,"ysyx_22040750_cpu_top MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+100,"ysyx_22040750_cpu_top MEM_WB_allowin", false,-1);
        tracep->declBus(c+101,"ysyx_22040750_cpu_top MEM_WB_inst", false,-1, 31,0);
        tracep->declBit(c+102,"ysyx_22040750_cpu_top MEM_WB_bubble", false,-1);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top MEM_WB_input_valid", false,-1);
        tracep->declBus(c+103,"ysyx_22040750_cpu_top MEM_WB_stall", false,-1, 1,0);
        tracep->declBus(c+104,"ysyx_22040750_cpu_top stall_en", false,-1, 1,0);
        tracep->declBit(c+479,"ysyx_22040750_cpu_top inst_ready", false,-1);
        tracep->declQuad(c+105,"ysyx_22040750_cpu_top rs1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750_cpu_top rs2_forward_data", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750_cpu_top npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750_cpu_top npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22040750_cpu_top npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+30,"ysyx_22040750_cpu_top npc_e I_dnpc_sel", false,-1, 3,0);
        tracep->declQuad(c+3,"ysyx_22040750_cpu_top npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040750_cpu_top npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22040750_cpu_top npc_e dnpc_sum", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22040750_cpu_top npc_e dnpc", false,-1, 63,0);
        tracep->declBit(c+115,"ysyx_22040750_cpu_top npc_e dnpc_sel", false,-1);
        tracep->declBus(c+480,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+481,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+116,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+120,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+113,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+121+i*2,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+482,"ysyx_22040750_cpu_top npc_e nextpc_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+3,"ysyx_22040750_cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declBus(c+459,"ysyx_22040750_cpu_top pc_e I_inst", false,-1, 31,0);
        tracep->declBit(c+460,"ysyx_22040750_cpu_top pc_e I_inst_valid", false,-1);
        tracep->declBit(c+479,"ysyx_22040750_cpu_top pc_e I_inst_ready", false,-1);
        tracep->declBit(c+451,"ysyx_22040750_cpu_top pc_e I_IF_ID_allowin", false,-1);
        tracep->declBit(c+450,"ysyx_22040750_cpu_top pc_e O_IF_valid", false,-1);
        tracep->declQuad(c+1,"ysyx_22040750_cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declBus(c+449,"ysyx_22040750_cpu_top pc_e O_inst", false,-1, 31,0);
        tracep->declBit(c+464,"ysyx_22040750_cpu_top pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+483,"ysyx_22040750_cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+455,"ysyx_22040750_cpu_top pc_e IF_ready_go", false,-1);
        tracep->declBit(c+475,"ysyx_22040750_cpu_top pc_e IF_allow_in", false,-1);
        tracep->declBit(c+464,"ysyx_22040750_cpu_top pc_e IF_handshake", false,-1);
        tracep->declBit(c+125,"ysyx_22040750_cpu_top pc_e IF_valid", false,-1);
        tracep->declBit(c+126,"ysyx_22040750_cpu_top pc_e IF_en", false,-1);
        tracep->declBus(c+127,"ysyx_22040750_cpu_top pc_e inst_cache", false,-1, 31,0);
        tracep->declBit(c+128,"ysyx_22040750_cpu_top pc_e cache_valid", false,-1);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+1,"ysyx_22040750_cpu_top IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+449,"ysyx_22040750_cpu_top IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+450,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declBit(c+452,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_allowout", false,-1);
        tracep->declBit(c+45,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_stall", false,-1);
        tracep->declBit(c+115,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_jmp", false,-1);
        tracep->declBit(c+451,"ysyx_22040750_cpu_top IF_ID_reg_e O_IF_ID_allowin", false,-1);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+46,"ysyx_22040750_cpu_top IF_ID_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top IF_ID_reg_e O_IF_ID_input_valid", false,-1);
        tracep->declBit(c+44,"ysyx_22040750_cpu_top IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top IF_ID_reg_e input_valid", false,-1);
        tracep->declBit(c+129,"ysyx_22040750_cpu_top IF_ID_reg_e output_valid", false,-1);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top stall_unit_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top stall_unit_e I_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top stall_unit_e I_ID_valid", false,-1);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top stall_unit_e I_EX_rd_addr", false,-1, 4,0);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top stall_unit_e I_EX_valid", false,-1);
        tracep->declBit(c+130,"ysyx_22040750_cpu_top stall_unit_e I_EX_mem_rd_en", false,-1);
        tracep->declBit(c+131,"ysyx_22040750_cpu_top stall_unit_e I_EX_alu_multcycle", false,-1);
        tracep->declBus(c+81,"ysyx_22040750_cpu_top stall_unit_e I_MEM_rd_addr", false,-1, 4,0);
        tracep->declBit(c+87,"ysyx_22040750_cpu_top stall_unit_e I_MEM_valid", false,-1);
        tracep->declBit(c+132,"ysyx_22040750_cpu_top stall_unit_e I_MEM_mem_rd_en", false,-1);
        tracep->declBus(c+97,"ysyx_22040750_cpu_top stall_unit_e I_WB_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top stall_unit_e I_WB_valid", false,-1);
        tracep->declBus(c+104,"ysyx_22040750_cpu_top stall_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBit(c+45,"ysyx_22040750_cpu_top stall_unit_e O_ID_stall", false,-1);
        tracep->declBus(c+68,"ysyx_22040750_cpu_top stall_unit_e O_EX_stall", false,-1, 1,0);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top stall_unit_e O_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_22040750_cpu_top stall_unit_e O_WB_stall", false,-1, 1,0);
        tracep->declBus(c+133,"ysyx_22040750_cpu_top stall_unit_e EX_stall", false,-1, 1,0);
        tracep->declBus(c+134,"ysyx_22040750_cpu_top stall_unit_e MEM_stall", false,-1, 1,0);
        tracep->declBus(c+135,"ysyx_22040750_cpu_top stall_unit_e WB_stall", false,-1, 1,0);
        tracep->declBit(c+136,"ysyx_22040750_cpu_top stall_unit_e mem_rd", false,-1);
        tracep->declBit(c+137,"ysyx_22040750_cpu_top stall_unit_e multicycle_alu_op", false,-1);
        tracep->declQuad(c+11,"ysyx_22040750_cpu_top forward_unit_e I_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22040750_cpu_top forward_unit_e I_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top forward_unit_e I_EX_data", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040750_cpu_top forward_unit_e I_MEM_data", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top forward_unit_e I_WB_data", false,-1, 63,0);
        tracep->declBus(c+104,"ysyx_22040750_cpu_top forward_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBus(c+68,"ysyx_22040750_cpu_top forward_unit_e I_EX_stall", false,-1, 1,0);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top forward_unit_e I_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+103,"ysyx_22040750_cpu_top forward_unit_e I_WB_stall", false,-1, 1,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top forward_unit_e I_EX_reg_wen", false,-1);
        tracep->declBit(c+80,"ysyx_22040750_cpu_top forward_unit_e I_MEM_reg_wen", false,-1);
        tracep->declBit(c+138,"ysyx_22040750_cpu_top forward_unit_e I_WB_reg_wen", false,-1);
        tracep->declQuad(c+105,"ysyx_22040750_cpu_top forward_unit_e O_ID_EX_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750_cpu_top forward_unit_e O_ID_EX_rs2_data", false,-1, 63,0);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750_cpu_top decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+107,"ysyx_22040750_cpu_top decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+37,"ysyx_22040750_cpu_top decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+35,"ysyx_22040750_cpu_top decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22040750_cpu_top decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+30,"ysyx_22040750_cpu_top decoder_e O_dnpc_sel", false,-1, 3,0);
        tracep->declBus(c+31,"ysyx_22040750_cpu_top decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040750_cpu_top decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22040750_cpu_top decoder_e O_opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+34,"ysyx_22040750_cpu_top decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+40,"ysyx_22040750_cpu_top decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+39,"ysyx_22040750_cpu_top decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+104,"ysyx_22040750_cpu_top decoder_e O_stall_en", false,-1, 1,0);
        tracep->declBus(c+139,"ysyx_22040750_cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+140,"ysyx_22040750_cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+141,"ysyx_22040750_cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+142,"ysyx_22040750_cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+143,"ysyx_22040750_cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+144,"ysyx_22040750_cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+145,"ysyx_22040750_cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+146,"ysyx_22040750_cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+147,"ysyx_22040750_cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+148,"ysyx_22040750_cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+149,"ysyx_22040750_cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+150,"ysyx_22040750_cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+151,"ysyx_22040750_cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+152,"ysyx_22040750_cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+153,"ysyx_22040750_cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+151,"ysyx_22040750_cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+154,"ysyx_22040750_cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+155,"ysyx_22040750_cpu_top decoder_e LD", false,-1);
        tracep->declBit(c+156,"ysyx_22040750_cpu_top decoder_e LW", false,-1);
        tracep->declBit(c+157,"ysyx_22040750_cpu_top decoder_e LWU", false,-1);
        tracep->declBit(c+158,"ysyx_22040750_cpu_top decoder_e LH", false,-1);
        tracep->declBit(c+159,"ysyx_22040750_cpu_top decoder_e LHU", false,-1);
        tracep->declBit(c+160,"ysyx_22040750_cpu_top decoder_e LB", false,-1);
        tracep->declBit(c+161,"ysyx_22040750_cpu_top decoder_e LBU", false,-1);
        tracep->declBit(c+162,"ysyx_22040750_cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+163,"ysyx_22040750_cpu_top decoder_e SLTI", false,-1);
        tracep->declBit(c+164,"ysyx_22040750_cpu_top decoder_e SLTIU", false,-1);
        tracep->declBit(c+165,"ysyx_22040750_cpu_top decoder_e XORI", false,-1);
        tracep->declBit(c+166,"ysyx_22040750_cpu_top decoder_e ORI", false,-1);
        tracep->declBit(c+167,"ysyx_22040750_cpu_top decoder_e ANDI", false,-1);
        tracep->declBit(c+168,"ysyx_22040750_cpu_top decoder_e SLLI", false,-1);
        tracep->declBit(c+169,"ysyx_22040750_cpu_top decoder_e SRLI", false,-1);
        tracep->declBit(c+170,"ysyx_22040750_cpu_top decoder_e SRAI", false,-1);
        tracep->declBit(c+171,"ysyx_22040750_cpu_top decoder_e ADDIW", false,-1);
        tracep->declBit(c+172,"ysyx_22040750_cpu_top decoder_e SLLIW", false,-1);
        tracep->declBit(c+173,"ysyx_22040750_cpu_top decoder_e SRLIW", false,-1);
        tracep->declBit(c+174,"ysyx_22040750_cpu_top decoder_e SRAIW", false,-1);
        tracep->declBit(c+175,"ysyx_22040750_cpu_top decoder_e ADD", false,-1);
        tracep->declBit(c+176,"ysyx_22040750_cpu_top decoder_e SUB", false,-1);
        tracep->declBit(c+177,"ysyx_22040750_cpu_top decoder_e SLL", false,-1);
        tracep->declBit(c+178,"ysyx_22040750_cpu_top decoder_e SLT", false,-1);
        tracep->declBit(c+179,"ysyx_22040750_cpu_top decoder_e SLTU", false,-1);
        tracep->declBit(c+180,"ysyx_22040750_cpu_top decoder_e XOR", false,-1);
        tracep->declBit(c+181,"ysyx_22040750_cpu_top decoder_e SRL", false,-1);
        tracep->declBit(c+182,"ysyx_22040750_cpu_top decoder_e SRA", false,-1);
        tracep->declBit(c+183,"ysyx_22040750_cpu_top decoder_e OR", false,-1);
        tracep->declBit(c+184,"ysyx_22040750_cpu_top decoder_e AND", false,-1);
        tracep->declBit(c+185,"ysyx_22040750_cpu_top decoder_e MUL", false,-1);
        tracep->declBit(c+186,"ysyx_22040750_cpu_top decoder_e MULH", false,-1);
        tracep->declBit(c+187,"ysyx_22040750_cpu_top decoder_e MULHSU", false,-1);
        tracep->declBit(c+188,"ysyx_22040750_cpu_top decoder_e MULHU", false,-1);
        tracep->declBit(c+189,"ysyx_22040750_cpu_top decoder_e DIV", false,-1);
        tracep->declBit(c+190,"ysyx_22040750_cpu_top decoder_e DIVU", false,-1);
        tracep->declBit(c+191,"ysyx_22040750_cpu_top decoder_e REM", false,-1);
        tracep->declBit(c+192,"ysyx_22040750_cpu_top decoder_e REMU", false,-1);
        tracep->declBit(c+193,"ysyx_22040750_cpu_top decoder_e ADDW", false,-1);
        tracep->declBit(c+194,"ysyx_22040750_cpu_top decoder_e SUBW", false,-1);
        tracep->declBit(c+195,"ysyx_22040750_cpu_top decoder_e SLLW", false,-1);
        tracep->declBit(c+196,"ysyx_22040750_cpu_top decoder_e SRLW", false,-1);
        tracep->declBit(c+197,"ysyx_22040750_cpu_top decoder_e SRAW", false,-1);
        tracep->declBit(c+198,"ysyx_22040750_cpu_top decoder_e MULW", false,-1);
        tracep->declBit(c+199,"ysyx_22040750_cpu_top decoder_e DIVW", false,-1);
        tracep->declBit(c+200,"ysyx_22040750_cpu_top decoder_e DIVUW", false,-1);
        tracep->declBit(c+201,"ysyx_22040750_cpu_top decoder_e REMW", false,-1);
        tracep->declBit(c+202,"ysyx_22040750_cpu_top decoder_e REMUW", false,-1);
        tracep->declBit(c+203,"ysyx_22040750_cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+204,"ysyx_22040750_cpu_top decoder_e SW", false,-1);
        tracep->declBit(c+205,"ysyx_22040750_cpu_top decoder_e SH", false,-1);
        tracep->declBit(c+206,"ysyx_22040750_cpu_top decoder_e SB", false,-1);
        tracep->declBit(c+207,"ysyx_22040750_cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+208,"ysyx_22040750_cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+209,"ysyx_22040750_cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+210,"ysyx_22040750_cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+211,"ysyx_22040750_cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+212,"ysyx_22040750_cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+213,"ysyx_22040750_cpu_top decoder_e ECALL", false,-1);
        tracep->declBit(c+214,"ysyx_22040750_cpu_top decoder_e EBREAK", false,-1);
        tracep->declBit(c+215,"ysyx_22040750_cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBit(c+216,"ysyx_22040750_cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+217,"ysyx_22040750_cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+218,"ysyx_22040750_cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+219,"ysyx_22040750_cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+220,"ysyx_22040750_cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+221,"ysyx_22040750_cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+222,"ysyx_22040750_cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+485,"ysyx_22040750_cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+486,"ysyx_22040750_cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+487,"ysyx_22040750_cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+488,"ysyx_22040750_cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+489,"ysyx_22040750_cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+490,"ysyx_22040750_cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+491,"ysyx_22040750_cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+492,"ysyx_22040750_cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+493,"ysyx_22040750_cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+494,"ysyx_22040750_cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+495,"ysyx_22040750_cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+496,"ysyx_22040750_cpu_top decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+497,"ysyx_22040750_cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+498,"ysyx_22040750_cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBit(c+223,"ysyx_22040750_cpu_top decoder_e add_flag", false,-1);
        tracep->declBit(c+215,"ysyx_22040750_cpu_top decoder_e ld_flag", false,-1);
        tracep->declBit(c+224,"ysyx_22040750_cpu_top decoder_e sub_flag", false,-1);
        tracep->declBit(c+225,"ysyx_22040750_cpu_top decoder_e slt_flag", false,-1);
        tracep->declBit(c+226,"ysyx_22040750_cpu_top decoder_e sltu_flag", false,-1);
        tracep->declBit(c+227,"ysyx_22040750_cpu_top decoder_e xor_flag", false,-1);
        tracep->declBit(c+228,"ysyx_22040750_cpu_top decoder_e or_flag", false,-1);
        tracep->declBit(c+229,"ysyx_22040750_cpu_top decoder_e and_flag", false,-1);
        tracep->declBit(c+230,"ysyx_22040750_cpu_top decoder_e sll_flag", false,-1);
        tracep->declBit(c+231,"ysyx_22040750_cpu_top decoder_e srl_flag", false,-1);
        tracep->declBit(c+232,"ysyx_22040750_cpu_top decoder_e sra_flag", false,-1);
        tracep->declBit(c+233,"ysyx_22040750_cpu_top decoder_e mul_flag", false,-1);
        tracep->declBit(c+234,"ysyx_22040750_cpu_top decoder_e mulh_flag", false,-1);
        tracep->declBit(c+235,"ysyx_22040750_cpu_top decoder_e div_flag", false,-1);
        tracep->declBit(c+236,"ysyx_22040750_cpu_top decoder_e rem_flag", false,-1);
        tracep->declBus(c+499,"ysyx_22040750_cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+500,"ysyx_22040750_cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+501,"ysyx_22040750_cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+237,"ysyx_22040750_cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+238,"ysyx_22040750_cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+152,"ysyx_22040750_cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+502,"ysyx_22040750_cpu_top decoder_e OP2_RS2", false,-1, 1,0);
        tracep->declBus(c+503,"ysyx_22040750_cpu_top decoder_e OP2_IMM", false,-1, 1,0);
        tracep->declBit(c+148,"ysyx_22040750_cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+239,"ysyx_22040750_cpu_top decoder_e imm_flag", false,-1);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+44,"ysyx_22040750_cpu_top ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+454,"ysyx_22040750_cpu_top ID_EX_reg_e I_ID_EX_allowout", false,-1);
        tracep->declBit(c+452,"ysyx_22040750_cpu_top ID_EX_reg_e O_ID_EX_allowin", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040750_cpu_top ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040750_cpu_top ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBit(c+37,"ysyx_22040750_cpu_top ID_EX_reg_e I_reg_wen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top ID_EX_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+35,"ysyx_22040750_cpu_top ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22040750_cpu_top ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+31,"ysyx_22040750_cpu_top ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040750_cpu_top ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22040750_cpu_top ID_EX_reg_e I_op2_sel", false,-1, 1,0);
        tracep->declBus(c+40,"ysyx_22040750_cpu_top ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+34,"ysyx_22040750_cpu_top ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+39,"ysyx_22040750_cpu_top ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declQuad(c+48,"ysyx_22040750_cpu_top ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040750_cpu_top ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040750_cpu_top ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+65,"ysyx_22040750_cpu_top ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+57,"ysyx_22040750_cpu_top ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+58,"ysyx_22040750_cpu_top ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+59,"ysyx_22040750_cpu_top ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+60,"ysyx_22040750_cpu_top ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+61,"ysyx_22040750_cpu_top ID_EX_reg_e O_op2_sel", false,-1, 1,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22040750_cpu_top ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_reg_e O_ID_EX_input_valid", false,-1);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top ID_EX_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+69,"ysyx_22040750_cpu_top ID_EX_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+46,"ysyx_22040750_cpu_top ID_EX_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+70,"ysyx_22040750_cpu_top ID_EX_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_reg_e input_valid", false,-1);
        tracep->declBit(c+479,"ysyx_22040750_cpu_top ID_EX_reg_e output_valid", false,-1);
        tracep->declBus(c+480,"ysyx_22040750_cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+504,"ysyx_22040750_cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+240,"ysyx_22040750_cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+60,"ysyx_22040750_cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+246+i*2,"ysyx_22040750_cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+505,"ysyx_22040750_cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+480,"ysyx_22040750_cpu_top alu_op2_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+481,"ysyx_22040750_cpu_top alu_op2_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+252,"ysyx_22040750_cpu_top alu_op2_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+61,"ysyx_22040750_cpu_top alu_op2_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+17,"ysyx_22040750_cpu_top alu_op2_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+256+i*2,"ysyx_22040750_cpu_top alu_op2_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+482,"ysyx_22040750_cpu_top alu_op2_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040750_cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top alu_e I_word_op_mask", false,-1);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+260,"ysyx_22040750_cpu_top alu_e op_add", false,-1);
        tracep->declBit(c+261,"ysyx_22040750_cpu_top alu_e op_sub", false,-1);
        tracep->declBit(c+262,"ysyx_22040750_cpu_top alu_e op_slt", false,-1);
        tracep->declBit(c+263,"ysyx_22040750_cpu_top alu_e op_sltu", false,-1);
        tracep->declBit(c+264,"ysyx_22040750_cpu_top alu_e op_xor", false,-1);
        tracep->declBit(c+265,"ysyx_22040750_cpu_top alu_e op_or", false,-1);
        tracep->declBit(c+266,"ysyx_22040750_cpu_top alu_e op_and", false,-1);
        tracep->declBit(c+267,"ysyx_22040750_cpu_top alu_e op_sll", false,-1);
        tracep->declBit(c+268,"ysyx_22040750_cpu_top alu_e op_srl", false,-1);
        tracep->declBit(c+269,"ysyx_22040750_cpu_top alu_e op_sra", false,-1);
        tracep->declBit(c+270,"ysyx_22040750_cpu_top alu_e op_mul", false,-1);
        tracep->declBit(c+271,"ysyx_22040750_cpu_top alu_e op_mulh", false,-1);
        tracep->declBit(c+272,"ysyx_22040750_cpu_top alu_e op_div", false,-1);
        tracep->declBit(c+273,"ysyx_22040750_cpu_top alu_e op_rem", false,-1);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+274,"ysyx_22040750_cpu_top alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+276,"ysyx_22040750_cpu_top alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22040750_cpu_top alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+280,"ysyx_22040750_cpu_top alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+282,"ysyx_22040750_cpu_top alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+284,"ysyx_22040750_cpu_top alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+286,"ysyx_22040750_cpu_top alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+288,"ysyx_22040750_cpu_top alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+290,"ysyx_22040750_cpu_top alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+292,"ysyx_22040750_cpu_top alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+294,"ysyx_22040750_cpu_top alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+296,"ysyx_22040750_cpu_top alu_e rem_result", false,-1, 63,0);
        tracep->declArray(c+298,"ysyx_22040750_cpu_top alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+301,"ysyx_22040750_cpu_top alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+304,"ysyx_22040750_cpu_top alu_e sign_bit1", false,-1);
        tracep->declBit(c+305,"ysyx_22040750_cpu_top alu_e sign_bit2", false,-1);
        tracep->declBit(c+306,"ysyx_22040750_cpu_top alu_e sext1", false,-1);
        tracep->declBit(c+307,"ysyx_22040750_cpu_top alu_e sext2", false,-1);
        tracep->declBit(c+308,"ysyx_22040750_cpu_top alu_e div_sink", false,-1);
        tracep->declBit(c+309,"ysyx_22040750_cpu_top alu_e rem_sink", false,-1);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+310,"ysyx_22040750_cpu_top alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e result", false,-1, 63,0);
        tracep->declQuad(c+312,"ysyx_22040750_cpu_top alu_e cin", false,-1, 63,0);
        tracep->declBit(c+314,"ysyx_22040750_cpu_top alu_e cout", false,-1);
        tracep->declQuad(c+315,"ysyx_22040750_cpu_top alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+304,"ysyx_22040750_cpu_top alu_e shift_sign", false,-1);
        tracep->declQuad(c+317,"ysyx_22040750_cpu_top alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+319,"ysyx_22040750_cpu_top alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+320,"ysyx_22040750_cpu_top alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+286,"ysyx_22040750_cpu_top alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+322,"ysyx_22040750_cpu_top alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+323,"ysyx_22040750_cpu_top alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+325,"ysyx_22040750_cpu_top alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+327,"ysyx_22040750_cpu_top alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+329,"ysyx_22040750_cpu_top alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+331,"ysyx_22040750_cpu_top alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+333,"ysyx_22040750_cpu_top alu_e word_sext", false,-1);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+100,"ysyx_22040750_cpu_top EX_MEM_reg_e I_EX_MEM_allowout", false,-1);
        tracep->declBit(c+454,"ysyx_22040750_cpu_top EX_MEM_reg_e O_EX_MEM_allowin", false,-1);
        tracep->declBit(c+453,"ysyx_22040750_cpu_top EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+58,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+57,"ysyx_22040750_cpu_top EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top EX_MEM_reg_e I_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22040750_cpu_top EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declQuad(c+50,"ysyx_22040750_cpu_top EX_MEM_reg_e I_pc", false,-1, 63,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+59,"ysyx_22040750_cpu_top EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBit(c+471,"ysyx_22040750_cpu_top EX_MEM_reg_e I_mem_data_valid", false,-1);
        tracep->declBus(c+71,"ysyx_22040750_cpu_top EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+72,"ysyx_22040750_cpu_top EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+73,"ysyx_22040750_cpu_top EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040750_cpu_top EX_MEM_reg_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+467,"ysyx_22040750_cpu_top EX_MEM_reg_e O_mem_rd_en", false,-1);
        tracep->declBit(c+77,"ysyx_22040750_cpu_top EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declQuad(c+78,"ysyx_22040750_cpu_top EX_MEM_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040750_cpu_top EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040750_cpu_top EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+82,"ysyx_22040750_cpu_top EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+87,"ysyx_22040750_cpu_top EX_MEM_reg_e O_EX_MEM_input_valid", false,-1);
        tracep->declBus(c+69,"ysyx_22040750_cpu_top EX_MEM_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_22040750_cpu_top EX_MEM_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+70,"ysyx_22040750_cpu_top EX_MEM_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+86,"ysyx_22040750_cpu_top EX_MEM_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+334,"ysyx_22040750_cpu_top EX_MEM_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+87,"ysyx_22040750_cpu_top EX_MEM_reg_e input_valid", false,-1);
        tracep->declBit(c+456,"ysyx_22040750_cpu_top EX_MEM_reg_e output_valid", false,-1);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_22040750_cpu_top mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+472,"ysyx_22040750_cpu_top mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+453,"ysyx_22040750_cpu_top MEM_WB_reg_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+100,"ysyx_22040750_cpu_top MEM_WB_reg_e O_MEM_WB_allowin", false,-1);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declQuad(c+78,"ysyx_22040750_cpu_top MEM_WB_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+469,"ysyx_22040750_cpu_top MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBus(c+71,"ysyx_22040750_cpu_top MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+83,"ysyx_22040750_cpu_top MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+73,"ysyx_22040750_cpu_top MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040750_cpu_top MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040750_cpu_top MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+82,"ysyx_22040750_cpu_top MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declQuad(c+88,"ysyx_22040750_cpu_top MEM_WB_reg_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040750_cpu_top MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040750_cpu_top MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+99,"ysyx_22040750_cpu_top MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+94,"ysyx_22040750_cpu_top MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22040750_cpu_top MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+97,"ysyx_22040750_cpu_top MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22040750_cpu_top MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top MEM_WB_reg_e O_MEM_WB_input_valid", false,-1);
        tracep->declBus(c+85,"ysyx_22040750_cpu_top MEM_WB_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+101,"ysyx_22040750_cpu_top MEM_WB_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+86,"ysyx_22040750_cpu_top MEM_WB_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+102,"ysyx_22040750_cpu_top MEM_WB_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top MEM_WB_reg_e input_valid", false,-1);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top MEM_WB_reg_e output_valid", false,-1);
        tracep->declQuad(c+91,"ysyx_22040750_cpu_top mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22040750_cpu_top mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+99,"ysyx_22040750_cpu_top mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+21,"ysyx_22040750_cpu_top mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+335,"ysyx_22040750_cpu_top mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+336,"ysyx_22040750_cpu_top mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+337,"ysyx_22040750_cpu_top mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+338,"ysyx_22040750_cpu_top mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+480,"ysyx_22040750_cpu_top regin_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+504,"ysyx_22040750_cpu_top regin_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+340,"ysyx_22040750_cpu_top regin_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+98,"ysyx_22040750_cpu_top regin_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top regin_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+346+i*2,"ysyx_22040750_cpu_top regin_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+505,"ysyx_22040750_cpu_top regin_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+457,"ysyx_22040750_cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+458,"ysyx_22040750_cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+352,"ysyx_22040750_cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+97,"ysyx_22040750_cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+11,"ysyx_22040750_cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+13,"ysyx_22040750_cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+353+i*2,"ysyx_22040750_cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+417+i*1,"ysyx_22040750_cpu_top gpr_e wen", true,(i+0));}}
    }
}

void Vysyx_22040750_cpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040750_cpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040750_cpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040750_cpu_top___024root__traceRegister(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040750_cpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040750_cpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040750_cpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040750_cpu_top___024root__traceFullSub0(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040750_cpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040750_cpu_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040750_cpu_top___024root*>(voidSelf);
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040750_cpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040750_cpu_top___024root__traceFullSub0(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp123;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp142;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22040750_cpu_top__DOT__current_pc),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc),64);
        tracep->fullQData(oldp+5,((4ULL + vlSelf->ysyx_22040750_cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22040750_cpu_top__DOT__imm),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22040750_cpu_top__DOT__wr_data),64);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                                   [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                              >> 0xfU))]),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                                   [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                              >> 0x14U))]),64);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2),64);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_in),64);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__result),64);
        tracep->fullCData(oldp+27,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+29,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel),4);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_sel),3);
        tracep->fullCData(oldp+32,((((1U & (- (IData)(
                                                      (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                                        | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                       | (0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                                     | (2U & (- (IData)(
                                                        (((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                                    | (4U & (- (IData)(
                                                       (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))),3);
        tracep->fullCData(oldp+33,(((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                    | (2U & (- (IData)(
                                                       (((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                        | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))))))),2);
        tracep->fullSData(oldp+34,(((((((((((((((1U 
                                                 & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                                                | (2U 
                                                   & (- (IData)(
                                                                ((IData)(
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
                                               | (4U 
                                                  & (- (IData)(
                                                               ((IData)(
                                                                        (0x2013U 
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
                                              | (8U 
                                                 & (- (IData)(
                                                              ((IData)(
                                                                       (0x3013U 
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
                                             | (0x10U 
                                                & (- (IData)(
                                                             ((IData)(
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
                                            | (0x20U 
                                               & (- (IData)(
                                                            ((IData)(
                                                                     (0x6013U 
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
                                           | (0x40U 
                                              & (- (IData)(
                                                           ((IData)(
                                                                    (0x7013U 
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
                                          | (0x80U 
                                             & (- (IData)(
                                                          ((((IData)(
                                                                     ((0x1013U 
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
                                                           | (IData)(
                                                                     ((0x103bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                          >> 0x19U))))))))) 
                                         | (0x100U 
                                            & (- (IData)(
                                                         ((((IData)(
                                                                    ((0x5013U 
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
                                                          | (IData)(
                                                                    ((0x503bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x19U))))))))) 
                                        | (0x200U & 
                                           (- (IData)(
                                                      ((((IData)(
                                                                 ((0x5013U 
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
                                                        | (IData)(
                                                                  ((0x501bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                       >> 0x19U))))) 
                                                       | (IData)(
                                                                 ((0x503bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                  & (0x20U 
                                                                     == 
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                      >> 0x19U))))))))) 
                                       | (0x400U & 
                                          (- (IData)(
                                                     ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)))))) 
                                      | (0x800U & (- (IData)(
                                                             (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                                              | (IData)(
                                                                        ((0x3033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                         & (1U 
                                                                            == 
                                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))))))) 
                                     | (0x1000U & (- (IData)(
                                                             ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
                                                                | (IData)(
                                                                          ((0x5033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                           & (1U 
                                                                              == 
                                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                               >> 0x19U))))) 
                                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                                              | (IData)(
                                                                        ((0x503bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                         & (1U 
                                                                            == 
                                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))))))) 
                                    | (0x2000U & (- (IData)(
                                                            ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
                                                               | (IData)(
                                                                         ((0x7033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                          & (1U 
                                                                             == 
                                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U))))) 
                                                              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)) 
                                                             | (IData)(
                                                                       ((0x703bU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                        & (1U 
                                                                           == 
                                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x19U)))))))))),15);
        tracep->fullCData(oldp+35,((0xffU & ((((- (IData)((IData)(
                                                                  (0x3023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                               | (0xfU 
                                                  & (- (IData)((IData)(
                                                                       (0x2023U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                                             | (1U 
                                                & (- (IData)((IData)(
                                                                     (0x23U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))))),8);
        tracep->fullSData(oldp+36,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen));
        tracep->fullBit(oldp+38,((0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+39,(((0x1bU == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext),2);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc),64);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst),32);
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid));
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall));
        tracep->fullBit(oldp+46,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble));
        tracep->fullBit(oldp+47,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2),64);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+58,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel),2);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+63,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall),2);
        tracep->fullIData(oldp+69,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst),32);
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble));
        tracep->fullSData(oldp+71,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr),64);
        tracep->fullBit(oldp+77,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen));
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc),64);
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+82,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+83,((7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))),3);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall),2);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst),32);
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble));
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc),64);
        tracep->fullBit(oldp+90,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+93,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out),64);
        tracep->fullBit(oldp+96,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+97,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt),3);
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin));
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst),32);
        tracep->fullBit(oldp+102,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble));
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall),2);
        tracep->fullCData(oldp+104,(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en),2);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data),64);
        tracep->fullQData(oldp+109,(((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                      ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)),64);
        tracep->fullQData(oldp+111,((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                                     + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc))),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc),64);
        tracep->fullBit(oldp+115,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)))));
        tracep->fullWData(oldp+116,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+120,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
        tracep->fullIData(oldp+127,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache),32);
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
        tracep->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)))));
        tracep->fullBit(oldp+130,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+131,((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                  >> 0xaU)))));
        tracep->fullBit(oldp+132,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                         >> 1U))));
        tracep->fullCData(oldp+133,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
        tracep->fullCData(oldp+134,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
        tracep->fullCData(oldp+135,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
        tracep->fullBit(oldp+136,((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                    & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                       >> 1U)) | ((0U 
                                                   != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                                                  & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                                     >> 1U)))));
        tracep->fullBit(oldp+137,(((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                   & (0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU))))));
        tracep->fullBit(oldp+138,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
        tracep->fullCData(oldp+139,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+140,((0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+141,((7U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+142,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+143,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+144,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+145,((0xfffff000U & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+148,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+149,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+150,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+151,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+152,((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+153,((0x17U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+154,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+156,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+157,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+160,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+161,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+162,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+163,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+164,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+165,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+166,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+167,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+168,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+169,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+170,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+171,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+172,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+173,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+174,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+175,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+176,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+177,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+178,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+179,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+180,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+181,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+182,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+183,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+184,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+185,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+186,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+187,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+188,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+189,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+190,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+191,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+192,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+193,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+194,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+195,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+196,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+197,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+199,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+200,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+201,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+202,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+203,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+204,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+205,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+206,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+207,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+208,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+209,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+210,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+211,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+212,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+213,((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+214,((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+215,((3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+216,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+217,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+219,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+221,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+223,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+224,(((IData)(((0x33U 
                                             == (0x707fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                            & (0x20U 
                                               == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                   | (IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+225,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+226,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+227,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+228,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+229,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+230,(((((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x1033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x101bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+231,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+232,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+233,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+234,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+235,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
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
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+236,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
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
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+237,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+238,((((0x63U == (0x7fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+239,((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullWData(oldp+240,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+252,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+260,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+261,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+262,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+263,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+264,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+265,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+266,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+267,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+268,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+269,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+270,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+271,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+272,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+273,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp113, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp114, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp115, __Vtemp113, __Vtemp114);
        VL_EXTEND_WQ(65,64, __Vtemp116, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp117, __Vtemp115, __Vtemp116);
        tracep->fullQData(oldp+276,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp117[2U])))))),64);
        tracep->fullQData(oldp+278,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                     ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+280,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+282,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+284,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+288,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                                              ? (IData)(
                                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                                         >> 0x3fU))))))) 
                                      & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (~ (0xffffffffULL 
                                                >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt)))
                                          : (~ (0xffffffffffffffffULL 
                                                >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt))))) 
                                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)),64);
        VL_EXTENDS_WW(128,65, __Vtemp119, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp120, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp121, __Vtemp119, __Vtemp120);
        tracep->fullQData(oldp+290,((((QData)((IData)(
                                                      __Vtemp121[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp121[0U])))),64);
        VL_EXTENDS_WW(128,65, __Vtemp122, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp123, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp124, __Vtemp122, __Vtemp123);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      __Vtemp124[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp124[2U])))),64);
        VL_DIVS_WWW(65, __Vtemp126, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      __Vtemp126[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp126[0U])))),64);
        VL_MODDIVS_WWW(65, __Vtemp129, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      __Vtemp129[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp129[0U])))),64);
        tracep->fullWData(oldp+298,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+301,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+304,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+305,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+306,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1));
        tracep->fullBit(oldp+307,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2));
        VL_DIVS_WWW(65, __Vtemp132, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+308,((1U & __Vtemp132[2U])));
        VL_MODDIVS_WWW(65, __Vtemp135, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+309,((1U & __Vtemp135[2U])));
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp138, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp139, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp140, __Vtemp138, __Vtemp139);
        VL_EXTEND_WQ(65,64, __Vtemp141, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp142, __Vtemp140, __Vtemp141);
        tracep->fullBit(oldp+314,((1U & __Vtemp142[2U])));
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+319,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+320,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+322,(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+323,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))))
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+331,((((QData)((IData)(
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
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result)))),64);
        tracep->fullBit(oldp+333,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullBit(oldp+334,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
        tracep->fullBit(oldp+335,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+336,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                          >> 8U) & 
                                         ((0xfU == 
                                           (0xffU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                           ? (IData)(
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                      >> 0x1fU))
                                           : ((3U == 
                                               (0xffU 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                               ? (IData)(
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                          >> 0xfU))
                                               : ((1U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb))) 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                             >> 7U)))))))));
        tracep->fullCData(oldp+337,((0xffU & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+340,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+352,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen));
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+371,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+417,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+418,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+419,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+420,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+421,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+422,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+423,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+424,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+425,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+426,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+427,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+428,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+429,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+430,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+431,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+432,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+433,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+434,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+435,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+436,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+437,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+438,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+439,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+440,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+441,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+442,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+443,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+444,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+445,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+446,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+447,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+448,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullIData(oldp+449,(vlSelf->ysyx_22040750_cpu_top__DOT__current_inst),32);
        tracep->fullBit(oldp+450,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid));
        tracep->fullBit(oldp+451,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin));
        tracep->fullBit(oldp+452,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin));
        tracep->fullBit(oldp+453,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
        tracep->fullBit(oldp+454,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin));
        tracep->fullBit(oldp+455,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go));
        tracep->fullBit(oldp+456,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        tracep->fullBit(oldp+457,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+458,(vlSelf->I_rst));
        tracep->fullIData(oldp+459,(vlSelf->I_inst),32);
        tracep->fullBit(oldp+460,(vlSelf->I_inst_valid));
        tracep->fullBit(oldp+461,(vlSelf->I_inst_addr_ready));
        tracep->fullQData(oldp+462,(vlSelf->O_pc),64);
        tracep->fullBit(oldp+464,(vlSelf->O_pc_valid));
        tracep->fullQData(oldp+465,(vlSelf->O_mem_addr),64);
        tracep->fullBit(oldp+467,(vlSelf->O_mem_rd_en));
        tracep->fullBit(oldp+468,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+469,(vlSelf->I_mem_rd_data),64);
        tracep->fullBit(oldp+471,(vlSelf->I_mem_rd_data_valid));
        tracep->fullQData(oldp+472,(vlSelf->O_mem_wr_data),64);
        tracep->fullCData(oldp+474,(vlSelf->O_mem_wr_strb),8);
        tracep->fullBit(oldp+475,((1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))))));
        tracep->fullCData(oldp+476,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_dnpc_sel),3);
        tracep->fullQData(oldp+477,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_data),64);
        tracep->fullBit(oldp+479,(1U));
        tracep->fullIData(oldp+480,(0x40U),32);
        tracep->fullIData(oldp+481,(2U),32);
        tracep->fullIData(oldp+482,(2U),32);
        tracep->fullQData(oldp+483,(0x7ffffffcULL),64);
        tracep->fullSData(oldp+485,(1U),15);
        tracep->fullSData(oldp+486,(2U),15);
        tracep->fullSData(oldp+487,(4U),15);
        tracep->fullSData(oldp+488,(8U),15);
        tracep->fullSData(oldp+489,(0x10U),15);
        tracep->fullSData(oldp+490,(0x20U),15);
        tracep->fullSData(oldp+491,(0x40U),15);
        tracep->fullSData(oldp+492,(0x80U),15);
        tracep->fullSData(oldp+493,(0x100U),15);
        tracep->fullSData(oldp+494,(0x200U),15);
        tracep->fullSData(oldp+495,(0x400U),15);
        tracep->fullSData(oldp+496,(0x800U),15);
        tracep->fullSData(oldp+497,(0x1000U),15);
        tracep->fullSData(oldp+498,(0x2000U),15);
        tracep->fullCData(oldp+499,(1U),3);
        tracep->fullCData(oldp+500,(2U),3);
        tracep->fullCData(oldp+501,(4U),3);
        tracep->fullCData(oldp+502,(1U),2);
        tracep->fullCData(oldp+503,(2U),2);
        tracep->fullIData(oldp+504,(3U),32);
        tracep->fullIData(oldp+505,(3U),32);
    }
}
