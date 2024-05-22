`include "ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_ifu(
    input                               clk,
    input                               rst_n,

    input       [`DATA_WIDTH-1:0]       jump_pc,
    input                               jump_pc_valid,
    input                               stall,
    input                               wbu_stall,

    // IFU Interface
    output                              ifu_r_valid_o,
    output  [`AXI_ADDR_WIDTH-1:0]       ifu_r_addr_o,
    input                               ifu_r_ready_i,
    input   [`AXI_DATA_WIDTH-1:0]       ifu_r_data_i,

    output                              ifu_stall,            
    output  	[`INST_WIDTH-1:0]       ifu_pc_o,
    output  	[`INST_WIDTH-1:0]       ifu_inst_o
);

reg  	[`INST_WIDTH-1:0]       ifu_pc_o_r;
reg  	[`INST_WIDTH-1:0]       ifu_inst_o_r;

assign ifu_pc_o = ifu_pc_o_r;
assign ifu_inst_o = ifu_inst_o_r;

reg   [`DATA_WIDTH-1:0]       pc;
wire  [`INST_WIDTH-1:0]       inst;

reg cpu_r_valid_i;
wire cpu_r_ready_o;

assign ifu_stall = cpu_r_valid_i;

import "DPI-C" function void get_riscv32_rst(input bit reset);
always @(*)begin
    get_riscv32_rst(rst_n);
end

initial begin
    pc = 32'h8000_0000;
    ifu_pc_o_r = 32'h8000_0000;
end
always @(posedge clk) begin
    if(!rst_n)begin
        pc <= 32'h8000_0000;
        cpu_r_valid_i <= 'd1;
    end
    else if(cpu_r_ready_o)begin
        pc <= pc;
        cpu_r_valid_i <= 'd0;
    end
    else if(stall | wbu_stall)begin
        pc <= pc;
    end
    else if(jump_pc_valid)begin
        pc <= jump_pc;
        cpu_r_valid_i <= 'd1;
    end
    else if(cpu_r_valid_i)begin
        pc <= pc;
    end
    else begin
        pc <= pc + 4;
        cpu_r_valid_i <= 'd1;
    end
end

always @(posedge clk) begin
    if(stall)begin
        ifu_pc_o_r <= ifu_pc_o_r;
        ifu_inst_o_r <= ifu_inst_o_r;
    end
    else if(cpu_r_ready_o)begin
        ifu_pc_o_r <= pc;
        ifu_inst_o_r <= inst;
    end
    else begin
        ifu_pc_o_r <= ifu_pc_o_r;
        ifu_inst_o_r <= ifu_inst_o_r;
    end
end

assign ifu_r_valid_o = cpu_r_valid_i;
assign ifu_r_addr_o  = pc;
assign inst          = ifu_r_data_i;
assign cpu_r_ready_o = ifu_r_ready_i;



endmodule
