`include"ysyx_23060077_define.v"
module ysyx_23060077_regfile (
	input                               clock								,
	input                               reset								,
	// scoreboard
	output 															rs1_busy  					,
	output 															rs2_busy 						,
	output 															rd_busy 						,
	input       [`REG_WIDTH-1:0]       	idu_rd_addr					,
	input 															idu_rd_wen					,

	input       [`REG_WIDTH-1:0]        rs1_addr						,
	output      [`DATA_WIDTH-1:0]       rs1_data						,

	input       [`REG_WIDTH-1:0]        rs2_addr						,
	output      [`DATA_WIDTH-1:0]       rs2_data						,

	input                               reg_rd_en						,
	input       [`REG_WIDTH-1:0]        reg_rd_addr					,
	input       [`DATA_WIDTH-1:0]       reg_rd_data
);

reg [`DATA_WIDTH-1:0] gpr [`REG_COUNT-1:0];
reg [0:0]				 scoreboard [`REG_COUNT-1:0];
integer i;

// read rs1
assign rs1_data = gpr[rs1_addr];
assign rs1_busy = scoreboard[rs1_addr];

// read rs2
assign rs2_data = gpr[rs2_addr];
assign rs2_busy = scoreboard[rs2_addr];

assign rd_busy  = scoreboard[idu_rd_addr];

// reg_rd_addr == 5'd0，不能删掉，会有一些指令把无用数据写到0寄存器
// 用(|reg_rd_addr)代表不为0，节省逻辑电路
always @(posedge clock) begin
	if(reset)begin
		for(i=0; i<`REG_COUNT; i=i+1)begin
			gpr[i] = 0;
			scoreboard[i] = 0;
		end   
	end
	else begin
		if (reg_rd_en & (|reg_rd_addr) )begin
			gpr[reg_rd_addr] <= reg_rd_data;
			scoreboard [reg_rd_addr] <= 1'b0;
		end 
		if(idu_rd_wen & (|idu_rd_addr))begin
			scoreboard [idu_rd_addr] <= 1'b1;
		end
	end
end

`ifdef USING_DPI_C
// for sim
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(gpr);  // rf为通用寄存器的二维数组变量
`endif

endmodule
