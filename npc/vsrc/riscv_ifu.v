`include"riscv_define.vh"
module ysyx_23060077_riscv_ifu(
    input 	    [`DATA_WIDTH-1:0]       pc,
    input                               rst_n,

    output  	[`INST_WIDTH-1:0]       inst
);

import "DPI-C" function void mem_read(input int pc, output int inst, input en);

always @(*)begin
    mem_read(pc,inst,rst_n);
end


endmodule