`include "ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_ifu(
	input                               clock           		,
	input                               reset           		,

	input       [`DATA_WIDTH-1:0]     	jump_pc         		,
	input                               jump_pc_valid   		,
	input                               stall           		,
	input                               wbu_stall       		,

	// IFU Interface	
	output  		                        Icache_r_valid_o		,
	output  		[`AXI_ADDR_WIDTH-1:0]   Icache_r_addr_o 		,
	input   		                        Icache_r_ready_i		,
	input   		[`DATA_WIDTH-1:0]       Icache_r_data_i 		,
	output  		[`AXI_LEN_WIDTH-1:0]    Icache_r_len_o  		,
	input   		                        Icache_r_last_i 		,

	// output                              ifu_stall    		   ,
	input 															if_to_id_ready_i		,
	output 	reg                         if_to_id_valid_o		,
	output 	reg	[`INST_WIDTH-1:0]       ifu_pc_o						,
	output 	reg	[`INST_WIDTH-1:0]       ifu_inst_o
);

// reg  	[`INST_WIDTH-1:0]       ifu_pc_o_r;
// reg  	[`INST_WIDTH-1:0]       ifu_inst_o_r;



// assign ifu_pc_o = ifu_pc_o_r;
// assign ifu_inst_o = ifu_inst_o_r;

reg   [`DATA_WIDTH-1:0]         pc;
wire  [`INST_WIDTH-1:0]         inst;
// reg   [`INST_WIDTH-1:0]         inst_t;

reg ifu_jump_flag;
// reg flush_inst;

// assign ifu_stall = ifu_stall_r;

wire    ifu_fence_i =  (ifu_inst_o[6:0] == `FENCE) ? ifu_inst_o[12] : 1'b0;

wire                        ifu_valid_o ;
wire    [`INST_WIDTH-1:0]   ifu_addr_o  ;
wire                        ifu_ready_i ;
wire 		[`DATA_WIDTH-1:0]   ifu_data_i  ;

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
		// else if(ifu_valid_o)begin
		// 		pc <= pc;
		// end
		// else if(stall | !wbu_stall)begin
		// 		pc <= pc;
		// end
		else if(jump_pc_valid)begin // a bug: 当是jalr ra,会导致jump_pc被更新跳错地方
				pc <= jump_pc;
		end
		else if(wbu_stall & !ifu_jump_flag)begin
				pc <= pc + 4;
		end
		else begin
				pc <= pc;
		end
end

always @(posedge clock) begin
	if(reset)begin
		ifu_jump_flag	<= 1'b0;
	end
	else begin
		if(jump_pc_valid)begin
			ifu_jump_flag	<= 1'b1;
		end
		else if(ifu_ready_i)begin
			ifu_jump_flag	<= 1'b0;
		end
	end
end

// always @(posedge clock) begin
// 		if(ifu_ready_i)begin
// 				ifu_pc_o_t      <= pc;
// 				ifu_inst_o_t    <= inst;
// 				if((!stall) & (!wbu_stall))begin
// 						flush_inst      <= 1'b0;
// 				end
// 				else begin
// 						flush_inst      <= 1'b1;
// 				end
// 		end
// 		else if((!stall) & (!wbu_stall))begin
// 				flush_inst      <= 1'b0;
// 		end
// end

// always @(posedge clock) begin
// 		if(ifu_ready_i & (!stall) & (!wbu_stall))begin
// 				ifu_pc_o_r <= pc;
// 				ifu_inst_o_r <= inst;
// 				ifu_stall_r <= 1'b0;
// 		end
// 		else if(flush_inst & (!stall) & (!wbu_stall))begin
// 				ifu_pc_o_r <= ifu_pc_o_t;
// 				ifu_inst_o_r <= ifu_inst_o_t;
// 				ifu_stall_r <= 1'b0;
// 		end
// 		else begin
// 				ifu_pc_o_r <= ifu_pc_o_r;
// 				ifu_inst_o_r <= ifu_inst_o_r;
// 				ifu_stall_r <= 1'b1;
// 		end
// end

// localparam IFU_PIPE_WITH  = 2;
// reg [IFU_PIPE_WITH-1:0] 				ifu_pipe_state;
// localparam [IFU_PIPE_WITH-1:0] 	IFU_PIPE_IDLE   	= 'd0;
// localparam [IFU_PIPE_WITH-1:0] 	IFU_PIPE_READY    = 'd1;

// reg  	[`INST_WIDTH-1:0]       ifu_pc_o_t;
// reg  	[`DATA_WIDTH-1:0]       ifu_inst_o_t;

// // 利用组合逻辑在ifu_ready_i置1时也将if_to_id_ready_o置1输出（减少1个周期握手时间）
// always @(*) begin
// 	case(ifu_pipe_state)
// 		IFU_PIPE_IDLE:begin
// 			if(ifu_ready_i)begin
// 				if_to_id_valid_o 	= 1'b1;

// 				ifu_pc_o				 	= pc;
// 				ifu_inst_o			 	= inst;
// 			end
// 			else begin
// 				if_to_id_valid_o		= 'b0;
// 			end
// 		end
// 		IFU_PIPE_READY:begin
// 			if_to_id_valid_o = 1'b1;

// 			ifu_pc_o           = ifu_pc_o_t;
// 			ifu_inst_o				 = ifu_inst_o_t;
// 		end
// 	endcase
// end

// always @(posedge clock) begin
// 	if(reset)begin
// 		ifu_pipe_state 	<= IFU_PIPE_IDLE;
// 		ifu_pc_o_t			<= 'd0;
// 		ifu_inst_o_t    <= 'd0;
// 	end
// 	else begin
// 		case(ifu_pipe_state)
// 			IFU_PIPE_IDLE:begin
// 				if(ifu_ready_i)begin
// 					ifu_pipe_state	<= IFU_PIPE_READY;

// 					ifu_pc_o_t			<= pc;			// 避免指令拿到了idu没准备好，先存起来
// 					ifu_inst_o_t    <= inst;
// 				end
// 			end
// 			IFU_PIPE_READY:begin
// 				if(if_to_id_ready_i)begin
// 					ifu_pipe_state	<= IFU_PIPE_IDLE;
// 				end
// 			end
// 			default:begin
// 				ifu_pipe_state 	<= IFU_PIPE_IDLE;
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
		if(ifu_ready_i)begin
			ifu_valid_o_r	<= 1'b0;
		end
		else if(wbu_stall)begin
			ifu_valid_o_r	<= 1'b1;
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
`endif

endmodule
