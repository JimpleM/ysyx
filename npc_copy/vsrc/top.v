module top(
	input [31:0] a,
	input [31:0]b,
	output reg [31:0]f
);


import "DPI-C" function int add(input int a, input int b);
always @(*) begin
	f = add(a,b);
end
// export "DPI-C" function integer \$f;

initial begin
   $display("%x + %x = %x", 1, 2, add(1,2));
end

export "DPI-C" task publicSetBool;

task publicSetBool;
   input bit in_bool;
//    var_bool = in_bool;
endtask

endmodule

