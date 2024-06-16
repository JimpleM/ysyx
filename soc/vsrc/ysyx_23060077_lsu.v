`include"ysyx_23060077_define.v"
module ysyx_23060077_lsu(
  input 	                            clock 			   			,
  input 	                            reset 			   			,    

  input  	    [`DATA_WIDTH-1:0]       src1  			   			,
  input  	    [`DATA_WIDTH-1:0]       src2  			   			,
  input  	    [`DATA_WIDTH-1:0]       imm 			     			,

  input       [`LSU_OPT_WIDTH-1:0]    lsu_opt 		   			,
  input       [2:0]                   funct3  		   			,
  // LSU Interface
  output                              lsu_r_valid_o 			,
  output 	    [`AXI_ADDR_WIDTH-1:0]   lsu_r_addr_o  			,
  input                               lsu_r_ready_i 			,
  input       [`DATA_WIDTH-1:0]       lsu_r_data_i  			,
  output 	    [`AXI_SIZE_WIDTH-1:0]   lsu_r_size_o   			,
  output      [`AXI_LEN_WIDTH-1:0]    lsu_r_len_o    			,
  input                               lsu_r_last_i  			,
  output                              lsu_w_valid_o 			,
  output      [`AXI_ADDR_WIDTH-1:0]   lsu_w_addr_o  			,
  input                               lsu_w_ready_i 			,
  output      [`DATA_WIDTH-1:0]       lsu_w_data_o  			,
  output 	    [`AXI_SIZE_WIDTH-1:0]   lsu_w_size_o   			,
  output      [`AXI_LEN_WIDTH-1:0]    lsu_w_len_o    			,
  input                               lsu_w_last_i   			,

  input                               id_to_ex       			,
  output                              mem_stall 		 			,
  output                              lsu_rd_wen  	 			,
  output 	reg [`DATA_WIDTH-1:0]       lsu_result
);

wire [`DATA_WIDTH-1:0] raddr;
wire [`DATA_WIDTH-1:0] rdata;
reg  [2:0]             rsize;
wire [`DATA_WIDTH-1:0] waddr;
wire [`DATA_WIDTH-1:0] wdata;
reg  [2:0]             wmask;


assign raddr = (lsu_opt == `LSU_OPT_LOAD)  ? src1 + imm : 'd0;
assign waddr = (lsu_opt == `LSU_OPT_STORE) ? src1 + imm : 'd0;
assign wdata = src2;

always @(posedge clock) begin
  if(reset)begin
    lsu_result <= 'd0 ;
  end
  else if(lsu_rd_wen_r)begin
  	case({lsu_opt,funct3})
      {`LSU_OPT_LOAD,3'b000}: lsu_result <= {{(`DATA_WIDTH-8){rdata[7]}}    ,rdata[7:0]} 	;
      {`LSU_OPT_LOAD,3'b001}: lsu_result <= {{(`DATA_WIDTH-16){rdata[15]}}  ,rdata[15:0]}	;
      {`LSU_OPT_LOAD,3'b010}: lsu_result <= {{(`DATA_WIDTH-32){rdata[31]}}  ,rdata[31:0]}	;
      {`LSU_OPT_LOAD,3'b100}: lsu_result <= {{(`DATA_WIDTH-8){1'b0}}        ,rdata[7:0]} 	;
      {`LSU_OPT_LOAD,3'b101}: lsu_result <= {{(`DATA_WIDTH-16){1'b0}}       ,rdata[15:0]}	;
      default: 				lsu_result <= 'd0 ; 
  	endcase
  end
end

always @(*) begin
  case({lsu_opt,funct3})
    {`LSU_OPT_LOAD,3'b000}: rsize = 3'd0	;
    {`LSU_OPT_LOAD,3'b001}: rsize = 3'd1	;
    {`LSU_OPT_LOAD,3'b010}: rsize = 3'd2	;
    {`LSU_OPT_LOAD,3'b100}: rsize = 3'd0	;
    {`LSU_OPT_LOAD,3'b101}: rsize = 3'd1	;
    default: 				rsize = 'd0 ; 
  endcase
end

always @(*) begin
	case({lsu_opt,funct3})
		{`LSU_OPT_STORE,3'b000}: wmask = 3'd0;
		{`LSU_OPT_STORE,3'b001}: wmask = 3'd1;
		{`LSU_OPT_STORE,3'b010}: wmask = 3'd2;
		default: 			 	 wmask = 'd0 ; 
	endcase
end


// reg ren;
// reg wen;
wire ren = (lsu_opt == `LSU_OPT_LOAD) & lsu_finished;
wire wen = (lsu_opt == `LSU_OPT_STORE) & lsu_finished;

wire lsu_rd_wen_r;
wire lsu_rd_wen_w;
assign lsu_rd_wen = lsu_rd_wen_r | lsu_rd_wen_w;

reg lsu_finished;

always @(posedge clock ) begin
  if(reset)begin
    lsu_finished <= 'd1;
  end
  else if(lsu_rd_wen)begin
    lsu_finished <= 'd0;
  end
  else if(id_to_ex)begin
    lsu_finished <= 'd1;
  end

end


assign mem_stall = (ren | wen) & !lsu_rd_wen;

assign lsu_r_valid_o  = ren;
assign lsu_r_addr_o   = raddr;
assign lsu_rd_wen_r   = lsu_r_ready_i & lsu_r_last_i;
assign rdata          = lsu_r_data_i;
assign lsu_r_size_o   = rsize;
assign lsu_r_len_o	  = 8'd0;

assign lsu_w_valid_o  = wen;
assign lsu_w_addr_o   = waddr;
assign lsu_rd_wen_w   = lsu_w_last_i;
assign lsu_w_data_o   = wdata;
assign lsu_w_size_o   = wmask;
assign lsu_w_len_o	  = 8'd0;

// always @(posedge clock ) begin
//   if(lsu_rd_wen_r)begin
//     $display("read addr = %x data = %x\n",raddr,rdata);
//   end
// end
`ifdef USING_DPI_C
import "DPI-C" function void device_skip(input bit ren,input int raddr, input bit wen,input int waddr);
always @(*)begin
  device_skip(ren,raddr,wen,waddr);
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
