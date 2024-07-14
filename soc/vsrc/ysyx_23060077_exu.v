`include"ysyx_23060077_define.v"
module ysyx_23060077_exu(
	input 																						clock 							,
	input 																						reset 							,

	input 	    [`YSYX_23060077_DATA_WIDTH-1:0]       pc									,

	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       src1								,
	input  	    [`YSYX_23060077_DATA_WIDTH-1:0]       src2								,

	input       [`YSYX_23060077_DATA_WIDTH-1:0]       imm									,

	input                               							branch							,

	input       [`YSYX_23060077_ALU_OPT_WIDTH-1:0]    alu_opt							,
	input 																						alu_mul							,
	input 																						alu_div							,
	input       [`YSYX_23060077_SRC_SEL_WIDTH-1:0]    src_sel							,
	input       [2:0]                   							funct3							,
	output                              							branch_taken				,

	input 																						id_to_ex						,
	input 																						ex_to_wb						,

	output 			[`YSYX_23060077_DATA_WIDTH-1:0]       adder_sum						,
	output 			[`YSYX_23060077_DATA_WIDTH-1:0]       adder_pc						,
	output 	reg 																			exu_stall 					,
	output 	reg 																			exu_finished 				,
	output 	    [`YSYX_23060077_DATA_WIDTH-1:0]       exu_result
);
wire adder_sub = (alu_opt == `ALU_SUB || alu_opt == `ALU_SLT || alu_opt == `ALU_SLTU);
wire adder_zero_flag    ;
wire adder_signed_flag  ;
wire adder_unsigned_flag;
// wire [`YSYX_23060077_DATA_WIDTH-1:0] adder_pc;


