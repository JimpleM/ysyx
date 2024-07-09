`include"ysyx_23060077_define.v"
module ysyx_23060077_id_imm_ext #(
    INPUT_WIDTH = 1
) (
	input 	    [INPUT_WIDTH-1:0]       imm_in							,
	output  		[`YSYX_23060077_DATA_WIDTH-1:0]       imm_out
);

assign imm_out = {{(`YSYX_23060077_DATA_WIDTH-INPUT_WIDTH){imm_in[INPUT_WIDTH-1]}},imm_in};

endmodule
