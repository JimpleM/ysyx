module ysyx_23060077_riscv32(
	input clk,
	input rst_n
);

parameter IMEM_DATA_WIDTH = 32;
parameter IMEM_ADDR_WIDTH = 10;	// 1024个pc

// pc 指令
reg 	[IMEM_DATA_WIDTH-1:0] 	pc;
reg 	[IMEM_DATA_WIDTH-1:0] 	snpc;
reg 	[IMEM_DATA_WIDTH-1:0] 	inst;


always @(posedge clk) begin
    if (!rst_n)begin
		pc	<= 32'h8000_0000;
	end
	else begin
		pc <= snpc;
	end
end

// 取指
ysyx_23060077_riscv_ram  #(
	.ADDR_WIDTH(IMEM_ADDR_WIDTH),
	.DATA_WIDTH(IMEM_DATA_WIDTH)
) riscv_ram_pc (
	.clk		(clk),
	.en			(1'b1),
	.wen		(1'b0),
	.addr		(pc[IMEM_ADDR_WIDTH-1:0]),
	.wdata		(),
	.rdata		(inst)
);




endmodule

