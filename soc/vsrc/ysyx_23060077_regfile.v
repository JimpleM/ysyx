`include"ysyx_23060077_define.v"
module ysyx_23060077_regfile (
    input                               clk,
    input                               reset,

    input       [`REG_WIDTH-1:0]        rs1_addr,
    output      [`DATA_WIDTH-1:0]       rs1_data,

    input       [`REG_WIDTH-1:0]        rs2_addr,
    output      [`DATA_WIDTH-1:0]       rs2_data,

    input                               rd_en,
    input       [`REG_WIDTH-1:0]        rd_addr,
    input       [`DATA_WIDTH-1:0]       rd_data
);

reg [`DATA_WIDTH-1:0] gpr [`REG_COUNT-1:0];

integer i;

// read rs1
assign rs1_data = gpr[rs1_addr];

// read rs2
assign rs2_data = gpr[rs2_addr];

// rd_addr == 5'd0，不能删掉，会有一些指令把无用数据写到0寄存器
// 用(|rd_addr)代表不为0，节省逻辑电路
always @(posedge clk) begin
    if(reset)begin
        for(i=0; i<`REG_COUNT; i=i+1)   gpr[i] = 0;
    end
    else begin
        if (rd_en & (|rd_addr) )begin
            gpr[rd_addr] <= rd_data;
        end 
    end
end

`ifdef USING_DPI_C
// for sim
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(gpr);  // rf为通用寄存器的二维数组变量
`endif

endmodule
