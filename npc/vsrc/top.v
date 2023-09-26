module ysyx_23060077_riscv32(
	input clk,
	input rst_n
);

parameter	DATA_WIDTH 		= 32;
parameter 	IMEM_ADDR_WIDTH = 10;	// 1024个pc
parameter  	REG_ADDR_WIDTH 	=  5;	// 2**5 = 32个pc

// pc
reg 	[DATA_WIDTH-1:0] 	pc;
reg 	[DATA_WIDTH-1:0] 	snpc;

reg 	[DATA_WIDTH-1:0] 	inst;

// 寄存器
reg 	[REG_ADDR_WIDTH-1:0] 	rs1_addr;
reg 	[DATA_WIDTH-1:0] 		rs1_data;
reg 	[REG_ADDR_WIDTH-1:0] 	rs2_addr;
reg 	[DATA_WIDTH-1:0] 		rs2_data;
reg								rd_en;
reg 	[REG_ADDR_WIDTH-1:0] 	rd_addr;
reg 	[DATA_WIDTH-1:0] 		rd_wdata;


always @(posedge clk) begin
    if (!rst_n)begin
		pc	<= 32'h8000_0000;
	end
	else begin
		pc <= snpc;
	end
end

// 取指
ysyx_23060077_riscv_ram  #(
	.ADDR_WIDTH(IMEM_ADDR_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
) riscv_ram_pc (
	.clk		(clk)						,
	.en			(1'b1)						,
	.wen		(1'b0)						,
	.addr		(pc[IMEM_ADDR_WIDTH-1:0])	,
	.wdata		()							,
	.rdata		(inst)
);

// 寄存器
ysyx_23060077_riscv_reg #(
	.ADDR_WIDTH(REG_ADDR_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
) riscv_reg (
	.clk		(clk)		,
	.rs1_en		(1'b1)		,
	.rs1_addr	(rs1_addr)	,
	.rs1_data	(rs1_data)	,
	.rs2_en		(1'b1)		,
	.rs2_addr	(rs2_addr)	,
	.rs2_data	(rs2_data)	,
	.rd_en		(rd_en	)	,
	.rd_addr	(rd_addr)	,
	.rd_data	(rd_data)
);

reg [3:0] state;
reg [31:0] imm;

always(posedge clk)begin
	if (!rst_n)begin
		snpc	<= 32'h8000_0000;
		rd_en 	<= 1'b0;
		rd_addr <= 5'd0;
		rs1_addr <= 5'd0;
		rs2_addr <= 5'd0;
		imm 	<= 32'd0;
	end
	else begin
	case(state)
		//译码
		4'd0:begin
			if(inst == 32'b?????????????????000?????0010011)begin
				state <= 4'd1;
				rs1_addr <= inst[19:15];
				rd_addr  <= inst[11,7];
				imm <= {20{inst[31]},inst[31:20]};
			end
			else begin
				snpc <= snpc + 4;
			end
		end
		// 执行
		4'd1:begin
			rd_data <= rs1_data + imm;
			state <= 4'd2;
		end
		// 访存
		4'd2:begin
			state <= 4'd3;
		end
		4'd3:begin
			rd_en <= 1'b1;
			snpc  <= snpc + 4;
			state <= 4'd0;
		end
	endcase
	end
end


endmodule

