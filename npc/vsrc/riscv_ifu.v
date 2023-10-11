`include "riscv_define.v"
`include "riscv_define.vh"
module ysyx_23060077_riscv_ifu(
    input                               rst_n,
    input 	    [`DATA_WIDTH-1:0]       pc,

    output  	[`INST_WIDTH-1:0]       inst
);



wire [`DATA_WIDTH-1:0] raddr;
wire [`INST_WIDTH-1:0] rdata;

assign raddr = pc;
assign inst = rdata;

import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
always @(*)begin
    riscv_pmem_read(raddr,rdata,rst_n);
end


endmodule
