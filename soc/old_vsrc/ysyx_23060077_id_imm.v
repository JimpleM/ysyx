`include"ysyx_23060077_define.v"
module ysyx_23060077_id_imm(
	input 	    [`YSYX_23060077_INST_WIDTH-1:0]   		inst								,
	output  		[`YSYX_23060077_DATA_WIDTH-1:0]   		imm
);
reg [`YSYX_23060077_DATA_WIDTH-1:0]   imm_r;
assign imm = imm_r;


// always @(*) begin
//     case(inst[6:0])
//         `LUI   : imm_r = {inst[31:12],12'd0}    ;
//         `AUIPC : imm_r = {inst[31:12],12'd0}    ;
//         `JAL   : imm_r = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}    ;
//         `JALR  : imm_r = {{20{inst[31]}},inst[31:20]}    ;
//         `BRANCH: imm_r = {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}    ;
//         `LOAD  : imm_r = {{20{inst[31]}},inst[31:20]}    ;
//         `STORE : imm_r = {{20{inst[31]}},inst[31:25],inst[11:7]}    ;
//         `OP_IMM: imm_r = {{20{inst[31]}},inst[31:20]}    ;
//         `OP    : imm_r = 32'd0    ;
//         `FENCE : imm_r = 32'd0;
//         `SYS   : imm_r = {{20{inst[31]}},inst[31:20]}    ;
//         default: imm_r = 32'd0; 
//     endcase
// end


wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_typeI;
wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_typeU;
wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_typeS;
wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_typeB;
wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_typeJ;
wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_typeR;
wire [`YSYX_23060077_DATA_WIDTH-1:0]  imm_type_NONE;

assign imm_typeR        = {`YSYX_23060077_DATA_WIDTH{1'b0}};
assign imm_type_NONE    = {`YSYX_23060077_DATA_WIDTH{1'b0}};

always @(*) begin
	case(inst[6:0])
		`LUI   : imm_r = imm_typeU    ;
		`AUIPC : imm_r = imm_typeU    ;
		`JAL   : imm_r = imm_typeJ    ;
		`JALR  : imm_r = imm_typeI    ;
		`BRANCH: imm_r = imm_typeB    ;
		`LOAD  : imm_r = imm_typeI    ;
		`STORE : imm_r = imm_typeS    ;
		`OP_IMM: imm_r = imm_typeI    ;
		`OP    : imm_r = imm_typeR    ;
		`FENCE : imm_r = imm_type_NONE;
		`SYS   : imm_r = imm_typeI    ;
		default: imm_r = imm_type_NONE; 
	endcase
end


ysyx_23060077_id_imm_ext #(
		.INPUT_WIDTH    (12)
)id_imm_ext_typeI(
		.imm_in      (inst[31:20]),
		.imm_out     (imm_typeI)
);
// TO MODIFIED
ysyx_23060077_id_imm_ext #(
		.INPUT_WIDTH    (32)
)id_imm_ext_typeU(
		.imm_in      ({inst[31:12],{12{1'b0}}}),
		.imm_out     (imm_typeU)
);

ysyx_23060077_id_imm_ext #(
		.INPUT_WIDTH    (12)
)id_imm_ext_typeS(
		.imm_in      ({inst[31:25],inst[11:7]}),
		.imm_out     (imm_typeS)
);

ysyx_23060077_id_imm_ext #(
		.INPUT_WIDTH    (13)
)id_imm_ext_typeB(
		.imm_in      ({inst[31],inst[7],inst[30:25],inst[11:8],1'b0}),
		.imm_out     (imm_typeB)
);

ysyx_23060077_id_imm_ext #(
		.INPUT_WIDTH    (21)
)id_imm_ext_typeJ(
		.imm_in      ({inst[31],inst[19:12],inst[20],inst[30:21],1'b0}),
		.imm_out     (imm_typeJ)
);



endmodule


