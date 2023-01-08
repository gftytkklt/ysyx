`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/05/25 20:46:57
// Design Name: 
// Module Name: cpu_top
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// This core is for cpu core top only, for top module with standard interface, use a new top module.
//////////////////////////////////////////////////////////////////////////////////

module ysyx_22040750_cpu_top(
    input I_sys_clk,
    input I_rst,
    input [31:0] I_inst,
    input I_inst_valid,
    input I_inst_addr_ready,
    output [63:0] O_pc,
    output O_pc_valid,
    output [63:0] O_mem_addr,
    output O_mem_rd_en,
    output O_mem_wen,
    input [63:0] I_mem_rd_data,
    input I_mem_rd_data_valid,
    output [63:0] O_mem_wr_data,
    output [7:0] O_mem_wr_strb  
    //output O_sim_end
    );
    wire [63:0] current_pc,dnpc,snpc;
    wire [31:0] current_inst;
    wire [63:0] imm,wr_data,rs1_data,rs2_data,alu_op1,alu_op2,alu_out,mem_in,mem_out,mem_addr;
    wire [4:0] rs1_addr,rs2_addr,rd_addr;
    //wire [2:0] funct3;
    wire [4:0] dnpc_sel;
    wire [2:0] regin_sel;
    wire [2:0] opnum1_sel;
    wire [2:0] opnum2_sel;
    wire [14:0] alu_op_sel;
    wire [7:0] mem_wstrb;
    wire [8:0] mem_rstrb; // strb generated by inst(ignore addr offt)
    //wire [7:0] mem_rmask; // actual valid mask
    wire reg_wen,mem_wen;
    wire word_op_mask;
    wire [1:0] alu_op_sext;
    //IF_ID
    wire IF_valid;
    wire [63:0] IF_ID_pc;
    wire [31:0] IF_ID_inst;
    wire IF_ID_allowin;
    wire IF_ID_valid;
    wire IF_ID_stall;
    wire IF_ID_bubble;
    wire IF_ID_input_valid;
    //ID_EX
    wire [63:0] ID_EX_imm, ID_EX_pc, ID_EX_rs1, ID_EX_rs2;
    wire [4:0] ID_EX_rd_addr;
    wire [7:0] ID_EX_wstrb;
    wire [8:0] ID_EX_rstrb;
    wire [2:0] ID_EX_op2_sel,ID_EX_op1_sel,ID_EX_regin_sel;
    wire [1:0] ID_EX_alu_sext;
    wire [14:0] ID_EX_alu_op_sel;
    wire ID_EX_reg_wen, ID_EX_mem_wen;
    wire ID_EX_word_op_mask;
    wire ID_EX_valid;
    wire ID_EX_allowin;
    wire [1:0] ID_EX_stall;
    wire [31:0] ID_EX_inst;
    wire ID_EX_bubble;
    wire ID_EX_input_valid;
    wire ID_EX_alu_multicycle;
    wire alu_out_valid;
    //EX_MEM
    wire EX_MEM_valid;
    wire [8:0] EX_MEM_rstrb;
    wire [7:0] EX_MEM_wstrb;
    wire [63:0] EX_MEM_alu_out, EX_MEM_mem_addr, EX_MEM_rs2;
    wire EX_MEM_mem_wen;
    wire [63:0] EX_MEM_pc;
    wire [63:0] EX_MEM_mem_data;
    wire EX_MEM_reg_wen;
    wire [4:0] EX_MEM_rd_addr;
    wire [2:0] EX_MEM_regin_sel;
    wire [2:0] EX_MEM_shamt;// mem wr shamt
    wire EX_MEM_allowin;
    wire [1:0] EX_MEM_stall;
    wire [31:0] EX_MEM_inst;
    wire EX_MEM_bubble;
    wire EX_MEM_input_valid;
    
    //MEM_WB
    wire [63:0] MEM_WB_pc;
    wire MEM_WB_valid;
    wire [63:0] MEM_WB_mem_data;
    wire [8:0] MEM_WB_mem_rstrb;
    wire [63:0] MEM_WB_alu_out;
    wire MEM_WB_reg_wen;
    wire [4:0] MEM_WB_rd_addr;
    wire [2:0] MEM_WB_regin_sel;
    wire [2:0] MEM_WB_shamt;// mem rd shamt
    wire MEM_WB_allowin;
    wire [31:0] MEM_WB_inst;
    wire MEM_WB_bubble;
    wire MEM_WB_input_valid;
    wire [1:0] MEM_WB_stall;
    
    // pipeline stall
    wire [1:0] stall_en;
    
    import "DPI-C" function void set_wb_ptr(input logic a []);
    initial set_wb_ptr(MEM_WB_valid);
    import "DPI-C" function void set_wb_bubble_ptr(input logic a []);
    initial set_wb_bubble_ptr(MEM_WB_bubble);
    import "DPI-C" function void set_wb_pc_ptr(input logic [63:0] a []);
    initial set_wb_pc_ptr(MEM_WB_pc);
    import "DPI-C" function void set_skip_pc_ptr(input logic [63:0] a []);
    initial set_skip_pc_ptr(EX_MEM_pc);
    import "DPI-C" function void set_wb_inst_ptr(input logic [31:0] a []);
    initial set_wb_inst_ptr(MEM_WB_inst);
    import "DPI-C" function void sim_end();
    always @(posedge I_sys_clk)
    	if ((MEM_WB_inst == 32'h00100073) && !I_rst)
    	    sim_end();
    //top layer signal
    assign snpc = current_pc + 4;
    //assign O_pc = current_pc;
    assign O_pc = dnpc;
    //assign mem_in = I_mem_rd_data;
    //assign O_mem_rd_en = EX_MEM_regin_sel[1];
    //assign O_mem_wr_data = mem_out;
    assign O_mem_addr = EX_MEM_mem_addr;
    assign O_mem_wen = EX_MEM_mem_wen & EX_MEM_valid;
    assign EX_MEM_shamt = EX_MEM_mem_addr[2:0];
    assign O_mem_wr_strb = EX_MEM_wstrb << EX_MEM_shamt;
    //assign mem_rmask = mem_rstrb[7:0] << mem_addr[2:0];
    assign mem_out = EX_MEM_rs2;
    /*mux_Nbit_Msel #(64, 3)
    nextpc_64bit_3sel (
	.I_sel_data({{alu_out[63:1],1'b0},alu_out,snpc}),
	.I_sel(dnpc_sel),
	.O_sel_data(dnpc)
    );*/
    
    ysyx_22040750_npc npc_e(
    	// stall
    	//.I_rs1_data(rs1_data),
    	//.I_rs2_data(rs2_data),
    	// forward
    	.I_rs1_data(rs1_forward_data),
    	.I_rs2_data(rs2_forward_data),
		.I_intr_pc(),
    	.I_imm(imm),
    	.I_pc(IF_ID_pc),// for jal addr cal
    	.I_snpc(snpc),
    	.I_dnpc_sel(dnpc_sel),
    	.O_dnpc(dnpc)
    );
    
    wire inst_ready; //indicate IMEM can receive pc
    assign inst_ready = 1;
    ysyx_22040750_pc pc_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_dnpc(dnpc),
		.I_inst(I_inst),
		.I_inst_valid(I_inst_valid),
		.I_inst_ready(inst_ready),
		.I_IF_ID_allowin(IF_ID_allowin),
		.O_IF_valid(IF_valid),
		.O_pc(current_pc),
		.O_inst(current_inst),
		.O_pc_valid(O_pc_valid)
    );
    
    ysyx_22040750_IF_ID_reg IF_ID_reg_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_pc(current_pc),
		.I_inst(current_inst),
		.I_IF_ID_valid(IF_valid),
		.I_IF_ID_allowout(ID_EX_allowin),
		.I_IF_ID_stall(IF_ID_stall),
		.I_IF_ID_jmp(!dnpc_sel[0]),
		.O_IF_ID_allowin(IF_ID_allowin),
		.O_pc(IF_ID_pc),
		.O_inst(IF_ID_inst),
		.O_IF_ID_input_valid(IF_ID_input_valid),
		.O_IF_ID_valid(IF_ID_valid),
		.O_bubble_inst_debug(IF_ID_bubble)
    );
    
    ysyx_22040750_stall_unit stall_unit_e(
		.I_rs1_addr(rs1_addr),// from ID only
		.I_rs2_addr(rs2_addr),// from ID only
		.I_ID_valid(IF_ID_input_valid),// IF_ID input valid
		.I_EX_rd_addr(ID_EX_rd_addr),// 
		.I_EX_valid(ID_EX_input_valid),// ID_EX input valid
		.I_EX_mem_rd_en(ID_EX_regin_sel[1]),
		.I_EX_alu_multcycle(|ID_EX_alu_op_sel[13:10]),
		.I_MEM_rd_addr(EX_MEM_rd_addr),// 
		.I_MEM_valid(EX_MEM_input_valid),// EX_MEM input valid
		.I_MEM_mem_rd_en(EX_MEM_regin_sel[1]),
		.I_WB_rd_addr(MEM_WB_rd_addr),// 
		.I_WB_valid(MEM_WB_input_valid),// MEM_WB input valid
		.I_stall_en(stall_en),// [1] for rs1, [0] for rs2 enable
		.O_ID_stall(IF_ID_stall),
		.O_EX_stall(ID_EX_stall),
		.O_MEM_stall(EX_MEM_stall),
		.O_WB_stall(MEM_WB_stall)
	);
	
	wire [63:0] rs1_forward_data, rs2_forward_data; 
    ysyx_22040750_forward_unit forward_unit_e(
    	.I_ID_rs1_data(rs1_data),// ID_EX out to alu
    	.I_ID_rs2_data(rs2_data),// ID_EX out to alu
    	.I_EX_data(alu_out),// alu out
    	.I_MEM_data(EX_MEM_alu_out),// also out only currently
    	.I_WB_data(wr_data),// wb port
    	.I_stall_en(stall_en),
    	.I_EX_stall(ID_EX_stall),
    	.I_MEM_stall(EX_MEM_stall),
    	.I_WB_stall(MEM_WB_stall),
    	.I_EX_reg_wen(ID_EX_reg_wen),
    	.I_MEM_reg_wen(EX_MEM_reg_wen),
    	.I_WB_reg_wen(MEM_WB_reg_wen & MEM_WB_valid),
    	.O_ID_EX_rs1_data(rs1_forward_data),
    	.O_ID_EX_rs2_data(rs2_forward_data)
	);

	ysyx_22040750_csr_foward csr_foward_e(
		.I_csr_ID(),
		.I_csr_EX(),
		.I_csr_MEM(),
		.I_csr_WB(),
		.I_csr_addr_ID(),
		.I_csr_addr_EX(),
		.I_csr_addr_MEM(),
		.I_csr_addr_WB(),
		.I_csr_wen_ID(),
		.I_csr_wen_EX(),
		.I_csr_wen_MEM(),
		.I_csr_wen_WB(),
		.O_csr_foward_data()
	);
	
    ysyx_22040750_decoder decoder_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_inst(IF_ID_inst),
		.O_imm(imm),
		// pipline stall
		//.I_rs1_data(rs1_data),
		// forward
		.I_rs1_data(rs1_forward_data),
		.O_rs1(rs1_addr),
		// pipline stall
		//.I_rs2_data(rs2_data),
		// forward
		.I_rs2_data(rs2_forward_data),
		.O_rs2(rs2_addr),
		.O_rd(rd_addr),
		.O_reg_wen(reg_wen),
		.O_mem_wen(mem_wen),
		.O_mem_wstrb(mem_wstrb),
		.O_mem_rstrb(mem_rstrb),
		.O_dnpc_sel(dnpc_sel),
		.O_regin_sel(regin_sel),
		.O_opnum1_sel(opnum1_sel),
		.O_opnum2_sel(opnum2_sel),
		.O_alu_op_sel(alu_op_sel),
		.O_alu_op_sext(alu_op_sext),
		.O_csr_op_sel(),// EX
		.O_csr_imm(),// EX
		.O_csr_addr(),// ID & WB
		.O_csr_wen(),// WB
		.O_csr_intr(),// ID & WB
		.O_csr_intr_no(),// WB
		.O_csr_mret(),// ID & WB
		.O_word_op_mask(word_op_mask),
		.O_stall_en(stall_en)
    );
    
    ysyx_22040750_ID_EX_reg ID_EX_reg_e(
		// ctrl signal
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_ID_EX_valid(IF_ID_valid),
		.I_ID_EX_allowout(EX_MEM_allowin),
		.O_ID_EX_allowin(ID_EX_allowin),
		.O_ID_EX_valid(ID_EX_valid),
		.I_alu_output_valid(alu_out_valid),
		// ID_EX signal
		.I_imm(imm),
		// pipeline stall code
		//.I_rs1(rs1_data),
		//.I_rs2(rs2_data),
		// forward code
		.I_rs1(rs1_forward_data),
		.I_rs2(rs2_forward_data),
		.I_rd_addr(rd_addr),
		.I_reg_wen(reg_wen),
		.I_mem_wen(mem_wen),
		.I_wstrb(mem_wstrb),
		.I_rstrb(mem_rstrb),
		.I_regin_sel(regin_sel),
		.I_op1_sel(opnum1_sel),
		.I_op2_sel(opnum2_sel),
		.I_alu_sext(alu_op_sext),
		.I_alu_op_sel(alu_op_sel),
		.I_word_op_mask(word_op_mask),
		.I_csr_op_sel(),
		.I_csr_imm(),
		.I_csr_addr(),
		.I_csr_wen(),
		.I_csr_intr(),
		.I_csr_intr_no(),
		.I_csr_mret(),
		.O_csr_op_sel(),
		.O_csr_imm(),
		.O_csr_addr(),
		.O_csr_wen(),
		.O_csr_intr(),
		.O_csr_intr_no(),
		.O_csr_mret(),
		.O_imm(ID_EX_imm),
		.O_rs1(ID_EX_rs1),
		.O_rs2(ID_EX_rs2),
		.O_rd_addr(ID_EX_rd_addr),
		.O_reg_wen(ID_EX_reg_wen),
		.O_mem_wen(ID_EX_mem_wen),
		.O_wstrb(ID_EX_wstrb),
		.O_rstrb(ID_EX_rstrb),
		.O_regin_sel(ID_EX_regin_sel),
		.O_op1_sel(ID_EX_op1_sel),
		.O_op2_sel(ID_EX_op2_sel),
		.O_alu_sext(ID_EX_alu_sext),
		.O_alu_op_sel(ID_EX_alu_op_sel),
		.O_word_op_mask(ID_EX_word_op_mask),
		// IF_ID signal
		.I_pc(IF_ID_pc),
		.O_pc(ID_EX_pc),
		.O_ID_EX_input_valid(ID_EX_input_valid),
		.O_alu_multicycle(ID_EX_alu_multicycle),
		.I_inst_debug(IF_ID_inst),
		.O_inst_debug(ID_EX_inst),
		.I_bubble_inst_debug(IF_ID_bubble),
		.O_bubble_inst_debug(ID_EX_bubble)
    );
    
    ysyx_22040750_mux_Nbit_Msel #(64, 3)
		alu_op1_64bit_3sel (
		.I_sel_data({64'b0,ID_EX_pc,ID_EX_rs1}),
		.I_sel(ID_EX_op1_sel),
		.O_sel_data(alu_op1)
    );
    
    ysyx_22040750_mux_Nbit_Msel #(64, 3)
		alu_op2_64bit_3sel (
		.I_sel_data({64'd4,ID_EX_imm,ID_EX_rs2}),
		.I_sel(ID_EX_op2_sel),
		.O_sel_data(alu_op2)
    );
    
	ysyx_22040750_alu alu_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_op1(alu_op1),
		.I_op2(alu_op2),
		.I_alu_op_sel(ID_EX_alu_op_sel),
		.I_alu_op_sext(ID_EX_alu_sext),
		.I_word_op_mask(ID_EX_word_op_mask),
		.I_multicycle(ID_EX_alu_multicycle),
		.I_EX_MEM_ready(EX_MEM_allowin),
		.I_csr_data(),
		.I_uimm(),
		.I_csr_op_sel(),
		.O_mem_addr(mem_addr),
		.O_result(alu_out),
		.O_csr_data(),
		.O_result_valid(alu_out_valid)
	);

    // ysyx_22040750_gpr_alu gpr_alu_e(
    // 	.I_sys_clk(I_sys_clk),
    // 	.I_rst(I_rst),
	// 	.I_csr_data(),
	// 	.I_op1(alu_op1),
	// 	.I_op2(alu_op2),
	// 	.I_alu_op_sel(ID_EX_alu_op_sel),
	// 	.I_alu_op_sext(ID_EX_alu_sext),
	// 	.I_word_op_mask(ID_EX_word_op_mask),
	// 	.I_multicycle(ID_EX_alu_multicycle),
	// 	.I_EX_MEM_ready(EX_MEM_allowin),
	// 	.O_mem_addr(mem_addr),
	// 	.O_result(alu_out),
	// 	.O_result_valid(alu_out_valid)
    // );

	// ysyx_22040750_csr_alu csr_alu_e(
	// 	.I_csr_data(),
	// 	.I_rs_data(),
	// 	.I_uimm(),
	// 	.I_csr_op_sel(),
	// 	.O_csr_data()
	// );
    
    ysyx_22040750_EX_MEM_reg EX_MEM_reg_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_EX_MEM_valid(ID_EX_valid),
		.I_EX_MEM_allowout(MEM_WB_allowin),
		.O_EX_MEM_allowin(EX_MEM_allowin),
		.O_EX_MEM_valid(EX_MEM_valid),
		.I_rstrb(ID_EX_rstrb),
		.I_wstrb(ID_EX_wstrb),
		.I_alu_out(alu_out),
		.I_mem_addr(mem_addr),
		.I_mem_wen(ID_EX_mem_wen),
		.I_rs2_data(ID_EX_rs2),
		.I_pc(ID_EX_pc),
		.I_reg_wen(ID_EX_reg_wen),
		.I_rd_addr(ID_EX_rd_addr),
		.I_regin_sel(ID_EX_regin_sel),
		.I_mem_data_valid(I_mem_rd_data_valid),
		//.I_csr_op_sel(),
		//.I_csr_imm(),
		.I_csr_addr(),
		.I_csr_wen(),
		.I_csr_intr(),
		.I_csr_intr_no(),
		.I_csr_mret(),
		//.O_csr_op_sel(),
		//.O_csr_imm(),
		.O_csr_addr(),
		.O_csr_wen(),
		.O_csr_intr(),
		.O_csr_intr_no(),
		.O_csr_mret(),
		.O_rstrb(EX_MEM_rstrb),
		.O_wstrb(EX_MEM_wstrb),
		.O_alu_out(EX_MEM_alu_out),
		.O_mem_addr(EX_MEM_mem_addr),
		.O_mem_wen(EX_MEM_mem_wen),
		.O_mem_rd_en(O_mem_rd_en),
		.O_rs2_data(EX_MEM_rs2),
		.O_pc(EX_MEM_pc),
		.O_reg_wen(EX_MEM_reg_wen),
		.O_rd_addr(EX_MEM_rd_addr),
		.O_regin_sel(EX_MEM_regin_sel),
		.O_EX_MEM_input_valid(EX_MEM_input_valid),
		.I_inst_debug(ID_EX_inst),
		.O_inst_debug(EX_MEM_inst),
		.I_bubble_inst_debug(ID_EX_bubble),
		.O_bubble_inst_debug(EX_MEM_bubble)
    );
    
    // valid sd data from alu is aligned with EX_MEM_valid
    ysyx_22040750_data_sd mem_sd_e(
		.I_data_in(mem_out),// EX_MEM_rs2
		.I_wr_strb(EX_MEM_wstrb),
		.O_sd_data(O_mem_wr_data)
    );
    
    ysyx_22040750_MEM_WB_reg MEM_WB_reg_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
    	.I_MEM_WB_valid(EX_MEM_valid),
    	.O_MEM_WB_allowin(MEM_WB_allowin),
    	.O_MEM_WB_valid(MEM_WB_valid),
    	.I_pc(EX_MEM_pc),
    	.I_mem_data(I_mem_rd_data),
    	.I_mem_shamt(EX_MEM_shamt),
    	.I_mem_rstrb(EX_MEM_rstrb),
    	.I_alu_out(EX_MEM_alu_out),
    	.I_reg_wen(EX_MEM_reg_wen),
    	.I_rd_addr(EX_MEM_rd_addr),
    	.I_regin_sel(EX_MEM_regin_sel),
		//.I_csr_op_sel(),
		//.I_csr_imm(),
		.I_csr_addr(),
		.I_csr_wen(),
		.I_csr_intr(),
		.I_csr_intr_no(),
		.I_csr_mret(),
		//.O_csr_op_sel(),
		//.O_csr_imm(),
		.O_csr_addr(),
		.O_csr_wen(),
		.O_csr_intr(),
		.O_csr_intr_no(),
		.O_csr_mret(),
    	.O_pc(MEM_WB_pc),
    	.O_mem_data(MEM_WB_mem_data),
    	.O_mem_rstrb(MEM_WB_mem_rstrb),
    	.O_mem_shamt(MEM_WB_shamt),
    	.O_alu_out(MEM_WB_alu_out),
    	.O_reg_wen(MEM_WB_reg_wen),
    	.O_rd_addr(MEM_WB_rd_addr),
    	.O_regin_sel(MEM_WB_regin_sel),
    	.O_MEM_WB_input_valid(MEM_WB_input_valid),
    	.I_inst_debug(EX_MEM_inst),
		.O_inst_debug(MEM_WB_inst),
		.I_bubble_inst_debug(EX_MEM_bubble),
		.O_bubble_inst_debug(MEM_WB_bubble)
    );
    
    // valid ld data from mem is aligned with MEM_WB_valid
    ysyx_22040750_data_ld mem_ld_e(
		.I_data_in(MEM_WB_mem_data),
		.I_rd_strb(MEM_WB_mem_rstrb),
		.I_rd_shamt(MEM_WB_shamt),// 
		.O_load_data(mem_in)
    );
    
    ysyx_22040750_mux_Nbit_Msel #(64, 2)
    regin_64bit_2sel (
		.I_sel_data({mem_in,MEM_WB_alu_out}),
		.I_sel(MEM_WB_regin_sel[1:0]),
		.O_sel_data(wr_data)
    );
    
    ysyx_22040750_gpr gpr_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_wr_data(wr_data),
		.I_wen(MEM_WB_reg_wen & MEM_WB_valid),
		.I_rd_addr(MEM_WB_rd_addr),
		.I_rs1_addr(rs1_addr),
		.O_rs1_data(rs1_data),
		.I_rs2_addr(rs2_addr),
		.O_rs2_data(rs2_data)
    );
	// signal_rd from decoder directly
	// signal_wr from WB pipeline
	ysyx_22040750_csr csr_e(
		.I_sys_clk(I_sys_clk),
		.I_rst(I_rst),
		.I_csr_wen(),
		.I_csr_intr_wr(),
		.I_csr_intr_rd(),
		.I_intr_pc(),
		.I_csr_intr_no(),
		.I_csr_mret_wr(),
		.I_csr_mret_rd(),
		.I_wr_addr(),
		.I_rd_addr(),
		.I_wr_data(),
		.O_rd_data()
	);
endmodule