wire [`YSYX_23060077_DATA_WIDTH-1:0] alu_a_data = src1;
wire [`YSYX_23060077_DATA_WIDTH-1:0] alu_b_data = src_sel[0] ? src2 : imm;
wire [`YSYX_23060077_DATA_WIDTH-1:0] alu_out_data;

//src_sel信号需要优化
ysyx_23060077_adder addder_src1_u0(
	.a     					( alu_a_data 					),
	.b							( alu_b_data					),	
	.is_sub 				( adder_sub						),	
	.sum     				( adder_sum 					),
	.zero_flag    	( adder_zero_flag    	),
	.signed_flag  	( adder_signed_flag  	),
	.unsigned_flag	( adder_unsigned_flag	)
);

ysyx_23060077_adder addder_pc_u0(
	.a     					( pc 											),
	.b							( src_sel[1] ? imm : 'd4	),	
	.is_sub 				( 1'b0										),	
	.sum     				( adder_pc 								),
	.zero_flag    	(  												),
	.signed_flag  	(  												),
	.unsigned_flag	(  												)
);

ysyx_23060077_bru bru_u0(
	.zero_flag    	( adder_zero_flag     ),
	.signed_flag  	( adder_signed_flag   ),
	.unsigned_flag	( adder_unsigned_flag ),
	.branch        	( branch         			),
	.funct3        	( funct3         			),
	.branch_taken  	( branch_taken   			)
);

ysyx_23060077_ex_alu ex_alu(
	.alu_opt        ( alu_opt							),
	.alu_a_data     ( alu_a_data					),
	.alu_b_data     ( alu_b_data					),
	.adder_sum			( adder_sum						),
	.adder_pc				( adder_pc						),
	.signed_flag		( adder_signed_flag		),
	.unsigned_flag	( adder_unsigned_flag	),
	.alu_out_data   ( alu_out_data				)
);

// 上面的单元只运行一拍
reg  ex_alu_doing;
always @(posedge clock) begin
	if(reset)begin
		ex_alu_doing	<= 'd0;
	end
	else if(id_to_ex)begin
		ex_alu_doing	<= 'd1;
	end
	else begin
		ex_alu_doing	<= 'd0;
	end
end
`ifdef USING_DPI_C
/*
------------------- mul --------------------------
*/
reg  [1:0]  mul_signed;
reg  [`YSYX_23060077_DATA_WIDTH-1:0] mul_result;
wire [31:0] result_hi;
wire [31:0] result_ho;
wire mul_ready;
wire mul_out_valid;
always @(*) begin
	case({alu_mul,funct3})
		{1'b1,3'b000} : begin mul_signed = 2'b11; mul_result = result_ho;end
		{1'b1,3'b001} : begin mul_signed = 2'b11; mul_result = result_hi;end
		{1'b1,3'b010} : begin mul_signed = 2'b10; mul_result = result_hi;end
		{1'b1,3'b011} : begin mul_signed = 2'b00; mul_result = result_hi;end
		default:    		begin mul_signed = 'd0; mul_result = 'd0; end
	endcase
end
reg  mul_doing;
wire mul_valid = alu_mul & (!mul_doing) & !mul_out_valid & !exu_finished;
wire mul_busy  = alu_mul & !mul_out_valid;
ysyx_23060077_wallace wallace_u0(
	.clock       		( clock					),
	.reset       		( reset					),
  .mul_signed 		( mul_signed		),
	.multiplicand		( alu_a_data		),
	.multiplier			( alu_b_data		),
	.flush       		( 							),
	.mul_valid   		( mul_valid 		),
	.mul_ready   		( mul_ready			),
	.out_valid   		( mul_out_valid	),
	.result_hi			( result_hi			),
	.result_ho			( result_ho			)
);
always @(posedge clock) begin
	if(reset)begin
		mul_doing	<= 'd0;
	end
	else if(mul_out_valid)begin
		mul_doing	<= 'd0;
	end
	else if(mul_valid & mul_ready)begin
		mul_doing	<= 'd1;
	end
end
// --------------------------------------
/*
------------------- div --------------------------
*/
reg  div_signed;
reg  [`YSYX_23060077_DATA_WIDTH-1:0] div_result;
wire [31:0] quotient;
wire [31:0] remainder;
wire div_ready;
wire div_out_valid;
always @(*) begin
	case({alu_div,funct3})
		{1'b1,3'b100} : begin div_signed = 1'b1; div_result = quotient;end
		{1'b1,3'b101} : begin div_signed = 1'b0; div_result = quotient;end
		{1'b1,3'b110} : begin div_signed = 1'b1; div_result = remainder;end
		{1'b1,3'b111} : begin div_signed = 1'b0; div_result = remainder;end
		default:    		begin div_signed = 'd0; div_result = 'd0; end
	endcase
end
reg  div_doing;
wire div_valid = alu_div & (!div_doing) & !div_out_valid & !exu_finished;
wire div_busy  = alu_div & !div_out_valid;
ysyx_23060077_div div_u0(
	.clock       		( clock			 		),
	.reset       		( reset			 		),
  .div_signed 		( div_signed 		),
  .dividend     	( alu_a_data 		),
	.divisor				( alu_b_data 		),
  .flush          ( 							),	
  .div_valid      ( div_valid			),
  .div_ready      ( div_ready 		),
  .out_valid      ( div_out_valid	),
  .quotient       ( quotient			),
  .remainder      ( remainder			)
);
always @(posedge clock) begin
	if(reset)begin
		div_doing	<= 'd0;
	end
	else if(div_out_valid)begin
		div_doing	<= 'd0;
	end
	else if(div_valid & div_ready)begin
		div_doing	<= 'd1;
	end
end
// --------------------------------------
`endif
reg  	[`YSYX_23060077_DATA_WIDTH-1:0] exu_result_buff;

always @(posedge clock ) begin
	if(reset)begin
		exu_result_buff	<= 'd0;
	end
`ifdef USING_DPI_C
	else if(mul_out_valid)begin
		exu_result_buff	<= mul_result;
	end
	else if(div_out_valid)begin
		exu_result_buff	<= div_result;
	end
`endif
	else if(!alu_mul & ! alu_div & ex_alu_doing)begin
		exu_result_buff	<= alu_out_data;
	end
end

always @(posedge clock ) begin
	if(reset)begin
		exu_finished	<= 'd0;
	end
`ifdef USING_DPI_C
	else if(mul_out_valid | div_out_valid)begin
		exu_finished	<= 'd1;
	end
	else if(!alu_mul & ! alu_div & ex_alu_doing)begin
		exu_finished	<= 'd1;
	end
`endif
	else if(ex_to_wb)begin
		exu_finished	<= 'd0;
	end
end

assign exu_result = exu_result_buff;

endmodule

