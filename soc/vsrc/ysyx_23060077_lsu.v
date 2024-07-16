`include"ysyx_23060077_define.v"
module ysyx_23060077_lsu(
  input 	                                          clock 			   			,
  input 	                                          reset 			   			,    

  input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       adder_sum  			    ,
  input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       src2  			   			,
  input 			[`YSYX_23060077_EXU_OPT_WIDTH-1:0]    exu_opt_bus					,
  input                                             ex_to_wb       			,
  output                                            mem_stall 		 			,
  output  reg                                       lsu_finished  	 		,
  output 	reg [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_result          ,

  // LSU Interface
  output                                            lsu_r_valid_o 			,
  output 	    [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   lsu_r_addr_o  			,
  input                                             lsu_r_ready_i 			,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_r_data_i  			,
  output 	    [3-1:0]                               lsu_r_size_o   			,
  output      [8-1:0]                               lsu_r_len_o    			,
  input                                             lsu_r_last_i  			,
  output                                            lsu_w_valid_o 			,
  output      [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   lsu_w_addr_o  			,
  input                                             lsu_w_ready_i 			,
  output      [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_w_data_o  			,
  output 	    [3-1:0]                               lsu_w_size_o   			,
  output      [8-1:0]                               lsu_w_len_o    			,
  input                                             lsu_w_last_i   			
);

wire [`YSYX_23060077_DATA_WIDTH-1:0] rdata;
wire [`YSYX_23060077_DATA_WIDTH-1:0] wdata = src2;
wire [`YSYX_23060077_DATA_WIDTH-1:0] lsu_address;

wire load  = exu_opt_bus[`YSYX_23060077_EX_LSU_LOAD ];
wire store = exu_opt_bus[`YSYX_23060077_EX_LSU_STORE];

ysyx_23060077_ls_agu ls_agu_u0(
  .agu_en 		  ( load | store), 
  .adder_sum    ( adder_sum   ),
  .lsu_address  ( lsu_address )
);

wire [2:0] size =
({3{exu_opt_bus[`YSYX_23060077_EX_00]}} & 3'd0) |
({3{exu_opt_bus[`YSYX_23060077_EX_01]}} & 3'd1) |
({3{exu_opt_bus[`YSYX_23060077_EX_10]}} & 3'd2) ;

wire [2:0] rsize = load  ? size : 3'd0;
wire [2:0] wmask = store ? size : 3'd0;

wire ren = load  & !lsu_finished;
wire wen = store & !lsu_finished;

wire lsu_rd_wen_r;
wire lsu_rd_wen_w;
// 读操作对有符号数进行扩展
wire rdata_bit8   = (~exu_opt_bus[`YSYX_23060077_EX_FUN3_BIT2]) & rdata[7];
wire [`YSYX_23060077_DATA_WIDTH-1:0] rdata_8bits = {{(`YSYX_23060077_DATA_WIDTH-8){rdata_bit8}} ,rdata[7:0]};
wire rdata_bit16  = (~exu_opt_bus[`YSYX_23060077_EX_FUN3_BIT2]) & rdata[15];
wire [`YSYX_23060077_DATA_WIDTH-1:0] rdata_16bits= {{(`YSYX_23060077_DATA_WIDTH-16){rdata_bit16}},rdata[15:0]};
wire [`YSYX_23060077_DATA_WIDTH-1:0] rdata_32bits= rdata;
wire [`YSYX_23060077_DATA_WIDTH-1:0] rdata_result = 
({`YSYX_23060077_DATA_WIDTH{exu_opt_bus[`YSYX_23060077_EX_00]}} & rdata_8bits ) |
({`YSYX_23060077_DATA_WIDTH{exu_opt_bus[`YSYX_23060077_EX_01]}} & rdata_16bits) |
({`YSYX_23060077_DATA_WIDTH{exu_opt_bus[`YSYX_23060077_EX_10]}} & rdata_32bits) ;

always @(posedge clock) begin
  if(reset)begin
    lsu_result  <= 'd0 ;
  end
  else if(lsu_rd_wen_r)begin
    lsu_result   <= rdata_result;
  end
end

always @(posedge clock ) begin
  if(reset)begin
    lsu_finished <= 'd0;
  end
  else if(lsu_rd_wen_r | lsu_rd_wen_w)begin
    lsu_finished <= 'd1;
  end
  else if(ex_to_wb)begin
    lsu_finished <= 'd0;
  end
end


assign lsu_r_valid_o  = ren;
assign lsu_r_addr_o   = lsu_address;
assign lsu_rd_wen_r   = lsu_r_ready_i & lsu_r_last_i;
assign rdata          = lsu_r_data_i;
assign lsu_r_size_o   = rsize;
assign lsu_r_len_o	  = 8'd0;

assign lsu_w_valid_o  = wen;
assign lsu_w_addr_o   = lsu_address;
assign lsu_rd_wen_w   = lsu_w_last_i;
assign lsu_w_data_o   = wdata;
assign lsu_w_size_o   = wmask;
assign lsu_w_len_o	  = 8'd0;







// always @(posedge clock ) begin
//   if(lsu_rd_wen_r)begin
//     $display("read lsu_address = %x data = %x\n",raddr,rdata);
//   end
// end
`ifdef USING_DPI_C
import "DPI-C" function void device_skip(input bit ren,input int raddr, input bit wen,input int waddr);
always @(*)begin
  device_skip(ren,lsu_address,wen,lsu_address);
end
import "DPI-C" function void lsu_read_data();
import "DPI-C" function void lsu_write_data();
always @(posedge clock)begin
  if(ren)begin
    lsu_read_data();
  end
  if(wen)begin
    lsu_write_data();
  end
end
`endif

endmodule
