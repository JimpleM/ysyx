`include"ysyx_23060077_define.v"
module ysyx_23060077_idu(
	input 	    [`YSYX_23060077_INST_WIDTH-1:0]       inst								,
	input																							idu_jal							,
	input																							idu_jalr						,
	input																							idu_branch					,
	input																							idu_sys							,

	output   		[`YSYX_23060077_REG_WIDTH-1:0]        rd									,
	output                           									rd_wen							,
	output   		[`YSYX_23060077_REG_WIDTH-1:0]        rs1									,
	output   		[`YSYX_23060077_REG_WIDTH-1:0]        rs2									,
	output   		[`YSYX_23060077_DATA_WIDTH-1:0]       imm									,
	output      [`YSYX_23060077_ALU_OPT_WIDTH-1:0]    alu_opt							,
	output      [`YSYX_23060077_SRC_SEL_WIDTH-1:0]    src_sel							,
	output      [`YSYX_23060077_LSU_OPT_WIDTH-1:0]    lsu_opt							,
	output 																						alu_mul							,
	output 																						alu_div 						,
	output      [2:0]                   							funct3

);

assign funct3   = inst[14:12];

wire [6:0]  opcode = inst[6:0]		;
wire [6:0]  funct7 = inst[31:25]	;

wire	FUNCT3_000 				= (funct3 == 3'b000) 			;
wire	FUNCT3_001 				= (funct3 == 3'b001) 			;
wire	FUNCT3_010 				= (funct3 == 3'b010) 			;
wire	FUNCT3_011 				= (funct3 == 3'b011) 			;
wire	FUNCT3_100 				= (funct3 == 3'b100) 			;
wire	FUNCT3_101 				= (funct3 == 3'b101) 			;
wire	FUNCT3_110 				= (funct3 == 3'b110) 			;
wire	FUNCT3_111 				= (funct3 == 3'b111) 			;

// wire 	FUNCT7_0000000		= (funct7 == 7'b0000000)	;
// wire 	FUNCT7_0000001		= (funct7 == 7'b0000001)	;
// wire 	FUNCT7_0100000		= (funct7 == 7'b0100000)	;
// wire 	FUNCT7_0000000		= funct7	;
wire 	FUNCT7_0000001		= funct7[0]	;
wire 	FUNCT7_0100000		= funct7[5]	;
wire 	FUNCT3_bit2 			= funct3[2]		;

// inst type
wire TYPE_LUI   	= (opcode == 7'b01101_11);
wire TYPE_AUIPC 	= (opcode == 7'b00101_11);
wire TYPE_JAL   	= idu_jal;
wire TYPE_JALR  	= idu_jalr;
wire TYPE_BRANCH	= idu_branch;
wire TYPE_LOAD  	= (opcode == 7'b00000_11);
wire TYPE_STORE 	= (opcode == 7'b01000_11);
wire TYPE_OP_IMM	= (opcode == 7'b00100_11);
wire TYPE_OP    	= (opcode == 7'b01100_11);
wire TYPE_FENCE 	= (opcode == 7'b00011_11);
wire TYPE_SYS   	= idu_sys;
// imm type
wire I_TYPE 			= TYPE_JALR | TYPE_LOAD | TYPE_OP_IMM | TYPE_SYS;
wire U_TYPE 			= TYPE_LUI | TYPE_AUIPC;
wire J_TYPE 			= TYPE_JAL;
wire B_TYPE 			= TYPE_BRANCH;
wire S_TYPE 			= TYPE_STORE;
wire R_TYPE 			= TYPE_OP; 

// rs1 rs2 rd
wire [`YSYX_23060077_REG_WIDTH-1:0]	rs1_t 	= inst[19:15]	;
wire [`YSYX_23060077_REG_WIDTH-1:0]	rs2_t		= inst[24:20]	;
wire [`YSYX_23060077_REG_WIDTH-1:0]	rd_t 		= inst[11:7]	;
wire rs1_sel			= I_TYPE | B_TYPE | S_TYPE | R_TYPE ;
wire rs2_sel			= B_TYPE | S_TYPE | R_TYPE;
assign rd_wen			= U_TYPE | J_TYPE | I_TYPE | R_TYPE;
assign rs1 = rs1_sel ? rs1_t 	: 'd0;
assign rs2 = rs2_sel ? rs2_t 	: 'd0;
assign rd  = rd_wen  ? rd_t 	: 'd0;

