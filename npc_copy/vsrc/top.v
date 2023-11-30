module top(
	input [31:0] a,
	input [31:0]b,
	output [31:0]f
);


import "DPI-C" function void mem_read(input int pc, output int inst, input en);

always @(*)begin
	mem_read(a,f,1'b1);
end

initial begin
	$display("%x",14-15);
end



endmodule

