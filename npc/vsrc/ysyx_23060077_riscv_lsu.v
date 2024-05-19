`include"ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_lsu(
    input 	                            clk,
    input 	                            rst_n,    

    input  	    [`DATA_WIDTH-1:0]       src1,
    input  	    [`DATA_WIDTH-1:0]       src2,
    input       [`DATA_WIDTH-1:0]       imm,

    input       [`LSU_OPT_WIDTH-1:0]    lsu_opt,
    input       [2:0]                   funct3,

    output                              mem_stall,
    output                              lsu_rd_wen,
    output  	  [`DATA_WIDTH-1:0]       lsu_result
);

wire [`DATA_WIDTH-1:0] raddr;
wire [`DATA_WIDTH-1:0] rdata;
wire [`DATA_WIDTH-1:0] waddr;
wire [`DATA_WIDTH-1:0] wdata;
wire [`DATA_WIDTH-1:0] wmask;
wire [`DATA_WIDTH-1:0]  mask;


assign raddr = src1 + imm;
assign waddr = src1 + imm;
assign wdata = src2;
assign wmask = mask;

ysyx_23060077_riscv_mux#(
    .NR_KEY      (5), 
    .KEY_LEN     (`LSU_OPT_WIDTH+3), 
    .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_ls_lsu_opt(
  .key              ({lsu_opt,funct3}),
  .default_out      (0),
  .out              ({lsu_result}),
  .lut({{`LSU_OPT_LOAD,3'b000}, {{(`DATA_WIDTH-8){rdata[7]}}    ,rdata[7:0]},       //lb
        {`LSU_OPT_LOAD,3'b001}, {{(`DATA_WIDTH-16){rdata[15]}}  ,rdata[15:0]},      //lh
        {`LSU_OPT_LOAD,3'b010}, {{(`DATA_WIDTH-32){rdata[31]}}  ,rdata[31:0]},      //lw
        {`LSU_OPT_LOAD,3'b100}, {{(`DATA_WIDTH-8){1'b0}}        ,rdata[7:0]},       //lbu
        {`LSU_OPT_LOAD,3'b101}, {{(`DATA_WIDTH-16){1'b0}}       ,rdata[15:0]}       //lhu
  })
);


ysyx_23060077_riscv_mux#(
    .NR_KEY      (3), 
    .KEY_LEN     (`LSU_OPT_WIDTH+3), 
    .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_ls_wmask(
  .key              ({lsu_opt,funct3}),
  .default_out      (0),
  .out              ({mask}),
  .lut({{`LSU_OPT_STORE,3'b000}, {32'd1},         //sb
        {`LSU_OPT_STORE,3'b001}, {32'd2},         //sh
        {`LSU_OPT_STORE,3'b010}, {32'd4}          //sw
  })
);

reg ren;
reg wen;

wire lsu_rd_wen_r;
wire lsu_rd_wen_w;
assign lsu_rd_wen = lsu_rd_wen_r | lsu_rd_wen_w;

always @(posedge clk ) begin
  if(!rst_n)begin
    ren <= 'd0;
  end
  else if(lsu_rd_wen_r)begin
    ren <= 'd0;
  end
  else if(lsu_opt == `LSU_OPT_LOAD)begin
    ren <= 'd1;
  end

end

always @(posedge clk ) begin
  if(!rst_n)begin
    wen <= 'd0;
  end
  else if(lsu_rd_wen_w)begin
    wen <= 'd0;
  end
  else if(lsu_opt == `LSU_OPT_STORE)begin
    wen <= 'd1;
  end

end

assign mem_stall = (ren | wen) & !lsu_rd_wen;


ysyx_23060077_riscv_axi_lite  u_ysyx_23060077_riscv_axi_lite (
    .aclk                   ( clk    ),
    .areset_n               ( rst_n  ),

    .cpu_r_valid_i          (ren),
    .cpu_r_addr_i           (raddr),
    .cpu_r_ready_o          (lsu_rd_wen_r),
    .cpu_r_data_o           (rdata),

    .cpu_w_valid_i          (wen),
    .cpu_w_addr_i           (waddr),
    .cpu_w_ready_o          (lsu_rd_wen_w),
    .cpu_w_data_i           (wdata),
    .cpu_w_strb_i           (wmask[2:0])
);


endmodule
