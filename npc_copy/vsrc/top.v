module top(
	input a,
	input b,
	output f
);


assign f = a ^ b;


export "DPI-C" function integer \$f;

export "DPI-C" task publicSetBool;

task publicSetBool;
   input bit in_bool;
//    var_bool = in_bool;
endtask

endmodule

