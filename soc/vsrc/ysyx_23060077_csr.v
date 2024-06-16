`include"ysyx_23060077_define.v"

// csr reg addr
`define CSR_ADDR_WIDTH      12
`define CSR_M_CYCLE_ADDR    `CSR_ADDR_WIDTH'hb00    
`define CSR_MSTATUS_ADDR    `CSR_ADDR_WIDTH'h300
`define CSR_MIE_ADDR        `CSR_ADDR_WIDTH'h304
`define CSR_MTVEC_ADDR      `CSR_ADDR_WIDTH'h305    
`define CSR_MEPC_ADDR       `CSR_ADDR_WIDTH'h341
`define CSR_MCAUSE_ADDR     `CSR_ADDR_WIDTH'h342
`define CSR_MTVAL_ADDR      `CSR_ADDR_WIDTH'h343
`define CSR_MINSTRET_ADDR   `CSR_ADDR_WIDTH'hb02
`define CSR_MSCRATCH_ADDR   `CSR_ADDR_WIDTH'h340
`define CSR_MVENDORID_ADDR  `CSR_ADDR_WIDTH'hF11
`define CSR_MARCHID_ADDR    `CSR_ADDR_WIDTH'hF12

`define CSR_REG_WIDTH       4
`define CSR_M_CYCLE         `CSR_REG_WIDTH'd0    
`define CSR_MSTATUS         `CSR_REG_WIDTH'd1
`define CSR_MIE             `CSR_REG_WIDTH'd2
`define CSR_MTVEC           `CSR_REG_WIDTH'd3    
`define CSR_MEPC            `CSR_REG_WIDTH'd4
`define CSR_MCAUSE          `CSR_REG_WIDTH'd5
`define CSR_MTVAL           `CSR_REG_WIDTH'd6
`define CSR_MINSTRET        `CSR_REG_WIDTH'd7
`define CSR_MSCRATCH        `CSR_REG_WIDTH'd8
`define CSR_MVENDORID       `CSR_REG_WIDTH'd9
`define CSR_MARCHID         `CSR_REG_WIDTH'd10

module ysyx_23060077_csr(
	input 	                            clock       				,
	input 	                            reset       				,
	// input                               enable,
	input       [`CSR_ADDR_WIDTH-1:0]   csr_wr_addr 				,
	input       [`DATA_WIDTH-1:0]       csr_wr_data 				,

	// input                               enable,
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


reg [`DATA_WIDTH-1:0] csr_reg [2**`CSR_REG_WIDTH-1:0];


wire enable = sys & (|funct3); //funct3不为0

// wire [`DATA_WIDTH-1:0]        wr_data_r;
// wire [`DATA_WIDTH-1:0]        temp;
// assign temp = csr_reg[csr_wr_addr];
// assign wr_data_r = (funct3[1:0] == 2'b01) ? csr_wr_data : (funct3[1:0] == 2'b10) ? temp | csr_wr_data : temp & (~csr_wr_data);

assign csr_reg[`CSR_MVENDORID]  = `MVENDORID;
assign csr_reg[`CSR_MARCHID]    = `MARCHID;

//csr_rd_data
always @(*) begin
    if(reset)begin  
        csr_rd_data = 'd0; 
    end
    else if(enable)begin
        case(csr_rd_addr)
            `CSR_M_CYCLE_ADDR  :begin csr_rd_data = csr_reg[`CSR_M_CYCLE];    end
            `CSR_MSTATUS_ADDR  :begin csr_rd_data = csr_reg[`CSR_MSTATUS];    end
            `CSR_MIE_ADDR      :begin csr_rd_data = csr_reg[`CSR_MIE];        end
            `CSR_MTVEC_ADDR    :begin csr_rd_data = csr_reg[`CSR_MTVEC];      end
            `CSR_MEPC_ADDR     :begin csr_rd_data = csr_reg[`CSR_MEPC];       end
            `CSR_MCAUSE_ADDR   :begin csr_rd_data = csr_reg[`CSR_MCAUSE];     end
            `CSR_MTVAL_ADDR    :begin csr_rd_data = csr_reg[`CSR_MTVAL];      end
            `CSR_MINSTRET_ADDR :begin csr_rd_data = csr_reg[`CSR_MINSTRET];   end
            `CSR_MSCRATCH_ADDR :begin csr_rd_data = csr_reg[`CSR_MSCRATCH];   end
            `CSR_MVENDORID_ADDR:begin csr_rd_data = csr_reg[`CSR_MVENDORID];  end
            `CSR_MARCHID_ADDR  :begin csr_rd_data = csr_reg[`CSR_MARCHID];    end
            default:begin
                csr_rd_data = 'd0;
            end
        endcase
    end
    else begin
        csr_rd_data = 'd0;
    end
end

