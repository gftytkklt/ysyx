// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceInitTop(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+446,"I_sys_clk", false,-1);
        tracep->declBit(c+447,"I_rst", false,-1);
        tracep->declBus(c+448,"I_inst", false,-1, 31,0);
        tracep->declBit(c+449,"I_inst_valid", false,-1);
        tracep->declBit(c+450,"I_inst_addr_ready", false,-1);
        tracep->declQuad(c+451,"O_pc", false,-1, 63,0);
        tracep->declBit(c+453,"O_pc_valid", false,-1);
        tracep->declQuad(c+454,"O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+456,"O_mem_rd_en", false,-1);
        tracep->declBit(c+457,"O_mem_wen", false,-1);
        tracep->declQuad(c+458,"I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+460,"I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+461,"O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+463,"O_mem_wr_strb", false,-1, 7,0);
        tracep->declBit(c+446,"cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top I_rst", false,-1);
        tracep->declBus(c+448,"cpu_top I_inst", false,-1, 31,0);
        tracep->declBit(c+449,"cpu_top I_inst_valid", false,-1);
        tracep->declBit(c+450,"cpu_top I_inst_addr_ready", false,-1);
        tracep->declQuad(c+451,"cpu_top O_pc", false,-1, 63,0);
        tracep->declBit(c+453,"cpu_top O_pc_valid", false,-1);
        tracep->declQuad(c+454,"cpu_top O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+456,"cpu_top O_mem_rd_en", false,-1);
        tracep->declBit(c+457,"cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+458,"cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+460,"cpu_top I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+461,"cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+463,"cpu_top O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+1,"cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top snpc", false,-1, 63,0);
        tracep->declBus(c+438,"cpu_top current_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"cpu_top imm", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top wr_data", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+15,"cpu_top alu_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top alu_op2", false,-1, 63,0);
        tracep->declQuad(c+19,"cpu_top alu_out", false,-1, 63,0);
        tracep->declQuad(c+21,"cpu_top mem_in", false,-1, 63,0);
        tracep->declQuad(c+23,"cpu_top mem_out", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top mem_addr", false,-1, 63,0);
        tracep->declBus(c+27,"cpu_top rs1_addr", false,-1, 4,0);
        tracep->declBus(c+28,"cpu_top rs2_addr", false,-1, 4,0);
        tracep->declBus(c+29,"cpu_top rd_addr", false,-1, 4,0);
        tracep->declBus(c+30,"cpu_top dnpc_sel", false,-1, 3,0);
        tracep->declBus(c+31,"cpu_top regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"cpu_top opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"cpu_top opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+34,"cpu_top alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+35,"cpu_top mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"cpu_top mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+37,"cpu_top reg_wen", false,-1);
        tracep->declBit(c+38,"cpu_top mem_wen", false,-1);
        tracep->declBit(c+39,"cpu_top word_op_mask", false,-1);
        tracep->declBus(c+40,"cpu_top alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+439,"cpu_top IF_valid", false,-1);
        tracep->declQuad(c+41,"cpu_top IF_ID_pc", false,-1, 63,0);
        tracep->declBus(c+43,"cpu_top IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+440,"cpu_top IF_ID_allowin", false,-1);
        tracep->declBit(c+44,"cpu_top IF_ID_valid", false,-1);
        tracep->declBit(c+45,"cpu_top IF_ID_block", false,-1);
        tracep->declBit(c+46,"cpu_top IF_ID_bubble", false,-1);
        tracep->declBit(c+47,"cpu_top IF_ID_input_valid", false,-1);
        tracep->declQuad(c+48,"cpu_top ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+50,"cpu_top ID_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+52,"cpu_top ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+54,"cpu_top ID_EX_rs2", false,-1, 63,0);
        tracep->declBus(c+56,"cpu_top ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+57,"cpu_top ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+58,"cpu_top ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+465,"cpu_top ID_EX_dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+59,"cpu_top ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+60,"cpu_top ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+61,"cpu_top ID_EX_op2_sel", false,-1, 1,0);
        tracep->declBus(c+62,"cpu_top ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+63,"cpu_top ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+64,"cpu_top ID_EX_reg_wen", false,-1);
        tracep->declBit(c+65,"cpu_top ID_EX_mem_wen", false,-1);
        tracep->declBit(c+66,"cpu_top ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+67,"cpu_top ID_EX_valid", false,-1);
        tracep->declBit(c+441,"cpu_top ID_EX_allowin", false,-1);
        tracep->declBit(c+466,"cpu_top ID_EX_block", false,-1);
        tracep->declBus(c+68,"cpu_top ID_EX_inst", false,-1, 31,0);
        tracep->declBit(c+69,"cpu_top ID_EX_bubble", false,-1);
        tracep->declBit(c+67,"cpu_top ID_EX_input_valid", false,-1);
        tracep->declBit(c+442,"cpu_top EX_MEM_valid", false,-1);
        tracep->declBus(c+70,"cpu_top EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+71,"cpu_top EX_MEM_wstrb", false,-1, 7,0);
        tracep->declQuad(c+72,"cpu_top EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+74,"cpu_top EX_MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"cpu_top EX_MEM_rs2", false,-1, 63,0);
        tracep->declBit(c+76,"cpu_top EX_MEM_mem_wen", false,-1);
        tracep->declQuad(c+77,"cpu_top EX_MEM_pc", false,-1, 63,0);
        tracep->declQuad(c+467,"cpu_top EX_MEM_mem_data", false,-1, 63,0);
        tracep->declBit(c+79,"cpu_top EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+80,"cpu_top EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+81,"cpu_top EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+82,"cpu_top EX_MEM_shamt", false,-1, 2,0);
        tracep->declBit(c+443,"cpu_top EX_MEM_allowin", false,-1);
        tracep->declBit(c+469,"cpu_top EX_MEM_block", false,-1);
        tracep->declBus(c+83,"cpu_top EX_MEM_inst", false,-1, 31,0);
        tracep->declBit(c+84,"cpu_top EX_MEM_bubble", false,-1);
        tracep->declBit(c+85,"cpu_top EX_MEM_input_valid", false,-1);
        tracep->declQuad(c+86,"cpu_top MEM_WB_pc", false,-1, 63,0);
        tracep->declBit(c+88,"cpu_top MEM_WB_valid", false,-1);
        tracep->declQuad(c+89,"cpu_top MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+91,"cpu_top MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+92,"cpu_top MEM_WB_alu_out", false,-1, 63,0);
        tracep->declBit(c+94,"cpu_top MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+95,"cpu_top MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+96,"cpu_top MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+97,"cpu_top MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+98,"cpu_top MEM_WB_allowin", false,-1);
        tracep->declBus(c+99,"cpu_top MEM_WB_inst", false,-1, 31,0);
        tracep->declBit(c+100,"cpu_top MEM_WB_bubble", false,-1);
        tracep->declBit(c+88,"cpu_top MEM_WB_input_valid", false,-1);
        tracep->declBit(c+470,"cpu_top inst_ready", false,-1);
        tracep->declBus(c+471,"cpu_top block_en", false,-1, 1,0);
        tracep->declQuad(c+11,"cpu_top npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"cpu_top npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+30,"cpu_top npc_e I_dnpc_sel", false,-1, 3,0);
        tracep->declQuad(c+3,"cpu_top npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+101,"cpu_top npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+103,"cpu_top npc_e dnpc_sum", false,-1, 63,0);
        tracep->declQuad(c+105,"cpu_top npc_e dnpc", false,-1, 63,0);
        tracep->declBit(c+107,"cpu_top npc_e dnpc_sel", false,-1);
        tracep->declBus(c+472,"cpu_top npc_e nextpc_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+473,"cpu_top npc_e nextpc_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+108,"cpu_top npc_e nextpc_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+112,"cpu_top npc_e nextpc_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+105,"cpu_top npc_e nextpc_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+113+i*2,"cpu_top npc_e nextpc_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+474,"cpu_top npc_e nextpc_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+446,"cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+3,"cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declBus(c+448,"cpu_top pc_e I_inst", false,-1, 31,0);
        tracep->declBit(c+449,"cpu_top pc_e I_inst_valid", false,-1);
        tracep->declBit(c+470,"cpu_top pc_e I_inst_ready", false,-1);
        tracep->declBit(c+440,"cpu_top pc_e I_IF_ID_allowin", false,-1);
        tracep->declBit(c+439,"cpu_top pc_e O_IF_valid", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declBus(c+438,"cpu_top pc_e O_inst", false,-1, 31,0);
        tracep->declBit(c+453,"cpu_top pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+475,"cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+444,"cpu_top pc_e IF_ready_go", false,-1);
        tracep->declBit(c+464,"cpu_top pc_e IF_allow_in", false,-1);
        tracep->declBit(c+453,"cpu_top pc_e IF_handshake", false,-1);
        tracep->declBit(c+117,"cpu_top pc_e IF_valid", false,-1);
        tracep->declBit(c+118,"cpu_top pc_e IF_en", false,-1);
        tracep->declBus(c+119,"cpu_top pc_e inst_cache", false,-1, 31,0);
        tracep->declBit(c+120,"cpu_top pc_e cache_valid", false,-1);
        tracep->declBit(c+446,"cpu_top IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+1,"cpu_top IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+438,"cpu_top IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+439,"cpu_top IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declBit(c+441,"cpu_top IF_ID_reg_e I_IF_ID_allowout", false,-1);
        tracep->declBit(c+45,"cpu_top IF_ID_reg_e I_IF_ID_block", false,-1);
        tracep->declBit(c+107,"cpu_top IF_ID_reg_e I_IF_ID_jmp", false,-1);
        tracep->declBit(c+440,"cpu_top IF_ID_reg_e O_IF_ID_allowin", false,-1);
        tracep->declQuad(c+41,"cpu_top IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+43,"cpu_top IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+46,"cpu_top IF_ID_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+47,"cpu_top IF_ID_reg_e O_IF_ID_input_valid", false,-1);
        tracep->declBit(c+44,"cpu_top IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+47,"cpu_top IF_ID_reg_e input_valid", false,-1);
        tracep->declBit(c+121,"cpu_top IF_ID_reg_e output_valid", false,-1);
        tracep->declBus(c+27,"cpu_top blocking_unit_e I_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+28,"cpu_top blocking_unit_e I_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+47,"cpu_top blocking_unit_e I_ID_valid", false,-1);
        tracep->declBus(c+56,"cpu_top blocking_unit_e I_EX_rd_addr", false,-1, 4,0);
        tracep->declBit(c+67,"cpu_top blocking_unit_e I_EX_valid", false,-1);
        tracep->declBus(c+80,"cpu_top blocking_unit_e I_MEM_rd_addr", false,-1, 4,0);
        tracep->declBit(c+85,"cpu_top blocking_unit_e I_MEM_valid", false,-1);
        tracep->declBus(c+95,"cpu_top blocking_unit_e I_WB_rd_addr", false,-1, 4,0);
        tracep->declBit(c+88,"cpu_top blocking_unit_e I_WB_valid", false,-1);
        tracep->declBus(c+471,"cpu_top blocking_unit_e I_block_en", false,-1, 1,0);
        tracep->declBit(c+45,"cpu_top blocking_unit_e O_block", false,-1);
        tracep->declBit(c+122,"cpu_top blocking_unit_e EX_cong", false,-1);
        tracep->declBit(c+123,"cpu_top blocking_unit_e MEM_cong", false,-1);
        tracep->declBit(c+124,"cpu_top blocking_unit_e WB_cong", false,-1);
        tracep->declBit(c+125,"cpu_top blocking_unit_e MEM_block", false,-1);
        tracep->declBit(c+126,"cpu_top blocking_unit_e EX_block", false,-1);
        tracep->declBit(c+127,"cpu_top blocking_unit_e ID_block", false,-1);
        tracep->declBit(c+446,"cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+43,"cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"cpu_top decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+27,"cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+13,"cpu_top decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+28,"cpu_top decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+29,"cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+37,"cpu_top decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+38,"cpu_top decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+35,"cpu_top decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"cpu_top decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+30,"cpu_top decoder_e O_dnpc_sel", false,-1, 3,0);
        tracep->declBus(c+31,"cpu_top decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"cpu_top decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"cpu_top decoder_e O_opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+34,"cpu_top decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+40,"cpu_top decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+39,"cpu_top decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+128,"cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+129,"cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+28,"cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+27,"cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+29,"cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+130,"cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+131,"cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+132,"cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+133,"cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+134,"cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+135,"cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+136,"cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+38,"cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+137,"cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+138,"cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+139,"cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+140,"cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+141,"cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+142,"cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+140,"cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+143,"cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+144,"cpu_top decoder_e LD", false,-1);
        tracep->declBit(c+145,"cpu_top decoder_e LW", false,-1);
        tracep->declBit(c+146,"cpu_top decoder_e LWU", false,-1);
        tracep->declBit(c+147,"cpu_top decoder_e LH", false,-1);
        tracep->declBit(c+148,"cpu_top decoder_e LHU", false,-1);
        tracep->declBit(c+149,"cpu_top decoder_e LB", false,-1);
        tracep->declBit(c+150,"cpu_top decoder_e LBU", false,-1);
        tracep->declBit(c+151,"cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+152,"cpu_top decoder_e SLTI", false,-1);
        tracep->declBit(c+153,"cpu_top decoder_e SLTIU", false,-1);
        tracep->declBit(c+154,"cpu_top decoder_e XORI", false,-1);
        tracep->declBit(c+155,"cpu_top decoder_e ORI", false,-1);
        tracep->declBit(c+156,"cpu_top decoder_e ANDI", false,-1);
        tracep->declBit(c+157,"cpu_top decoder_e SLLI", false,-1);
        tracep->declBit(c+158,"cpu_top decoder_e SRLI", false,-1);
        tracep->declBit(c+159,"cpu_top decoder_e SRAI", false,-1);
        tracep->declBit(c+160,"cpu_top decoder_e ADDIW", false,-1);
        tracep->declBit(c+161,"cpu_top decoder_e SLLIW", false,-1);
        tracep->declBit(c+162,"cpu_top decoder_e SRLIW", false,-1);
        tracep->declBit(c+163,"cpu_top decoder_e SRAIW", false,-1);
        tracep->declBit(c+164,"cpu_top decoder_e ADD", false,-1);
        tracep->declBit(c+165,"cpu_top decoder_e SUB", false,-1);
        tracep->declBit(c+166,"cpu_top decoder_e SLL", false,-1);
        tracep->declBit(c+167,"cpu_top decoder_e SLT", false,-1);
        tracep->declBit(c+168,"cpu_top decoder_e SLTU", false,-1);
        tracep->declBit(c+169,"cpu_top decoder_e XOR", false,-1);
        tracep->declBit(c+170,"cpu_top decoder_e SRL", false,-1);
        tracep->declBit(c+171,"cpu_top decoder_e SRA", false,-1);
        tracep->declBit(c+172,"cpu_top decoder_e OR", false,-1);
        tracep->declBit(c+173,"cpu_top decoder_e AND", false,-1);
        tracep->declBit(c+174,"cpu_top decoder_e MUL", false,-1);
        tracep->declBit(c+175,"cpu_top decoder_e MULH", false,-1);
        tracep->declBit(c+176,"cpu_top decoder_e MULHSU", false,-1);
        tracep->declBit(c+177,"cpu_top decoder_e MULHU", false,-1);
        tracep->declBit(c+178,"cpu_top decoder_e DIV", false,-1);
        tracep->declBit(c+179,"cpu_top decoder_e DIVU", false,-1);
        tracep->declBit(c+180,"cpu_top decoder_e REM", false,-1);
        tracep->declBit(c+181,"cpu_top decoder_e REMU", false,-1);
        tracep->declBit(c+182,"cpu_top decoder_e ADDW", false,-1);
        tracep->declBit(c+183,"cpu_top decoder_e SUBW", false,-1);
        tracep->declBit(c+184,"cpu_top decoder_e SLLW", false,-1);
        tracep->declBit(c+185,"cpu_top decoder_e SRLW", false,-1);
        tracep->declBit(c+186,"cpu_top decoder_e SRAW", false,-1);
        tracep->declBit(c+187,"cpu_top decoder_e MULW", false,-1);
        tracep->declBit(c+188,"cpu_top decoder_e DIVW", false,-1);
        tracep->declBit(c+189,"cpu_top decoder_e DIVUW", false,-1);
        tracep->declBit(c+190,"cpu_top decoder_e REMW", false,-1);
        tracep->declBit(c+191,"cpu_top decoder_e REMUW", false,-1);
        tracep->declBit(c+192,"cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+193,"cpu_top decoder_e SW", false,-1);
        tracep->declBit(c+194,"cpu_top decoder_e SH", false,-1);
        tracep->declBit(c+195,"cpu_top decoder_e SB", false,-1);
        tracep->declBit(c+196,"cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+197,"cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+198,"cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+199,"cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+200,"cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+201,"cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+202,"cpu_top decoder_e ECALL", false,-1);
        tracep->declBit(c+203,"cpu_top decoder_e EBREAK", false,-1);
        tracep->declBit(c+204,"cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBit(c+205,"cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+206,"cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+207,"cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+208,"cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+209,"cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+210,"cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+211,"cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+477,"cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+478,"cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+479,"cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+480,"cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+481,"cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+482,"cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+483,"cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+484,"cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+485,"cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+486,"cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+487,"cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+488,"cpu_top decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+489,"cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+490,"cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBit(c+212,"cpu_top decoder_e add_flag", false,-1);
        tracep->declBit(c+204,"cpu_top decoder_e ld_flag", false,-1);
        tracep->declBit(c+213,"cpu_top decoder_e sub_flag", false,-1);
        tracep->declBit(c+214,"cpu_top decoder_e slt_flag", false,-1);
        tracep->declBit(c+215,"cpu_top decoder_e sltu_flag", false,-1);
        tracep->declBit(c+216,"cpu_top decoder_e xor_flag", false,-1);
        tracep->declBit(c+217,"cpu_top decoder_e or_flag", false,-1);
        tracep->declBit(c+218,"cpu_top decoder_e and_flag", false,-1);
        tracep->declBit(c+219,"cpu_top decoder_e sll_flag", false,-1);
        tracep->declBit(c+220,"cpu_top decoder_e srl_flag", false,-1);
        tracep->declBit(c+221,"cpu_top decoder_e sra_flag", false,-1);
        tracep->declBit(c+222,"cpu_top decoder_e mul_flag", false,-1);
        tracep->declBit(c+223,"cpu_top decoder_e mulh_flag", false,-1);
        tracep->declBit(c+224,"cpu_top decoder_e div_flag", false,-1);
        tracep->declBit(c+225,"cpu_top decoder_e rem_flag", false,-1);
        tracep->declBus(c+491,"cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+492,"cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+493,"cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+226,"cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+227,"cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+141,"cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+494,"cpu_top decoder_e OP2_RS2", false,-1, 1,0);
        tracep->declBus(c+495,"cpu_top decoder_e OP2_IMM", false,-1, 1,0);
        tracep->declBit(c+137,"cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+228,"cpu_top decoder_e imm_flag", false,-1);
        tracep->declBit(c+446,"cpu_top ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+44,"cpu_top ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+443,"cpu_top ID_EX_reg_e I_ID_EX_allowout", false,-1);
        tracep->declBit(c+441,"cpu_top ID_EX_reg_e O_ID_EX_allowin", false,-1);
        tracep->declBit(c+67,"cpu_top ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declQuad(c+7,"cpu_top ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+29,"cpu_top ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBit(c+37,"cpu_top ID_EX_reg_e I_reg_wen", false,-1);
        tracep->declBit(c+38,"cpu_top ID_EX_reg_e I_mem_wen", false,-1);
        tracep->declBus(c+35,"cpu_top ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+36,"cpu_top ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+31,"cpu_top ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+32,"cpu_top ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+33,"cpu_top ID_EX_reg_e I_op2_sel", false,-1, 1,0);
        tracep->declBus(c+40,"cpu_top ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+34,"cpu_top ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+39,"cpu_top ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declQuad(c+48,"cpu_top ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+52,"cpu_top ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+54,"cpu_top ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+56,"cpu_top ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+64,"cpu_top ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+65,"cpu_top ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+57,"cpu_top ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+58,"cpu_top ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+59,"cpu_top ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+60,"cpu_top ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+61,"cpu_top ID_EX_reg_e O_op2_sel", false,-1, 1,0);
        tracep->declBus(c+62,"cpu_top ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+63,"cpu_top ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+66,"cpu_top ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+41,"cpu_top ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+50,"cpu_top ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+67,"cpu_top ID_EX_reg_e O_ID_EX_input_valid", false,-1);
        tracep->declBus(c+43,"cpu_top ID_EX_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+68,"cpu_top ID_EX_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+46,"cpu_top ID_EX_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+69,"cpu_top ID_EX_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+67,"cpu_top ID_EX_reg_e input_valid", false,-1);
        tracep->declBit(c+470,"cpu_top ID_EX_reg_e output_valid", false,-1);
        tracep->declBus(c+472,"cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+496,"cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+229,"cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+60,"cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+15,"cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+235+i*2,"cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+497,"cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+472,"cpu_top alu_op2_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+473,"cpu_top alu_op2_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+241,"cpu_top alu_op2_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+61,"cpu_top alu_op2_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+17,"cpu_top alu_op2_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+245+i*2,"cpu_top alu_op2_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+474,"cpu_top alu_op2_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declQuad(c+15,"cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+63,"cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+62,"cpu_top alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+66,"cpu_top alu_e I_word_op_mask", false,-1);
        tracep->declQuad(c+25,"cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+19,"cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+249,"cpu_top alu_e op_add", false,-1);
        tracep->declBit(c+250,"cpu_top alu_e op_sub", false,-1);
        tracep->declBit(c+251,"cpu_top alu_e op_slt", false,-1);
        tracep->declBit(c+252,"cpu_top alu_e op_sltu", false,-1);
        tracep->declBit(c+253,"cpu_top alu_e op_xor", false,-1);
        tracep->declBit(c+254,"cpu_top alu_e op_or", false,-1);
        tracep->declBit(c+255,"cpu_top alu_e op_and", false,-1);
        tracep->declBit(c+256,"cpu_top alu_e op_sll", false,-1);
        tracep->declBit(c+257,"cpu_top alu_e op_srl", false,-1);
        tracep->declBit(c+258,"cpu_top alu_e op_sra", false,-1);
        tracep->declBit(c+259,"cpu_top alu_e op_mul", false,-1);
        tracep->declBit(c+260,"cpu_top alu_e op_mulh", false,-1);
        tracep->declBit(c+261,"cpu_top alu_e op_div", false,-1);
        tracep->declBit(c+262,"cpu_top alu_e op_rem", false,-1);
        tracep->declQuad(c+25,"cpu_top alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+263,"cpu_top alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+265,"cpu_top alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+267,"cpu_top alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+269,"cpu_top alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+271,"cpu_top alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+273,"cpu_top alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+275,"cpu_top alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+277,"cpu_top alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+279,"cpu_top alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+281,"cpu_top alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+283,"cpu_top alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+285,"cpu_top alu_e rem_result", false,-1, 63,0);
        tracep->declArray(c+287,"cpu_top alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+290,"cpu_top alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+293,"cpu_top alu_e sign_bit1", false,-1);
        tracep->declBit(c+294,"cpu_top alu_e sign_bit2", false,-1);
        tracep->declBit(c+295,"cpu_top alu_e sext1", false,-1);
        tracep->declBit(c+296,"cpu_top alu_e sext2", false,-1);
        tracep->declBit(c+297,"cpu_top alu_e div_sink", false,-1);
        tracep->declBit(c+298,"cpu_top alu_e rem_sink", false,-1);
        tracep->declQuad(c+15,"cpu_top alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+299,"cpu_top alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top alu_e result", false,-1, 63,0);
        tracep->declQuad(c+301,"cpu_top alu_e cin", false,-1, 63,0);
        tracep->declBit(c+303,"cpu_top alu_e cout", false,-1);
        tracep->declQuad(c+304,"cpu_top alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+293,"cpu_top alu_e shift_sign", false,-1);
        tracep->declQuad(c+306,"cpu_top alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+308,"cpu_top alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+309,"cpu_top alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+275,"cpu_top alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+311,"cpu_top alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+312,"cpu_top alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+314,"cpu_top alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+316,"cpu_top alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+318,"cpu_top alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+320,"cpu_top alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+322,"cpu_top alu_e word_sext", false,-1);
        tracep->declBit(c+446,"cpu_top EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+67,"cpu_top EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+98,"cpu_top EX_MEM_reg_e I_EX_MEM_allowout", false,-1);
        tracep->declBit(c+443,"cpu_top EX_MEM_reg_e O_EX_MEM_allowin", false,-1);
        tracep->declBit(c+442,"cpu_top EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+58,"cpu_top EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+57,"cpu_top EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+19,"cpu_top EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top EX_MEM_reg_e I_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+54,"cpu_top EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+65,"cpu_top EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declQuad(c+50,"cpu_top EX_MEM_reg_e I_pc", false,-1, 63,0);
        tracep->declBit(c+64,"cpu_top EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+56,"cpu_top EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+59,"cpu_top EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBit(c+460,"cpu_top EX_MEM_reg_e I_mem_data_valid", false,-1);
        tracep->declBus(c+70,"cpu_top EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+71,"cpu_top EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+72,"cpu_top EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+74,"cpu_top EX_MEM_reg_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"cpu_top EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+456,"cpu_top EX_MEM_reg_e O_mem_rd_en", false,-1);
        tracep->declBit(c+76,"cpu_top EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declQuad(c+77,"cpu_top EX_MEM_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+79,"cpu_top EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+80,"cpu_top EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+81,"cpu_top EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+85,"cpu_top EX_MEM_reg_e O_EX_MEM_input_valid", false,-1);
        tracep->declBus(c+68,"cpu_top EX_MEM_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+83,"cpu_top EX_MEM_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+69,"cpu_top EX_MEM_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+84,"cpu_top EX_MEM_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+323,"cpu_top EX_MEM_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+85,"cpu_top EX_MEM_reg_e input_valid", false,-1);
        tracep->declBit(c+445,"cpu_top EX_MEM_reg_e output_valid", false,-1);
        tracep->declQuad(c+23,"cpu_top mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+71,"cpu_top mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+461,"cpu_top mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+446,"cpu_top MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+442,"cpu_top MEM_WB_reg_e I_MEM_WB_valid", false,-1);
        tracep->declBit(c+98,"cpu_top MEM_WB_reg_e O_MEM_WB_allowin", false,-1);
        tracep->declBit(c+88,"cpu_top MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declQuad(c+77,"cpu_top MEM_WB_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+458,"cpu_top MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBus(c+70,"cpu_top MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+82,"cpu_top MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+72,"cpu_top MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+79,"cpu_top MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+80,"cpu_top MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+81,"cpu_top MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declQuad(c+86,"cpu_top MEM_WB_reg_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"cpu_top MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+91,"cpu_top MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+97,"cpu_top MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+92,"cpu_top MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+94,"cpu_top MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+95,"cpu_top MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+96,"cpu_top MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+88,"cpu_top MEM_WB_reg_e O_MEM_WB_input_valid", false,-1);
        tracep->declBus(c+83,"cpu_top MEM_WB_reg_e I_inst_debug", false,-1, 31,0);
        tracep->declBus(c+99,"cpu_top MEM_WB_reg_e O_inst_debug", false,-1, 31,0);
        tracep->declBit(c+84,"cpu_top MEM_WB_reg_e I_bubble_inst_debug", false,-1);
        tracep->declBit(c+100,"cpu_top MEM_WB_reg_e O_bubble_inst_debug", false,-1);
        tracep->declBit(c+88,"cpu_top MEM_WB_reg_e input_valid", false,-1);
        tracep->declBit(c+88,"cpu_top MEM_WB_reg_e output_valid", false,-1);
        tracep->declQuad(c+89,"cpu_top mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+91,"cpu_top mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+97,"cpu_top mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+21,"cpu_top mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+324,"cpu_top mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+325,"cpu_top mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+326,"cpu_top mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+327,"cpu_top mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+472,"cpu_top regin_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+496,"cpu_top regin_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+329,"cpu_top regin_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+96,"cpu_top regin_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+9,"cpu_top regin_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+335+i*2,"cpu_top regin_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+497,"cpu_top regin_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+446,"cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+447,"cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+9,"cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+341,"cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+95,"cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+27,"cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+28,"cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+13,"cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+342+i*2,"cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+406+i*1,"cpu_top gpr_e wen", true,(i+0));}}
    }
}

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcpu_top___024root__traceRegister(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__current_pc),64);
        tracep->fullQData(oldp+3,(vlSelf->cpu_top__DOT__dnpc),64);
        tracep->fullQData(oldp+5,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+7,(vlSelf->cpu_top__DOT__imm),64);
        tracep->fullQData(oldp+9,(vlSelf->cpu_top__DOT__wr_data),64);
        tracep->fullQData(oldp+11,(vlSelf->cpu_top__DOT__rs1_data),64);
        tracep->fullQData(oldp+13,(vlSelf->cpu_top__DOT__rs2_data),64);
        tracep->fullQData(oldp+15,(vlSelf->cpu_top__DOT__alu_op1),64);
        tracep->fullQData(oldp+17,(vlSelf->cpu_top__DOT__alu_op2),64);
        tracep->fullQData(oldp+19,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    ((1U 
                                                                      & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                                                         & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                                                      ? 0U
                                                                      : 
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                                                >> 0x1fU)))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))
                                     : vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)),64);
        tracep->fullQData(oldp+21,(vlSelf->cpu_top__DOT__mem_in),64);
        tracep->fullQData(oldp+23,(vlSelf->cpu_top__DOT__EX_MEM_rs2),64);
        tracep->fullQData(oldp+25,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
        tracep->fullCData(oldp+27,((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+28,((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+29,((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+30,(vlSelf->cpu_top__DOT__dnpc_sel),4);
        tracep->fullCData(oldp+31,(vlSelf->cpu_top__DOT__regin_sel),3);
        tracep->fullCData(oldp+32,((((1U & (- (IData)(
                                                      (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                                        | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                       | (0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)))))) 
                                     | (2U & (- (IData)(
                                                        (((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->cpu_top__DOT__IF_ID_inst))))))) 
                                    | (4U & (- (IData)(
                                                       (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->cpu_top__DOT__IF_ID_inst))))))),3);
        tracep->fullCData(oldp+33,(((1U & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                    | (2U & (- (IData)(
                                                       (((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                        | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))))))),2);
        tracep->fullSData(oldp+34,(((((((((((((((1U 
                                                 & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                                                | (2U 
                                                   & (- (IData)(
                                                                ((IData)(
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                          & (0x20U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U)))) 
                                                                 | (IData)(
                                                                           ((0x3bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                            & (0x20U 
                                                                               == 
                                                                               (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x19U))))))))) 
                                               | (4U 
                                                  & (- (IData)(
                                                               ((IData)(
                                                                        (0x2013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                                | (IData)(
                                                                          ((0x2033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                           & (0U 
                                                                              == 
                                                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                               >> 0x19U))))))))) 
                                              | (8U 
                                                 & (- (IData)(
                                                              ((IData)(
                                                                       (0x3013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                               | (IData)(
                                                                         ((0x3033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U))))))))) 
                                             | (0x10U 
                                                & (- (IData)(
                                                             ((IData)(
                                                                      (0x4013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                              | (IData)(
                                                                        ((0x4033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))))))) 
                                            | (0x20U 
                                               & (- (IData)(
                                                            ((IData)(
                                                                     (0x6013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                             | (IData)(
                                                                       ((0x6033U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x19U))))))))) 
                                           | (0x40U 
                                              & (- (IData)(
                                                           ((IData)(
                                                                    (0x7013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                            | (IData)(
                                                                      ((0x7033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x19U))))))))) 
                                          | (0x80U 
                                             & (- (IData)(
                                                          ((((IData)(
                                                                     ((0x1013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                          >> 0x1aU)))) 
                                                             | (IData)(
                                                                       ((0x1033U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x19U))))) 
                                                            | (IData)(
                                                                      ((0x101bU 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x19U))))) 
                                                           | (IData)(
                                                                     ((0x103bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                          >> 0x19U))))))))) 
                                         | (0x100U 
                                            & (- (IData)(
                                                         ((((IData)(
                                                                    ((0x5013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x1aU)))) 
                                                            | (IData)(
                                                                      ((0x5033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x19U))))) 
                                                           | (IData)(
                                                                     ((0x501bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                          >> 0x19U))))) 
                                                          | (IData)(
                                                                    ((0x503bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x19U))))))))) 
                                        | (0x200U & 
                                           (- (IData)(
                                                      ((((IData)(
                                                                 ((0x5013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                  & (0x10U 
                                                                     == 
                                                                     (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                      >> 0x1aU)))) 
                                                         | (IData)(
                                                                   ((0x5033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                    & (0x20U 
                                                                       == 
                                                                       (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                        >> 0x19U))))) 
                                                        | (IData)(
                                                                  ((0x501bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                       >> 0x19U))))) 
                                                       | (IData)(
                                                                 ((0x503bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                  & (0x20U 
                                                                     == 
                                                                     (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                      >> 0x19U))))))))) 
                                       | (0x400U & 
                                          (- (IData)(
                                                     ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW)))))) 
                                      | (0x800U & (- (IData)(
                                                             (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                                              | (IData)(
                                                                        ((0x3033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (1U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))))))) 
                                     | (0x1000U & (- (IData)(
                                                             ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                                                | (IData)(
                                                                          ((0x5033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                           & (1U 
                                                                              == 
                                                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                               >> 0x19U))))) 
                                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                                              | (IData)(
                                                                        ((0x503bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (1U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))))))) 
                                    | (0x2000U & (- (IData)(
                                                            ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                                               | (IData)(
                                                                         ((0x7033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                          & (1U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U))))) 
                                                              | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                                             | (IData)(
                                                                       ((0x703bU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                        & (1U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x19U)))))))))),15);
        tracep->fullCData(oldp+35,((0xffU & ((((- (IData)((IData)(
                                                                  (0x3023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu_top__DOT__IF_ID_inst))))) 
                                               | (0xfU 
                                                  & (- (IData)((IData)(
                                                                       (0x2023U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst))))))) 
                                              | (3U 
                                                 & (- (IData)((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__IF_ID_inst))))))) 
                                             | (1U 
                                                & (- (IData)((IData)(
                                                                     (0x23U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__IF_ID_inst))))))))),8);
        tracep->fullSData(oldp+36,(vlSelf->cpu_top__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+37,(vlSelf->cpu_top__DOT__reg_wen));
        tracep->fullBit(oldp+38,((0x23U == (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+39,(((0x1bU == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullCData(oldp+40,(vlSelf->cpu_top__DOT__alu_op_sext),2);
        tracep->fullQData(oldp+41,(vlSelf->cpu_top__DOT__IF_ID_pc),64);
        tracep->fullIData(oldp+43,(vlSelf->cpu_top__DOT__IF_ID_inst),32);
        tracep->fullBit(oldp+44,(vlSelf->cpu_top__DOT__IF_ID_valid));
        tracep->fullBit(oldp+45,(vlSelf->cpu_top__DOT__IF_ID_block));
        tracep->fullBit(oldp+46,(vlSelf->cpu_top__DOT__IF_ID_bubble));
        tracep->fullBit(oldp+47,(vlSelf->cpu_top__DOT__IF_ID_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+48,(vlSelf->cpu_top__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+50,(vlSelf->cpu_top__DOT__ID_EX_pc),64);
        tracep->fullQData(oldp+52,(vlSelf->cpu_top__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+54,(vlSelf->cpu_top__DOT__ID_EX_rs2),64);
        tracep->fullCData(oldp+56,(vlSelf->cpu_top__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+57,(vlSelf->cpu_top__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+58,(vlSelf->cpu_top__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+59,(vlSelf->cpu_top__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+60,(vlSelf->cpu_top__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+61,(vlSelf->cpu_top__DOT__ID_EX_op2_sel),2);
        tracep->fullCData(oldp+62,(vlSelf->cpu_top__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+63,(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+64,(vlSelf->cpu_top__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+65,(vlSelf->cpu_top__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+66,(vlSelf->cpu_top__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+67,(vlSelf->cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
        tracep->fullIData(oldp+68,(vlSelf->cpu_top__DOT__ID_EX_inst),32);
        tracep->fullBit(oldp+69,(vlSelf->cpu_top__DOT__ID_EX_bubble));
        tracep->fullSData(oldp+70,(vlSelf->cpu_top__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+71,(vlSelf->cpu_top__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+72,(vlSelf->cpu_top__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+74,(vlSelf->cpu_top__DOT__EX_MEM_mem_addr),64);
        tracep->fullBit(oldp+76,(vlSelf->cpu_top__DOT__EX_MEM_mem_wen));
        tracep->fullQData(oldp+77,(vlSelf->cpu_top__DOT__EX_MEM_pc),64);
        tracep->fullBit(oldp+79,(vlSelf->cpu_top__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+80,(vlSelf->cpu_top__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+81,(vlSelf->cpu_top__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+82,((7U & (IData)(vlSelf->cpu_top__DOT__EX_MEM_mem_addr))),3);
        tracep->fullIData(oldp+83,(vlSelf->cpu_top__DOT__EX_MEM_inst),32);
        tracep->fullBit(oldp+84,(vlSelf->cpu_top__DOT__EX_MEM_bubble));
        tracep->fullBit(oldp+85,(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+86,(vlSelf->cpu_top__DOT__MEM_WB_pc),64);
        tracep->fullBit(oldp+88,(vlSelf->cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
        tracep->fullQData(oldp+89,(vlSelf->cpu_top__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+91,(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+92,(vlSelf->cpu_top__DOT__MEM_WB_alu_out),64);
        tracep->fullBit(oldp+94,(vlSelf->cpu_top__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+95,(vlSelf->cpu_top__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+96,(vlSelf->cpu_top__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+97,(vlSelf->cpu_top__DOT__MEM_WB_shamt),3);
        tracep->fullBit(oldp+98,(vlSelf->cpu_top__DOT__MEM_WB_allowin));
        tracep->fullIData(oldp+99,(vlSelf->cpu_top__DOT__MEM_WB_inst),32);
        tracep->fullBit(oldp+100,(vlSelf->cpu_top__DOT__MEM_WB_bubble));
        tracep->fullQData(oldp+101,(((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                      ? vlSelf->cpu_top__DOT__rs1_data
                                      : vlSelf->cpu_top__DOT__IF_ID_pc)),64);
        tracep->fullQData(oldp+103,((vlSelf->cpu_top__DOT__imm 
                                     + ((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->cpu_top__DOT__rs1_data
                                         : vlSelf->cpu_top__DOT__IF_ID_pc))),64);
        tracep->fullQData(oldp+105,(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc),64);
        tracep->fullBit(oldp+107,((1U & (~ (IData)(vlSelf->cpu_top__DOT__dnpc_sel)))));
        tracep->fullWData(oldp+108,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+112,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
        tracep->fullQData(oldp+113,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+115,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+117,(vlSelf->cpu_top__DOT__pc_e__DOT__IF_valid));
        tracep->fullBit(oldp+118,(vlSelf->cpu_top__DOT__pc_e__DOT__IF_en));
        tracep->fullIData(oldp+119,(vlSelf->cpu_top__DOT__pc_e__DOT__inst_cache),32);
        tracep->fullBit(oldp+120,(vlSelf->cpu_top__DOT__pc_e__DOT__cache_valid));
        tracep->fullBit(oldp+121,((1U & (~ (IData)(vlSelf->cpu_top__DOT__IF_ID_block)))));
        tracep->fullBit(oldp+122,((((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)) 
                                   | ((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                      == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)))));
        tracep->fullBit(oldp+123,((((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr)) 
                                   | ((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                      == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr)))));
        tracep->fullBit(oldp+124,((((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr)) 
                                   | ((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                      == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr)))));
        tracep->fullBit(oldp+125,(((IData)(vlSelf->cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid)
                                    ? (1U & (((0x1fU 
                                               & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr)) 
                                             | ((0x1fU 
                                                 & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr))))
                                    : 0U)));
        tracep->fullBit(oldp+126,(((IData)(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)
                                    ? (1U & (((0x1fU 
                                               & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr)) 
                                             | ((0x1fU 
                                                 & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr))))
                                    : 0U)));
        tracep->fullBit(oldp+127,(((IData)(vlSelf->cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)
                                    ? (1U & (((0x1fU 
                                               & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)) 
                                             | ((0x1fU 
                                                 & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr))))
                                    : 0U)));
        tracep->fullCData(oldp+128,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+129,((0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+130,((7U & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+131,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+132,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+133,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+134,((0xfffff000U & vlSelf->cpu_top__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+135,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+136,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+137,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+138,((0x63U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+139,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+140,((0x6fU == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+141,((0x37U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+142,((0x17U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+143,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+144,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+145,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+146,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+147,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+148,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+149,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+150,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+151,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+152,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+153,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+154,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+155,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+156,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+157,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+158,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+159,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+160,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+161,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+162,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+163,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+164,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+165,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+166,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+167,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+168,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+169,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+170,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+171,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+172,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+173,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+174,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+175,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+176,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+177,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+178,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+179,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+180,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+181,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+182,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+183,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+184,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+185,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+186,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+187,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+188,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+189,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+190,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+191,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+192,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+193,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+194,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+195,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+196,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+197,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+198,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+199,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+200,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+201,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+202,((0x73U == vlSelf->cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+203,((0x100073U == vlSelf->cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+204,((3U == (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+205,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+206,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+208,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+209,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+210,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+212,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+213,(((IData)(((0x33U 
                                             == (0x707fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                            & (0x20U 
                                               == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                   | (IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+214,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+215,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+216,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+217,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+218,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+219,(((((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x1033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x101bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+220,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+221,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+222,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+223,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+224,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+225,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                     | (IData)(((0x7033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                   | (IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+226,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+227,((((0x63U == (0x7fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+228,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullWData(oldp+229,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+235,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+237,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+239,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+241,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
        tracep->fullQData(oldp+245,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+247,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+249,((1U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+251,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+252,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+253,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+254,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+255,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+256,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+257,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+258,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+259,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+260,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+261,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+262,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullQData(oldp+263,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp111, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp112, __Vtemp110, __Vtemp111);
        VL_EXTEND_WQ(65,64, __Vtemp113, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp114, __Vtemp112, __Vtemp113);
        tracep->fullQData(oldp+265,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp114[2U])))))),64);
        tracep->fullQData(oldp+267,((vlSelf->cpu_top__DOT__alu_op1 
                                     ^ vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+269,((vlSelf->cpu_top__DOT__alu_op1 
                                     | vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+271,((vlSelf->cpu_top__DOT__alu_op1 
                                     & vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+273,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+275,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+277,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                                              ? (IData)(
                                                                        (vlSelf->cpu_top__DOT__alu_op1 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelf->cpu_top__DOT__alu_op1 
                                                                         >> 0x3fU))))))) 
                                      & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (~ (0xffffffffULL 
                                                >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                          : (~ (0xffffffffffffffffULL 
                                                >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))) 
                                     | vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)),64);
        VL_EXTENDS_WW(128,65, __Vtemp116, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp117, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp118, __Vtemp116, __Vtemp117);
        tracep->fullQData(oldp+279,((((QData)((IData)(
                                                      __Vtemp118[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp118[0U])))),64);
        VL_EXTENDS_WW(128,65, __Vtemp119, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp120, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp121, __Vtemp119, __Vtemp120);
        tracep->fullQData(oldp+281,((((QData)((IData)(
                                                      __Vtemp121[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp121[2U])))),64);
        VL_DIVS_WWW(65, __Vtemp123, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+283,((((QData)((IData)(
                                                      __Vtemp123[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp123[0U])))),64);
        VL_MODDIVS_WWW(65, __Vtemp126, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+285,((((QData)((IData)(
                                                      __Vtemp126[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp126[0U])))),64);
        tracep->fullWData(oldp+287,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+290,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+293,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+294,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+295,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
        tracep->fullBit(oldp+296,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
        VL_DIVS_WWW(65, __Vtemp129, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+297,((1U & __Vtemp129[2U])));
        VL_MODDIVS_WWW(65, __Vtemp132, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+298,((1U & __Vtemp132[2U])));
        tracep->fullQData(oldp+299,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+301,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp135, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp136, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp137, __Vtemp135, __Vtemp136);
        VL_EXTEND_WQ(65,64, __Vtemp138, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp139, __Vtemp137, __Vtemp138);
        tracep->fullBit(oldp+303,((1U & __Vtemp139[2U])));
        tracep->fullQData(oldp+304,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+306,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+308,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+309,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+311,(((0x80U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+312,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+316,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+318,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+320,((((QData)((IData)(
                                                      (- (IData)(
                                                                 ((1U 
                                                                   & ((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x3000U 
                                                                                & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                                                   ? 0U
                                                                   : 
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                                              >> 0x1fU)))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))),64);
        tracep->fullBit(oldp+322,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullBit(oldp+323,(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
        tracep->fullBit(oldp+324,((1U & ((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+325,((1U & (((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
                                          >> 8U) & 
                                         ((0xfU == 
                                           (0xffU & (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))
                                           ? (IData)(
                                                     (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                      >> 0x1fU))
                                           : ((3U == 
                                               (0xffU 
                                                & (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))
                                               ? (IData)(
                                                         (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                          >> 0xfU))
                                               : ((1U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb))) 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                             >> 7U)))))))));
        tracep->fullCData(oldp+326,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+327,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+329,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+335,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+337,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+339,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+341,(vlSelf->cpu_top__DOT____Vcellinp__gpr_e__I_wen));
        tracep->fullQData(oldp+342,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+344,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+346,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+348,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+350,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+352,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+354,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+356,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+358,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+360,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+362,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+364,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+366,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+368,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+370,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+372,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+374,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+376,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+378,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+380,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+382,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+384,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+386,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+388,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+390,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+392,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+394,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+396,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+398,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+400,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+402,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+404,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+406,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+407,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+408,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+409,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+410,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+411,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+412,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+413,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+414,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+415,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+416,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+417,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+418,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+419,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+420,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+421,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+422,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+423,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+424,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+425,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+426,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+427,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+428,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+429,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+430,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+431,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+432,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+433,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+434,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+435,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+436,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+437,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullIData(oldp+438,(vlSelf->cpu_top__DOT__current_inst),32);
        tracep->fullBit(oldp+439,(vlSelf->cpu_top__DOT__IF_valid));
        tracep->fullBit(oldp+440,(vlSelf->cpu_top__DOT__IF_ID_allowin));
        tracep->fullBit(oldp+441,(vlSelf->cpu_top__DOT__ID_EX_allowin));
        tracep->fullBit(oldp+442,(vlSelf->cpu_top__DOT__EX_MEM_valid));
        tracep->fullBit(oldp+443,(vlSelf->cpu_top__DOT__EX_MEM_allowin));
        tracep->fullBit(oldp+444,(vlSelf->cpu_top__DOT__pc_e__DOT__IF_ready_go));
        tracep->fullBit(oldp+445,(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        tracep->fullBit(oldp+446,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+447,(vlSelf->I_rst));
        tracep->fullIData(oldp+448,(vlSelf->I_inst),32);
        tracep->fullBit(oldp+449,(vlSelf->I_inst_valid));
        tracep->fullBit(oldp+450,(vlSelf->I_inst_addr_ready));
        tracep->fullQData(oldp+451,(vlSelf->O_pc),64);
        tracep->fullBit(oldp+453,(vlSelf->O_pc_valid));
        tracep->fullQData(oldp+454,(vlSelf->O_mem_addr),64);
        tracep->fullBit(oldp+456,(vlSelf->O_mem_rd_en));
        tracep->fullBit(oldp+457,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+458,(vlSelf->I_mem_rd_data),64);
        tracep->fullBit(oldp+460,(vlSelf->I_mem_rd_data_valid));
        tracep->fullQData(oldp+461,(vlSelf->O_mem_wr_data),64);
        tracep->fullCData(oldp+463,(vlSelf->O_mem_wr_strb),8);
        tracep->fullBit(oldp+464,((1U & ((~ (IData)(vlSelf->cpu_top__DOT__pc_e__DOT__IF_valid)) 
                                         | ((IData)(vlSelf->cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                            & (IData)(vlSelf->cpu_top__DOT__IF_ID_allowin))))));
        tracep->fullCData(oldp+465,(vlSelf->cpu_top__DOT__ID_EX_dnpc_sel),3);
        tracep->fullBit(oldp+466,(vlSelf->cpu_top__DOT__ID_EX_block));
        tracep->fullQData(oldp+467,(vlSelf->cpu_top__DOT__EX_MEM_mem_data),64);
        tracep->fullBit(oldp+469,(vlSelf->cpu_top__DOT__EX_MEM_block));
        tracep->fullBit(oldp+470,(1U));
        tracep->fullCData(oldp+471,(3U),2);
        tracep->fullIData(oldp+472,(0x40U),32);
        tracep->fullIData(oldp+473,(2U),32);
        tracep->fullIData(oldp+474,(2U),32);
        tracep->fullQData(oldp+475,(0x7ffffffcULL),64);
        tracep->fullSData(oldp+477,(1U),15);
        tracep->fullSData(oldp+478,(2U),15);
        tracep->fullSData(oldp+479,(4U),15);
        tracep->fullSData(oldp+480,(8U),15);
        tracep->fullSData(oldp+481,(0x10U),15);
        tracep->fullSData(oldp+482,(0x20U),15);
        tracep->fullSData(oldp+483,(0x40U),15);
        tracep->fullSData(oldp+484,(0x80U),15);
        tracep->fullSData(oldp+485,(0x100U),15);
        tracep->fullSData(oldp+486,(0x200U),15);
        tracep->fullSData(oldp+487,(0x400U),15);
        tracep->fullSData(oldp+488,(0x800U),15);
        tracep->fullSData(oldp+489,(0x1000U),15);
        tracep->fullSData(oldp+490,(0x2000U),15);
        tracep->fullCData(oldp+491,(1U),3);
        tracep->fullCData(oldp+492,(2U),3);
        tracep->fullCData(oldp+493,(4U),3);
        tracep->fullCData(oldp+494,(1U),2);
        tracep->fullCData(oldp+495,(2U),2);
        tracep->fullIData(oldp+496,(3U),32);
        tracep->fullIData(oldp+497,(3U),32);
    }
}
