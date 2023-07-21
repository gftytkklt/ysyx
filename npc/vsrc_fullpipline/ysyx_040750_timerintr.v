module ysyx_040750_timerintr(
    // input I_ID_intr,
    input I_EX_intr,// from ID_EX
    input I_MEM_intr,// from EX_MEM
    input I_WB_intr,// from MEM_WB
    // input I_ID_csr_wen,
    // input [11:0] I_ID_csr_addr,
    // input [63:0] I_ID_csr_data,
    input I_EX_csr_wen,
    input [11:0] I_EX_csr_addr,
    input [1:0] I_EX_csr_data,// {mie, mstatus_mie}
    input I_MEM_csr_wen,
    input [11:0] I_MEM_csr_addr,
    input [1:0] I_MEM_csr_data,
    input I_WB_csr_wen,
    input [11:0] I_WB_csr_addr,
    input [1:0] I_WB_csr_data,
    input I_csr_intr,
    output O_timer_intr
);
    // data in this module indicates wdata
    localparam MSTATUS = 12'h300;
    localparam MIE = 12'h304;
    wire csr_intr;
    wire EX_intr_disable, MEM_intr_disable, WB_intr_disable;
    wire EX_mstatus_mie, MEM_mstatus_mie, WB_mstatus_mie;
    wire EX_mie, MEM_mie, WB_mie;
    wire EX_wr_mie, MEM_wr_mie, WB_wr_mie;
    wire EX_wr_mstatus, MEM_wr_mstatus, WB_wr_mstatus;
    assign csr_intr = I_csr_intr & ~(I_EX_intr | I_MEM_intr | I_WB_intr);
    assign {EX_mstatus_mie, MEM_mstatus_mie, WB_mstatus_mie} = {I_EX_csr_data[0], I_MEM_csr_data[0], I_WB_csr_data[0]};
    assign {EX_mie, MEM_mie, WB_mie} = {I_EX_csr_data[1], I_MEM_csr_data[1], I_WB_csr_data[1]};
    assign EX_wr_mie = I_EX_csr_wen && (I_EX_csr_addr == MIE);
    assign EX_wr_mstatus = I_EX_csr_wen && (I_EX_csr_addr == MSTATUS);
    assign EX_intr_disable = (EX_wr_mie & ~EX_mie) | (EX_wr_mstatus & ~EX_mstatus_mie);
    assign MEM_wr_mie = I_MEM_csr_wen && (I_MEM_csr_addr == MIE);
    assign MEM_wr_mstatus = I_MEM_csr_wen && (I_MEM_csr_addr == MSTATUS);
    assign MEM_intr_disable = (MEM_wr_mie & ~MEM_mie) | (MEM_wr_mstatus & ~MEM_mstatus_mie);
    assign WB_wr_mie = I_WB_csr_wen && (I_WB_csr_addr == MIE);
    assign WB_wr_mstatus = I_WB_csr_wen && (I_WB_csr_addr == MSTATUS);
    assign WB_intr_disable = (WB_wr_mie & ~WB_mie) | (WB_wr_mstatus & ~WB_mstatus_mie);
    assign O_timer_intr = csr_intr & ~(EX_intr_disable | MEM_intr_disable | WB_intr_disable);
endmodule
