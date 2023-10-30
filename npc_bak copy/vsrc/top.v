module riscv32(
	input clk,
	input rst_n
);


// pc
reg 	[DATA_WIDTH-1:0] 		pc;
reg 	[DATA_WIDTH-1:0] 		snpc;

// if
wire 	[INST_WIDTH-1:0] 		inst_if;

// if to id
wire 	[INST_WIDTH-1:0] 		inst_if_to_id;
wire 	[DATA_WIDTH-1:0] 		pc_if_to_id;

// id
wire 	[DATA_WIDTH-1:0] 		imm_id;
wire	[DATA_WIDTH-1:0] 		rs1_data_id;
wire	[DATA_WIDTH-1:0] 		rs2_data_id;

// id to ex
wire 	[INST_WIDTH-1:0] 		inst_id_to_ex;
wire 	[DATA_WIDTH-1:0] 		pc_id_to_ex;
wire 	[DATA_WIDTH-1:0] 		imm_id_to_ex;
wire	[DATA_WIDTH-1:0] 		rs1_data_id_to_ex;
wire	[DATA_WIDTH-1:0] 		rs2_data_id_to_ex;

// ex
wire	[DATA_WIDTH-1:0] 		alu_a_data_ex;
wire	[DATA_WIDTH-1:0] 		alu_b_data_ex;
	// ex_pass down
wire	[DATA_WIDTH-1:0] 		alu_out_data_ex;
wire					 		zero_flag_ex;
wire					 		branch_out_ex;


wire							rd_en;
wire	[REG_WIDTH-1:0] 	rd_addr;
wire	[DATA_WIDTH-1:0] 		rd_wdata;


always @(posedge clk) begin
    if (!rst_n)begin
		pc	<= 32'h8000_0000;
	end
	else begin
		pc <= snpc;
	end
end

// IF 取指
riscv_ram  #(
	.ADDR_WIDTH(DATA_WIDTH),
	.DATA_WIDTH(INST_WIDTH)
) riscv_ram_pc (
	.clk		(clk)						,
	.en			(1'b1)						,
	.wen		(1'b0)						,
	.addr		(pc)	,
	.wdata		()							,
	.rdata		(inst_if)
);

// IF to ID
riscv_dff #(
  .WIDTH(INST_WIDTH+DATA_WIDTH), 
  .RESET_VAL(0)
) riscv_dff_if_to_id(
  .clk		(clk),
  .rst		(!rst_n),
  .wen		(1'b1),
  .din		({inst_if		,pc}),
  .dout		({inst_if_to_id	,pc_if_to_id})
);


// ID 译码

// 读寄存器值
riscv_id_reg #(
	.ADDR_WIDTH(REG_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
) riscv_id_reg (
	.clk		(clk)					,
	.rs1_en		(1'b1)					,
	.rs1_addr	(inst_if_to_id[19:15])	,	// rs1
	.rs1_data	(rs1_data_id)			,
	.rs2_en		(1'b1)					,
	.rs2_addr	(inst_if_to_id[24:20])	,	// rs2
	.rs2_data	(rs2_data_id)			,

	.rd_en		(rd_en	)				,
	.rd_addr	(rd_addr)				,
	.rd_data	(rd_data)
);

riscv_id_imm #(
	.INST_WIDTH(INST_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
)riscv_id_imm(
	.inst	(inst_if_to_id),
	.imm	(imm_id)
);


// ID to EX
riscv_dff #(
	.WIDTH(INST_WIDTH+DATA_WIDTH+DATA_WIDTH+DATA_WIDTH+DATA_WIDTH), 
	.RESET_VAL(0)
) riscv_dff_id_to_ex(
	.clk	(clk),
	.rst	(!rst_n),
	.wen	(1'b1),
	.din	({
			inst_if_to_id,
			pc_if_to_id,
			imm_id,
			rs1_data_id,
			rs2_data_id
			}),
	.dout	({
			inst_id_to_ex,
			pc_id_to_ex,
			imm_id_to_ex,
			rs1_data_id_to_ex,
			rs2_data_id_to_ex
			})
);

// EX
riscv_ex_data #(
    .INST_WIDTH(INST_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
) riscv_ex_data(
    .inst_id_to_ex			(inst_id_to_ex),
	.rs1_data_id_to_ex		(rs1_data_id_to_ex),
	.rs2_data_id_to_ex		(rs2_data_id_to_ex),
	.imm_id_to_ex			(imm_id_to_ex),
    .alu_a_data_ex			(alu_a_data_ex),
    .alu_b_data_ex			(alu_b_data_ex)
);

riscv_ex_alu #(
    .INST_WIDTH(INST_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
) riscv_ex_alu(
    .inst_id_to_ex			(inst_id_to_ex),
    .alu_a_data_ex			(alu_a_data_ex),
    .alu_b_data_ex			(alu_b_data_ex),
    .alu_out_data_ex		(alu_out_data_ex),	
    .zero_flag				(zero_flag_ex)
);

riscv_ex_branch #(
	.INST_WIDTH(INST_WIDTH)
) riscv_ex_branch(
    .inst_id_to_ex			(inst_id_to_ex),
	.alu_out_most_bit		(alu_out_data_ex[DATA_WIDTH-1]),
	.rs1_most_bit			(rs1_data_id_to_ex[DATA_WIDTH-1]),
	.rs2_most_bit			(rs2_data_id_to_ex[DATA_WIDTH-1]),
	.zero_flag				(zero_flag_ex),
	.branch_out				(branch_out_ex)
);

riscv_ex_result #(
	.INST_WIDTH(INST_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
) riscv_ex_result(

);


endmodule

