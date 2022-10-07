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
        tracep->declBit(c+416,"I_sys_clk", false,-1);
        tracep->declBit(c+417,"I_rst", false,-1);
        tracep->declBus(c+418,"I_inst", false,-1, 31,0);
        tracep->declBit(c+419,"I_inst_valid", false,-1);
        tracep->declBit(c+420,"I_inst_addr_ready", false,-1);
        tracep->declQuad(c+421,"O_pc", false,-1, 63,0);
        tracep->declBit(c+423,"O_pc_valid", false,-1);
        tracep->declQuad(c+424,"O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+426,"O_mem_rd_en", false,-1);
        tracep->declBit(c+427,"O_mem_wen", false,-1);
        tracep->declQuad(c+428,"I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+430,"I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+431,"O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+433,"O_mem_wr_strb", false,-1, 7,0);
        tracep->declBit(c+416,"cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top I_rst", false,-1);
        tracep->declBus(c+418,"cpu_top I_inst", false,-1, 31,0);
        tracep->declBit(c+419,"cpu_top I_inst_valid", false,-1);
        tracep->declBit(c+420,"cpu_top I_inst_addr_ready", false,-1);
        tracep->declQuad(c+421,"cpu_top O_pc", false,-1, 63,0);
        tracep->declBit(c+423,"cpu_top O_pc_valid", false,-1);
        tracep->declQuad(c+424,"cpu_top O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+426,"cpu_top O_mem_rd_en", false,-1);
        tracep->declBit(c+427,"cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+428,"cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+430,"cpu_top I_mem_rd_data_valid", false,-1);
        tracep->declQuad(c+431,"cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+433,"cpu_top O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+1,"cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top snpc", false,-1, 63,0);
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
        tracep->declQuad(c+41,"cpu_top IF_ID_pc", false,-1, 63,0);
        tracep->declBus(c+43,"cpu_top IF_ID_inst", false,-1, 31,0);
        tracep->declBit(c+44,"cpu_top IF_ID_valid", false,-1);
        tracep->declQuad(c+45,"cpu_top ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+47,"cpu_top ID_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+49,"cpu_top ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+51,"cpu_top ID_EX_rs2", false,-1, 63,0);
        tracep->declBus(c+53,"cpu_top ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+54,"cpu_top ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+55,"cpu_top ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+435,"cpu_top ID_EX_dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+56,"cpu_top ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+57,"cpu_top ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+58,"cpu_top ID_EX_op2_sel", false,-1, 1,0);
        tracep->declBus(c+59,"cpu_top ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+60,"cpu_top ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+61,"cpu_top ID_EX_reg_wen", false,-1);
        tracep->declBit(c+62,"cpu_top ID_EX_mem_wen", false,-1);
        tracep->declBit(c+63,"cpu_top ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+64,"cpu_top ID_EX_valid", false,-1);
        tracep->declBit(c+65,"cpu_top EX_MEM_valid", false,-1);
        tracep->declBus(c+66,"cpu_top EX_MEM_rstrb", false,-1, 8,0);
        tracep->declBus(c+67,"cpu_top EX_MEM_wstrb", false,-1, 7,0);
        tracep->declQuad(c+68,"cpu_top EX_MEM_alu_out", false,-1, 63,0);
        tracep->declQuad(c+70,"cpu_top EX_MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"cpu_top EX_MEM_rs2", false,-1, 63,0);
        tracep->declBit(c+72,"cpu_top EX_MEM_mem_wen", false,-1);
        tracep->declQuad(c+73,"cpu_top EX_MEM_pc", false,-1, 63,0);
        tracep->declBit(c+75,"cpu_top EX_MEM_reg_wen", false,-1);
        tracep->declBus(c+76,"cpu_top EX_MEM_rd_addr", false,-1, 4,0);
        tracep->declBus(c+77,"cpu_top EX_MEM_regin_sel", false,-1, 2,0);
        tracep->declBus(c+78,"cpu_top EX_MEM_shamt", false,-1, 2,0);
        tracep->declQuad(c+79,"cpu_top MEM_WB_pc", false,-1, 63,0);
        tracep->declBit(c+81,"cpu_top MEM_WB_valid", false,-1);
        tracep->declQuad(c+82,"cpu_top MEM_WB_mem_data", false,-1, 63,0);
        tracep->declBus(c+84,"cpu_top MEM_WB_mem_rstrb", false,-1, 8,0);
        tracep->declQuad(c+85,"cpu_top MEM_WB_alu_out", false,-1, 63,0);
        tracep->declBit(c+87,"cpu_top MEM_WB_reg_wen", false,-1);
        tracep->declBus(c+88,"cpu_top MEM_WB_rd_addr", false,-1, 4,0);
        tracep->declBus(c+89,"cpu_top MEM_WB_regin_sel", false,-1, 2,0);
        tracep->declBus(c+90,"cpu_top MEM_WB_shamt", false,-1, 2,0);
        tracep->declBit(c+436,"cpu_top inst_ready", false,-1);
        tracep->declQuad(c+11,"cpu_top npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+30,"cpu_top npc_e I_dnpc_sel", false,-1, 3,0);
        tracep->declQuad(c+3,"cpu_top npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+91,"cpu_top npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+93,"cpu_top npc_e dnpc_sum", false,-1, 63,0);
        tracep->declQuad(c+95,"cpu_top npc_e dnpc", false,-1, 63,0);
        tracep->declBit(c+97,"cpu_top npc_e dnpc_sel", false,-1);
        tracep->declBus(c+437,"cpu_top npc_e nextpc_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+438,"cpu_top npc_e nextpc_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+98,"cpu_top npc_e nextpc_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+102,"cpu_top npc_e nextpc_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+95,"cpu_top npc_e nextpc_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+103+i*2,"cpu_top npc_e nextpc_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+439,"cpu_top npc_e nextpc_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+416,"cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+3,"cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declBit(c+436,"cpu_top pc_e I_dnpc_en", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declBit(c+423,"cpu_top pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+440,"cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+416,"cpu_top IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+1,"cpu_top IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+418,"cpu_top IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+419,"cpu_top IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declQuad(c+41,"cpu_top IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+43,"cpu_top IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+44,"cpu_top IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declBit(c+416,"cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top decoder_e I_rst", false,-1);
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
        tracep->declBus(c+107,"cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+108,"cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+28,"cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+27,"cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+29,"cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+109,"cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+110,"cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+111,"cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+112,"cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+113,"cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+114,"cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+115,"cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+38,"cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+116,"cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+117,"cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+118,"cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+119,"cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+120,"cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+121,"cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+119,"cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+122,"cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+123,"cpu_top decoder_e LD", false,-1);
        tracep->declBit(c+124,"cpu_top decoder_e LW", false,-1);
        tracep->declBit(c+125,"cpu_top decoder_e LWU", false,-1);
        tracep->declBit(c+126,"cpu_top decoder_e LH", false,-1);
        tracep->declBit(c+127,"cpu_top decoder_e LHU", false,-1);
        tracep->declBit(c+128,"cpu_top decoder_e LB", false,-1);
        tracep->declBit(c+129,"cpu_top decoder_e LBU", false,-1);
        tracep->declBit(c+130,"cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+131,"cpu_top decoder_e SLTI", false,-1);
        tracep->declBit(c+132,"cpu_top decoder_e SLTIU", false,-1);
        tracep->declBit(c+133,"cpu_top decoder_e XORI", false,-1);
        tracep->declBit(c+134,"cpu_top decoder_e ORI", false,-1);
        tracep->declBit(c+135,"cpu_top decoder_e ANDI", false,-1);
        tracep->declBit(c+136,"cpu_top decoder_e SLLI", false,-1);
        tracep->declBit(c+137,"cpu_top decoder_e SRLI", false,-1);
        tracep->declBit(c+138,"cpu_top decoder_e SRAI", false,-1);
        tracep->declBit(c+139,"cpu_top decoder_e ADDIW", false,-1);
        tracep->declBit(c+140,"cpu_top decoder_e SLLIW", false,-1);
        tracep->declBit(c+141,"cpu_top decoder_e SRLIW", false,-1);
        tracep->declBit(c+142,"cpu_top decoder_e SRAIW", false,-1);
        tracep->declBit(c+143,"cpu_top decoder_e ADD", false,-1);
        tracep->declBit(c+144,"cpu_top decoder_e SUB", false,-1);
        tracep->declBit(c+145,"cpu_top decoder_e SLL", false,-1);
        tracep->declBit(c+146,"cpu_top decoder_e SLT", false,-1);
        tracep->declBit(c+147,"cpu_top decoder_e SLTU", false,-1);
        tracep->declBit(c+148,"cpu_top decoder_e XOR", false,-1);
        tracep->declBit(c+149,"cpu_top decoder_e SRL", false,-1);
        tracep->declBit(c+150,"cpu_top decoder_e SRA", false,-1);
        tracep->declBit(c+151,"cpu_top decoder_e OR", false,-1);
        tracep->declBit(c+152,"cpu_top decoder_e AND", false,-1);
        tracep->declBit(c+153,"cpu_top decoder_e MUL", false,-1);
        tracep->declBit(c+154,"cpu_top decoder_e MULH", false,-1);
        tracep->declBit(c+155,"cpu_top decoder_e MULHSU", false,-1);
        tracep->declBit(c+156,"cpu_top decoder_e MULHU", false,-1);
        tracep->declBit(c+157,"cpu_top decoder_e DIV", false,-1);
        tracep->declBit(c+158,"cpu_top decoder_e DIVU", false,-1);
        tracep->declBit(c+159,"cpu_top decoder_e REM", false,-1);
        tracep->declBit(c+160,"cpu_top decoder_e REMU", false,-1);
        tracep->declBit(c+161,"cpu_top decoder_e ADDW", false,-1);
        tracep->declBit(c+162,"cpu_top decoder_e SUBW", false,-1);
        tracep->declBit(c+163,"cpu_top decoder_e SLLW", false,-1);
        tracep->declBit(c+164,"cpu_top decoder_e SRLW", false,-1);
        tracep->declBit(c+165,"cpu_top decoder_e SRAW", false,-1);
        tracep->declBit(c+166,"cpu_top decoder_e MULW", false,-1);
        tracep->declBit(c+167,"cpu_top decoder_e DIVW", false,-1);
        tracep->declBit(c+168,"cpu_top decoder_e DIVUW", false,-1);
        tracep->declBit(c+169,"cpu_top decoder_e REMW", false,-1);
        tracep->declBit(c+170,"cpu_top decoder_e REMUW", false,-1);
        tracep->declBit(c+171,"cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+172,"cpu_top decoder_e SW", false,-1);
        tracep->declBit(c+173,"cpu_top decoder_e SH", false,-1);
        tracep->declBit(c+174,"cpu_top decoder_e SB", false,-1);
        tracep->declBit(c+175,"cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+176,"cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+177,"cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+178,"cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+179,"cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+180,"cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+181,"cpu_top decoder_e ECALL", false,-1);
        tracep->declBit(c+182,"cpu_top decoder_e EBREAK", false,-1);
        tracep->declBit(c+183,"cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBus(c+442,"cpu_top decoder_e SNPC", false,-1, 2,0);
        tracep->declBus(c+443,"cpu_top decoder_e DNPC", false,-1, 2,0);
        tracep->declBus(c+444,"cpu_top decoder_e JALR_DNPC", false,-1, 2,0);
        tracep->declBit(c+184,"cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+185,"cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+186,"cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+187,"cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+188,"cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+189,"cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+190,"cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+445,"cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+446,"cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+447,"cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+448,"cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+449,"cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+450,"cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+451,"cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+452,"cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+453,"cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+454,"cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+455,"cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+456,"cpu_top decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+457,"cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+458,"cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBit(c+191,"cpu_top decoder_e add_flag", false,-1);
        tracep->declBit(c+183,"cpu_top decoder_e ld_flag", false,-1);
        tracep->declBit(c+192,"cpu_top decoder_e sub_flag", false,-1);
        tracep->declBit(c+193,"cpu_top decoder_e slt_flag", false,-1);
        tracep->declBit(c+194,"cpu_top decoder_e sltu_flag", false,-1);
        tracep->declBit(c+195,"cpu_top decoder_e xor_flag", false,-1);
        tracep->declBit(c+196,"cpu_top decoder_e or_flag", false,-1);
        tracep->declBit(c+197,"cpu_top decoder_e and_flag", false,-1);
        tracep->declBit(c+198,"cpu_top decoder_e sll_flag", false,-1);
        tracep->declBit(c+199,"cpu_top decoder_e srl_flag", false,-1);
        tracep->declBit(c+200,"cpu_top decoder_e sra_flag", false,-1);
        tracep->declBit(c+201,"cpu_top decoder_e mul_flag", false,-1);
        tracep->declBit(c+202,"cpu_top decoder_e mulh_flag", false,-1);
        tracep->declBit(c+203,"cpu_top decoder_e div_flag", false,-1);
        tracep->declBit(c+204,"cpu_top decoder_e rem_flag", false,-1);
        tracep->declBus(c+442,"cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+443,"cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+444,"cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+205,"cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+206,"cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+120,"cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+459,"cpu_top decoder_e OP2_RS2", false,-1, 1,0);
        tracep->declBus(c+460,"cpu_top decoder_e OP2_IMM", false,-1, 1,0);
        tracep->declBit(c+116,"cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+207,"cpu_top decoder_e imm_flag", false,-1);
        tracep->declBit(c+416,"cpu_top ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+44,"cpu_top ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+64,"cpu_top ID_EX_reg_e O_ID_EX_valid", false,-1);
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
        tracep->declQuad(c+45,"cpu_top ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+49,"cpu_top ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+51,"cpu_top ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+53,"cpu_top ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBit(c+61,"cpu_top ID_EX_reg_e O_reg_wen", false,-1);
        tracep->declBit(c+62,"cpu_top ID_EX_reg_e O_mem_wen", false,-1);
        tracep->declBus(c+54,"cpu_top ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+55,"cpu_top ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+56,"cpu_top ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+57,"cpu_top ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+58,"cpu_top ID_EX_reg_e O_op2_sel", false,-1, 1,0);
        tracep->declBus(c+59,"cpu_top ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+60,"cpu_top ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+63,"cpu_top ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+41,"cpu_top ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"cpu_top ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+437,"cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+461,"cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+208,"cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+57,"cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+15,"cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+214+i*2,"cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+462,"cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+437,"cpu_top alu_op2_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+438,"cpu_top alu_op2_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+220,"cpu_top alu_op2_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+58,"cpu_top alu_op2_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+17,"cpu_top alu_op2_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+224+i*2,"cpu_top alu_op2_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+439,"cpu_top alu_op2_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declQuad(c+15,"cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+60,"cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+59,"cpu_top alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+63,"cpu_top alu_e I_word_op_mask", false,-1);
        tracep->declQuad(c+25,"cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+19,"cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+228,"cpu_top alu_e op_add", false,-1);
        tracep->declBit(c+229,"cpu_top alu_e op_sub", false,-1);
        tracep->declBit(c+230,"cpu_top alu_e op_slt", false,-1);
        tracep->declBit(c+231,"cpu_top alu_e op_sltu", false,-1);
        tracep->declBit(c+232,"cpu_top alu_e op_xor", false,-1);
        tracep->declBit(c+233,"cpu_top alu_e op_or", false,-1);
        tracep->declBit(c+234,"cpu_top alu_e op_and", false,-1);
        tracep->declBit(c+235,"cpu_top alu_e op_sll", false,-1);
        tracep->declBit(c+236,"cpu_top alu_e op_srl", false,-1);
        tracep->declBit(c+237,"cpu_top alu_e op_sra", false,-1);
        tracep->declBit(c+238,"cpu_top alu_e op_mul", false,-1);
        tracep->declBit(c+239,"cpu_top alu_e op_mulh", false,-1);
        tracep->declBit(c+240,"cpu_top alu_e op_div", false,-1);
        tracep->declBit(c+241,"cpu_top alu_e op_rem", false,-1);
        tracep->declQuad(c+25,"cpu_top alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+242,"cpu_top alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+244,"cpu_top alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+246,"cpu_top alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+248,"cpu_top alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+250,"cpu_top alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+252,"cpu_top alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+254,"cpu_top alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+256,"cpu_top alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+258,"cpu_top alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+260,"cpu_top alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+262,"cpu_top alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+264,"cpu_top alu_e rem_result", false,-1, 63,0);
        tracep->declArray(c+266,"cpu_top alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+269,"cpu_top alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+272,"cpu_top alu_e sign_bit1", false,-1);
        tracep->declBit(c+273,"cpu_top alu_e sign_bit2", false,-1);
        tracep->declBit(c+274,"cpu_top alu_e sext1", false,-1);
        tracep->declBit(c+275,"cpu_top alu_e sext2", false,-1);
        tracep->declBit(c+276,"cpu_top alu_e div_sink", false,-1);
        tracep->declBit(c+277,"cpu_top alu_e rem_sink", false,-1);
        tracep->declQuad(c+15,"cpu_top alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+278,"cpu_top alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top alu_e result", false,-1, 63,0);
        tracep->declQuad(c+280,"cpu_top alu_e cin", false,-1, 63,0);
        tracep->declBit(c+282,"cpu_top alu_e cout", false,-1);
        tracep->declQuad(c+283,"cpu_top alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+272,"cpu_top alu_e shift_sign", false,-1);
        tracep->declQuad(c+285,"cpu_top alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+287,"cpu_top alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+288,"cpu_top alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+254,"cpu_top alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+290,"cpu_top alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+291,"cpu_top alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+293,"cpu_top alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+295,"cpu_top alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+297,"cpu_top alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+299,"cpu_top alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+301,"cpu_top alu_e word_sext", false,-1);
        tracep->declBit(c+416,"cpu_top EX_MEM_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top EX_MEM_reg_e I_rst", false,-1);
        tracep->declBit(c+64,"cpu_top EX_MEM_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+65,"cpu_top EX_MEM_reg_e O_EX_MEM_valid", false,-1);
        tracep->declBus(c+55,"cpu_top EX_MEM_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+54,"cpu_top EX_MEM_reg_e I_wstrb", false,-1, 7,0);
        tracep->declQuad(c+19,"cpu_top EX_MEM_reg_e I_alu_out", false,-1, 63,0);
        tracep->declQuad(c+25,"cpu_top EX_MEM_reg_e I_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+51,"cpu_top EX_MEM_reg_e I_rs2_data", false,-1, 63,0);
        tracep->declBit(c+62,"cpu_top EX_MEM_reg_e I_mem_wen", false,-1);
        tracep->declQuad(c+47,"cpu_top EX_MEM_reg_e I_pc", false,-1, 63,0);
        tracep->declBit(c+61,"cpu_top EX_MEM_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+53,"cpu_top EX_MEM_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+56,"cpu_top EX_MEM_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+66,"cpu_top EX_MEM_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+67,"cpu_top EX_MEM_reg_e O_wstrb", false,-1, 7,0);
        tracep->declQuad(c+68,"cpu_top EX_MEM_reg_e O_alu_out", false,-1, 63,0);
        tracep->declQuad(c+70,"cpu_top EX_MEM_reg_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"cpu_top EX_MEM_reg_e O_rs2_data", false,-1, 63,0);
        tracep->declBit(c+72,"cpu_top EX_MEM_reg_e O_mem_wen", false,-1);
        tracep->declQuad(c+73,"cpu_top EX_MEM_reg_e O_pc", false,-1, 63,0);
        tracep->declBit(c+75,"cpu_top EX_MEM_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+76,"cpu_top EX_MEM_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+77,"cpu_top EX_MEM_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declQuad(c+23,"cpu_top mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+67,"cpu_top mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+431,"cpu_top mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+416,"cpu_top MEM_WB_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top MEM_WB_reg_e I_rst", false,-1);
        tracep->declBit(c+65,"cpu_top MEM_WB_reg_e I_EX_MEM_valid", false,-1);
        tracep->declBit(c+81,"cpu_top MEM_WB_reg_e O_MEM_WB_valid", false,-1);
        tracep->declQuad(c+73,"cpu_top MEM_WB_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+428,"cpu_top MEM_WB_reg_e I_mem_data", false,-1, 63,0);
        tracep->declBit(c+430,"cpu_top MEM_WB_reg_e I_mem_data_valid", false,-1);
        tracep->declBus(c+66,"cpu_top MEM_WB_reg_e I_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+78,"cpu_top MEM_WB_reg_e I_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+68,"cpu_top MEM_WB_reg_e I_alu_out", false,-1, 63,0);
        tracep->declBit(c+75,"cpu_top MEM_WB_reg_e I_reg_wen", false,-1);
        tracep->declBus(c+76,"cpu_top MEM_WB_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+77,"cpu_top MEM_WB_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declQuad(c+79,"cpu_top MEM_WB_reg_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+82,"cpu_top MEM_WB_reg_e O_mem_data", false,-1, 63,0);
        tracep->declBus(c+84,"cpu_top MEM_WB_reg_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+90,"cpu_top MEM_WB_reg_e O_mem_shamt", false,-1, 2,0);
        tracep->declQuad(c+85,"cpu_top MEM_WB_reg_e O_alu_out", false,-1, 63,0);
        tracep->declBit(c+87,"cpu_top MEM_WB_reg_e O_reg_wen", false,-1);
        tracep->declBus(c+88,"cpu_top MEM_WB_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+89,"cpu_top MEM_WB_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBit(c+302,"cpu_top MEM_WB_reg_e mem_rd_en", false,-1);
        tracep->declBit(c+434,"cpu_top MEM_WB_reg_e WB_data_valid", false,-1);
        tracep->declQuad(c+82,"cpu_top mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+84,"cpu_top mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+90,"cpu_top mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+21,"cpu_top mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+303,"cpu_top mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+304,"cpu_top mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+305,"cpu_top mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+306,"cpu_top mem_ld_e ld_data", false,-1, 63,0);
        tracep->declBus(c+437,"cpu_top regin_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+461,"cpu_top regin_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+308,"cpu_top regin_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+89,"cpu_top regin_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+9,"cpu_top regin_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+314+i*2,"cpu_top regin_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+462,"cpu_top regin_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+416,"cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+417,"cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+9,"cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+87,"cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+88,"cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+27,"cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+28,"cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+13,"cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+320+i*2,"cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+384+i*1,"cpu_top gpr_e wen", true,(i+0));}}
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
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp93;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp98;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__current_pc),64);
        tracep->fullQData(oldp+3,(((0xfffffffffffffffeULL 
                                    & vlSelf->cpu_top__DOT__npc_e__DOT__dnpc) 
                                   | (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc) 
                                                         & (~ 
                                                            ((IData)(vlSelf->cpu_top__DOT__dnpc_sel) 
                                                             >> 3U)))))))),64);
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
        tracep->fullQData(oldp+45,(vlSelf->cpu_top__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+47,(vlSelf->cpu_top__DOT__ID_EX_pc),64);
        tracep->fullQData(oldp+49,(vlSelf->cpu_top__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+51,(vlSelf->cpu_top__DOT__ID_EX_rs2),64);
        tracep->fullCData(oldp+53,(vlSelf->cpu_top__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+54,(vlSelf->cpu_top__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+55,(vlSelf->cpu_top__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+56,(vlSelf->cpu_top__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+57,(vlSelf->cpu_top__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+58,(vlSelf->cpu_top__DOT__ID_EX_op2_sel),2);
        tracep->fullCData(oldp+59,(vlSelf->cpu_top__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+60,(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+61,(vlSelf->cpu_top__DOT__ID_EX_reg_wen));
        tracep->fullBit(oldp+62,(vlSelf->cpu_top__DOT__ID_EX_mem_wen));
        tracep->fullBit(oldp+63,(vlSelf->cpu_top__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+64,(vlSelf->cpu_top__DOT__ID_EX_valid));
        tracep->fullBit(oldp+65,(vlSelf->cpu_top__DOT__EX_MEM_valid));
        tracep->fullSData(oldp+66,(vlSelf->cpu_top__DOT__EX_MEM_rstrb),9);
        tracep->fullCData(oldp+67,(vlSelf->cpu_top__DOT__EX_MEM_wstrb),8);
        tracep->fullQData(oldp+68,(vlSelf->cpu_top__DOT__EX_MEM_alu_out),64);
        tracep->fullQData(oldp+70,(vlSelf->cpu_top__DOT__EX_MEM_mem_addr),64);
        tracep->fullBit(oldp+72,(vlSelf->cpu_top__DOT__EX_MEM_mem_wen));
        tracep->fullQData(oldp+73,(vlSelf->cpu_top__DOT__EX_MEM_pc),64);
        tracep->fullBit(oldp+75,(vlSelf->cpu_top__DOT__EX_MEM_reg_wen));
        tracep->fullCData(oldp+76,(vlSelf->cpu_top__DOT__EX_MEM_rd_addr),5);
        tracep->fullCData(oldp+77,(vlSelf->cpu_top__DOT__EX_MEM_regin_sel),3);
        tracep->fullCData(oldp+78,((7U & (IData)(vlSelf->cpu_top__DOT__EX_MEM_mem_addr))),3);
        tracep->fullQData(oldp+79,(vlSelf->cpu_top__DOT__MEM_WB_pc),64);
        tracep->fullBit(oldp+81,(vlSelf->cpu_top__DOT__MEM_WB_valid));
        tracep->fullQData(oldp+82,(vlSelf->cpu_top__DOT__MEM_WB_mem_data),64);
        tracep->fullSData(oldp+84,(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb),9);
        tracep->fullQData(oldp+85,(vlSelf->cpu_top__DOT__MEM_WB_alu_out),64);
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__MEM_WB_reg_wen));
        tracep->fullCData(oldp+88,(vlSelf->cpu_top__DOT__MEM_WB_rd_addr),5);
        tracep->fullCData(oldp+89,(vlSelf->cpu_top__DOT__MEM_WB_regin_sel),3);
        tracep->fullCData(oldp+90,(vlSelf->cpu_top__DOT__MEM_WB_shamt),3);
        tracep->fullQData(oldp+91,(((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                     ? vlSelf->cpu_top__DOT__rs1_data
                                     : vlSelf->cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+93,((vlSelf->cpu_top__DOT__imm 
                                    + ((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                        ? vlSelf->cpu_top__DOT__rs1_data
                                        : vlSelf->cpu_top__DOT__current_pc))),64);
        tracep->fullQData(oldp+95,(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc),64);
        tracep->fullBit(oldp+97,((1U & (~ (IData)(vlSelf->cpu_top__DOT__dnpc_sel)))));
        tracep->fullWData(oldp+98,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
        tracep->fullCData(oldp+102,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
        tracep->fullQData(oldp+103,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+105,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullCData(oldp+107,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+108,((0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst)),7);
        tracep->fullCData(oldp+109,((7U & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+110,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+111,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+112,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+113,((0xfffff000U & vlSelf->cpu_top__DOT__IF_ID_inst)),32);
        tracep->fullIData(oldp+114,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+115,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+116,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+117,((0x63U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+118,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+119,((0x6fU == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+120,((0x37U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+121,((0x17U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+122,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+123,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+124,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+125,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+126,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+127,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+128,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+129,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+130,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+131,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+132,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+133,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+134,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+135,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+136,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+137,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+138,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x10U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+139,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+140,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+141,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+142,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+143,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+144,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+145,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+146,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+147,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+148,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+149,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+150,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+151,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+152,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+153,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+154,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+155,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+156,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+157,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+158,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+159,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+160,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+161,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+162,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+163,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+164,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+165,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+166,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+167,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+168,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+169,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+170,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+171,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+172,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+173,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+174,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+175,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+176,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+177,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+178,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+179,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+180,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+181,((0x73U == vlSelf->cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+182,((0x100073U == vlSelf->cpu_top__DOT__IF_ID_inst)));
        tracep->fullBit(oldp+183,((3U == (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))));
        tracep->fullBit(oldp+184,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+185,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+186,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+187,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+189,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+191,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+192,(((IData)(((0x33U 
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
        tracep->fullBit(oldp+193,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+194,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+195,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+196,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+197,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+198,(((((IData)(((0x1013U 
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
        tracep->fullBit(oldp+199,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+200,(((((IData)(((0x5013U 
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
        tracep->fullBit(oldp+201,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+202,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+203,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
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
        tracep->fullBit(oldp+204,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
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
        tracep->fullBit(oldp+205,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+206,((((0x63U == (0x7fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)))));
        tracep->fullBit(oldp+207,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullWData(oldp+208,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+214,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+216,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+218,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+220,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
        tracep->fullQData(oldp+224,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+226,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+228,((1U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+229,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+230,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+231,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+232,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+233,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+234,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+235,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+236,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+237,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+238,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+239,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+240,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+241,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullQData(oldp+242,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp92, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp93, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp94, __Vtemp92, __Vtemp93);
        VL_EXTEND_WQ(65,64, __Vtemp95, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp96, __Vtemp94, __Vtemp95);
        tracep->fullQData(oldp+244,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp96[2U])))))),64);
        tracep->fullQData(oldp+246,((vlSelf->cpu_top__DOT__alu_op1 
                                     ^ vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+248,((vlSelf->cpu_top__DOT__alu_op1 
                                     | vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+250,((vlSelf->cpu_top__DOT__alu_op1 
                                     & vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+252,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+254,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+256,((((- (QData)((IData)(
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
        VL_EXTENDS_WW(128,65, __Vtemp98, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp99, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp100, __Vtemp98, __Vtemp99);
        tracep->fullQData(oldp+258,((((QData)((IData)(
                                                      __Vtemp100[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp100[0U])))),64);
        VL_EXTENDS_WW(128,65, __Vtemp101, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp102, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp103, __Vtemp101, __Vtemp102);
        tracep->fullQData(oldp+260,((((QData)((IData)(
                                                      __Vtemp103[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp103[2U])))),64);
        VL_DIVS_WWW(65, __Vtemp105, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+262,((((QData)((IData)(
                                                      __Vtemp105[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp105[0U])))),64);
        VL_MODDIVS_WWW(65, __Vtemp108, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+264,((((QData)((IData)(
                                                      __Vtemp108[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp108[0U])))),64);
        tracep->fullWData(oldp+266,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+269,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+272,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+273,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+274,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
        tracep->fullBit(oldp+275,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
        VL_DIVS_WWW(65, __Vtemp111, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+276,((1U & __Vtemp111[2U])));
        VL_MODDIVS_WWW(65, __Vtemp114, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+277,((1U & __Vtemp114[2U])));
        tracep->fullQData(oldp+278,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+280,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp117, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp118, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp119, __Vtemp117, __Vtemp118);
        VL_EXTEND_WQ(65,64, __Vtemp120, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp121, __Vtemp119, __Vtemp120);
        tracep->fullBit(oldp+282,((1U & __Vtemp121[2U])));
        tracep->fullQData(oldp+283,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+285,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+287,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+288,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+290,(((0x80U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+291,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+293,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+295,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+297,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+299,((((QData)((IData)(
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
        tracep->fullBit(oldp+301,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullBit(oldp+302,((1U & ((IData)(vlSelf->cpu_top__DOT__EX_MEM_regin_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+303,((1U & ((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
                                         >> 8U))));
        tracep->fullBit(oldp+304,((1U & (((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
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
        tracep->fullCData(oldp+305,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
        tracep->fullQData(oldp+306,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+308,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+314,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+316,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+318,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullQData(oldp+320,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+322,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+324,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+326,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+328,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+330,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+332,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+334,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+336,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+338,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+340,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+342,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+344,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+346,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+348,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+350,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+352,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+354,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+356,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+358,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+360,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+362,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+364,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+366,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+368,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+370,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+372,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+374,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+376,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+378,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+380,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+382,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+384,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+385,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+386,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+387,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+388,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+389,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+390,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+391,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+392,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+393,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+394,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+395,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+396,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+397,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+398,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+399,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+400,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+401,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+402,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+403,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+404,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+405,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+406,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+407,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+408,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+409,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+410,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+411,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+412,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+413,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+414,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+415,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullBit(oldp+416,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+417,(vlSelf->I_rst));
        tracep->fullIData(oldp+418,(vlSelf->I_inst),32);
        tracep->fullBit(oldp+419,(vlSelf->I_inst_valid));
        tracep->fullBit(oldp+420,(vlSelf->I_inst_addr_ready));
        tracep->fullQData(oldp+421,(vlSelf->O_pc),64);
        tracep->fullBit(oldp+423,(vlSelf->O_pc_valid));
        tracep->fullQData(oldp+424,(vlSelf->O_mem_addr),64);
        tracep->fullBit(oldp+426,(vlSelf->O_mem_rd_en));
        tracep->fullBit(oldp+427,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+428,(vlSelf->I_mem_rd_data),64);
        tracep->fullBit(oldp+430,(vlSelf->I_mem_rd_data_valid));
        tracep->fullQData(oldp+431,(vlSelf->O_mem_wr_data),64);
        tracep->fullCData(oldp+433,(vlSelf->O_mem_wr_strb),8);
        tracep->fullBit(oldp+434,(vlSelf->cpu_top__DOT__MEM_WB_reg_e__DOT__WB_data_valid));
        tracep->fullCData(oldp+435,(vlSelf->cpu_top__DOT__ID_EX_dnpc_sel),3);
        tracep->fullBit(oldp+436,(1U));
        tracep->fullIData(oldp+437,(0x40U),32);
        tracep->fullIData(oldp+438,(2U),32);
        tracep->fullIData(oldp+439,(2U),32);
        tracep->fullQData(oldp+440,(0x7ffffffcULL),64);
        tracep->fullCData(oldp+442,(1U),3);
        tracep->fullCData(oldp+443,(2U),3);
        tracep->fullCData(oldp+444,(4U),3);
        tracep->fullSData(oldp+445,(1U),15);
        tracep->fullSData(oldp+446,(2U),15);
        tracep->fullSData(oldp+447,(4U),15);
        tracep->fullSData(oldp+448,(8U),15);
        tracep->fullSData(oldp+449,(0x10U),15);
        tracep->fullSData(oldp+450,(0x20U),15);
        tracep->fullSData(oldp+451,(0x40U),15);
        tracep->fullSData(oldp+452,(0x80U),15);
        tracep->fullSData(oldp+453,(0x100U),15);
        tracep->fullSData(oldp+454,(0x200U),15);
        tracep->fullSData(oldp+455,(0x400U),15);
        tracep->fullSData(oldp+456,(0x800U),15);
        tracep->fullSData(oldp+457,(0x1000U),15);
        tracep->fullSData(oldp+458,(0x2000U),15);
        tracep->fullCData(oldp+459,(1U),2);
        tracep->fullCData(oldp+460,(2U),2);
        tracep->fullIData(oldp+461,(3U),32);
        tracep->fullIData(oldp+462,(3U),32);
    }
}
