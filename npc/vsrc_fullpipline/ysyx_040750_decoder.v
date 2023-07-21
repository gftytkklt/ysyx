module ysyx_040750_decoder(
    // input I_sys_clk,
    // input I_rst,
    input [31:0] I_inst,
    input I_timer_intr,
    output [63:0] O_imm,
    input [63:0] I_rs1_data,
    output [4:0] O_rs1,
    input [63:0] I_rs2_data,
    output [4:0] O_rs2,
    output [4:0] O_rd,
    output O_reg_wen,
    output O_mem_wen,
    output [7:0] O_mem_wstrb,
    output [8:0] O_mem_rstrb,// [8] for signed(1)/unsigned(0), [7:0]for real strb
    //output O_mem_ren,
    //output [2:0] O_funct3,
    //output [6:0] O_funct7,
    output [3:0] O_dnpc_sel,
    output [1:0] O_regin_sel,
    output [2:0] O_opnum1_sel,
    output [2:0] O_opnum2_sel,
    output [14:0] O_alu_op_sel,
    output [1:0] O_alu_op_sext,
    output O_word_op_mask,
    output [5:0] O_csr_op_sel,
    output [4:0] O_csr_imm,
    output [11:0] O_csr_addr,
    output O_csr_wen,
    output O_csr_intr,
    output [63:0] O_csr_intr_no,
    output O_csr_mret,
    output [1:0] O_stall_en// en[1] for rs1, en[2] for rs2
    //output O_sim_end
    );
    // import "DPI-C" function void set_inst_ptr(input logic [31:0] a []);
    // initial set_inst_ptr(I_inst);
    wire [31:0] decode_inst;
    wire [6:0] funct7;
    wire [6:0] opcode;
    wire [4:0] rs2,rs1,rd;
    wire [2:0] funct3;
    wire [11:0] immI,immS;
    wire [12:0] immB;
    wire [31:0] immU;
    wire [20:0] immJ;
    wire typeI, typeS, typeR, typeB, typeU, typeJ, typeC;
    // if timer intr happen, inst do nothing, but npc is chosen from mtvec
    assign decode_inst = I_timer_intr ? 32'h00000013 : I_inst;
    // inst pattern
    // type U
    wire LUI;
    assign LUI = (opcode == 7'b0110111);
    wire AUIPC;
    assign AUIPC = (opcode == 7'b0010111);
    // type J
    wire JAL;
    assign JAL = (opcode == 7'b1101111);
    // type I
    wire JALR;
    assign JALR = (opcode == 7'b1100111) && (funct3 == 3'b000);
    wire LD;
    assign LD = (opcode == 7'b0000011) && (funct3 == 3'b011);
    wire LW;
    assign LW = (opcode == 7'b0000011) && (funct3 == 3'b010);
    wire LWU;
    assign LWU = (opcode == 7'b0000011) && (funct3 == 3'b110);
    wire LH;
    assign LH = (opcode == 7'b0000011) && (funct3 == 3'b001);
    wire LHU;
    assign LHU = (opcode == 7'b0000011) && (funct3 == 3'b101);
    wire LB;
    assign LB = (opcode == 7'b0000011) && (funct3 == 3'b000);
    wire LBU;
    assign LBU = (opcode == 7'b0000011) && (funct3 == 3'b100);
    wire ADDI;
    assign ADDI = (opcode == 7'b0010011) && (funct3 == 3'b000);
    wire SLTI;
    assign SLTI = (opcode == 7'b0010011) && (funct3 == 3'b010);
    wire SLTIU;
    assign SLTIU = (opcode == 7'b0010011) && (funct3 == 3'b011);
    wire XORI;
    assign XORI = (opcode == 7'b0010011) && (funct3 == 3'b100);
    wire ORI;
    assign ORI = (opcode == 7'b0010011) && (funct3 == 3'b110);
    wire ANDI;
    assign ANDI = (opcode == 7'b0010011) && (funct3 == 3'b111);
    wire SLLI;
    assign SLLI = (funct7[6:1] == 6'b000000) && (opcode == 7'b0010011) && (funct3 == 3'b001);
    wire SRLI;
    assign SRLI = (funct7[6:1] == 6'b000000) && (opcode == 7'b0010011) && (funct3 == 3'b101);
    wire SRAI;
    assign SRAI = (funct7[6:1] == 6'b010000) && (opcode == 7'b0010011) && (funct3 == 3'b101);
    wire ADDIW;
    assign ADDIW = (opcode == 7'b0011011) && (funct3 == 3'b000);
    wire SLLIW;
    assign SLLIW = (funct7 == 7'b0000000) && (opcode == 7'b0011011) && (funct3 == 3'b001);
    wire SRLIW;
    assign SRLIW = (funct7 == 7'b0000000) && (opcode == 7'b0011011) && (funct3 == 3'b101);
    wire SRAIW;
    assign SRAIW = (funct7 == 7'b0100000) && (opcode == 7'b0011011) && (funct3 == 3'b101);
    // type R
    wire ADD;
    assign ADD = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b000);
    wire SUB;
    assign SUB = (funct7 == 7'b0100000) && (opcode == 7'b0110011) && (funct3 == 3'b000);
    wire SLL;
    assign SLL = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b001);
    wire SLT;
    assign SLT = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b010);
    wire SLTU;
    assign SLTU = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b011);
    wire XOR;
    assign XOR = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b100);
    wire SRL;
    assign SRL = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b101);
    wire SRA;
    assign SRA = (funct7 == 7'b0100000) && (opcode == 7'b0110011) && (funct3 == 3'b101);
    wire OR;
    assign OR = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b110);
    wire AND;
    assign AND = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b111);
    wire MUL;
    assign MUL = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b000);
    wire MULH;
    assign MULH = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b001);
    wire MULHSU;
    assign MULHSU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b010);
    wire MULHU;
    assign MULHU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b011);
    wire DIV;
    assign DIV = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b100);
    wire DIVU;
    assign DIVU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b101);
    wire REM;
    assign REM = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b110);
    wire REMU;
    assign REMU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b111);
    wire ADDW;
    assign ADDW = (funct7 == 7'b0000000) && (opcode == 7'b0111011) && (funct3 == 3'b000);
    wire SUBW;
    assign SUBW = (funct7 == 7'b0100000) && (opcode == 7'b0111011) && (funct3 == 3'b000);
    wire SLLW;
    assign SLLW = (funct7 == 7'b0000000) && (opcode == 7'b0111011) && (funct3 == 3'b001);
    wire SRLW;
    assign SRLW = (funct7 == 7'b0000000) && (opcode == 7'b0111011) && (funct3 == 3'b101);
    wire SRAW;
    assign SRAW = (funct7 == 7'b0100000) && (opcode == 7'b0111011) && (funct3 == 3'b101);
    wire MULW;
    assign MULW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b000);
    wire DIVW;
    assign DIVW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b100);
    wire DIVUW;
    assign DIVUW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b101);
    wire REMW;
    assign REMW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b110);
    wire REMUW;
    assign REMUW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b111);
    // type S
    wire SD;
    assign SD = (opcode == 7'b0100011) && (funct3 == 3'b011);
    wire SW;
    assign SW = (opcode == 7'b0100011) && (funct3 == 3'b010);
    wire SH;
    assign SH = (opcode == 7'b0100011) && (funct3 == 3'b001);
    wire SB;
    assign SB = (opcode == 7'b0100011) && (funct3 == 3'b000);
    // type B
    wire BEQ;
    assign BEQ = (opcode == 7'b1100011) && (funct3 == 3'b000);
    wire BNE;
    assign BNE = (opcode == 7'b1100011) && (funct3 == 3'b001);
    wire BLT;
    assign BLT = (opcode == 7'b1100011) && (funct3 == 3'b100);
    wire BGE;
    assign BGE = (opcode == 7'b1100011) && (funct3 == 3'b101);
    wire BLTU;
    assign BLTU = (opcode == 7'b1100011) && (funct3 == 3'b110);
    wire BGEU;
    assign BGEU = (opcode == 7'b1100011) && (funct3 == 3'b111);
    // ecall & ebreak
    wire ECALL;
    assign ECALL = (decode_inst == 32'h00000073);
    wire EBREAK;
    assign EBREAK = (decode_inst == 32'h00100073);
    // csr op
    wire CSRRW;
    assign CSRRW = (opcode == 7'b1110011) && (funct3 == 3'b001);
    wire CSRRS;
    assign CSRRS = (opcode == 7'b1110011) && (funct3 == 3'b010);
    wire CSRRC;
    assign CSRRC = (opcode == 7'b1110011) && (funct3 == 3'b011);
    wire CSRRWI;
    assign CSRRWI = (opcode == 7'b1110011) && (funct3 == 3'b101);
    wire CSRRSI;
    assign CSRRSI = (opcode == 7'b1110011) && (funct3 == 3'b110);
    wire CSRRCI;
    assign CSRRCI = (opcode == 7'b1110011) && (funct3 == 3'b111);
    wire MRET;
    assign MRET = (decode_inst == 32'h30200073);
    // fence.i
    wire FENCEI;
    assign FENCEI = (opcode == 7'b0001111) && (funct3 == 3'b001);
    // inst var parsing
    wire csr_rd_gpr;
    assign csr_rd_gpr = CSRRW | CSRRS | CSRRC | I_timer_intr;
    assign O_stall_en[1] = (typeI | typeS | typeR | typeB | csr_rd_gpr) && (rs1 != 0);
    assign O_stall_en[0] = (typeS | typeR | typeB) && (rs2 != 0);
    assign funct7 = decode_inst[31:25];
    assign opcode = decode_inst[6:0];
    assign rd = decode_inst[11:7];
    assign funct3 = decode_inst[14:12];
    assign rs1 = decode_inst[19:15];
    assign rs2 = decode_inst[24:20];
    assign immI = decode_inst[31:20];
    assign immS = {decode_inst[31:25], decode_inst[11:7]};
    assign immB = {decode_inst[31], decode_inst[7], decode_inst[30:25], decode_inst[11:8],1'b0};
    assign immU = {decode_inst[31:12],12'b0};
    assign immJ = {decode_inst[31],decode_inst[19:12],decode_inst[20],decode_inst[30:21],1'b0};
    // rs1, rs2, rd addr
    assign O_rs1 = rs1;
    assign O_rs2 = rs2;
    assign O_rd = rd;
    // csr data
    assign O_csr_addr = I_timer_intr ? 12'h305 : decode_inst[31:20];
    assign O_csr_imm = decode_inst[19:15];
    //assign O_csr_op_sel = decode_inst[14:12];
    //assign O_funct3 = funct3;
    //assign O_funct7 = funct7;
    // inst type
    assign typeI = (opcode == 7'b1100111) || (opcode == 7'b0000011) || (opcode == 7'b0010011) || (opcode == 7'b0011011);
    assign typeS = (opcode == 7'b0100011);
    assign typeB = (opcode == 7'b1100011);
    assign typeU = (opcode == 7'b0010111) || (opcode == 7'b0110111);
    assign typeJ = (opcode == 7'b1101111);
    assign typeR = (opcode == 7'b0110011) || (opcode == 7'b0111011);
    assign typeC = (opcode == 7'b1110011);
    
    // O_imm
    assign O_imm = ({64{typeI}} & {{52{immI[11]}},immI})
                    | ({64{typeS}} & {{52{immS[11]}},immS})
                    | ({64{typeB}} & {{51{immB[12]}},immB})
                    | ({64{typeU}} & {{32{immU[31]}},immU})
                    | ({64{typeJ}} & {{43{immJ[20]}},immJ});

    // ctrl signal gen
    // assign O_csr_op_sel[6] = ECALL | EBREAK | MRET;
    assign O_csr_op_sel = {CSRRW, CSRRS, CSRRC, CSRRWI, CSRRSI, CSRRCI};
    // csr wr en
    wire [63:0] NO;
    assign NO = I_timer_intr ? 64'h8000_0000_0000_0007 : ECALL ? 64'hb : EBREAK ? 64'h3 : 64'h0;
    // assign NO = ({64{ECALL & ~}} & 64'hb) | ({64{EBREAK}}) | ();
    assign O_csr_wen = CSRRW | CSRRS | CSRRC | CSRRWI | CSRRSI | CSRRCI;
    assign O_csr_intr = ECALL | EBREAK | I_timer_intr;
    assign O_csr_intr_no = NO;
    assign O_csr_mret = MRET;
    // reg wr en
    wire regin_from_mem;
    assign regin_from_mem = (opcode == 7'b0000011);
    // O_regin_sel: 4 for reserved, 2 for memory in, 1 for alu in
    // csr data to gpr is merged into alu
    //assign O_regin_sel[2] = O_reg_wen & (JAL | JALR);
    //assign O_regin_sel[2] = 0;
    assign O_regin_sel[1] = O_reg_wen & regin_from_mem;
    assign O_regin_sel[0] = O_reg_wen & (~regin_from_mem);
    assign O_reg_wen = typeR | typeI | typeU | typeJ | O_csr_wen;
    assign O_mem_wen = typeS;
    assign O_mem_wstrb = ({8{SD}} & 8'b11111111)
    		       | ({8{SW}} & 8'b00001111)
    		       | ({8{SH}} & 8'b00000011)
    		       | ({8{SB}} & 8'b00000001);
    assign O_mem_rstrb[8] = LW | LH | LB; //sext
    assign O_mem_rstrb[7:4] = {4{LD}};
    assign O_mem_rstrb[3:2] = {2{LD | LW | LWU}};
    assign O_mem_rstrb[1] = LD | LW | LWU | LH | LHU;
    assign O_mem_rstrb[0] = LD | LW | LWU | LH | LHU | LB | LBU;
    //assign O_mem_ren = (opcode == 7'b0000011);
    // dnpc
    wire typeB_jr;
    wire csr_jr;
    wire eq, neq, lt, ge, ltu, geu;
    assign eq = I_rs1_data == I_rs2_data;
    assign neq = ~eq;
    assign ltu = I_rs1_data < I_rs2_data;
    assign geu = ~ltu;
    assign lt = ($signed(I_rs1_data)) < ($signed(I_rs2_data));
    assign ge = ~lt;
    assign typeB_jr = (BEQ&eq) | (BNE&neq) | (BLT&lt) | (BGE&ge) | (BLTU&ltu) | (BGEU&geu);
    assign csr_jr = ECALL | EBREAK | MRET | I_timer_intr;
    // assign O_dnpc_sel[4] = csr_jr;
    // assign O_dnpc_sel[3] = JALR;
    // assign O_dnpc_sel[2] = JAL;
    // assign O_dnpc_sel[1] = typeB_jr;
    assign O_dnpc_sel[3] = FENCEI;
    assign O_dnpc_sel[2] = csr_jr;
    assign O_dnpc_sel[1] = JALR;
    assign O_dnpc_sel[0] = ~(JALR | JAL | typeB_jr | csr_jr | FENCEI);
    // alu op
    localparam OP_ADD = 15'b000_0000_0000_0001;
    localparam OP_SUB = 15'b000_0000_0000_0010;
    localparam OP_SLT = 15'b000_0000_0000_0100;
    localparam OP_SLTU = 15'b000_0000_0000_1000;
    localparam OP_XOR = 15'b000_0000_0001_0000;
    localparam OP_OR = 15'b000_0000_0010_0000;
    localparam OP_AND = 15'b000_0000_0100_0000;
    localparam OP_SLL = 15'b000_0000_1000_0000;
    localparam OP_SRL = 15'b000_0001_0000_0000;
    localparam OP_SRA = 15'b000_0010_0000_0000;
    localparam OP_MUL = 15'b000_0100_0000_0000;
    localparam OP_MULH = 15'b000_1000_0000_0000;
    localparam OP_DIV = 15'b001_0000_0000_0000;
    //localparam OP_DIVU = 15'b001_0000_0000_0000;
    localparam OP_REM = 15'b010_0000_0000_0000;
    localparam OP_CSR = 15'b100_0000_0000_0000;
    assign O_word_op_mask = (opcode == 7'b0011011) || (opcode == 7'b0111011);
    assign O_alu_op_sext[1] = MUL | MULH | MULHSU | DIV | REM | MULW | DIVW | REMW;
    assign O_alu_op_sext[0] = MUL | MULH | DIV | REM | MULW | DIVW | REMW;
    wire add_flag;
    wire ld_flag;
    assign ld_flag = (opcode == 7'b0000011);
    assign add_flag = (typeU | typeB | typeS | ld_flag | JAL | JALR | ADDI | ADDIW | ADD | ADDW);
    wire sub_flag;
    assign sub_flag = SUB | SUBW;
    wire slt_flag;
    assign slt_flag = SLTI | SLT;
    wire sltu_flag;
    assign sltu_flag = SLTIU | SLTU;
    wire xor_flag;
    assign xor_flag = XORI | XOR;
    wire or_flag;
    assign or_flag = ORI | OR;
    wire and_flag;
    assign and_flag = ANDI | AND;
    wire sll_flag;
    assign sll_flag = SLLI | SLL | SLLIW | SLLW;
    wire srl_flag;
    assign srl_flag = SRLI | SRL | SRLIW | SRLW;
    wire sra_flag;
    assign sra_flag = SRAI | SRA | SRAIW | SRAW;
    wire mul_flag;
    assign mul_flag = MUL | MULW;
    wire mulh_flag;
    assign mulh_flag = MULH | MULHSU | MULHU;
    wire div_flag;
    assign div_flag = DIV | DIVU | DIVW | DIVUW;
    wire rem_flag;
    assign rem_flag = REM | REMU | REMW | REMUW;
    wire csr_flag;
    assign csr_flag = typeC;
    assign O_alu_op_sel = (OP_ADD & {15{add_flag}})
    			| (OP_SUB & {15{sub_flag}})
    			| (OP_SLT & {15{slt_flag}})
    			| (OP_SLTU & {15{sltu_flag}})
    			| (OP_XOR & {15{xor_flag}})
    			| (OP_OR & {15{or_flag}})
    			| (OP_AND & {15{and_flag}})
    			| (OP_SLL & {15{sll_flag}})
    			| (OP_SRL & {15{srl_flag}})
    			| (OP_SRA & {15{sra_flag}})
    			| (OP_MUL & {15{mul_flag}})
    			| (OP_MULH & {15{mulh_flag}})
    			| (OP_DIV & {15{div_flag}})
    			| (OP_REM & {15{rem_flag}})
                | (OP_CSR & {15{csr_flag}});
    // op_num1
    localparam OP1_RS1 = 3'd1;
    localparam OP1_PC = 3'd2;
    localparam OP1_ZERO = 3'd4;
    wire rs1_flag, pc_flag, zero_flag;
    assign rs1_flag = typeR | (typeI & (~JALR)) | typeS | typeC;
    assign pc_flag = typeB | typeJ | AUIPC | JALR;
    assign zero_flag = LUI;
    assign O_opnum1_sel = OP1_RS1 & {3{rs1_flag}}
                        | OP1_PC & {3{pc_flag}}
                        | OP1_ZERO & {3{zero_flag}};
    // op_num2
    localparam OP2_RS2 = 3'd1;
    localparam OP2_IMM = 3'd2;
    localparam OP2_FOUR = 3'd4;
    //TODO: add alu cal pc+4 datapath, also adjust wb sel
    wire rs2_flag, imm_flag, four_flag;
    assign rs2_flag = typeR;
    assign imm_flag = (typeI & (~JALR)) | typeS | typeB | typeU;
    assign four_flag = JALR | typeJ;
    assign O_opnum2_sel = OP2_RS2 & {3{rs2_flag}}
                        | OP2_IMM & {3{imm_flag}}
                        | OP2_FOUR & {3{four_flag}};
    // ebreak signal gen
    //always @(posedge I_sys_clk)
    //	if ((decode_inst == 32'h00100073) && !I_rst)
    //	    sim_end();
    //assign O_sim_end = (decode_inst == 32'h00100073) ? 1:0;
endmodule
