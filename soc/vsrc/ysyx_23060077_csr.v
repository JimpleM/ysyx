`include"ysyx_23060077_define.v"

module ysyx_23060077_csr(
	input 	                            							clock       				,
	input 	                            							reset       				,

	input       [`YSYX_23060077_DATA_WIDTH-1:0]       csr_imm 						,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       csr_src1 						,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       csr_pc        			,

	input 			[`YSYX_23060077_CSR_OPT_WIDTH-1:0]    csr_opt_bus					,

	input              																sys      						, 
	input 																						ex_to_wb						,

	output 	reg [`YSYX_23060077_DATA_WIDTH-1:0]       csr_rd_data 				,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]       csr_mstatus   			,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]       csr_mtvec     			,
	output      [`YSYX_23060077_INST_WIDTH-1:0]       csr_mepc   
);

localparam CSR_M_CYCLE_ADDR   	= `YSYX_23060077_CSR_ADDR_WIDTH'hb00;
localparam CSR_MSTATUS_ADDR   	= `YSYX_23060077_CSR_ADDR_WIDTH'h300;
localparam CSR_MIE_ADDR       	= `YSYX_23060077_CSR_ADDR_WIDTH'h304;
localparam CSR_MTVEC_ADDR     	= `YSYX_23060077_CSR_ADDR_WIDTH'h305;
localparam CSR_MEPC_ADDR      	= `YSYX_23060077_CSR_ADDR_WIDTH'h341;
localparam CSR_MCAUSE_ADDR    	= `YSYX_23060077_CSR_ADDR_WIDTH'h342;
localparam CSR_MTVAL_ADDR     	= `YSYX_23060077_CSR_ADDR_WIDTH'h343;
localparam CSR_MINSTRET_ADDR  	= `YSYX_23060077_CSR_ADDR_WIDTH'hb02;
localparam CSR_MSCRATCH_ADDR  	= `YSYX_23060077_CSR_ADDR_WIDTH'h340;
localparam CSR_MVENDORID_ADDR 	= `YSYX_23060077_CSR_ADDR_WIDTH'hF11;
localparam CSR_MARCHID_ADDR   	= `YSYX_23060077_CSR_ADDR_WIDTH'hF12;

localparam CSR_REG_WIDTH 				= 3;
localparam CSR_REG_COUNT 				= 5;
localparam CSR_MSTATUS         	= 'd1;
localparam CSR_MTVEC           	= 'd2;
localparam CSR_MEPC            	= 'd3;
localparam CSR_MCAUSE          	= 'd4;
// read only
localparam CSR_MVENDORID       	= 'd5;
localparam CSR_MARCHID         	= 'd6;
localparam MVENDORID       		 	= `YSYX_23060077_DATA_WIDTH'h79737978;
localparam MARCHID         		 	= `YSYX_23060077_DATA_WIDTH'h015FDE6D;

reg  [`YSYX_23060077_DATA_WIDTH-1:0] csr_reg	[CSR_REG_COUNT-1:0];
wire [`YSYX_23060077_DATA_WIDTH-1:0] csr_din	[CSR_REG_COUNT-1:0];
reg csr_reg_wen [CSR_REG_COUNT-1:0];

wire csr_ecall	= csr_opt_bus[`YSYX_23060077_CSR_ECALL];
wire csr_mret 	= csr_opt_bus[`YSYX_23060077_CSR_MRET ];

wire [`YSYX_23060077_CSR_ADDR_WIDTH-1:0]  csr_addr = csr_imm[5+:`YSYX_23060077_CSR_ADDR_WIDTH];
wire [`YSYX_23060077_DATA_WIDTH-1:0]      csr_wr_data = csr_opt_bus[`YSYX_23060077_CSR_ZIMM ] ? {27'd0,csr_imm[4:0]} : csr_src1;

assign csr_mstatus 		= csr_reg[CSR_MSTATUS  ];
assign csr_mtvec 			= csr_reg[CSR_MTVEC    ];
assign csr_mepc 			= csr_reg[CSR_MEPC     ];

wire [`YSYX_23060077_DATA_WIDTH-1:0] csr_wr_data_t =
({`YSYX_23060077_DATA_WIDTH{csr_opt_bus[`YSYX_23060077_CSR_01]}} & 	 		csr_wr_data								) |
({`YSYX_23060077_DATA_WIDTH{csr_opt_bus[`YSYX_23060077_CSR_10]}} & ( csr_wr_data  | csr_rd_data	)	) |
({`YSYX_23060077_DATA_WIDTH{csr_opt_bus[`YSYX_23060077_CSR_11]}} & ((~csr_wr_data) & csr_rd_data) ) ;

reg csr_finished;
wire enable = sys;

always @(posedge clock) begin
	if(reset)begin
		csr_finished <= 'd0;
	end
	else if(sys)begin
		csr_finished <= 'd1;
	end
	else if(ex_to_wb)begin
		csr_finished	<= 'd0;
	end
end

genvar i;
generate
	for(i=0; i<CSR_REG_COUNT; i++)begin
		ysyx_23060077_dff#(
				.WIDTH      	(32), 
				.RESET_VAL   ('d0)
		)csr_regfile_dff(clock,reset,csr_reg_wen[i],csr_din[i],csr_reg[i]);
	end
endgenerate

// read
always @(*) begin
	case(csr_addr)
		CSR_MSTATUS_ADDR  :begin csr_rd_data = csr_reg[CSR_MSTATUS]	;   end
		CSR_MTVEC_ADDR    :begin csr_rd_data = csr_reg[CSR_MTVEC  ]	;   end
		CSR_MEPC_ADDR     :begin csr_rd_data = csr_reg[CSR_MEPC   ]	;   end
		CSR_MCAUSE_ADDR   :begin csr_rd_data = csr_reg[CSR_MCAUSE ]	;   end
		CSR_MVENDORID_ADDR:begin csr_rd_data = MVENDORID						;  	end
		CSR_MARCHID_ADDR  :begin csr_rd_data = MARCHID							;   end
		default:begin
			csr_rd_data = 'd0;
		end
	endcase
end 

//write
wire mstatus_sel = (csr_addr == CSR_MSTATUS_ADDR);
assign csr_reg_wen[CSR_MSTATUS] 	= enable & (csr_ecall | csr_mret | mstatus_sel);
assign csr_din[CSR_MSTATUS]				= 
({`YSYX_23060077_DATA_WIDTH{csr_ecall}} & 32'h0000_1800 ) |
({`YSYX_23060077_DATA_WIDTH{csr_mret}} 	& 32'h0000_0000 ) |
({`YSYX_23060077_DATA_WIDTH{mstatus_sel}} & csr_wr_data_t ) ;


wire mtvec_sel 	= (csr_addr == CSR_MTVEC_ADDR);
assign csr_reg_wen[CSR_MTVEC] 	= enable & (mtvec_sel);
assign csr_din[CSR_MTVEC]				= 
({`YSYX_23060077_DATA_WIDTH{mtvec_sel}}   & csr_wr_data_t ) ;

wire mepc_sel 	= (csr_addr == CSR_MEPC_ADDR);
assign csr_reg_wen[CSR_MEPC] 		= enable & (csr_ecall | mepc_sel);
assign csr_din[CSR_MEPC]				= 
({`YSYX_23060077_DATA_WIDTH{csr_ecall}} & csr_pc				) |
({`YSYX_23060077_DATA_WIDTH{mepc_sel}}    & csr_wr_data_t ) ;

wire mcause_sel = (csr_addr == CSR_MCAUSE_ADDR);
assign csr_reg_wen[CSR_MCAUSE] 	= enable & (csr_ecall | mcause_sel);
assign csr_din[CSR_MCAUSE]			= 
({`YSYX_23060077_DATA_WIDTH{csr_ecall}} & 32'd11				) |
({`YSYX_23060077_DATA_WIDTH{mcause_sel}}  & csr_wr_data_t ) ;


`ifdef USING_DPI_C
import "DPI-C" function void set_csr_ptr(input logic [`YSYX_23060077_DATA_WIDTH-1:0] csr_reg []);
initial set_csr_ptr(csr_reg);
`endif

endmodule