`include"ysyx_23060077_define.v"

module ysyx_23060077_ifu(
	input                               							clock           		,
	input                               							reset           		,

	input       [`YSYX_23060077_DATA_WIDTH-1:0]     	wbu_jump_pc         ,
	input 																						wbu_branch_taken		,
	input                               							jump_pc_valid   		,
	input 			[`YSYX_23060077_PRE_OPT_WIDTH-1:0] 		ifu_predecode				,
	input                               							exu_finished       	,

	input 																						if_to_id_ready_i		,
	output 	reg                         							if_to_id_valid_o		,

	// output                              ifu_stall    		   ,
	output 		 	[`YSYX_23060077_INST_WIDTH-1:0]       ifu_pc_o						,
	output 		 	[`YSYX_23060077_INST_WIDTH-1:0]       ifu_inst_o					,

	// IFU Interface	
	output  		                        							Icache_r_valid_o		,
	output  		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   Icache_r_addr_o 		,
	input   		                        							Icache_r_ready_i		,
	input   		[`YSYX_23060077_DATA_WIDTH-1:0]       Icache_r_data_i 		,
	output  		[8-1:0]    														Icache_r_len_o  		,
	input   		                        							Icache_r_last_i 		
);




reg   	[`YSYX_23060077_DATA_WIDTH-1:0]         pc;
wire  	[`YSYX_23060077_INST_WIDTH-1:0]         inst;

wire    ifu_fence_i =  ifu_predecode[`YSYX_23060077_PRE_FENCE_I];

wire                        							ifu_valid_o ;
wire    [`YSYX_23060077_INST_WIDTH-1:0]   ifu_addr_o  ;
wire                        							ifu_ready_i ;
wire 		[`YSYX_23060077_DATA_WIDTH-1:0]   ifu_data_i  ;

wire ifu_jump = 
ifu_predecode[`YSYX_23060077_PRE_JAL   ]	|
ifu_predecode[`YSYX_23060077_PRE_JALR  ]	|
ifu_predecode[`YSYX_23060077_PRE_BRANCH]	|
ifu_predecode[`YSYX_23060077_PRE_ECALL ]	|
ifu_predecode[`YSYX_23060077_PRE_MRET  ]	;

wire [`YSYX_23060077_DATA_WIDTH-1:0] jump_pc = 
(ifu_predecode[`YSYX_23060077_PRE_BRANCH] & ~wbu_branch_taken)| (~ifu_jump)? ifu_pc_o + 4 : wbu_jump_pc;


wire no_jump = (if_to_id_ready_i & if_to_id_valid_o)& !ifu_jump;

initial begin
	`ifdef NPC_SIM
		pc = 32'h8000_0000;
		ifu_pc_o = 32'h8000_0000;
	`else
		pc = 32'h3000_0000;
		ifu_pc_o = 32'h3000_0000;
	`endif
end
always @(posedge clock) begin
	if(reset)begin
		`ifdef NPC_SIM
				pc <= 32'h8000_0000;
		`else
				pc <= 32'h3000_0000;
		`endif
	end
	else if(jump_pc_valid)begin // a bug: 当是jalr ra,会导致jump_pc被更新跳错地方
		pc <= jump_pc;
	end
	else if(no_jump)begin	// 没有jump情况下且和id握手成功直接访问下一个
		pc <= jump_pc;
	end
	else begin
		pc <= pc;
	end
end

// assign ifu_pc_o 		= ifu_ready_i ? pc : ifu_pc_o_t;
// assign ifu_inst_o 	= ifu_ready_i ? inst : ifu_inst_o_t;

// reg  	[`YSYX_23060077_INST_WIDTH-1:0]       ifu_pc_o_t;
// reg  	[`YSYX_23060077_DATA_WIDTH-1:0]       ifu_inst_o_t;

// localparam IFU_STATE_WITDH = 1;
// reg [IFU_STATE_WITDH-1:0] 			icache_state;
// localparam [IFU_STATE_WITDH-1:0] ICACHE_IDLE   		= 'd0;
// localparam [IFU_STATE_WITDH-1:0] ICACHE_RD_CACHE  = 'd1;
// // 节省一个周期，主频会下降一点，但把icache流水化后主频会提高
// always @(*) begin
// 	case(icache_state)
// 		ICACHE_IDLE:begin
// 			if_to_id_valid_o  = ifu_ready_i;
// 		end
// 		ICACHE_RD_CACHE:begin
// 			if_to_id_valid_o 	= 1'b1;
// 		end
// 	endcase
// end

