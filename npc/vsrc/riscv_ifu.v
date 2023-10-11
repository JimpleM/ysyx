`include "riscv_define.v"
module riscv_ifu(
    input                               rst_n,
    input 	    [`DATA_WIDTH-1:0]       pc,

    output  	[`INST_WIDTH-1:0]       inst
);


import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
import "DPI-C" function void set_pc_ptr(input int pc);
always @(*)begin
    riscv_pmem_read(pc,inst,rst_n);
    set_pc_ptr(pc);
end


endmodule
