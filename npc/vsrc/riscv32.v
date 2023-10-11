module riscv32(
	input clk,
	input rst_n
);


// ifu
wire [`DATA_WIDTH-1:0]      ifu_pc;
wire [`INST_WIDTH-1:0]      ifu_inst;

// idu
wire                       	idu_branch		;
wire                       	idu_jal		;
wire                       	idu_jalr		;
wire [`REG_WIDTH-1:0]   	idu_rd			;
wire                       	idu_rd_wen		;
wire [`REG_WIDTH-1:0]   	idu_rs1		;
wire [`REG_WIDTH-1:0]   	idu_rs2		;
wire [`DATA_WIDTH-1:0]     	idu_imm		;
wire [`ALU_OPT_WIDTH-1:0]   idu_alu_opt	;
wire [`SRC_SEL_WIDTH-1:0]   idu_src_sel	;
wire [`LSU_OPT_WIDTH-1:0]   idu_lsu_opt	;
wire [2:0]                  idu_func_code	;

//regfile
wire [`DATA_WIDTH-1:0]     	src1			;
wire [`DATA_WIDTH-1:0]     	src2			;
wire [`DATA_WIDTH-1:0]     	rd_data		;

//exu
wire                        zero_flag		;
wire [`DATA_WIDTH-1:0]      exu_result		;

//lsu
wire [`DATA_WIDTH-1:0]     	lsu_result		;

riscv_ifu riscv_ifu_u0(
    .rst_n	(rst_n),
    .pc		(ifu_pc),
    .inst	(ifu_inst)
);

riscv_idu riscv_idu_u0(
    .inst			(ifu_inst	),
    .branch			(idu_branch	),
    .jal			(idu_jal		),
    .jalr			(idu_jalr	),
    .rd				(idu_rd		),
    .rd_wen			(idu_rd_wen	),
    .rs1			(idu_rs1		),
    .rs2			(idu_rs2		),
    .imm			(idu_imm		),
    .alu_opt		(idu_alu_opt	),
    .src_sel		(idu_src_sel	),
    .lsu_opt		(idu_lsu_opt	),
    .func_code		(idu_func_code	)
);

riscv_regfile riscv_regfile_u0(
    .clk			(clk		),
    .rst_n          (rst_n      ),
    .rs1_addr		(idu_rs1	),
    .rs1_data		(src1		),
    .rs2_addr		(idu_rs2	),
    .rs2_data		(src2		),
    .rd_en			(idu_rd_wen		),
    .rd_addr		(idu_rd	),
    .rd_data		(rd_data	)	
);


riscv_exu riscv_exu_u0(
    .pc				(ifu_pc			),
    .src1			(src1		),
    .src2			(src2		),
    .imm			(idu_imm		),
    .branch			(idu_branch		),
    .alu_opt		(idu_alu_opt	),
    .src_sel		(idu_src_sel	),
    .func_code		(idu_func_code),
    .zero_flag		(zero_flag),
    .exu_result		(exu_result)
);

riscv_lsu riscv_lsu_u0(
    .clk			(clk		),
    .rst_n          (rst_n      ),
    .exu_result		(exu_result),
    .src2			(src2),
    .lsu_opt		(idu_lsu_opt),
    .func_code		(idu_func_code),
    .lsu_result		(lsu_result)
);

riscv_wbu riscv_wbu_u0(
    .lsu_opt		(idu_lsu_opt),
    .exu_result		(exu_result),
    .lsu_result		(lsu_result),
    .wbu_result		(rd_data)
);


riscv_bpu   riscv_bpu_u0(
    .clk            (clk      ),
    .rst_n          (rst_n    ),
    .zero_flag      (zero_flag),
    .branch         (idu_branch   ),
    .jal            (idu_jal      ),
    .jalr           (idu_jalr     ),
    .src1           (src1     ),
    .imm            (idu_imm      ),
    .pc             (ifu_pc       )
);

endmodule

