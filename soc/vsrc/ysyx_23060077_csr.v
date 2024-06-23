`include"ysyx_23060077_define.v"

module ysyx_23060077_csr(
	input 	                            clock       				,
	input 	                            reset       				,

	input       [`CSR_ADDR_WIDTH-1:0]   csr_wr_addr 				,
	input       [`DATA_WIDTH-1:0]       csr_wr_data 				,
	input       [`CSR_ADDR_WIDTH-1:0]   csr_rd_addr 				,
	output 	reg [`DATA_WIDTH-1:0]       csr_rd_data 				,

	input                               csr_ecall_i 				,
	input                               csr_mret_i  				,

	input              									sys      						, 
	input       [2:0]       						funct3        			,
	input       [`DATA_WIDTH-1:0]       csr_pc        			,

	output      [`DATA_WIDTH-1:0]       csr_mstatus   			,
	output      [`DATA_WIDTH-1:0]       csr_mtvec     			,
	output      [`INST_WIDTH-1:0]       csr_mpec   
);

localparam CSR_M_CYCLE_ADDR   	= `CSR_ADDR_WIDTH'hb00;
localparam CSR_MSTATUS_ADDR   	= `CSR_ADDR_WIDTH'h300;
localparam CSR_MIE_ADDR       	= `CSR_ADDR_WIDTH'h304;
localparam CSR_MTVEC_ADDR     	= `CSR_ADDR_WIDTH'h305;
localparam CSR_MEPC_ADDR      	= `CSR_ADDR_WIDTH'h341;
localparam CSR_MCAUSE_ADDR    	= `CSR_ADDR_WIDTH'h342;
localparam CSR_MTVAL_ADDR     	= `CSR_ADDR_WIDTH'h343;
localparam CSR_MINSTRET_ADDR  	= `CSR_ADDR_WIDTH'hb02;
localparam CSR_MSCRATCH_ADDR  	= `CSR_ADDR_WIDTH'h340;
localparam CSR_MVENDORID_ADDR 	= `CSR_ADDR_WIDTH'hF11;
localparam CSR_MARCHID_ADDR   	= `CSR_ADDR_WIDTH'hF12;

localparam CSR_REG_WIDTH 				= 3;
localparam CSR_MSTATUS         	= CSR_REG_WIDTH'd1;
localparam CSR_MTVEC           	= CSR_REG_WIDTH'd2;
localparam CSR_MEPC            	= CSR_REG_WIDTH'd3;
localparam CSR_MCAUSE          	= CSR_REG_WIDTH'd4;
localparam CSR_MVENDORID       	= CSR_REG_WIDTH'd5;
localparam CSR_MARCHID         	= CSR_REG_WIDTH'd6;
localparam MVENDORID       		 	= `DATA_WIDTH'h79737978;
localparam MARCHID         		 	= `DATA_WIDTH'h015FDE6D;

reg [`DATA_WIDTH-1:0] csr_reg [2**`CSR_REG_WIDTH-1:0];
reg [`CSR_REG_WIDTH-1:0] csr_reg_addr;

wire enable = sys & (|funct3); //funct3不为0


// assign csr_rd_data =
// (csr_rd_addr == CSR_M_CYCLE_ADDR  ) ? csr_reg[CSR_M_CYCLE]  	:
// (csr_rd_addr == CSR_MSTATUS_ADDR  ) ? csr_reg[CSR_MSTATUS]  	:
// (csr_rd_addr == CSR_MIE_ADDR      ) ? csr_reg[CSR_MIE]      	:
// (csr_rd_addr == CSR_MTVEC_ADDR    ) ? csr_reg[CSR_MTVEC]    	:
// (csr_rd_addr == CSR_MEPC_ADDR     ) ? csr_reg[CSR_MEPC]    		:
// (csr_rd_addr == CSR_MCAUSE_ADDR   ) ? csr_reg[CSR_MCAUSE]  		:
// (csr_rd_addr == CSR_MTVAL_ADDR    ) ? csr_reg[CSR_MTVAL]    	:
// (csr_rd_addr == CSR_MINSTRET_ADDR ) ? csr_reg[CSR_MINSTRET] 	:
// (csr_rd_addr == CSR_MSCRATCH_ADDR ) ? csr_reg[CSR_MSCRATCH] 	:
// (csr_rd_addr == CSR_MVENDORID_ADDR) ? csr_reg[CSR_MVENDORID]	:
// (csr_rd_addr == CSR_MARCHID_ADDR  ) ? csr_reg[CSR_MARCHID] 		:
// 'd0;

always @(*) begin
	csr_reg_addr = 'd0; 
	case(csr_rd_addr)
		CSR_MSTATUS_ADDR  :begin csr_reg_addr = CSR_MSTATUS			;   end
		CSR_MTVEC_ADDR    :begin csr_reg_addr = CSR_MTVEC				;   end
		CSR_MEPC_ADDR     :begin csr_reg_addr = CSR_MEPC				;   end
		CSR_MCAUSE_ADDR   :begin csr_reg_addr = CSR_MCAUSE			;   end
		CSR_MVENDORID_ADDR:begin csr_reg_addr = CSR_MVENDORID		;  	end
		CSR_MARCHID_ADDR  :begin csr_reg_addr = CSR_MARCHID			;   end
		default:begin
			csr_reg_addr = 'd0;
		end
	endcase
end


//csr_rd_data
always @(*) begin
	csr_rd_data = 'd0;
	case(csr_reg_addr)
		CSR_MSTATUS		:begin csr_rd_data = csr_reg[CSR_MSTATUS]	;   end
		CSR_MTVEC			:begin csr_rd_data = csr_reg[CSR_MTVEC]		;   end
		CSR_MEPC			:begin csr_rd_data = csr_reg[CSR_MEPC]		;   end
		CSR_MCAUSE		:begin csr_rd_data = csr_reg[CSR_MCAUSE]	;   end
		CSR_MVENDORID	:begin csr_rd_data = MVENDORID						;  	end
		CSR_MARCHID		:begin csr_rd_data = MARCHID							;   end
		default:begin
				csr_rd_data = 'd0;
		end
	endcase
end
// integer i;
// always @(posedge clock) begin
// 	if(reset)begin
// 		csr_reg[CSR_MSTATUS]   <= 'd0;
// 		csr_reg[CSR_MTVEC] 		<= 'd0;
// 		csr_reg[CSR_MEPC]  		<= 'd0;
// 		csr_reg[CSR_MCAUSE]    <= 'd0;
// 	end
// 	else if(csr_ecall_i)begin
// 		csr_reg[CSR_MSTATUS]   <= csr_reg[CSR_MSTATUS] | 32'h0000_1800;
// 		csr_reg[CSR_MEPC]   		<= csr_pc;
// 		csr_reg[CSR_MCAUSE]    <= 32'd11;
// 	end
// 	else if(csr_mret_i)begin
// 		csr_reg[CSR_MSTATUS]   <= csr_reg[CSR_MSTATUS] & ~(32'h0000_1800);
// 	end
// 	else if(enable)begin
// 		for(i=0; i<7;i++)begin
// 			if(i[2:0] == csr_reg_addr)begin
// 				case(funct3[1:0])
// 					2'b01:  csr_reg[i]   <= csr_wr_data;
// 					2'b10:  csr_reg[i]   <= csr_wr_data | csr_reg[i];
// 					2'b11:  csr_reg[i]   <= (~csr_wr_data) & csr_reg[i];
// 					default: csr_reg[i]   <= csr_reg[i];
// 				endcase
// 			end
// 			else begin
// 				csr_reg[i]   <= csr_reg[i];
// 			end
// 		end
		
// 	end
// end



// mstatus
assign csr_mstatus = csr_reg[CSR_MSTATUS];

always @(posedge clock) begin
	if(reset)begin
		csr_reg[CSR_MSTATUS]   <= 'd0;
	end
	else if(csr_ecall_i)begin
		csr_reg[CSR_MSTATUS]   <= csr_mstatus | 32'h0000_1800;
	end
	else if(csr_mret_i)begin
		csr_reg[CSR_MSTATUS]   <= csr_mstatus & ~(32'h0000_1800);
	end
	else if(enable && csr_reg_addr == CSR_MSTATUS)begin
		case(funct3[1:0])
			2'b01:  csr_reg[CSR_MSTATUS]   <= csr_wr_data;
			2'b10:  csr_reg[CSR_MSTATUS]   <= csr_wr_data | csr_reg[CSR_MSTATUS];
			2'b11:  csr_reg[CSR_MSTATUS]   <= (~csr_wr_data) & csr_reg[CSR_MSTATUS];
			default: csr_reg[CSR_MSTATUS]   <= csr_reg[CSR_MSTATUS];
		endcase
	end
end

//mtvec
assign csr_mtvec = csr_reg[CSR_MTVEC];
always @(posedge clock) begin
	if(reset)begin
		csr_reg[CSR_MTVEC] <= 'd0;
	end
	else if(enable && csr_reg_addr == CSR_MTVEC)begin
		case(funct3[1:0])
			2'b01:  csr_reg[CSR_MTVEC]   <= csr_wr_data;
			2'b10:  csr_reg[CSR_MTVEC]   <= csr_wr_data | csr_reg[CSR_MTVEC];
			2'b11:  csr_reg[CSR_MTVEC]   <= (~csr_wr_data) & csr_reg[CSR_MTVEC];
			default: csr_reg[CSR_MTVEC]   <= csr_reg[CSR_MTVEC];
		endcase
	end
end

//mepc
assign csr_mpec = csr_reg[CSR_MEPC];

always @(posedge clock) begin
	if(reset)begin
		csr_reg[CSR_MEPC]  <= 'd0;
	end
	else if(csr_ecall_i)begin
		csr_reg[CSR_MEPC]   <= csr_pc;
	end
	else if(enable && csr_reg_addr == CSR_MEPC)begin
		case(funct3[1:0])
			2'b01:  csr_reg[CSR_MEPC]   <= csr_wr_data;
			2'b10:  csr_reg[CSR_MEPC]   <= csr_wr_data | csr_reg[CSR_MEPC];
			2'b11:  csr_reg[CSR_MEPC]   <= (~csr_wr_data) & csr_reg[CSR_MEPC];
			default: csr_reg[CSR_MEPC]   <= csr_reg[CSR_MEPC];
		endcase
	end
end

//mcause
wire [`DATA_WIDTH-1:0] mcause;
assign mcause = csr_reg[CSR_MCAUSE];
always @(posedge clock) begin
	if(reset)begin
		csr_reg[CSR_MCAUSE]    <= 'd0;
	end
	else if(csr_ecall_i)begin
		csr_reg[CSR_MCAUSE]    <= 32'd11;
	end
	else if(enable && csr_reg_addr == CSR_MCAUSE)begin
		case(funct3[1:0])
			2'b01:  csr_reg[CSR_MCAUSE]   <= csr_wr_data;
			2'b10:  csr_reg[CSR_MCAUSE]   <= csr_wr_data | csr_reg[CSR_MCAUSE];
			2'b11:  csr_reg[CSR_MCAUSE]   <= (~csr_wr_data) & csr_reg[CSR_MCAUSE];
			default: csr_reg[CSR_MCAUSE]  <= csr_reg[CSR_MCAUSE];
		endcase
	end
end


`ifdef USING_DPI_C
import "DPI-C" function void set_csr_ptr(input logic [`DATA_WIDTH-1:0] csr_reg []);
initial set_csr_ptr(csr_reg);
`endif

endmodule