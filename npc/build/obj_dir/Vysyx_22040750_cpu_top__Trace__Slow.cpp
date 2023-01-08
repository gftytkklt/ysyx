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
        tracep->declBit(c+610,"I_sys_clk", false,-1);
        tracep->declBit(c+611,"I_rst", false,-1);
        tracep->declBus(c+612,"I_inst", false,-1, 31,0);
        tracep->declBit(c+613,"I_inst_valid", false,-1);
        tracep->declBit(c+614,"I_inst_addr_ready", false,-1);
        tracep->declQuad(c+615,"O_pc", false,-1, 63,0);
        tracep->declBit(c+617,"O_pc_valid", false,-1);
        tracep->declQuad(c+618,"O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+620,"O_mem_rd_en", false,-1);
        tracep->declBit(c+621,"O_mem_wen", false,-1);
        tracep->declQuad(c+622,"I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+624,"I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+625,"O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+627,"O_mem_wr_strb", false,-1, 7,0);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top I_rst", false,-1);
        tracep->declBus(c+612,"ysyx_22040750_cpu_top I_inst", false,-1, 31,0);
        tracep->declBit(c+613,"ysyx_22040750_cpu_top I_inst_valid", false,-1);
        tracep->declBit(c+614,"ysyx_22040750_cpu_top I_inst_addr_ready", false,-1);
        tracep->declQuad(c+615,"ysyx_22040750_cpu_top O_pc", false,-1, 63,0);
        tracep->declBit(c+617,"ysyx_22040750_cpu_top O_pc_valid", false,-1);
        tracep->declQuad(c+618,"ysyx_22040750_cpu_top O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+620,"ysyx_22040750_cpu_top O_mem_rd_en", false,-1);
        tracep->declBit(c+621,"ysyx_22040750_cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+622,"ysyx_22040750_cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+624,"ysyx_22040750_cpu_top I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+625,"ysyx_22040750_cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+627,"ysyx_22040750_cpu_top O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+1,"ysyx_22040750_cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"ysyx_22040750_cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22040750_cpu_top snpc", false,-1, 63,0);
        tracep->declBus(c+602,"ysyx_22040750_cpu_top current_inst", false,-1, 31,0);
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
        tracep->declBus(c+30,"ysyx_22040750_cpu_top dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22040750_cpu_top regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040750_cpu_top opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22040750_cpu_top opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+34,"ysyx_22040750_cpu_top alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+35,"ysyx_22040750_cpu_top mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22040750_cpu_top mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+37,"ysyx_22040750_cpu_top reg_wen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top mem_wen", false,-1);
        tracep->declBit(c+39,"ysyx_22040750_cpu_top word_op_mask", false,-1);
        tracep->declBus(c+40,"ysyx_22040750_cpu_top alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+603,"ysyx_22040750_cpu_top IF_valid", false,-1);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top IF_ID_pc", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+604,"ysyx_22040750_cpu_top IF_ID_allowin", false,-1);
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
        tracep->declBus(c+59,"ysyx_22040750_cpu_top ID_EX_op2_sel", false,-1, 2,0);
        tracep->declBus(c+60,"ysyx_22040750_cpu_top ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+61,"ysyx_22040750_cpu_top ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top ID_EX_reg_wen", false,-1);
        tracep->declBit(c+65,"ysyx_22040750_cpu_top ID_EX_mem_wen", false,-1);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_valid", false,-1);
        tracep->declBit(c+605,"ysyx_22040750_cpu_top ID_EX_allowin", false,-1);
        tracep->declBus(c+68,"ysyx_22040750_cpu_top ID_EX_stall", false,-1, 1,0);
        tracep->declBus(c+69,"ysyx_22040750_cpu_top ID_EX_inst", false,-1, 31,0);
        tracep->declBit(c+70,"ysyx_22040750_cpu_top ID_EX_bubble", false,-1);
        tracep->declBit(c+71,"ysyx_22040750_cpu_top ID_EX_input_valid", false,-1);
        tracep->declBit(c+72,"ysyx_22040750_cpu_top ID_EX_alu_multicycle", false,-1);
        tracep->declBit(c+73,"ysyx_22040750_cpu_top alu_out_valid", false,-1);
        tracep->declBit(c+606,"ysyx_22040750_cpu_top EX_MEM_valid", false,-1);
        tracep->declBus(c+74,"ysyx_22040750_cpu_top EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+75,"ysyx_22040750_cpu_top EX_MEM_wstrb", false,-1, 7,0);
        tracep->declQuad(c+76,"ysyx_22040750_cpu_top EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040750_cpu_top EX_MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top EX_MEM_rs2", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040750_cpu_top EX_MEM_mem_wen", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750_cpu_top EX_MEM_pc", false,-1, 63,0);
        tracep->declQuad(c+629,"ysyx_22040750_cpu_top EX_MEM_mem_data", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22040750_cpu_top EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_22040750_cpu_top EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+86,"ysyx_22040750_cpu_top EX_MEM_shamt", false,-1, 2,0);
        tracep->declBit(c+607,"ysyx_22040750_cpu_top EX_MEM_allowin", false,-1);
        tracep->declBus(c+87,"ysyx_22040750_cpu_top EX_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+88,"ysyx_22040750_cpu_top EX_MEM_inst", false,-1, 31,0);
        tracep->declBit(c+89,"ysyx_22040750_cpu_top EX_MEM_bubble", false,-1);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top EX_MEM_input_valid", false,-1);
        tracep->declQuad(c+91,"ysyx_22040750_cpu_top MEM_WB_pc", false,-1, 63,0);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top MEM_WB_valid", false,-1);
        tracep->declQuad(c+94,"ysyx_22040750_cpu_top MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040750_cpu_top MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+97,"ysyx_22040750_cpu_top MEM_WB_alu_out", false,-1, 63,0);
        tracep->declBit(c+99,"ysyx_22040750_cpu_top MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+100,"ysyx_22040750_cpu_top MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+101,"ysyx_22040750_cpu_top MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+102,"ysyx_22040750_cpu_top MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+103,"ysyx_22040750_cpu_top MEM_WB_allowin", false,-1);
        tracep->declBus(c+104,"ysyx_22040750_cpu_top MEM_WB_inst", false,-1, 31,0);
        tracep->declBit(c+105,"ysyx_22040750_cpu_top MEM_WB_bubble", false,-1);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top MEM_WB_input_valid", false,-1);
        tracep->declBus(c+106,"ysyx_22040750_cpu_top MEM_WB_stall", false,-1, 1,0);
        tracep->declBus(c+107,"ysyx_22040750_cpu_top stall_en", false,-1, 1,0);
        tracep->declBit(c+631,"ysyx_22040750_cpu_top inst_ready", false,-1);
        tracep->declQuad(c+108,"ysyx_22040750_cpu_top rs1_forward_data", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22040750_cpu_top rs2_forward_data", false,-1, 63,0);
        tracep->declQuad(c+108,"ysyx_22040750_cpu_top npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22040750_cpu_top npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+632,"ysyx_22040750_cpu_top npc_e I_intr_pc", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22040750_cpu_top npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+30,"ysyx_22040750_cpu_top npc_e I_dnpc_sel", false,-1, 4,0);
        tracep->declQuad(c+3,"ysyx_22040750_cpu_top npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+112,"ysyx_22040750_cpu_top npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+114,"ysyx_22040750_cpu_top npc_e dnpc_sum", false,-1, 63,0);
        tracep->declQuad(c+116,"ysyx_22040750_cpu_top npc_e dnpc", false,-1, 63,0);
        tracep->declBit(c+118,"ysyx_22040750_cpu_top npc_e dnpc_sel", false,-1);
        tracep->declBit(c+119,"ysyx_22040750_cpu_top npc_e intr_sel", false,-1);
        tracep->declBus(c+634,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+635,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+120,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+126,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+116,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+127+i*2,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+636,"ysyx_22040750_cpu_top npc_e nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+3,"ysyx_22040750_cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declBus(c+612,"ysyx_22040750_cpu_top pc_e I_inst", false,-1, 31,0);
        tracep->declBit(c+613,"ysyx_22040750_cpu_top pc_e I_inst_valid", false,-1);
        tracep->declBit(c+631,"ysyx_22040750_cpu_top pc_e I_inst_ready", false,-1);
        tracep->declBit(c+604,"ysyx_22040750_cpu_top pc_e I_IF_ID_allowin", false,-1);
        tracep->declBit(c+603,"ysyx_22040750_cpu_top pc_e O_IF_valid", false,-1);
        tracep->declQuad(c+1,"ysyx_22040750_cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declBus(c+602,"ysyx_22040750_cpu_top pc_e O_inst", false,-1, 31,0);
        tracep->declBit(c+617,"ysyx_22040750_cpu_top pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+637,"ysyx_22040750_cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+608,"ysyx_22040750_cpu_top pc_e IF_ready_go", false,-1);
        tracep->declBit(c+628,"ysyx_22040750_cpu_top pc_e IF_allow_in", false,-1);
        tracep->declBit(c+617,"ysyx_22040750_cpu_top pc_e IF_handshake", false,-1);
        tracep->declBit(c+133,"ysyx_22040750_cpu_top pc_e IF_valid", false,-1);
        tracep->declBit(c+134,"ysyx_22040750_cpu_top pc_e IF_en", false,-1);
        tracep->declBus(c+135,"ysyx_22040750_cpu_top pc_e inst_cache", false,-1, 31,0);
        tracep->declBit(c+136,"ysyx_22040750_cpu_top pc_e cache_valid", false,-1);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+1,"ysyx_22040750_cpu_top IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+602,"ysyx_22040750_cpu_top IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+603,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declBit(c+605,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_allowout", false,-1);
        tracep->declBit(c+45,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_stall", false,-1);
        tracep->declBit(c+137,"ysyx_22040750_cpu_top IF_ID_reg_e I_IF_ID_jmp", false,-1);
        tracep->declBit(c+604,"ysyx_22040750_cpu_top IF_ID_reg_e O_IF_ID_allowin", false,-1);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+46,"ysyx_22040750_cpu_top IF_ID_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top IF_ID_reg_e O_IF_ID_input_valid", false,-1);
        tracep->declBit(c+44,"ysyx_22040750_cpu_top IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top IF_ID_reg_e input_valid", false,-1);
        tracep->declBit(c+138,"ysyx_22040750_cpu_top IF_ID_reg_e output_valid", false,-1);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top stall_unit_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top stall_unit_e I_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+47,"ysyx_22040750_cpu_top stall_unit_e I_ID_valid", false,-1);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top stall_unit_e I_EX_rd_addr", false,-1, 4,0);
        tracep->declBit(c+71,"ysyx_22040750_cpu_top stall_unit_e I_EX_valid", false,-1);
        tracep->declBit(c+139,"ysyx_22040750_cpu_top stall_unit_e I_EX_mem_rd_en", false,-1);
        tracep->declBit(c+140,"ysyx_22040750_cpu_top stall_unit_e I_EX_alu_multcycle", false,-1);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top stall_unit_e I_MEM_rd_addr", false,-1, 4,0);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top stall_unit_e I_MEM_valid", false,-1);
        tracep->declBit(c+141,"ysyx_22040750_cpu_top stall_unit_e I_MEM_mem_rd_en", false,-1);
        tracep->declBus(c+100,"ysyx_22040750_cpu_top stall_unit_e I_WB_rd_addr", false,-1, 4,0);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top stall_unit_e I_WB_valid", false,-1);
        tracep->declBus(c+107,"ysyx_22040750_cpu_top stall_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBit(c+45,"ysyx_22040750_cpu_top stall_unit_e O_ID_stall", false,-1);
        tracep->declBus(c+68,"ysyx_22040750_cpu_top stall_unit_e O_EX_stall", false,-1, 1,0);
        tracep->declBus(c+87,"ysyx_22040750_cpu_top stall_unit_e O_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+106,"ysyx_22040750_cpu_top stall_unit_e O_WB_stall", false,-1, 1,0);
        tracep->declBus(c+142,"ysyx_22040750_cpu_top stall_unit_e EX_stall", false,-1, 1,0);
        tracep->declBus(c+143,"ysyx_22040750_cpu_top stall_unit_e MEM_stall", false,-1, 1,0);
        tracep->declBus(c+144,"ysyx_22040750_cpu_top stall_unit_e WB_stall", false,-1, 1,0);
        tracep->declBit(c+145,"ysyx_22040750_cpu_top stall_unit_e mem_rd", false,-1);
        tracep->declBit(c+146,"ysyx_22040750_cpu_top stall_unit_e multicycle_alu_op", false,-1);
        tracep->declQuad(c+11,"ysyx_22040750_cpu_top forward_unit_e I_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22040750_cpu_top forward_unit_e I_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top forward_unit_e I_EX_data", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040750_cpu_top forward_unit_e I_MEM_data", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top forward_unit_e I_WB_data", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22040750_cpu_top forward_unit_e I_stall_en", false,-1, 1,0);
        tracep->declBus(c+68,"ysyx_22040750_cpu_top forward_unit_e I_EX_stall", false,-1, 1,0);
        tracep->declBus(c+87,"ysyx_22040750_cpu_top forward_unit_e I_MEM_stall", false,-1, 1,0);
        tracep->declBus(c+106,"ysyx_22040750_cpu_top forward_unit_e I_WB_stall", false,-1, 1,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top forward_unit_e I_EX_reg_wen", false,-1);
        tracep->declBit(c+83,"ysyx_22040750_cpu_top forward_unit_e I_MEM_reg_wen", false,-1);
        tracep->declBit(c+147,"ysyx_22040750_cpu_top forward_unit_e I_WB_reg_wen", false,-1);
        tracep->declQuad(c+108,"ysyx_22040750_cpu_top forward_unit_e O_ID_EX_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22040750_cpu_top forward_unit_e O_ID_EX_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+639,"ysyx_22040750_cpu_top csr_foward_e I_csr_ID", false,-1, 63,0);
        tracep->declQuad(c+641,"ysyx_22040750_cpu_top csr_foward_e I_csr_EX", false,-1, 63,0);
        tracep->declQuad(c+643,"ysyx_22040750_cpu_top csr_foward_e I_csr_MEM", false,-1, 63,0);
        tracep->declQuad(c+645,"ysyx_22040750_cpu_top csr_foward_e I_csr_WB", false,-1, 63,0);
        tracep->declBus(c+647,"ysyx_22040750_cpu_top csr_foward_e I_csr_addr_ID", false,-1, 11,0);
        tracep->declBus(c+648,"ysyx_22040750_cpu_top csr_foward_e I_csr_addr_EX", false,-1, 11,0);
        tracep->declBus(c+649,"ysyx_22040750_cpu_top csr_foward_e I_csr_addr_MEM", false,-1, 11,0);
        tracep->declBus(c+650,"ysyx_22040750_cpu_top csr_foward_e I_csr_addr_WB", false,-1, 11,0);
        tracep->declBit(c+651,"ysyx_22040750_cpu_top csr_foward_e I_csr_wen_ID", false,-1);
        tracep->declBit(c+652,"ysyx_22040750_cpu_top csr_foward_e I_csr_wen_EX", false,-1);
        tracep->declBit(c+653,"ysyx_22040750_cpu_top csr_foward_e I_csr_wen_MEM", false,-1);
        tracep->declBit(c+654,"ysyx_22040750_cpu_top csr_foward_e I_csr_wen_WB", false,-1);
        tracep->declQuad(c+655,"ysyx_22040750_cpu_top csr_foward_e O_csr_foward_data", false,-1, 63,0);
        tracep->declBit(c+657,"ysyx_22040750_cpu_top csr_foward_e EX_foward", false,-1);
        tracep->declBit(c+658,"ysyx_22040750_cpu_top csr_foward_e MEM_foward", false,-1);
        tracep->declBit(c+659,"ysyx_22040750_cpu_top csr_foward_e WB_foward", false,-1);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+108,"ysyx_22040750_cpu_top decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+110,"ysyx_22040750_cpu_top decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+37,"ysyx_22040750_cpu_top decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+35,"ysyx_22040750_cpu_top decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22040750_cpu_top decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+30,"ysyx_22040750_cpu_top decoder_e O_dnpc_sel", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22040750_cpu_top decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040750_cpu_top decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22040750_cpu_top decoder_e O_opnum2_sel", false,-1, 2,0);
        tracep->declBus(c+34,"ysyx_22040750_cpu_top decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+40,"ysyx_22040750_cpu_top decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+39,"ysyx_22040750_cpu_top decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+148,"ysyx_22040750_cpu_top decoder_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top decoder_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+149,"ysyx_22040750_cpu_top decoder_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+150,"ysyx_22040750_cpu_top decoder_e O_csr_wen", false,-1);
        tracep->declBit(c+151,"ysyx_22040750_cpu_top decoder_e O_csr_intr", false,-1);
        tracep->declQuad(c+152,"ysyx_22040750_cpu_top decoder_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+154,"ysyx_22040750_cpu_top decoder_e O_csr_mret", false,-1);
        tracep->declBus(c+107,"ysyx_22040750_cpu_top decoder_e O_stall_en", false,-1, 1,0);
        tracep->declBus(c+155,"ysyx_22040750_cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+156,"ysyx_22040750_cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+157,"ysyx_22040750_cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+149,"ysyx_22040750_cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+158,"ysyx_22040750_cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+159,"ysyx_22040750_cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+160,"ysyx_22040750_cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+161,"ysyx_22040750_cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+162,"ysyx_22040750_cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+163,"ysyx_22040750_cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+164,"ysyx_22040750_cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+165,"ysyx_22040750_cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+166,"ysyx_22040750_cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+167,"ysyx_22040750_cpu_top decoder_e typeC", false,-1);
        tracep->declBit(c+168,"ysyx_22040750_cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+169,"ysyx_22040750_cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+166,"ysyx_22040750_cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+170,"ysyx_22040750_cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+171,"ysyx_22040750_cpu_top decoder_e LD", false,-1);
        tracep->declBit(c+172,"ysyx_22040750_cpu_top decoder_e LW", false,-1);
        tracep->declBit(c+173,"ysyx_22040750_cpu_top decoder_e LWU", false,-1);
        tracep->declBit(c+174,"ysyx_22040750_cpu_top decoder_e LH", false,-1);
        tracep->declBit(c+175,"ysyx_22040750_cpu_top decoder_e LHU", false,-1);
        tracep->declBit(c+176,"ysyx_22040750_cpu_top decoder_e LB", false,-1);
        tracep->declBit(c+177,"ysyx_22040750_cpu_top decoder_e LBU", false,-1);
        tracep->declBit(c+178,"ysyx_22040750_cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+179,"ysyx_22040750_cpu_top decoder_e SLTI", false,-1);
        tracep->declBit(c+180,"ysyx_22040750_cpu_top decoder_e SLTIU", false,-1);
        tracep->declBit(c+181,"ysyx_22040750_cpu_top decoder_e XORI", false,-1);
        tracep->declBit(c+182,"ysyx_22040750_cpu_top decoder_e ORI", false,-1);
        tracep->declBit(c+183,"ysyx_22040750_cpu_top decoder_e ANDI", false,-1);
        tracep->declBit(c+184,"ysyx_22040750_cpu_top decoder_e SLLI", false,-1);
        tracep->declBit(c+185,"ysyx_22040750_cpu_top decoder_e SRLI", false,-1);
        tracep->declBit(c+186,"ysyx_22040750_cpu_top decoder_e SRAI", false,-1);
        tracep->declBit(c+187,"ysyx_22040750_cpu_top decoder_e ADDIW", false,-1);
        tracep->declBit(c+188,"ysyx_22040750_cpu_top decoder_e SLLIW", false,-1);
        tracep->declBit(c+189,"ysyx_22040750_cpu_top decoder_e SRLIW", false,-1);
        tracep->declBit(c+190,"ysyx_22040750_cpu_top decoder_e SRAIW", false,-1);
        tracep->declBit(c+191,"ysyx_22040750_cpu_top decoder_e ADD", false,-1);
        tracep->declBit(c+192,"ysyx_22040750_cpu_top decoder_e SUB", false,-1);
        tracep->declBit(c+193,"ysyx_22040750_cpu_top decoder_e SLL", false,-1);
        tracep->declBit(c+194,"ysyx_22040750_cpu_top decoder_e SLT", false,-1);
        tracep->declBit(c+195,"ysyx_22040750_cpu_top decoder_e SLTU", false,-1);
        tracep->declBit(c+196,"ysyx_22040750_cpu_top decoder_e XOR", false,-1);
        tracep->declBit(c+197,"ysyx_22040750_cpu_top decoder_e SRL", false,-1);
        tracep->declBit(c+198,"ysyx_22040750_cpu_top decoder_e SRA", false,-1);
        tracep->declBit(c+199,"ysyx_22040750_cpu_top decoder_e OR", false,-1);
        tracep->declBit(c+200,"ysyx_22040750_cpu_top decoder_e AND", false,-1);
        tracep->declBit(c+201,"ysyx_22040750_cpu_top decoder_e MUL", false,-1);
        tracep->declBit(c+202,"ysyx_22040750_cpu_top decoder_e MULH", false,-1);
        tracep->declBit(c+203,"ysyx_22040750_cpu_top decoder_e MULHSU", false,-1);
        tracep->declBit(c+204,"ysyx_22040750_cpu_top decoder_e MULHU", false,-1);
        tracep->declBit(c+205,"ysyx_22040750_cpu_top decoder_e DIV", false,-1);
        tracep->declBit(c+206,"ysyx_22040750_cpu_top decoder_e DIVU", false,-1);
        tracep->declBit(c+207,"ysyx_22040750_cpu_top decoder_e REM", false,-1);
        tracep->declBit(c+208,"ysyx_22040750_cpu_top decoder_e REMU", false,-1);
        tracep->declBit(c+209,"ysyx_22040750_cpu_top decoder_e ADDW", false,-1);
        tracep->declBit(c+210,"ysyx_22040750_cpu_top decoder_e SUBW", false,-1);
        tracep->declBit(c+211,"ysyx_22040750_cpu_top decoder_e SLLW", false,-1);
        tracep->declBit(c+212,"ysyx_22040750_cpu_top decoder_e SRLW", false,-1);
        tracep->declBit(c+213,"ysyx_22040750_cpu_top decoder_e SRAW", false,-1);
        tracep->declBit(c+214,"ysyx_22040750_cpu_top decoder_e MULW", false,-1);
        tracep->declBit(c+215,"ysyx_22040750_cpu_top decoder_e DIVW", false,-1);
        tracep->declBit(c+216,"ysyx_22040750_cpu_top decoder_e DIVUW", false,-1);
        tracep->declBit(c+217,"ysyx_22040750_cpu_top decoder_e REMW", false,-1);
        tracep->declBit(c+218,"ysyx_22040750_cpu_top decoder_e REMUW", false,-1);
        tracep->declBit(c+219,"ysyx_22040750_cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+220,"ysyx_22040750_cpu_top decoder_e SW", false,-1);
        tracep->declBit(c+221,"ysyx_22040750_cpu_top decoder_e SH", false,-1);
        tracep->declBit(c+222,"ysyx_22040750_cpu_top decoder_e SB", false,-1);
        tracep->declBit(c+223,"ysyx_22040750_cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+224,"ysyx_22040750_cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+225,"ysyx_22040750_cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+226,"ysyx_22040750_cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+227,"ysyx_22040750_cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+228,"ysyx_22040750_cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+229,"ysyx_22040750_cpu_top decoder_e ECALL", false,-1);
        tracep->declBit(c+230,"ysyx_22040750_cpu_top decoder_e EBREAK", false,-1);
        tracep->declBit(c+231,"ysyx_22040750_cpu_top decoder_e CSRRW", false,-1);
        tracep->declBit(c+232,"ysyx_22040750_cpu_top decoder_e CSRRS", false,-1);
        tracep->declBit(c+233,"ysyx_22040750_cpu_top decoder_e CSRRC", false,-1);
        tracep->declBit(c+234,"ysyx_22040750_cpu_top decoder_e CSRRWI", false,-1);
        tracep->declBit(c+235,"ysyx_22040750_cpu_top decoder_e CSRRSI", false,-1);
        tracep->declBit(c+236,"ysyx_22040750_cpu_top decoder_e CSRRCI", false,-1);
        tracep->declBit(c+154,"ysyx_22040750_cpu_top decoder_e MRET", false,-1);
        tracep->declQuad(c+152,"ysyx_22040750_cpu_top decoder_e NO", false,-1, 63,0);
        tracep->declBit(c+237,"ysyx_22040750_cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBit(c+238,"ysyx_22040750_cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+239,"ysyx_22040750_cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+240,"ysyx_22040750_cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+241,"ysyx_22040750_cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+242,"ysyx_22040750_cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+243,"ysyx_22040750_cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+244,"ysyx_22040750_cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+660,"ysyx_22040750_cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+661,"ysyx_22040750_cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+662,"ysyx_22040750_cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+663,"ysyx_22040750_cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+664,"ysyx_22040750_cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+665,"ysyx_22040750_cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+666,"ysyx_22040750_cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+667,"ysyx_22040750_cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+668,"ysyx_22040750_cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+669,"ysyx_22040750_cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+670,"ysyx_22040750_cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+671,"ysyx_22040750_cpu_top decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+672,"ysyx_22040750_cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+673,"ysyx_22040750_cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBus(c+674,"ysyx_22040750_cpu_top decoder_e OP_CSR", false,-1, 14,0);
        tracep->declBit(c+245,"ysyx_22040750_cpu_top decoder_e add_flag", false,-1);
        tracep->declBit(c+237,"ysyx_22040750_cpu_top decoder_e ld_flag", false,-1);
        tracep->declBit(c+246,"ysyx_22040750_cpu_top decoder_e sub_flag", false,-1);
        tracep->declBit(c+247,"ysyx_22040750_cpu_top decoder_e slt_flag", false,-1);
        tracep->declBit(c+248,"ysyx_22040750_cpu_top decoder_e sltu_flag", false,-1);
        tracep->declBit(c+249,"ysyx_22040750_cpu_top decoder_e xor_flag", false,-1);
        tracep->declBit(c+250,"ysyx_22040750_cpu_top decoder_e or_flag", false,-1);
        tracep->declBit(c+251,"ysyx_22040750_cpu_top decoder_e and_flag", false,-1);
        tracep->declBit(c+252,"ysyx_22040750_cpu_top decoder_e sll_flag", false,-1);
        tracep->declBit(c+253,"ysyx_22040750_cpu_top decoder_e srl_flag", false,-1);
        tracep->declBit(c+254,"ysyx_22040750_cpu_top decoder_e sra_flag", false,-1);
        tracep->declBit(c+255,"ysyx_22040750_cpu_top decoder_e mul_flag", false,-1);
        tracep->declBit(c+256,"ysyx_22040750_cpu_top decoder_e mulh_flag", false,-1);
        tracep->declBit(c+257,"ysyx_22040750_cpu_top decoder_e div_flag", false,-1);
        tracep->declBit(c+258,"ysyx_22040750_cpu_top decoder_e rem_flag", false,-1);
        tracep->declBit(c+167,"ysyx_22040750_cpu_top decoder_e csr_flag", false,-1);
        tracep->declBus(c+675,"ysyx_22040750_cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+676,"ysyx_22040750_cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+677,"ysyx_22040750_cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+259,"ysyx_22040750_cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+260,"ysyx_22040750_cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+168,"ysyx_22040750_cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+675,"ysyx_22040750_cpu_top decoder_e OP2_RS2", false,-1, 2,0);
        tracep->declBus(c+676,"ysyx_22040750_cpu_top decoder_e OP2_IMM", false,-1, 2,0);
        tracep->declBus(c+677,"ysyx_22040750_cpu_top decoder_e OP2_FOUR", false,-1, 2,0);
        tracep->declBit(c+163,"ysyx_22040750_cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+261,"ysyx_22040750_cpu_top decoder_e imm_flag", false,-1);
        tracep->declBit(c+262,"ysyx_22040750_cpu_top decoder_e four_flag", false,-1);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+44,"ysyx_22040750_cpu_top ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+607,"ysyx_22040750_cpu_top ID_EX_reg_e I_ID_EX_allowout", false,-1);
        tracep->declBit(c+605,"ysyx_22040750_cpu_top ID_EX_reg_e O_ID_EX_allowin", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declBit(c+73,"ysyx_22040750_cpu_top ID_EX_reg_e I_alu_output_valid", false,-1);
        tracep->declQuad(c+7,"ysyx_22040750_cpu_top ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+108,"ysyx_22040750_cpu_top ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22040750_cpu_top ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22040750_cpu_top ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBit(c+37,"ysyx_22040750_cpu_top ID_EX_reg_e I_reg_wen", false,-1);
        tracep->declBit(c+38,"ysyx_22040750_cpu_top ID_EX_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+35,"ysyx_22040750_cpu_top ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"ysyx_22040750_cpu_top ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+31,"ysyx_22040750_cpu_top ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"ysyx_22040750_cpu_top ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"ysyx_22040750_cpu_top ID_EX_reg_e I_op2_sel", false,-1, 2,0);
        tracep->declBus(c+40,"ysyx_22040750_cpu_top ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+34,"ysyx_22040750_cpu_top ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+39,"ysyx_22040750_cpu_top ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declBus(c+678,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+679,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_imm", false,-1, 4,0);
        tracep->declBus(c+680,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+681,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+682,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+683,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+685,"ysyx_22040750_cpu_top ID_EX_reg_e I_csr_mret", false,-1);
        tracep->declBus(c+263,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_op_sel", false,-1, 6,0);
        tracep->declBus(c+264,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_imm", false,-1, 4,0);
        tracep->declBus(c+265,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+266,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+267,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+268,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+270,"ysyx_22040750_cpu_top ID_EX_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+48,"ysyx_22040750_cpu_top ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040750_cpu_top ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040750_cpu_top ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+65,"ysyx_22040750_cpu_top ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+57,"ysyx_22040750_cpu_top ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+58,"ysyx_22040750_cpu_top ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+61,"ysyx_22040750_cpu_top ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+60,"ysyx_22040750_cpu_top ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+59,"ysyx_22040750_cpu_top ID_EX_reg_e O_op2_sel", false,-1, 2,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+41,"ysyx_22040750_cpu_top ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22040750_cpu_top ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22040750_cpu_top ID_EX_reg_e O_ID_EX_input_valid", false,-1);
        tracep->declBit(c+72,"ysyx_22040750_cpu_top ID_EX_reg_e O_alu_multicycle", false,-1);
        tracep->declBus(c+43,"ysyx_22040750_cpu_top ID_EX_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+69,"ysyx_22040750_cpu_top ID_EX_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+46,"ysyx_22040750_cpu_top ID_EX_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+70,"ysyx_22040750_cpu_top ID_EX_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+71,"ysyx_22040750_cpu_top ID_EX_reg_e input_valid", false,-1);
        tracep->declBit(c+73,"ysyx_22040750_cpu_top ID_EX_reg_e output_valid", false,-1);
        tracep->declBus(c+634,"ysyx_22040750_cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+635,"ysyx_22040750_cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+271,"ysyx_22040750_cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+60,"ysyx_22040750_cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+277+i*2,"ysyx_22040750_cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+636,"ysyx_22040750_cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+634,"ysyx_22040750_cpu_top alu_op2_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+635,"ysyx_22040750_cpu_top alu_op2_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+283,"ysyx_22040750_cpu_top alu_op2_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+59,"ysyx_22040750_cpu_top alu_op2_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+17,"ysyx_22040750_cpu_top alu_op2_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+289+i*2,"ysyx_22040750_cpu_top alu_op2_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+636,"ysyx_22040750_cpu_top alu_op2_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top alu_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top alu_e I_rst", false,-1);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040750_cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+72,"ysyx_22040750_cpu_top alu_e I_multicycle", false,-1);
        tracep->declBit(c+607,"ysyx_22040750_cpu_top alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+686,"ysyx_22040750_cpu_top alu_e I_csr_data", false,-1, 63,0);
        tracep->declBus(c+688,"ysyx_22040750_cpu_top alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+689,"ysyx_22040750_cpu_top alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_22040750_cpu_top alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+73,"ysyx_22040750_cpu_top alu_e O_result_valid", false,-1);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_rst", false,-1);
        tracep->declQuad(c+686,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+62,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+66,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_word_op_mask", false,-1);
        tracep->declBit(c+72,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_multicycle", false,-1);
        tracep->declBit(c+607,"ysyx_22040750_cpu_top alu_e gpr_alu_e I_EX_MEM_ready", false,-1);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e gpr_alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top alu_e gpr_alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+73,"ysyx_22040750_cpu_top alu_e gpr_alu_e O_result_valid", false,-1);
        tracep->declBit(c+297,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_add", false,-1);
        tracep->declBit(c+298,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_sub", false,-1);
        tracep->declBit(c+299,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_slt", false,-1);
        tracep->declBit(c+300,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_sltu", false,-1);
        tracep->declBit(c+301,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_xor", false,-1);
        tracep->declBit(c+302,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_or", false,-1);
        tracep->declBit(c+303,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_and", false,-1);
        tracep->declBit(c+304,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_sll", false,-1);
        tracep->declBit(c+305,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_srl", false,-1);
        tracep->declBit(c+306,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_sra", false,-1);
        tracep->declBit(c+307,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_mul", false,-1);
        tracep->declBit(c+308,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_mulh", false,-1);
        tracep->declBit(c+309,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_div", false,-1);
        tracep->declBit(c+310,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_rem", false,-1);
        tracep->declBit(c+311,"ysyx_22040750_cpu_top alu_e gpr_alu_e op_csr", false,-1);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e gpr_alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+312,"ysyx_22040750_cpu_top alu_e gpr_alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+314,"ysyx_22040750_cpu_top alu_e gpr_alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+316,"ysyx_22040750_cpu_top alu_e gpr_alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+318,"ysyx_22040750_cpu_top alu_e gpr_alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+320,"ysyx_22040750_cpu_top alu_e gpr_alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+322,"ysyx_22040750_cpu_top alu_e gpr_alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+324,"ysyx_22040750_cpu_top alu_e gpr_alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+326,"ysyx_22040750_cpu_top alu_e gpr_alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+328,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+330,"ysyx_22040750_cpu_top alu_e gpr_alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+332,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+334,"ysyx_22040750_cpu_top alu_e gpr_alu_e rem_result", false,-1, 63,0);
        tracep->declQuad(c+686,"ysyx_22040750_cpu_top alu_e gpr_alu_e csr_result", false,-1, 63,0);
        tracep->declArray(c+336,"ysyx_22040750_cpu_top alu_e gpr_alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+339,"ysyx_22040750_cpu_top alu_e gpr_alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+342,"ysyx_22040750_cpu_top alu_e gpr_alu_e sign_bit1", false,-1);
        tracep->declBit(c+343,"ysyx_22040750_cpu_top alu_e gpr_alu_e sign_bit2", false,-1);
        tracep->declBit(c+344,"ysyx_22040750_cpu_top alu_e gpr_alu_e sext1", false,-1);
        tracep->declBit(c+345,"ysyx_22040750_cpu_top alu_e gpr_alu_e sext2", false,-1);
        tracep->declBit(c+690,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_valid_d", false,-1);
        tracep->declBit(c+691,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_valid_d", false,-1);
        tracep->declBit(c+346,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_flag", false,-1);
        tracep->declBit(c+347,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_flag", false,-1);
        tracep->declBit(c+348,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_valid", false,-1);
        tracep->declBit(c+349,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_valid", false,-1);
        tracep->declBit(c+350,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_out_valid", false,-1);
        tracep->declBit(c+351,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_out_valid", false,-1);
        tracep->declQuad(c+352,"ysyx_22040750_cpu_top alu_e gpr_alu_e mulh_reg", false,-1, 63,0);
        tracep->declQuad(c+354,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_reg", false,-1, 63,0);
        tracep->declQuad(c+356,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_reg", false,-1, 63,0);
        tracep->declQuad(c+358,"ysyx_22040750_cpu_top alu_e gpr_alu_e rem_reg", false,-1, 63,0);
        tracep->declBit(c+360,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_reg_valid", false,-1);
        tracep->declBit(c+361,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_reg_valid", false,-1);
        tracep->declQuad(c+362,"ysyx_22040750_cpu_top alu_e gpr_alu_e mulh_final", false,-1, 63,0);
        tracep->declQuad(c+364,"ysyx_22040750_cpu_top alu_e gpr_alu_e mul_final", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_22040750_cpu_top alu_e gpr_alu_e div_final", false,-1, 63,0);
        tracep->declQuad(c+368,"ysyx_22040750_cpu_top alu_e gpr_alu_e rem_final", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_e gpr_alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+370,"ysyx_22040750_cpu_top alu_e gpr_alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top alu_e gpr_alu_e result", false,-1, 63,0);
        tracep->declQuad(c+372,"ysyx_22040750_cpu_top alu_e gpr_alu_e cin", false,-1, 63,0);
        tracep->declBit(c+374,"ysyx_22040750_cpu_top alu_e gpr_alu_e cout", false,-1);
        tracep->declQuad(c+375,"ysyx_22040750_cpu_top alu_e gpr_alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+342,"ysyx_22040750_cpu_top alu_e gpr_alu_e shift_sign", false,-1);
        tracep->declQuad(c+377,"ysyx_22040750_cpu_top alu_e gpr_alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+379,"ysyx_22040750_cpu_top alu_e gpr_alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+380,"ysyx_22040750_cpu_top alu_e gpr_alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+324,"ysyx_22040750_cpu_top alu_e gpr_alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+382,"ysyx_22040750_cpu_top alu_e gpr_alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+383,"ysyx_22040750_cpu_top alu_e gpr_alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+385,"ysyx_22040750_cpu_top alu_e gpr_alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+387,"ysyx_22040750_cpu_top alu_e gpr_alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+389,"ysyx_22040750_cpu_top alu_e gpr_alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+391,"ysyx_22040750_cpu_top alu_e gpr_alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+393,"ysyx_22040750_cpu_top alu_e gpr_alu_e word_sext", false,-1);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e rst", false,-1);
        tracep->declQuad(c+394,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e mul1", false,-1, 63,0);
        tracep->declQuad(c+396,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e mul2", false,-1, 63,0);
        tracep->declBit(c+344,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e is_signed", false,-1);
        tracep->declBit(c+348,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e mul_valid", false,-1);
        tracep->declBit(c+350,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e P_valid", false,-1);
        tracep->declArray(c+398,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e P", false,-1, 127,0);
        tracep->declBit(c+402,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e sgn_ext1", false,-1);
        tracep->declBit(c+403,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e sgn_ext2", false,-1);
        tracep->declArray(c+404,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e booth_mul1", false,-1, 66,0);
        tracep->declArray(c+407,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e booth_mul2", false,-1, 131,0);
        tracep->declArray(c+412,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e partial_sum", false,-1, 131,0);
        tracep->declBit(c+417,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e partial_c", false,-1);
        tracep->declArray(c+418,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e mid_result", false,-1, 131,0);
        tracep->declBus(c+423,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e booth", false,-1, 2,0);
        tracep->declArray(c+424,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e S", false,-1, 131,0);
        tracep->declBit(c+417,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e Ci", false,-1);
        tracep->declBit(c+692,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e end_flag", false,-1);
        tracep->declBit(c+429,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e mul_process", false,-1);
        tracep->declBus(c+430,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e iter_cnt", false,-1, 5,0);
        tracep->declBus(c+423,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e booth", false,-1, 2,0);
        tracep->declArray(c+407,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e X", false,-1, 131,0);
        tracep->declArray(c+412,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e P", false,-1, 131,0);
        tracep->declBit(c+417,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e c", false,-1);
        tracep->declBit(c+431,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_add", false,-1);
        tracep->declBit(c+432,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y", false,-1);
        tracep->declBit(c+433,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e y_sub", false,-1);
        tracep->declBit(c+434,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_negative", false,-1);
        tracep->declBit(c+435,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_negative", false,-1);
        tracep->declBit(c+436,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_positive", false,-1);
        tracep->declBit(c+437,"ysyx_22040750_cpu_top alu_e gpr_alu_e booth_mul_serial_e radix4_unit_e sel_double_positive", false,-1);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e rst", false,-1);
        tracep->declQuad(c+394,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e dividend", false,-1, 63,0);
        tracep->declQuad(c+396,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e divisor", false,-1, 63,0);
        tracep->declBit(c+344,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e is_signed", false,-1);
        tracep->declBit(c+349,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e div_valid", false,-1);
        tracep->declQuad(c+332,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e quotient", false,-1, 63,0);
        tracep->declQuad(c+334,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e remainder", false,-1, 63,0);
        tracep->declBit(c+351,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e Q_valid", false,-1);
        tracep->declArray(c+438,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e abs_dividend", false,-1, 127,0);
        tracep->declArray(c+442,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e abs_divisor", false,-1, 127,0);
        tracep->declArray(c+446,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e current_sub_result", false,-1, 127,0);
        tracep->declBit(c+450,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e current_q", false,-1);
        tracep->declBit(c+451,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e dividend_flag", false,-1);
        tracep->declBit(c+452,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e divisor_flag", false,-1);
        tracep->declBit(c+453,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e q_flag", false,-1);
        tracep->declBit(c+451,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e rem_flag", false,-1);
        tracep->declQuad(c+454,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e abs_quotient", false,-1, 63,0);
        tracep->declBit(c+456,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e div_process", false,-1);
        tracep->declBus(c+457,"ysyx_22040750_cpu_top alu_e gpr_alu_e radix2_div_e iter_cnt", false,-1, 5,0);
        tracep->declQuad(c+686,"ysyx_22040750_cpu_top alu_e csr_alu_e I_csr_data", false,-1, 63,0);
        tracep->declQuad(c+15,"ysyx_22040750_cpu_top alu_e csr_alu_e I_rs_data", false,-1, 63,0);
        tracep->declBus(c+688,"ysyx_22040750_cpu_top alu_e csr_alu_e I_uimm", false,-1, 4,0);
        tracep->declBus(c+689,"ysyx_22040750_cpu_top alu_e csr_alu_e I_csr_op_sel", false,-1, 6,0);
        tracep->declQuad(c+295,"ysyx_22040750_cpu_top alu_e csr_alu_e O_csr_data", false,-1, 63,0);
        tracep->declBit(c+693,"ysyx_22040750_cpu_top alu_e csr_alu_e direct_rs", false,-1);
        tracep->declBit(c+694,"ysyx_22040750_cpu_top alu_e csr_alu_e direct_uimm", false,-1);
        tracep->declBit(c+695,"ysyx_22040750_cpu_top alu_e csr_alu_e set_rs", false,-1);
        tracep->declBit(c+696,"ysyx_22040750_cpu_top alu_e csr_alu_e set_uimm", false,-1);
        tracep->declBit(c+697,"ysyx_22040750_cpu_top alu_e csr_alu_e clr_rs", false,-1);
        tracep->declBit(c+698,"ysyx_22040750_cpu_top alu_e csr_alu_e clr_uimm", false,-1);
        tracep->declBit(c+699,"ysyx_22040750_cpu_top alu_e csr_alu_e direct", false,-1);
        tracep->declBit(c+700,"ysyx_22040750_cpu_top alu_e csr_alu_e set", false,-1);
        tracep->declBit(c+701,"ysyx_22040750_cpu_top alu_e csr_alu_e clr", false,-1);
        tracep->declBit(c+702,"ysyx_22040750_cpu_top alu_e csr_alu_e from_rs", false,-1);
        tracep->declBit(c+703,"ysyx_22040750_cpu_top alu_e csr_alu_e from_uimm", false,-1);
        tracep->declQuad(c+458,"ysyx_22040750_cpu_top alu_e csr_alu_e op", false,-1, 63,0);
        tracep->declQuad(c+458,"ysyx_22040750_cpu_top alu_e csr_alu_e direct_result", false,-1, 63,0);
        tracep->declQuad(c+460,"ysyx_22040750_cpu_top alu_e csr_alu_e set_result", false,-1, 63,0);
        tracep->declQuad(c+462,"ysyx_22040750_cpu_top alu_e csr_alu_e clr_result", false,-1, 63,0);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+67,"ysyx_22040750_cpu_top EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+103,"ysyx_22040750_cpu_top EX_MEM_reg_e I_EX_MEM_allowout", false,-1);
        tracep->declBit(c+607,"ysyx_22040750_cpu_top EX_MEM_reg_e O_EX_MEM_allowin", false,-1);
        tracep->declBit(c+606,"ysyx_22040750_cpu_top EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+58,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+57,"ysyx_22040750_cpu_top EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+19,"ysyx_22040750_cpu_top EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22040750_cpu_top EX_MEM_reg_e I_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+65,"ysyx_22040750_cpu_top EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declQuad(c+50,"ysyx_22040750_cpu_top EX_MEM_reg_e I_pc", false,-1, 63,0);
        tracep->declBit(c+64,"ysyx_22040750_cpu_top EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+56,"ysyx_22040750_cpu_top EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+61,"ysyx_22040750_cpu_top EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBit(c+624,"ysyx_22040750_cpu_top EX_MEM_reg_e I_mem_data_valid", false,-1);
        tracep->declBus(c+704,"ysyx_22040750_cpu_top EX_MEM_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+705,"ysyx_22040750_cpu_top EX_MEM_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+706,"ysyx_22040750_cpu_top EX_MEM_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+707,"ysyx_22040750_cpu_top EX_MEM_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+709,"ysyx_22040750_cpu_top EX_MEM_reg_e I_csr_mret", false,-1);
        tracep->declBus(c+464,"ysyx_22040750_cpu_top EX_MEM_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+465,"ysyx_22040750_cpu_top EX_MEM_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+466,"ysyx_22040750_cpu_top EX_MEM_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+467,"ysyx_22040750_cpu_top EX_MEM_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+469,"ysyx_22040750_cpu_top EX_MEM_reg_e O_csr_mret", false,-1);
        tracep->declBus(c+74,"ysyx_22040750_cpu_top EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+75,"ysyx_22040750_cpu_top EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+76,"ysyx_22040750_cpu_top EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040750_cpu_top EX_MEM_reg_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+620,"ysyx_22040750_cpu_top EX_MEM_reg_e O_mem_rd_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040750_cpu_top EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750_cpu_top EX_MEM_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22040750_cpu_top EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_22040750_cpu_top EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top EX_MEM_reg_e O_EX_MEM_input_valid", false,-1);
        tracep->declBus(c+69,"ysyx_22040750_cpu_top EX_MEM_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+88,"ysyx_22040750_cpu_top EX_MEM_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+70,"ysyx_22040750_cpu_top EX_MEM_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+89,"ysyx_22040750_cpu_top EX_MEM_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+470,"ysyx_22040750_cpu_top EX_MEM_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+90,"ysyx_22040750_cpu_top EX_MEM_reg_e input_valid", false,-1);
        tracep->declBit(c+609,"ysyx_22040750_cpu_top EX_MEM_reg_e output_valid", false,-1);
        tracep->declQuad(c+23,"ysyx_22040750_cpu_top mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+75,"ysyx_22040750_cpu_top mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+625,"ysyx_22040750_cpu_top mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+606,"ysyx_22040750_cpu_top MEM_WB_reg_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+103,"ysyx_22040750_cpu_top MEM_WB_reg_e O_MEM_WB_allowin", false,-1);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declQuad(c+81,"ysyx_22040750_cpu_top MEM_WB_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+622,"ysyx_22040750_cpu_top MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBus(c+74,"ysyx_22040750_cpu_top MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+86,"ysyx_22040750_cpu_top MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+76,"ysyx_22040750_cpu_top MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+83,"ysyx_22040750_cpu_top MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+84,"ysyx_22040750_cpu_top MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_22040750_cpu_top MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+710,"ysyx_22040750_cpu_top MEM_WB_reg_e I_csr_addr", false,-1, 11,0);
        tracep->declBit(c+711,"ysyx_22040750_cpu_top MEM_WB_reg_e I_csr_wen", false,-1);
        tracep->declBit(c+712,"ysyx_22040750_cpu_top MEM_WB_reg_e I_csr_intr", false,-1);
        tracep->declQuad(c+713,"ysyx_22040750_cpu_top MEM_WB_reg_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+715,"ysyx_22040750_cpu_top MEM_WB_reg_e I_csr_mret", false,-1);
        tracep->declBus(c+471,"ysyx_22040750_cpu_top MEM_WB_reg_e O_csr_addr", false,-1, 11,0);
        tracep->declBit(c+472,"ysyx_22040750_cpu_top MEM_WB_reg_e O_csr_wen", false,-1);
        tracep->declBit(c+473,"ysyx_22040750_cpu_top MEM_WB_reg_e O_csr_intr", false,-1);
        tracep->declQuad(c+474,"ysyx_22040750_cpu_top MEM_WB_reg_e O_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+476,"ysyx_22040750_cpu_top MEM_WB_reg_e O_csr_mret", false,-1);
        tracep->declQuad(c+91,"ysyx_22040750_cpu_top MEM_WB_reg_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22040750_cpu_top MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040750_cpu_top MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+102,"ysyx_22040750_cpu_top MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+97,"ysyx_22040750_cpu_top MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+99,"ysyx_22040750_cpu_top MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+100,"ysyx_22040750_cpu_top MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+101,"ysyx_22040750_cpu_top MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top MEM_WB_reg_e O_MEM_WB_input_valid", false,-1);
        tracep->declBus(c+88,"ysyx_22040750_cpu_top MEM_WB_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+104,"ysyx_22040750_cpu_top MEM_WB_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+89,"ysyx_22040750_cpu_top MEM_WB_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+105,"ysyx_22040750_cpu_top MEM_WB_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top MEM_WB_reg_e input_valid", false,-1);
        tracep->declBit(c+93,"ysyx_22040750_cpu_top MEM_WB_reg_e output_valid", false,-1);
        tracep->declQuad(c+94,"ysyx_22040750_cpu_top mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22040750_cpu_top mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+102,"ysyx_22040750_cpu_top mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+21,"ysyx_22040750_cpu_top mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+477,"ysyx_22040750_cpu_top mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+478,"ysyx_22040750_cpu_top mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+479,"ysyx_22040750_cpu_top mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+480,"ysyx_22040750_cpu_top mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+634,"ysyx_22040750_cpu_top regin_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+716,"ysyx_22040750_cpu_top regin_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+482,"ysyx_22040750_cpu_top regin_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+486,"ysyx_22040750_cpu_top regin_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top regin_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+487+i*2,"ysyx_22040750_cpu_top regin_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+717,"ysyx_22040750_cpu_top regin_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+610,"ysyx_22040750_cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+9,"ysyx_22040750_cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+491,"ysyx_22040750_cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+100,"ysyx_22040750_cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22040750_cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+11,"ysyx_22040750_cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22040750_cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+13,"ysyx_22040750_cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+492+i*2,"ysyx_22040750_cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+556+i*1,"ysyx_22040750_cpu_top gpr_e wen", true,(i+0));}}
        tracep->declBit(c+610,"ysyx_22040750_cpu_top csr_e I_sys_clk", false,-1);
        tracep->declBit(c+611,"ysyx_22040750_cpu_top csr_e I_rst", false,-1);
        tracep->declBit(c+718,"ysyx_22040750_cpu_top csr_e I_csr_wen", false,-1);
        tracep->declBit(c+719,"ysyx_22040750_cpu_top csr_e I_csr_intr_wr", false,-1);
        tracep->declBit(c+720,"ysyx_22040750_cpu_top csr_e I_csr_intr_rd", false,-1);
        tracep->declQuad(c+721,"ysyx_22040750_cpu_top csr_e I_intr_pc", false,-1, 63,0);
        tracep->declQuad(c+723,"ysyx_22040750_cpu_top csr_e I_csr_intr_no", false,-1, 63,0);
        tracep->declBit(c+725,"ysyx_22040750_cpu_top csr_e I_csr_mret_wr", false,-1);
        tracep->declBit(c+726,"ysyx_22040750_cpu_top csr_e I_csr_mret_rd", false,-1);
        tracep->declBus(c+727,"ysyx_22040750_cpu_top csr_e I_wr_addr", false,-1, 11,0);
        tracep->declBus(c+728,"ysyx_22040750_cpu_top csr_e I_rd_addr", false,-1, 11,0);
        tracep->declQuad(c+729,"ysyx_22040750_cpu_top csr_e I_wr_data", false,-1, 63,0);
        tracep->declQuad(c+588,"ysyx_22040750_cpu_top csr_e O_rd_data", false,-1, 63,0);
        tracep->declBus(c+731,"ysyx_22040750_cpu_top csr_e CSR_NUM", false,-1, 31,0);
        tracep->declBus(c+732,"ysyx_22040750_cpu_top csr_e MEPC", false,-1, 11,0);
        tracep->declBus(c+733,"ysyx_22040750_cpu_top csr_e MSTATUS", false,-1, 11,0);
        tracep->declBus(c+734,"ysyx_22040750_cpu_top csr_e MTVEC", false,-1, 11,0);
        tracep->declBus(c+735,"ysyx_22040750_cpu_top csr_e MCAUSE", false,-1, 11,0);
        tracep->declBus(c+736,"ysyx_22040750_cpu_top csr_e MSCRATCH", false,-1, 11,0);
        tracep->declQuad(c+590,"ysyx_22040750_cpu_top csr_e mepc", false,-1, 63,0);
        tracep->declQuad(c+592,"ysyx_22040750_cpu_top csr_e mstatus", false,-1, 63,0);
        tracep->declQuad(c+594,"ysyx_22040750_cpu_top csr_e mtvec", false,-1, 63,0);
        tracep->declQuad(c+596,"ysyx_22040750_cpu_top csr_e mcause", false,-1, 63,0);
        tracep->declQuad(c+598,"ysyx_22040750_cpu_top csr_e mscratch", false,-1, 63,0);
        tracep->declQuad(c+588,"ysyx_22040750_cpu_top csr_e rd_data", false,-1, 63,0);
        tracep->declBit(c+600,"ysyx_22040750_cpu_top csr_e mie", false,-1);
        tracep->declBit(c+601,"ysyx_22040750_cpu_top csr_e mpie", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp251;
    VlWide<3>/*95:0*/ __Vtemp252;
    VlWide<3>/*95:0*/ __Vtemp253;
    VlWide<3>/*95:0*/ __Vtemp254;
    VlWide<3>/*95:0*/ __Vtemp255;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<4>/*127:0*/ __Vtemp276;
    VlWide<5>/*159:0*/ __Vtemp302;
    VlWide<5>/*159:0*/ __Vtemp304;
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
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
        tracep->fullCData(oldp+27,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+29,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel),5);
        tracep->fullCData(oldp+31,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen) 
                                      & (3U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                     << 1U) | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen) 
                                               & (3U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))),3);
        tracep->fullCData(oldp+32,((((1U & (- (IData)(
                                                      ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                                         | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                            & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))) 
                                                        | (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                       | (0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                                     | (2U & (- (IData)(
                                                        ((((0x63U 
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
                                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                         | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))))) 
                                    | (4U & (- (IData)(
                                                       (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))),3);
        tracep->fullCData(oldp+33,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                     | (2U & (- (IData)(
                                                        ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                         | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU)))))) 
                                    | (4U & (- (IData)(
                                                       ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))))),3);
        tracep->fullSData(oldp+34,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel),15);
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
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel),3);
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+63,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid));
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall),2);
        tracep->fullIData(oldp+69,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst),32);
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
        tracep->fullBit(oldp+73,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid));
        tracep->fullSData(oldp+74,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+75,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr),64);
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen));
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc),64);
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+85,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+86,((7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))),3);
        tracep->fullCData(oldp+87,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall),2);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst),32);
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble));
        tracep->fullBit(oldp+90,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc),64);
        tracep->fullBit(oldp+93,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+96,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out),64);
        tracep->fullBit(oldp+99,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+100,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt),3);
        tracep->fullBit(oldp+103,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin));
        tracep->fullIData(oldp+104,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst),32);
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble));
        tracep->fullCData(oldp+106,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall),2);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en),2);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data),64);
        tracep->fullQData(oldp+112,(((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                      ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)),64);
        tracep->fullQData(oldp+114,((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                                     + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc))),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc),64);
        tracep->fullBit(oldp+118,((1U & (~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                            | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                               >> 4U))))));
        tracep->fullBit(oldp+119,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                         >> 4U))));
        tracep->fullWData(oldp+120,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
        tracep->fullCData(oldp+126,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
        tracep->fullIData(oldp+135,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache),32);
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
        tracep->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)))));
        tracep->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)))));
        tracep->fullBit(oldp+139,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+140,((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                  >> 0xaU)))));
        tracep->fullBit(oldp+141,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                         >> 1U))));
        tracep->fullCData(oldp+142,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
        tracep->fullCData(oldp+143,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
        tracep->fullCData(oldp+144,(((0xfffffffeU & 
                                      ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                        << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
        tracep->fullBit(oldp+145,((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                    & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                       >> 1U)) | ((0U 
                                                   != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                                                  & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                                     >> 1U)))));
        tracep->fullBit(oldp+146,(((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                   & (0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU))))));
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__O_csr_op_sel),7);
        tracep->fullSData(oldp+149,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                     >> 0x14U)),12);
        tracep->fullBit(oldp+150,(((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS)) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC)) 
                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI)) 
                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI)) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI))));
        tracep->fullBit(oldp+151,(((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
                                   | (0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullQData(oldp+152,(((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                                      ? 0xbULL : ((0x100073U 
                                                   == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                                                   ? 4ULL
                                                   : 0ULL))),64);
        tracep->fullBit(oldp+154,((0x30200073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
        tracep->fullCData(oldp+155,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+156,((0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+157,((7U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+158,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+159,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+160,((0xfffff000U & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+161,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+162,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+163,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+164,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+165,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+166,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+167,((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+168,((0x37U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+169,((0x17U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+170,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+174,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+175,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+176,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+177,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+178,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+179,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+180,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+181,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+182,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+183,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+184,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+185,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+186,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+187,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+188,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+189,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+190,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+191,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+192,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+193,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+194,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+195,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+196,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+197,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+198,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+199,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+200,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+201,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+202,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+203,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+204,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+205,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+206,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+207,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+208,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+209,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+210,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+211,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+212,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+213,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+214,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+215,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+216,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+217,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+218,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+219,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+220,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+221,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+222,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+223,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+224,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+225,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+226,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+227,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+228,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+229,((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+230,((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+231,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW));
        tracep->fullBit(oldp+232,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS));
        tracep->fullBit(oldp+233,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC));
        tracep->fullBit(oldp+234,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI));
        tracep->fullBit(oldp+235,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI));
        tracep->fullBit(oldp+236,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI));
        tracep->fullBit(oldp+237,((3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+238,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+239,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+240,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+241,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+243,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+244,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+245,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+246,(((IData)(((0x33U 
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
        tracep->fullBit(oldp+247,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+248,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+249,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+250,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+251,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+252,(((((IData)(((0x1013U 
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
        tracep->fullBit(oldp+253,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+254,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+255,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+256,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+257,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
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
        tracep->fullBit(oldp+258,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
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
        tracep->fullBit(oldp+259,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                     | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                        & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+260,(((((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))));
        tracep->fullBit(oldp+261,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullBit(oldp+262,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
        tracep->fullCData(oldp+263,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_op_sel),7);
        tracep->fullCData(oldp+264,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_imm),5);
        tracep->fullSData(oldp+265,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_addr),12);
        tracep->fullBit(oldp+266,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_wen));
        tracep->fullBit(oldp+267,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_intr));
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_intr_no),64);
        tracep->fullBit(oldp+270,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__O_csr_mret));
        tracep->fullWData(oldp+271,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+283,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullQData(oldp+295,((((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op 
                                       & (- (QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0x24U 
                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel))))))) 
                                      | ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_data 
                                          | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op) 
                                         & (- (QData)((IData)(
                                                              (0U 
                                                               != 
                                                               (0x12U 
                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel)))))))) 
                                     | ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_data 
                                         & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op)) 
                                        & (- (QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (9U 
                                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel))))))))),64);
        tracep->fullBit(oldp+297,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+298,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+299,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+300,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+301,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+302,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+303,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+304,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+305,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+306,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+307,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+308,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+309,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+310,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+311,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xeU))));
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp251, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp252, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp253, __Vtemp251, __Vtemp252);
        VL_EXTEND_WQ(65,64, __Vtemp254, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp255, __Vtemp253, __Vtemp254);
        tracep->fullQData(oldp+314,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp255[2U])))))),64);
        tracep->fullQData(oldp+316,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                     ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+318,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+320,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+322,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+326,((((- (QData)((IData)(
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
                                                >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                          : (~ (0xffffffffffffffffULL 
                                                >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))) 
                                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)),64);
        tracep->fullQData(oldp+328,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
        tracep->fullWData(oldp+336,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+339,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+342,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+343,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+344,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
        tracep->fullBit(oldp+345,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
        tracep->fullBit(oldp+346,((IData)((0U != (0xc00U 
                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+347,((IData)((0U != (0x3000U 
                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))));
        tracep->fullBit(oldp+348,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
        tracep->fullBit(oldp+349,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
        tracep->fullBit(oldp+350,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
        tracep->fullBit(oldp+351,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
        tracep->fullBit(oldp+360,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
        tracep->fullBit(oldp+361,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
        tracep->fullQData(oldp+362,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
                                                                   >> 0x20U))
                                                        : 
                                                       vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg)
                                                                    : 
                                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]))))),64);
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
                                                                   >> 0x20U))
                                                        : 
                                                       vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg)
                                                                    : 
                                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]))))),64);
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
                                                                   >> 0x20U))
                                                        : (IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg)
                                                                    : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result)))))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                        ? (IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
                                                                   >> 0x20U))
                                                        : (IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
                                                                   >> 0x20U))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                                    ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg)
                                                                    : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result)))))),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp270, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp271, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp272, __Vtemp270, __Vtemp271);
        VL_EXTEND_WQ(65,64, __Vtemp273, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp274, __Vtemp272, __Vtemp273);
        tracep->fullBit(oldp+374,((1U & __Vtemp274[2U])));
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+379,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+380,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+382,(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+383,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                      : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+385,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+391,((((QData)((IData)(
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
                                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                                              >> 0x1fU)))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result)))),64);
        tracep->fullBit(oldp+393,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
        __Vtemp276[0U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
        __Vtemp276[1U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
        __Vtemp276[2U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
        __Vtemp276[3U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
        tracep->fullWData(oldp+398,(__Vtemp276),128);
        tracep->fullBit(oldp+402,(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullBit(oldp+403,(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                    >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
        tracep->fullWData(oldp+404,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
        tracep->fullWData(oldp+407,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
        __Vtemp302[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (1U | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                           << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                   << 1U))));
        __Vtemp302[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                      >> 0x1fU) | (
                                                   (~ 
                                                    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                                   << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                    >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                                 << 1U)))));
        __Vtemp302[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                      >> 0x1fU) | (
                                                   (~ 
                                                    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                                   << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                    >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                                 << 1U)))));
        __Vtemp302[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                      >> 0x1fU) | (
                                                   (~ 
                                                    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                                   << 1U))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                    >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                                 << 1U)))));
        __Vtemp302[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                            & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                  & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                      >> 0x1fU) | (0xeU 
                                                   & ((~ 
                                                       vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                                      << 1U)))))) 
                           & (~ ((- (IData)((1U & (
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                      | ((~ 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                           >> 1U)) 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                 & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                          & (~ ((- (IData)((1U & ((
                                                   (~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 2U)) 
                                                   & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                    >> 0x1fU) | (0xeU 
                                                 & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                                    << 1U))))));
        __Vtemp304[0U] = (~ __Vtemp302[0U]);
        __Vtemp304[1U] = (~ __Vtemp302[1U]);
        __Vtemp304[2U] = (~ __Vtemp302[2U]);
        __Vtemp304[3U] = (~ __Vtemp302[3U]);
        __Vtemp304[4U] = (0xfU & (~ __Vtemp302[4U]));
        tracep->fullWData(oldp+412,(__Vtemp304),132);
        tracep->fullBit(oldp+417,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
        tracep->fullWData(oldp+418,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
        tracep->fullCData(oldp+423,((7U & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
        tracep->fullWData(oldp+424,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
        tracep->fullBit(oldp+429,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
        tracep->fullCData(oldp+430,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
        tracep->fullBit(oldp+431,((1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+432,((1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+433,((1U & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
        tracep->fullBit(oldp+434,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
        tracep->fullBit(oldp+435,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
        tracep->fullBit(oldp+436,((1U & ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                            | ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 1U)) 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
        tracep->fullBit(oldp+437,((1U & (((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                              >> 2U)) 
                                          & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                             >> 1U)) 
                                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
        tracep->fullWData(oldp+438,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
        tracep->fullWData(oldp+442,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
        tracep->fullWData(oldp+446,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
        tracep->fullBit(oldp+450,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
        tracep->fullBit(oldp+451,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
        tracep->fullBit(oldp+452,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
        tracep->fullBit(oldp+453,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                   ^ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
        tracep->fullQData(oldp+454,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
        tracep->fullBit(oldp+456,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
        tracep->fullCData(oldp+457,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
        tracep->fullQData(oldp+458,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
        tracep->fullQData(oldp+460,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_data 
                                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
        tracep->fullQData(oldp+462,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_data 
                                     & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
        tracep->fullSData(oldp+464,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__O_csr_addr),12);
        tracep->fullBit(oldp+465,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__O_csr_wen));
        tracep->fullBit(oldp+466,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__O_csr_intr));
        tracep->fullQData(oldp+467,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__O_csr_intr_no),64);
        tracep->fullBit(oldp+469,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__O_csr_mret));
        tracep->fullBit(oldp+470,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
        tracep->fullSData(oldp+471,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__O_csr_addr),12);
        tracep->fullBit(oldp+472,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__O_csr_wen));
        tracep->fullBit(oldp+473,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__O_csr_intr));
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__O_csr_intr_no),64);
        tracep->fullBit(oldp+476,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__O_csr_mret));
        tracep->fullBit(oldp+477,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+478,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
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
        tracep->fullCData(oldp+479,((0xffU & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+480,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+482,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+486,((3U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel))),2);
        tracep->fullQData(oldp+487,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+491,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen));
        tracep->fullQData(oldp+492,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+494,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+496,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+498,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+500,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+502,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+504,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+506,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+508,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+510,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+512,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+514,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+516,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+518,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+520,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+522,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+524,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+526,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+530,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+532,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+534,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+536,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+538,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+540,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+542,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+544,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+546,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+548,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+550,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+552,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+554,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+556,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+557,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+558,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+559,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+560,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+561,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+562,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+563,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+564,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+565,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+566,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+567,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+568,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+569,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+570,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+571,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+572,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+573,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+574,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+575,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+576,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+577,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+578,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+579,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+580,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+581,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+582,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+584,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+585,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+587,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullQData(oldp+588,(((2U == (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_intr_rd) 
                                              << 1U) 
                                             | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_mret_rd)))
                                      ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec
                                      : ((1U == (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_intr_rd) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_mret_rd)))
                                          ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc
                                          : ((0U == 
                                              (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_intr_rd) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_mret_rd)))
                                              ? ((0x341U 
                                                  == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_rd_addr))
                                                  ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc
                                                  : 
                                                 ((0x300U 
                                                   == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_rd_addr))
                                                   ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_rd_addr))
                                                    ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec
                                                    : 
                                                   ((0x342U 
                                                     == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_rd_addr))
                                                     ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause
                                                     : 
                                                    ((0x340U 
                                                      == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_rd_addr))
                                                      ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch
                                                      : 0ULL)))))
                                              : 0ULL)))),64);
        tracep->fullQData(oldp+590,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc),64);
        tracep->fullQData(oldp+592,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus),64);
        tracep->fullQData(oldp+594,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec),64);
        tracep->fullQData(oldp+596,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause),64);
        tracep->fullQData(oldp+598,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch),64);
        tracep->fullBit(oldp+600,((1U & (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+601,((1U & (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                 >> 7U)))));
        tracep->fullIData(oldp+602,(vlSelf->ysyx_22040750_cpu_top__DOT__current_inst),32);
        tracep->fullBit(oldp+603,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid));
        tracep->fullBit(oldp+604,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin));
        tracep->fullBit(oldp+605,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin));
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
        tracep->fullBit(oldp+607,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin));
        tracep->fullBit(oldp+608,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go));
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        tracep->fullBit(oldp+610,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+611,(vlSelf->I_rst));
        tracep->fullIData(oldp+612,(vlSelf->I_inst),32);
        tracep->fullBit(oldp+613,(vlSelf->I_inst_valid));
        tracep->fullBit(oldp+614,(vlSelf->I_inst_addr_ready));
        tracep->fullQData(oldp+615,(vlSelf->O_pc),64);
        tracep->fullBit(oldp+617,(vlSelf->O_pc_valid));
        tracep->fullQData(oldp+618,(vlSelf->O_mem_addr),64);
        tracep->fullBit(oldp+620,(vlSelf->O_mem_rd_en));
        tracep->fullBit(oldp+621,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+622,(vlSelf->I_mem_rd_data),64);
        tracep->fullBit(oldp+624,(vlSelf->I_mem_rd_data_valid));
        tracep->fullQData(oldp+625,(vlSelf->O_mem_wr_data),64);
        tracep->fullCData(oldp+627,(vlSelf->O_mem_wr_strb),8);
        tracep->fullBit(oldp+628,((1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
                                         | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))))));
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_data),64);
        tracep->fullBit(oldp+631,(1U));
        tracep->fullQData(oldp+632,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__I_intr_pc),64);
        tracep->fullIData(oldp+634,(0x40U),32);
        tracep->fullIData(oldp+635,(3U),32);
        tracep->fullIData(oldp+636,(3U),32);
        tracep->fullQData(oldp+637,(0x7ffffffcULL),64);
        tracep->fullQData(oldp+639,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_ID),64);
        tracep->fullQData(oldp+641,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_EX),64);
        tracep->fullQData(oldp+643,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_MEM),64);
        tracep->fullQData(oldp+645,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_WB),64);
        tracep->fullSData(oldp+647,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID),12);
        tracep->fullSData(oldp+648,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_EX),12);
        tracep->fullSData(oldp+649,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_MEM),12);
        tracep->fullSData(oldp+650,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_WB),12);
        tracep->fullBit(oldp+651,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID));
        tracep->fullBit(oldp+652,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_EX));
        tracep->fullBit(oldp+653,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_MEM));
        tracep->fullBit(oldp+654,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_WB));
        tracep->fullQData(oldp+655,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_EX)) 
                                      & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_EX)))
                                      ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_EX
                                      : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_MEM)) 
                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID) 
                                             == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_MEM)))
                                          ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_MEM
                                          : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID) 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_WB)) 
                                              & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID) 
                                                 == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_WB)))
                                              ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_WB
                                              : vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_ID)))),64);
        tracep->fullBit(oldp+657,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID) 
                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_EX)) 
                                   & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID) 
                                      == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_EX)))));
        tracep->fullBit(oldp+658,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID) 
                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_MEM)) 
                                   & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID) 
                                      == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_MEM)))));
        tracep->fullBit(oldp+659,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_ID) 
                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_wen_WB)) 
                                   & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_ID) 
                                      == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_foward_e__DOT__I_csr_addr_WB)))));
        tracep->fullSData(oldp+660,(1U),15);
        tracep->fullSData(oldp+661,(2U),15);
        tracep->fullSData(oldp+662,(4U),15);
        tracep->fullSData(oldp+663,(8U),15);
        tracep->fullSData(oldp+664,(0x10U),15);
        tracep->fullSData(oldp+665,(0x20U),15);
        tracep->fullSData(oldp+666,(0x40U),15);
        tracep->fullSData(oldp+667,(0x80U),15);
        tracep->fullSData(oldp+668,(0x100U),15);
        tracep->fullSData(oldp+669,(0x200U),15);
        tracep->fullSData(oldp+670,(0x400U),15);
        tracep->fullSData(oldp+671,(0x800U),15);
        tracep->fullSData(oldp+672,(0x1000U),15);
        tracep->fullSData(oldp+673,(0x2000U),15);
        tracep->fullSData(oldp+674,(0x4000U),15);
        tracep->fullCData(oldp+675,(1U),3);
        tracep->fullCData(oldp+676,(2U),3);
        tracep->fullCData(oldp+677,(4U),3);
        tracep->fullCData(oldp+678,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_op_sel),7);
        tracep->fullCData(oldp+679,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_imm),5);
        tracep->fullSData(oldp+680,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_addr),12);
        tracep->fullBit(oldp+681,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_wen));
        tracep->fullBit(oldp+682,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_intr));
        tracep->fullQData(oldp+683,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_intr_no),64);
        tracep->fullBit(oldp+685,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__I_csr_mret));
        tracep->fullQData(oldp+686,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_data),64);
        tracep->fullCData(oldp+688,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_uimm),5);
        tracep->fullCData(oldp+689,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel),7);
        tracep->fullBit(oldp+690,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid_d));
        tracep->fullBit(oldp+691,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid_d));
        tracep->fullBit(oldp+692,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__end_flag));
        tracep->fullBit(oldp+693,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+694,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+695,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+696,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+697,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+698,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel))));
        tracep->fullBit(oldp+699,((IData)((0U != (0x24U 
                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel))))));
        tracep->fullBit(oldp+700,((IData)((0U != (0x12U 
                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel))))));
        tracep->fullBit(oldp+701,((IData)((0U != (9U 
                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel))))));
        tracep->fullBit(oldp+702,((0U != (7U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel) 
                                                >> 3U)))));
        tracep->fullBit(oldp+703,((0U != (7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__I_csr_op_sel)))));
        tracep->fullSData(oldp+704,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__I_csr_addr),12);
        tracep->fullBit(oldp+705,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__I_csr_wen));
        tracep->fullBit(oldp+706,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__I_csr_intr));
        tracep->fullQData(oldp+707,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__I_csr_intr_no),64);
        tracep->fullBit(oldp+709,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__I_csr_mret));
        tracep->fullSData(oldp+710,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__I_csr_addr),12);
        tracep->fullBit(oldp+711,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__I_csr_wen));
        tracep->fullBit(oldp+712,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__I_csr_intr));
        tracep->fullQData(oldp+713,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__I_csr_intr_no),64);
        tracep->fullBit(oldp+715,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__I_csr_mret));
        tracep->fullIData(oldp+716,(2U),32);
        tracep->fullIData(oldp+717,(2U),32);
        tracep->fullBit(oldp+718,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_wen));
        tracep->fullBit(oldp+719,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_intr_wr));
        tracep->fullBit(oldp+720,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_intr_rd));
        tracep->fullQData(oldp+721,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_intr_pc),64);
        tracep->fullQData(oldp+723,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_intr_no),64);
        tracep->fullBit(oldp+725,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_mret_wr));
        tracep->fullBit(oldp+726,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_csr_mret_rd));
        tracep->fullSData(oldp+727,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_wr_addr),12);
        tracep->fullSData(oldp+728,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_rd_addr),12);
        tracep->fullQData(oldp+729,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__I_wr_data),64);
        tracep->fullIData(oldp+731,(0x1000U),32);
        tracep->fullSData(oldp+732,(0x341U),12);
        tracep->fullSData(oldp+733,(0x300U),12);
        tracep->fullSData(oldp+734,(0x305U),12);
        tracep->fullSData(oldp+735,(0x342U),12);
        tracep->fullSData(oldp+736,(0x340U),12);
    }
}