// always @(posedge clock) begin
// 	if(reset)begin
// 		icache_state	<= ICACHE_IDLE;
// 		`ifdef NPC_SIM
// 				ifu_pc_o_t <= 32'h8000_0000;
// 		`else
// 				ifu_pc_o_t <= 32'h3000_0000;
// 		`endif
// 		ifu_inst_o_t	<= 'd0;
// 	end
// 	else begin
// 		case(icache_state)
// 			ICACHE_IDLE:begin
// 				if(ifu_ready_i)begin
// 					ifu_pc_o_t	<= pc;
// 					ifu_inst_o_t	<= inst;
// 					if(!if_to_id_ready_i)begin
// 						icache_state	<= ICACHE_RD_CACHE;
// 					end
// 				end
// 			end
// 			ICACHE_RD_CACHE:begin
// 				if(if_to_id_ready_i & if_to_id_valid_o)begin
// 					icache_state	<= ICACHE_IDLE;
// 				end
// 			end
// 		endcase
// 	end
// end

reg ifu_valid_o_r;
always @(posedge clock) begin
	if(reset)begin
		ifu_valid_o_r	<= 1'b1;
	end
	else begin
		if((if_to_id_ready_i & if_to_id_valid_o)& !ifu_jump)begin		// 没有jump的情况下直接请求下一个
			ifu_valid_o_r	<= 1'b1;
		end
		else if(exu_finished & ifu_jump)begin	// 有jump等exu运行完
			ifu_valid_o_r	<= 1'b1;
		end
		else if(ifu_ready_i)begin
			ifu_valid_o_r	<= 1'b0;
		end
	end
end

always @(posedge clock) begin
	if(ifu_ready_i)begin				//收到Icache读取的指令，更新
		if_to_id_valid_o	<= 'd1;	//发出握手

		ifu_pc_o				<= pc;
		ifu_inst_o			<= inst;
	end
	else if(if_to_id_ready_i)begin	//接收到握手，维持pc和inst
		if_to_id_valid_o	<= 'd0;

		ifu_pc_o				<= ifu_pc_o;
		ifu_inst_o			<= ifu_inst_o;
	end
end


// 在其他模块运行完stall=0，且if_to_id中没有指令
assign ifu_valid_o   = ifu_valid_o_r;
assign ifu_addr_o    = pc;
assign inst          = ifu_data_i;


ysyx_23060077_Icache Icache_u0(
	.clock              (clock          ),
	.reset              (reset          ),
	.ifu_valid_i        (ifu_valid_o    ),
	.ifu_addr_i         (ifu_addr_o     ),
	.ifu_ready_o        (ifu_ready_i    ),
	.ifu_data_o         (ifu_data_i     ),
	.ifu_fence_i        (ifu_fence_i    ),
	.Icache_r_valid_o   (Icache_r_valid_o  ),
	.Icache_r_addr_o    (Icache_r_addr_o   ),
	.Icache_r_ready_i   (Icache_r_ready_i  ),
	.Icache_r_data_i    (Icache_r_data_i   ),
	.Icache_r_len_o     (Icache_r_len_o    ),
	.Icache_r_last_i    (Icache_r_last_i   )
);

`ifdef USING_DPI_C
import "DPI-C" function void ifu_inst_arrived();
always @(posedge clock)begin
	if(Icache_r_last_i)begin
		ifu_inst_arrived();
	end
end

import "DPI-C" function void ifu_jump_stall(input int index,input bit valid);
always @(posedge clock)begin
	if(ifu_jump)begin
		if(ifu_predecode[`YSYX_23060077_PRE_JAL])begin
			ifu_jump_stall(32'd0,Icache_r_last_i);
		end
		if(ifu_predecode[`YSYX_23060077_PRE_JALR])begin
			ifu_jump_stall(32'd1,Icache_r_last_i);
		end
		if(ifu_predecode[`YSYX_23060077_PRE_BRANCH])begin
			ifu_jump_stall(32'd2,Icache_r_last_i);
		end
	end
end
`endif

endmodule