// imm
wire [`YSYX_23060077_DATA_WIDTH-1:0]  I_TYPE_imm 	= {{20{inst[31]}},inst[31:20]};
wire [`YSYX_23060077_DATA_WIDTH-1:0]  U_TYPE_imm 	= {inst[31:12],12'd0};
wire [`YSYX_23060077_DATA_WIDTH-1:0]  J_TYPE_imm 	= {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
wire [`YSYX_23060077_DATA_WIDTH-1:0]  B_TYPE_imm 	= {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};
wire [`YSYX_23060077_DATA_WIDTH-1:0]  S_TYPE_imm 	= {{20{inst[31]}},inst[31:25],inst[11:7]};
wire [`YSYX_23060077_DATA_WIDTH-1:0]  SYS_imm 		= {{15{inst[31]}},inst[31:15]}    ;	// 将zimm也放入imm中
assign imm	= 
({{(`YSYX_23060077_DATA_WIDTH){I_TYPE & !TYPE_SYS}} & I_TYPE_imm }) |
({{(`YSYX_23060077_DATA_WIDTH){U_TYPE}} & U_TYPE_imm }) |
({{(`YSYX_23060077_DATA_WIDTH){J_TYPE}} & J_TYPE_imm }) |
({{(`YSYX_23060077_DATA_WIDTH){B_TYPE}} & B_TYPE_imm }) |
({{(`YSYX_23060077_DATA_WIDTH){S_TYPE}} & S_TYPE_imm }) |
({{(`YSYX_23060077_DATA_WIDTH){TYPE_SYS}} & SYS_imm })  | 'd0;



// exu src_sel
assign src_sel[1] = (TYPE_AUIPC | TYPE_BRANCH);
assign src_sel[0] = (TYPE_AUIPC | TYPE_BRANCH | TYPE_OP);

//lsu_opt
assign lsu_opt = {TYPE_STORE,TYPE_LOAD};

// inst
wire INST_LUI 	=	TYPE_LUI	;
wire INST_AUIPC	=	TYPE_AUIPC;
wire INST_JAL  	=	TYPE_JAL  ;
wire INST_JALR 	=	TYPE_JALR ;
// branch
wire INST_BEQ		= TYPE_BRANCH & FUNCT3_000;
wire INST_BNE		= TYPE_BRANCH & FUNCT3_001;
wire INST_BLT		= TYPE_BRANCH & FUNCT3_100;
wire INST_BGE		= TYPE_BRANCH & FUNCT3_101;
wire INST_BLTU	= TYPE_BRANCH & FUNCT3_110;
wire INST_BGEU	= TYPE_BRANCH & FUNCT3_111;
// op_imm
wire INST_ADDI	= TYPE_OP_IMM & FUNCT3_000;
wire INST_SLTI	= TYPE_OP_IMM & FUNCT3_010;
wire INST_SLTIU	= TYPE_OP_IMM & FUNCT3_011;
wire INST_XORI	= TYPE_OP_IMM & FUNCT3_100;
wire INST_ORI		= TYPE_OP_IMM & FUNCT3_110;
wire INST_ANDI	= TYPE_OP_IMM & FUNCT3_111;
wire INST_SLLI	= TYPE_OP_IMM & FUNCT3_001;
wire INST_SRLI	= TYPE_OP_IMM & FUNCT3_101 & (~FUNCT7_0100000);
wire INST_SRAI	= TYPE_OP_IMM & FUNCT3_101 & FUNCT7_0100000		;
// op
wire INST_ADD	 	= TYPE_OP	& FUNCT3_000 & (~FUNCT7_0100000);
wire INST_SUB	 	= TYPE_OP	& FUNCT3_000 & FUNCT7_0100000		;
wire INST_SLL	 	= TYPE_OP	& FUNCT3_001;
wire INST_SLT	 	= TYPE_OP	& FUNCT3_010;
wire INST_SLTU 	= TYPE_OP	& FUNCT3_011;
wire INST_XOR  	= TYPE_OP	& FUNCT3_100;
wire INST_SRL  	= TYPE_OP	& FUNCT3_101 & (~FUNCT7_0100000);
wire INST_SRA  	= TYPE_OP	& FUNCT3_101 & FUNCT7_0100000		;
wire INST_OR   	= TYPE_OP	& FUNCT3_110;
wire INST_AND  	= TYPE_OP	& FUNCT3_111;


assign alu_mul = 	FUNCT7_0000001 & R_TYPE & !FUNCT3_bit2;
assign alu_div = 	FUNCT7_0000001 & R_TYPE &  FUNCT3_bit2;

// alu_opt
assign alu_opt[`YSYX_23060077_ALU_ADD ] = INST_LUI | INST_ADDI | INST_ADD								;
assign alu_opt[`YSYX_23060077_ALU_SUB ] = INST_BEQ | INST_BNE  | INST_SLTI | INST_SUB		;
assign alu_opt[`YSYX_23060077_ALU_SLL ] = INST_SLLI| INST_SLL 													;
assign alu_opt[`YSYX_23060077_ALU_SLT ] = INST_BLT | INST_BGE  | INST_SLT								;
assign alu_opt[`YSYX_23060077_ALU_SLTU] = INST_BLTU| INST_BGEU | INST_SLTIU| INST_SLTU	;
assign alu_opt[`YSYX_23060077_ALU_XOR ] = INST_XORI| INST_XOR														;
assign alu_opt[`YSYX_23060077_ALU_SRL ] = INST_SRLI| INST_SRL														;
assign alu_opt[`YSYX_23060077_ALU_SRA ] = INST_SRAI| INST_SRA														;
assign alu_opt[`YSYX_23060077_ALU_OR  ] = INST_ORI | INST_OR														;
assign alu_opt[`YSYX_23060077_ALU_AND ] = INST_ANDI| INST_AND														;
assign alu_opt[`YSYX_23060077_ALU_PC  ] = INST_AUIPC | INST_JAL | INST_JALR 						;


// assign alu_opt =
// (TYPE_OP_IMM) ? 
// ((funct3 == 3'b000) ? `ALU_ADD 	:
// (funct3 == 3'b010) 	? `ALU_SUB	:
// (funct3 == 3'b011) 	? `ALU_SLTU	:
// (funct3 == 3'b100) 	? `ALU_XOR	: 
// (funct3 == 3'b110) 	? `ALU_OR		:  
// (funct3 == 3'b111) 	? `ALU_AND	: 
// (funct3 == 3'b001) 	? `ALU_SLL	: 
// (funct3 == 3'b101) 	? ((funct7) ? `ALU_SRA : `ALU_SRL):0) :
// (TYPE_OP)			?
// ((funct3 == 3'b000)	?	((funct7) ? `ALU_SUB : `ALU_ADD) :
// (funct3 == 3'b001)	?	`ALU_SLL	:
// (funct3 == 3'b010)	?	`ALU_SLT	:
// (funct3 == 3'b011)	?	`ALU_SLTU	:
// (funct3 == 3'b100)	?	`ALU_XOR	:
// (funct3 == 3'b101)	?	((funct7) ? `ALU_SRA : `ALU_SRL) :
// (funct3 == 3'b110)	?	`ALU_OR		:
// (funct3 == 3'b111)	?	`ALU_AND	: 0)	:
// (TYPE_BRANCH) ? 
// ((funct3 == 3'b000) ? `ALU_SUB 	:
// (funct3 == 3'b001) 	? `ALU_SUB 	:
// (funct3 == 3'b100) 	? `ALU_SLT 	:
// (funct3 == 3'b101) 	? `ALU_SLT 	:
// (funct3 == 3'b110) 	? `ALU_SLTU	:
// (funct3 == 3'b111) 	? `ALU_SLTU	: 0)	:
// (TYPE_LUI|TYPE_AUIPC|TYPE_JAL|TYPE_JALR) ? `ALU_ADD : `ALU_NONE;



// ysyx_23060077_mux#(
//     .NR_KEY      (11), 
//     .KEY_LEN     (7), 
//     .DATA_LEN    (`YSYX_23060077_SRC_SEL_WIDTH)
// )riscv_mux_id_src_sel(
//     .key              (opcode),//opcode
//     .default_out      (`SRC_SEL_RS1_IMM),
//     .out              (src_sel),
//     .lut({  `LUI   ,{`SRC_SEL_RS1_IMM},
//             `AUIPC ,{`SRC_SEL_PC_IMM},
//             `JAL   ,{`SRC_SEL_PC_4},
//             `JALR  ,{`SRC_SEL_PC_4},
//             `BRANCH,{`SRC_SEL_RS1_2},
//             `LOAD  ,{`SRC_SEL_RS1_IMM},
//             `STORE ,{`SRC_SEL_RS1_IMM},
//             `OP_IMM,{`SRC_SEL_RS1_IMM},
//             `OP    ,{`SRC_SEL_RS1_2},
//             `FENCE ,{`SRC_SEL_RS1_IMM},
//             `SYS   ,{`SRC_SEL_RS1_IMM}
//   })
// );


// ysyx_23060077_id_opt id_opt_idu(
//     .opcode     (opcode),
//     .funct3     (funct3),
//     .funct7     (funct7_1000000),
    
//     // .src_sel    (src_sel  ),
//     // .lsu_opt    (lsu_opt  ),
// 		.alu_opt    (alu_opt  )
// );

endmodule



// opcode
// `define LUI     7'b01101_??     //lui
// `define AUIPC   7'b00101_??     //auipc
// `define JAL     7'b11011_??     //jal
// `define JALR    7'b11001_??     //jalr
// `define BRANCH  7'b11000_??     //beq,bne,blt,bge,bltu,bgeu
// `define LOAD    7'b00000_1?     //lb,lh,lw,lbu,lhu
// `define STORE   7'b01000_??     //sb,sh,sw
// `define OP_IMM  7'b00100_??     //addi,slti,sltiu,xori,ori,andi,slli,srli,srai
// `define OP      7'b01100_??     //add,sub,sll,slt,ltu,xor,srl,sra,or,and
// `define FENCE   7'b00011_??     //fence,fence.i
// `define SYS     7'b11100_??     //ecall,ebreak,csrrw,csrrs,csrrc,csrrwi,cssrrsi,csrrci  