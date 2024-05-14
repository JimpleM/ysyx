`include "ysyx_23060077_riscv_define.v"
module ysyx_23060077_riscv_ifu(
    input                               clk,
    input                               rst_n,

    input       [`DATA_WIDTH-1:0]       jump_pc,
    input                               jump_pc_valid,

    output  	[`INST_WIDTH-1:0]       ifu_pc_o,
    output  	[`INST_WIDTH-1:0]       ifu_inst_o
);

reg  	[`INST_WIDTH-1:0]       ifu_pc_o_r;
reg  	[`INST_WIDTH-1:0]       ifu_inst_o_r;

assign ifu_pc_o = ifu_pc_o_r;
assign ifu_inst_o = ifu_inst_o_r;

reg   [`DATA_WIDTH-1:0]       pc;
wire  [`INST_WIDTH-1:0]       inst;

import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
import "DPI-C" function void get_riscv32_rst(input bit rst_n);
always @(*)begin
    riscv_pmem_read(pc,inst,rst_n);
    get_riscv32_rst(rst_n);
end

initial begin
    pc = 32'h8000_0000;
    ifu_pc_o_r = pc;
end
always @(posedge clk) begin
    if(!rst_n)begin
        pc <= 32'h8000_0000;
    end
    else if(jump_pc_valid)begin
        pc <= jump_pc;
    end
    else begin
        pc <= pc + 4;
    end
end

always @(posedge clk) begin
    if(jump_pc_valid)begin
        ifu_pc_o_r <= 'd0;
        ifu_inst_o_r <= 'd0;
    end
    else begin
        ifu_pc_o_r <= pc;
        ifu_inst_o_r <= inst;
    end
end

endmodule
