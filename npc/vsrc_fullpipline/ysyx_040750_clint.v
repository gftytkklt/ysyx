module ysyx_040750_clint(
    input I_clk,
    input I_rst,
    output O_mtip,
    output reg [63:0] O_clint_rdata, 
    output O_clint_rvalid, 
    input I_clint_rready, 
    input [31:0] I_clint_araddr, 
    output O_clint_arready, 
    input I_clint_arvalid, 
    input [63:0] I_clint_wdata, 
    input I_clint_wvalid, 
    output O_clint_wready, 
    input [7:0] I_clint_wstrb, 
    input [31:0] I_clint_awaddr, 
    input I_clint_awvalid, 
    output O_clint_awready, 
    output O_clint_bvalid, 
    input I_clint_bready
);
    parameter BASE_ADDR = 'h02000000;
    parameter MTIMECMP_ADDR = 'h4000 + BASE_ADDR;
    parameter MTIME_ADDR = 'hBFF8 + BASE_ADDR;
    // parameter TICKCNT = 12'h01;
    reg [63:0] mtime, mtimecmp;
    // reg [11:0] tick_cnt;
    wire [63:0] bitmask;
    // wire incr_en;
    wire ar_handshake, aw_handshake, r_handshake, w_handshake;
    reg wr_mtime, rd_mtime, wr_mtimecmp, rd_mtimecmp;
    genvar i;
    for (i=0;i<8;i=i+1) begin
        assign bitmask[8*i +: 8] = {8{I_clint_wstrb[i]}};
    end
    assign ar_handshake = I_clint_arvalid && O_clint_arready;
    assign aw_handshake = I_clint_awvalid && O_clint_awready;
    assign r_handshake = O_clint_rvalid && I_clint_rready;
    assign w_handshake = I_clint_wvalid && O_clint_wready;
    //axi const
    assign O_clint_arready = 1;
    assign O_clint_wready = 1;
    assign O_clint_awready = 1;
    assign O_clint_bvalid = w_handshake;// whandshake correspond reg writeback
    assign O_clint_rvalid = rd_mtime | rd_mtimecmp;
    assign O_mtip = (mtime >= mtimecmp);
    // assign incr_en = (tick_cnt == TICKCNT-1);
    always @(posedge I_clk)
        if(I_rst)
            {wr_mtime, wr_mtimecmp} <= 0;
        else if(aw_handshake)
            {wr_mtime, wr_mtimecmp} <= {(I_clint_awaddr == MTIME_ADDR), (I_clint_awaddr == MTIMECMP_ADDR)};
        else if(w_handshake)
            {wr_mtime, wr_mtimecmp} <= 0;
        else
            {wr_mtime, wr_mtimecmp} <= {wr_mtime, wr_mtimecmp};
    always @(posedge I_clk)
        if(I_rst)
            {rd_mtime, rd_mtimecmp} <= 0;
        else if(ar_handshake)
            {rd_mtime, rd_mtimecmp} <= {(I_clint_araddr == MTIME_ADDR), (I_clint_araddr == MTIMECMP_ADDR)};
        else if(r_handshake)
            {rd_mtime, rd_mtimecmp} <= 0;
        else
            {rd_mtime, rd_mtimecmp} <= {rd_mtime, rd_mtimecmp};
    // should mtime be read only?
    always @(posedge I_clk)
        if(I_rst)
            mtime <= 0;
        else if(wr_mtime && w_handshake)
            mtime <= (mtime & (~bitmask)) | (I_clint_wdata & bitmask);
        // else if(incr_en)
        //     mtime <= mtime + 1;
        else
            mtime <= mtime + 1;
    always @(posedge I_clk)
        if(I_rst)
            mtimecmp <= 0;
        else if(wr_mtimecmp  && w_handshake)
            mtimecmp <= (mtimecmp  & (~bitmask)) | (I_clint_wdata & bitmask);
        else
            mtimecmp <= mtimecmp;

    // always @(posedge I_clk)
    //     if(I_rst)
    //         tick_cnt <= 0;
    //     else
    //         tick_cnt <= incr_en ? 0 : tick_cnt + 1;

    always @(*)
        case({rd_mtime, rd_mtimecmp})
            'b10: O_clint_rdata = mtime;
            'b01: O_clint_rdata = mtimecmp;
            default: O_clint_rdata = 0;
        endcase
endmodule