// mstatus
assign csr_mstatus = csr_reg[`CSR_MSTATUS];

always @(posedge clock) begin
    if(reset)begin
        csr_reg[`CSR_MSTATUS]   <= 'd0;
    end
    else if(csr_ecall_i)begin
        csr_reg[`CSR_MSTATUS]   <= csr_mstatus | 32'h0000_1800;
    end
    else if(csr_mret_i)begin
        csr_reg[`CSR_MSTATUS]   <= csr_mstatus & ~(32'h0000_1800);
    end
    else if(enable && csr_wr_addr == `CSR_MSTATUS_ADDR)begin
        case(funct3[1:0])
            2'b01:  csr_reg[`CSR_MSTATUS]   <= csr_wr_data;
            2'b10:  csr_reg[`CSR_MSTATUS]   <= csr_wr_data | csr_reg[`CSR_MSTATUS];
            2'b11:  csr_reg[`CSR_MSTATUS]   <= (~csr_wr_data) & csr_reg[`CSR_MSTATUS];
            default: csr_reg[`CSR_MSTATUS]   <= csr_reg[`CSR_MSTATUS];
        endcase
        // csr_reg[`CSR_MSTATUS]   <= csr_wr_data;
    end
    else begin
        csr_reg[`CSR_MSTATUS]   <= csr_reg[`CSR_MSTATUS];
    end
end

//mtvec
assign csr_mtvec = csr_reg[`CSR_MTVEC];
always @(posedge clock) begin
    if(reset)begin
        csr_reg[`CSR_MTVEC] <= 'd0;
    end
    else if(enable && csr_wr_addr == `CSR_MTVEC_ADDR)begin
        case(funct3[1:0])
            2'b01:  csr_reg[`CSR_MTVEC]   <= csr_wr_data;
            2'b10:  csr_reg[`CSR_MTVEC]   <= csr_wr_data | csr_reg[`CSR_MTVEC];
            2'b11:  csr_reg[`CSR_MTVEC]   <= (~csr_wr_data) & csr_reg[`CSR_MTVEC];
            default: csr_reg[`CSR_MTVEC]   <= csr_reg[`CSR_MTVEC];
        endcase
        // csr_reg[`CSR_MTVEC]   <= csr_wr_data;
    end
    else begin
        csr_reg[`CSR_MTVEC]   <= csr_reg[`CSR_MTVEC];
    end
end

//mepc
// reg [`INST_WIDTH-1:0] mepc_inst_r;
assign csr_mpec = csr_reg[`CSR_MEPC];

always @(posedge clock) begin
    if(reset)begin
        csr_reg[`CSR_MEPC]  <= 'd0;
        // mepc_inst_r         <= 'd0;
    end
    else if(csr_ecall_i)begin
        csr_reg[`CSR_MEPC]   <= csr_pc;
        // mepc_inst_r          <= i_inst;
    end
    else if(enable && csr_wr_addr == `CSR_MEPC_ADDR)begin
        case(funct3[1:0])
            2'b01:  csr_reg[`CSR_MEPC]   <= csr_wr_data;
            2'b10:  csr_reg[`CSR_MEPC]   <= csr_wr_data | csr_reg[`CSR_MEPC];
            2'b11:  csr_reg[`CSR_MEPC]   <= (~csr_wr_data) & csr_reg[`CSR_MEPC];
            default: csr_reg[`CSR_MEPC]   <= csr_reg[`CSR_MEPC];
        endcase
        // csr_reg[`CSR_MEPC]   <= csr_wr_data;
        // mepc_inst_r          <= mepc_inst_r;
    end
    else begin
        csr_reg[`CSR_MEPC]   <= csr_reg[`CSR_MEPC];
        // mepc_inst_r          <= mepc_inst_r;
    end
end

//mcause
wire [`DATA_WIDTH-1:0] mcause;
assign mcause = csr_reg[`CSR_MCAUSE];
always @(posedge clock) begin
    if(reset)begin
        csr_reg[`CSR_MCAUSE]    <= 'd0;
    end
    else if(csr_ecall_i)begin
        csr_reg[`CSR_MCAUSE]    <= 32'd11;
    end
    else if(enable && csr_wr_addr == `CSR_MCAUSE_ADDR)begin
        case(funct3[1:0])
            2'b01:  csr_reg[`CSR_MCAUSE]   <= csr_wr_data;
            2'b10:  csr_reg[`CSR_MCAUSE]   <= csr_wr_data | csr_reg[`CSR_MCAUSE];
            2'b11:  csr_reg[`CSR_MCAUSE]   <= (~csr_wr_data) & csr_reg[`CSR_MCAUSE];
            default: csr_reg[`CSR_MCAUSE]  <= csr_reg[`CSR_MCAUSE];
        endcase
        // csr_reg[`CSR_MCAUSE]    <= csr_wr_data;
    end
    else begin
        csr_reg[`CSR_MCAUSE]    <= csr_reg[`CSR_MCAUSE];
    end
end


`ifdef USING_DPI_C
import "DPI-C" function void set_csr_ptr(input logic [`DATA_WIDTH-1:0] csr_reg []);
initial set_csr_ptr(csr_reg);
`endif

endmodule