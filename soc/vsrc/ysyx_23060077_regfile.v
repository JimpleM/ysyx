`include"ysyx_23060077_define.v"
module ysyx_23060077_regfile (
	input                               clock								,
	input                               reset								,

	input       [`YSYX_23060077_REG_WIDTH-1:0]        rs1_addr						,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]       rs1_data						,

	input       [`YSYX_23060077_REG_WIDTH-1:0]        rs2_addr						,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]       rs2_data						,

	input                               							reg_rd_en						,
	input       [`YSYX_23060077_REG_WIDTH-1:0]        reg_rd_addr					,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       reg_rd_data
);

localparam REG_COUNT = (1<<`YSYX_23060077_REG_WIDTH);

reg [`YSYX_23060077_DATA_WIDTH-1:0] gpr [REG_COUNT-1:0];


// read rs1
assign rs1_data = gpr[rs1_addr];

// read rs2
assign rs2_data = gpr[rs2_addr];

integer i;
wire [`YSYX_23060077_DATA_WIDTH-1:0] reg_rd_data_t = (|reg_rd_addr) ? reg_rd_data : 'd0;
// reg_rd_addr == 5'd0，不能删掉，会有一些指令把无用数据写到0寄存器
// 用(|reg_rd_addr)代表不为0，节省逻辑电路
always @(posedge clock) begin
	if(reset)begin
		for(i=0; i<REG_COUNT; i=i+1)begin
			gpr[i] = 0;
		end   
	end
	else begin
		if (reg_rd_en)begin
			gpr[reg_rd_addr] <= reg_rd_data_t;
		end 
	end
end

// sta无法综合，奇怪？？
// wire  gpr_wen [REG_COUNT-1:0];
// genvar i;
// generate
// 	for(i=0; i<REG_COUNT; i++)begin
// 		if(i == 0)begin
// 			assign gpr_wen[i] = 1'b0;
// 			assign gpr[i] 		= 'd0;
// 		end
// 		else begin
// 			assign gpr_wen[i] = reg_rd_en & (reg_rd_addr == i);
// 			ysyx_23060077_dff#(
// 					.WIDTH      	(32), 
// 					.RESET_VAL   ('d0)
// 			)regfile_dff(clock,reset,gpr_wen[i],reg_rd_data,gpr[i]);
// 		end
// 	end
// endgenerate





`ifdef USING_DPI_C
// for sim
import "DPI-C" function void set_gpr_ptr(input logic [31:0] a []);
initial set_gpr_ptr(gpr);  // rf为通用寄存器的二维数组变量
`endif

endmodule
