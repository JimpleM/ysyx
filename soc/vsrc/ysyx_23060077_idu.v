`include"ysyx_23060077_define.v"
module ysyx_23060077_idu(
	input 	    [`INST_WIDTH-1:0]       inst								,
	input																idu_jal							,
	input																idu_jalr						,
	input																idu_branch					,
	input																idu_sys							,

	output   		[`REG_WIDTH-1:0]        rd									,
	output  reg                         rd_wen							,
	output   		[`REG_WIDTH-1:0]        rs1									,
	output   		[`REG_WIDTH-1:0]        rs2									,
	output  reg [`DATA_WIDTH-1:0]       imm									,
	output      [`ALU_OPT_WIDTH-1:0]    alu_opt							,
	output      [`SRC_SEL_WIDTH-1:0]    src_sel							,
	output      [`LSU_OPT_WIDTH-1:0]    lsu_opt							,
	output      [2:0]                   funct3

);

assign funct3   = inst[14:12];

wire [6:0]  opcode  = inst[6:0];
wire 				funct7	= inst[30] ;


wire [`REG_WIDTH-1:0] reg_zero;
assign reg_zero = {`REG_WIDTH{1'b0}};

wire [`REG_WIDTH-1:0]	rs1_temp	= inst[19:15]	;
wire [`REG_WIDTH-1:0]	rs2_temp	= inst[24:20]	;
wire [`REG_WIDTH-1:0]	rd_temp 	= inst[11:7]	;
assign rs1 = rs1_sel ? rs1_temp : 'd0;
assign rs2 = rs2_sel ? rs2_temp : 'd0;
assign rd  = rd_sel  ? rd_temp  : 'd0;



reg  rs1_sel;
reg  rs2_sel;
reg  rd_sel;


always @(*) begin
  casez(opcode)
		`LUI   : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b0  , 1'b0  , 1'b1	, 1'b1} ;
		`AUIPC : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b0  , 1'b0  , 1'b1	, 1'b1} ;
		`JAL   : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b0  , 1'b0  , 1'b1	, 1'b1} ;
		`JALR  : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b0  , 1'b1	, 1'b1} ;
		`BRANCH: {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b1	, 1'b0  , 1'b0} ;
		`LOAD  : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b0  , 1'b1	, 1'b1} ;
		`STORE : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b1	, 1'b0  , 1'b0} ;
		`OP_IMM: {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b0  , 1'b1	, 1'b1} ;
		`OP    : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b1	, 1'b1	, 1'b1} ;
		`FENCE : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b0  , 1'b0  , 1'b0  , 1'b0} ;
		`SYS   : {rs1_sel,rs2_sel,rd_sel,rd_wen} = {1'b1	, 1'b0  , 1'b1	, 1'b1} ;
		default: {rs1_sel,rs2_sel,rd_sel,rd_wen} = 'd0 ; 
  endcase
end


// always @(*) begin
//   casez(opcode)
// 		`LUI   : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , inst[11:7], 1'b1} ;
// 		`AUIPC : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , inst[11:7], 1'b1} ;
// 		`JAL   : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , inst[11:7], 1'b1} ;
// 		`JALR  : {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
// 		`BRANCH: {rs1,rs2,rd,rd_wen} = {inst[19:15], inst[24:20], reg_zero  , 1'b0} ;
// 		`LOAD  : {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
// 		`STORE : {rs1,rs2,rd,rd_wen} = {inst[19:15], inst[24:20], reg_zero  , 1'b0} ;
// 		`OP_IMM: {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
// 		`OP    : {rs1,rs2,rd,rd_wen} = {inst[19:15], inst[24:20], inst[11:7], 1'b1} ;
// 		`FENCE : {rs1,rs2,rd,rd_wen} = {reg_zero   , reg_zero   , reg_zero  , 1'b0} ;
// 		`SYS   : {rs1,rs2,rd,rd_wen} = {inst[19:15], reg_zero   , inst[11:7], 1'b1} ;
// 		default: {rs1,rs2,rd,rd_wen} = 'd0 ; 
//   endcase
// end

// ysyx_23060077_id_imm id_imm_idu(
//     .inst      (inst),
//     .imm       (imm)
// );
always @(*) begin
	casez(opcode)
		`LUI   : imm = {inst[31:12],12'd0}    ;
		`AUIPC : imm = {inst[31:12],12'd0}    ;
		`JAL   : imm = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0}    ;
		`JALR  : imm = {{20{inst[31]}},inst[31:20]}    ;
		`BRANCH: imm = {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0}    ;
		`LOAD  : imm = {{20{inst[31]}},inst[31:20]}    ;
		`STORE : imm = {{20{inst[31]}},inst[31:25],inst[11:7]}    ;
		`OP_IMM: imm = {{20{inst[31]}},inst[31:20]}    ;
		`OP    : imm = 32'd0    ;
		`FENCE : imm = 32'd0;
		`SYS   : imm = {{15{inst[31]}},inst[31:15]}    ;	// 将zimm也放入imm中
		default: imm = 32'd0; 
	endcase
end

ysyx_23060077_id_opt id_opt_idu(
    .opcode     (opcode),
    .funct3     (funct3),
    .funct7     (funct7),
    .alu_opt    (alu_opt  ),
    .src_sel    (src_sel  ),
    .lsu_opt    (lsu_opt  )
);

endmodule
