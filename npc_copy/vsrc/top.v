module top(
	input a,
	input b,
	output f
);

reg [31:0]c;
assign f = a ^ b;

import "DPI-C" function int add(input int a, input int b);
always @(*) begin
	c = add(a,b);
end
// export "DPI-C" function integer \$f;

export "DPI-C" task publicSetBool;

task publicSetBool;
   input bit in_bool;
//    var_bool = in_bool;
endtask

endmodule

