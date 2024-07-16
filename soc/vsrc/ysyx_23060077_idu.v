`include"ysyx_23060077_define.v"
module ysyx_23060077_idu(
	input 	    [`YSYX_23060077_INST_WIDTH-1:0]       	inst								,
	input 			[`YSYX_23060077_PRE_OPT_WIDTH-1:0] 			idu_predecode				,

	output   		[`YSYX_23060077_REG_WIDTH-1:0]        	rd									,
	output   		[`YSYX_23060077_REG_WIDTH-1:0]        	rs1									,
	output   		[`YSYX_23060077_REG_WIDTH-1:0]        	rs2									,
	output   		[`YSYX_23060077_DATA_WIDTH-1:0]       	imm									,

	output      [`YSYX_23060077_ALU_OPT_WIDTH-1:0]    	alu_opt_bus					,
	output 			[`YSYX_23060077_EXU_OPT_WIDTH-1:0]      exu_opt_bus					,
	output 			[`YSYX_23060077_WBU_OPT_WIDTH-1:0]      wbu_opt_bus					,

	output      [`YSYX_23060077_SRC_SEL_WIDTH-1:0]    	src_sel							

);



wire [6:0]  opcode = inst[6:0]		;
wire [2:0]  funct3 = inst[14:12]	;
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
wire 	FUNCT3_BIT0 			= funct3[0]	;
wire 	FUNCT3_BIT1 			= funct3[1]	;
wire 	FUNCT3_BIT2 			= funct3[2]	;

// inst type
wire TYPE_LUI   	= (opcode == 7'b01101_11);
wire TYPE_AUIPC 	= (opcode == 7'b00101_11);
wire TYPE_JAL   	= idu_predecode[`YSYX_23060077_PRE_JAL   ];	// 7'b11011_11
wire TYPE_JALR  	= idu_predecode[`YSYX_23060077_PRE_JALR  ];	// 7'b11001_11
wire TYPE_BRANCH	= idu_predecode[`YSYX_23060077_PRE_BRANCH];	// 7'b11000_11
wire TYPE_LOAD  	= (opcode == 7'b00000_11);
wire TYPE_STORE 	= (opcode == 7'b01000_11);
wire TYPE_OP_IMM	= (opcode == 7'b00100_11);
wire TYPE_OP    	= (opcode == 7'b01100_11);
wire TYPE_FENCE 	= (opcode == 7'b00011_11);
wire TYPE_SYS   	= idu_predecode[`YSYX_23060077_PRE_SYS   ];		// 7'b11100_11
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
wire  rd_wen			= U_TYPE | J_TYPE | I_TYPE | R_TYPE;
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
// src_sel[1] to select pc + imm / pc +4 
// src_sel[0] to select src1 + src2 / src1 + imm 
// special: in idu, jal need to modified src1 into pc
// SRC_SEL_4_IMM     `YSYX_23060077_SRC_SEL_WIDTH'b00
// SRC_SEL_4_SRC2    `YSYX_23060077_SRC_SEL_WIDTH'b01
// SRC_SEL_IMM_IMM   `YSYX_23060077_SRC_SEL_WIDTH'b10
// SRC_SEL_IMM_SRC2  `YSYX_23060077_SRC_SEL_WIDTH'b11
assign src_sel[1] = (TYPE_AUIPC | TYPE_BRANCH);
assign src_sel[0] = (TYPE_AUIPC | TYPE_BRANCH | TYPE_OP);

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
wire INST_SRLI	= TYPE_OP_IMM & FUNCT3_101 & ~FUNCT7_0100000 ;
wire INST_SRAI	= TYPE_OP_IMM & FUNCT3_101 & 	FUNCT7_0100000 ;
// op
wire INST_ADD	 	= TYPE_OP	& FUNCT3_000 & ~FUNCT7_0100000 ;
wire INST_SUB	 	= TYPE_OP	& FUNCT3_000 &  FUNCT7_0100000 ;
wire INST_SLL	 	= TYPE_OP	& FUNCT3_001;
wire INST_SLT	 	= TYPE_OP	& FUNCT3_010;
wire INST_SLTU 	= TYPE_OP	& FUNCT3_011;
wire INST_XOR  	= TYPE_OP	& FUNCT3_100;
wire INST_SRL  	= TYPE_OP	& FUNCT3_101 & ~FUNCT7_0100000 ;
wire INST_SRA  	= TYPE_OP	& FUNCT3_101 &  FUNCT7_0100000 ;
wire INST_OR   	= TYPE_OP	& FUNCT3_110;
wire INST_AND  	= TYPE_OP	& FUNCT3_111;
// mul,div
wire TYPE_MUL   = TYPE_OP & FUNCT7_0000001 & ~FUNCT3_BIT2 ;
wire TYPE_DIV   = TYPE_OP & FUNCT7_0000001 &  FUNCT3_BIT2 ;


// alu_opt_bus
assign alu_opt_bus[`YSYX_23060077_ALU_ADD ] = INST_LUI | INST_ADDI | INST_ADD								;
assign alu_opt_bus[`YSYX_23060077_ALU_SUB ] = INST_BEQ | INST_BNE  | INST_SLTI | INST_SUB		;
assign alu_opt_bus[`YSYX_23060077_ALU_SLL ] = INST_SLLI| INST_SLL 													;
assign alu_opt_bus[`YSYX_23060077_ALU_SLT ] = INST_BLT | INST_BGE  | INST_SLT								;
assign alu_opt_bus[`YSYX_23060077_ALU_SLTU] = INST_BLTU| INST_BGEU | INST_SLTIU| INST_SLTU	;
assign alu_opt_bus[`YSYX_23060077_ALU_XOR ] = INST_XORI| INST_XOR														;
assign alu_opt_bus[`YSYX_23060077_ALU_SRL ] = INST_SRLI| INST_SRL														;
assign alu_opt_bus[`YSYX_23060077_ALU_SRA ] = INST_SRAI| INST_SRA														;
assign alu_opt_bus[`YSYX_23060077_ALU_OR  ] = INST_ORI | INST_OR														;
assign alu_opt_bus[`YSYX_23060077_ALU_AND ] = INST_ANDI| INST_AND														;
assign alu_opt_bus[`YSYX_23060077_ALU_PC  ] = INST_AUIPC | INST_JAL | INST_JALR 						;

// SUB: 	BIT0=INST_BNE 	~BIT0=INST_BEQ
// SLT: 	BIT0=INST_BGE 	~BIT0=INST_BLT
// SLTU: 	BIT0=INST_BGEU 	~BIT0:INST_BLTU
assign alu_opt_bus[`YSYX_23060077_ALU_BRANCH			] = TYPE_BRANCH;
assign alu_opt_bus[`YSYX_23060077_ALU_BRU_FUNC3		] = FUNCT3_BIT0;

// mul,div
assign alu_opt_bus[`YSYX_23060077_ALU_MUL       	] = TYPE_MUL;
assign alu_opt_bus[`YSYX_23060077_ALU_DIV       	] = TYPE_DIV;
assign alu_opt_bus[`YSYX_23060077_ALU_MULDIV_BIT0 ] = FUNCT3_BIT0;
assign alu_opt_bus[`YSYX_23060077_ALU_MULDIV_BIT1 ] = FUNCT3_BIT1;

// exu_lsu exu_csr
assign exu_opt_bus[`YSYX_23060077_EX_LSU_LOAD    	] = TYPE_LOAD;
assign exu_opt_bus[`YSYX_23060077_EX_LSU_STORE   	] = TYPE_STORE;
assign exu_opt_bus[`YSYX_23060077_EX_SYS   				] = TYPE_SYS;
assign exu_opt_bus[`YSYX_23060077_EX_CSR_ECALL		] = idu_predecode[`YSYX_23060077_PRE_ECALL ];
assign exu_opt_bus[`YSYX_23060077_EX_CSR_MRET 		] = idu_predecode[`YSYX_23060077_PRE_MRET  ];
assign exu_opt_bus[`YSYX_23060077_EX_FUN3_BIT2 		] = FUNCT3_BIT2;
assign exu_opt_bus[`YSYX_23060077_EX_00       		] = (~FUNCT3_BIT1) & (~FUNCT3_BIT0);
assign exu_opt_bus[`YSYX_23060077_EX_01       		] = (~FUNCT3_BIT1) & 	 FUNCT3_BIT0 ;
assign exu_opt_bus[`YSYX_23060077_EX_10       		] =   FUNCT3_BIT1  & (~FUNCT3_BIT0);
assign exu_opt_bus[`YSYX_23060077_EX_11       		] = 	FUNCT3_BIT1  & 	 FUNCT3_BIT0 ;

// wbu_opt
assign wbu_opt_bus[`YSYX_23060077_WBU_CSR       	] = TYPE_SYS	;
assign wbu_opt_bus[`YSYX_23060077_WBU_LSU       	] = TYPE_LOAD	;
assign wbu_opt_bus[`YSYX_23060077_WBU_EXU       	] = TYPE_LUI | TYPE_AUIPC | TYPE_JAL | TYPE_JALR | TYPE_OP_IMM | TYPE_OP	;


  




endmodule


