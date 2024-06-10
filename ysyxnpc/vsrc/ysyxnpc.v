module ysyxnpc(
    input         clock,
    input         reset
);

reg             auto_master_out_awready   ;	//input
wire            auto_master_out_awvalid   ;	//output
wire   [3:0]    auto_master_out_awid      ;	//output    
wire   [31:0]   auto_master_out_awaddr    ;	//output
wire   [7:0]    auto_master_out_awlen     ;	//output
wire   [2:0]    auto_master_out_awsize    ;	//output
wire   [1:0]    auto_master_out_awburst   ;	//output
wire            auto_master_out_wready    ;	//input 
wire            auto_master_out_wvalid    ;	//output
wire   [63:0]   auto_master_out_wdata     ;	//output
wire   [7:0]    auto_master_out_wstrb     ;	//output
wire            auto_master_out_wlast     ;	//output
wire            auto_master_out_bready    ;	//output      
reg             auto_master_out_bvalid    ;	//input 
reg    [3:0]    auto_master_out_bid       ;	//input     
reg    [1:0]    auto_master_out_bresp     ;	//input 

wire            auto_master_out_arready   ;	// input 	
wire            auto_master_out_arvalid   ;	// output	
wire   [3:0]    auto_master_out_arid      ;	// output	    
wire   [31:0]   auto_master_out_araddr    ;	// output	
wire   [7:0]    auto_master_out_arlen     ;	// output	
wire   [2:0]    auto_master_out_arsize    ;	// output	
wire   [1:0]    auto_master_out_arburst   ;	// output	
wire            auto_master_out_rready    ;	// output	
wire            auto_master_out_rvalid    ;	// input 
wire   [3:0]    auto_master_out_rid       ;	// input 	
reg    [63:0]   auto_master_out_rdata     ;	// input 	
wire   [1:0]    auto_master_out_rresp     ;	// input 	
reg             auto_master_out_rlast	  ;	// input 

//写逻辑
reg [2:0] npc_w_state;
localparam [2:0] NPC_W_IDLE   = 'd0;
localparam [2:0] NPC_W_ADDR   = 'd1;
localparam [2:0] NPC_W_DATA   = 'd2;
localparam [2:0] NPC_W_RESP   = 'd3;

assign auto_master_out_awready  = (npc_w_state == NPC_W_ADDR)&auto_master_out_awvalid ? 1'b1 : 1'b0;
assign auto_master_out_wready	= (npc_w_state == NPC_W_DATA)						  ? 1'b1 : 1'b0;

assign auto_master_out_bvalid	= (npc_w_state == NPC_W_RESP)&auto_master_out_bready  ? 1'b1 : 1'b0;
assign auto_master_out_bid      = 'd0;
assign auto_master_out_bresp    = 'd0;

reg  [31:0] npc_write_addr;
wire [31:0] npc_write_data = {{32'd0,auto_master_out_wdata} >> {npc_write_addr[2:0],3'd0}}[31:0];


always @(posedge clock ) begin
	if(reset)begin
        npc_write_addr   <= 'd0;
    end
    else begin
		if(auto_master_out_awready)begin
			npc_write_addr   <= auto_master_out_awaddr;
		end
	end
end

always @(posedge clock ) begin
    if(reset)begin
        npc_w_state <= NPC_W_IDLE;
    end
    else begin
        case(npc_w_state)
            NPC_W_IDLE:begin
                if(auto_master_out_awvalid)begin
                    npc_w_state     <= NPC_W_ADDR;
                end
            end
            NPC_W_ADDR:begin
                if(auto_master_out_awvalid & auto_master_out_awready)begin
                    npc_w_state     <= NPC_W_DATA;
                end
            end
            NPC_W_DATA:begin
				if(auto_master_out_wvalid & auto_master_out_wlast)begin
					npc_w_state <= NPC_W_RESP;
				end
            end
			NPC_W_RESP:begin
				if(auto_master_out_bready & auto_master_out_bvalid)begin
					npc_w_state <= NPC_W_IDLE;
				end
			end
            default:begin
                npc_w_state <= NPC_W_IDLE;
            end
        endcase
    end
end


//读逻辑
reg [2:0] npc_r_state;
localparam [2:0] NPC_R_IDLE   = 'd0;
localparam [2:0] NPC_R_ADDR   = 'd1;
localparam [2:0] NPC_R_DATA   = 'd2;

assign auto_master_out_arready  = (npc_r_state == NPC_R_ADDR)&auto_master_out_arvalid ? 1'b1 : 1'b0;
assign auto_master_out_rvalid   = (npc_r_state == NPC_R_DATA)&auto_master_out_rready  ? 1'b1 : 1'b0;
assign auto_master_out_rlast    = auto_master_out_rvalid&(npc_r_cnt == auto_master_out_arlen)  ? 1'b1 : 1'b0;
assign auto_master_out_rresp    = 'd0;
assign auto_master_out_rid      = 'd0;
assign auto_master_out_rdata    = {{32'd0,npc_read_data} << {npc_read_addr[2:0],3'd0}}[63:0];

reg  [31:0] npc_read_addr;
wire [31:0] npc_read_data;
reg [7:0]  npc_r_cnt;

always @(posedge clock ) begin
	if(reset)begin
        npc_read_addr   <= 'd0;
    end
    else begin
		if(auto_master_out_arready)
			npc_read_addr   <= auto_master_out_araddr;
	end
end

always @(posedge clock ) begin
    if(reset)begin
        npc_r_state <= NPC_R_IDLE;
        npc_r_cnt   <= 'd0;
    end
    else begin
        case(npc_r_state)
            NPC_R_IDLE:begin
                npc_r_cnt   <= 'd0;
                if(auto_master_out_arvalid)begin
                    npc_r_state     <= NPC_R_ADDR;
                end
            end
            NPC_R_ADDR:begin
                if(auto_master_out_arvalid & auto_master_out_arready)begin
                    npc_r_state     <= NPC_R_DATA;
                end
            end
            NPC_R_DATA:begin
				if(auto_master_out_rready)begin
					npc_r_cnt	<= npc_r_cnt + 1;
					if(npc_r_cnt == auto_master_out_arlen)begin
						npc_r_cnt   <= 'd0;
						npc_r_state <= NPC_R_IDLE;
					end
				end
            end
            default:begin
                npc_r_state <= NPC_R_IDLE;
            end
        endcase
    end
end

import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
import "DPI-C" function void riscv_pmem_write(input int waddr, input int wdata,  input int wmask, input wen);

always @(*)begin
    riscv_pmem_read(npc_read_addr,npc_read_data,auto_master_out_rvalid);
    riscv_pmem_write(npc_write_addr,npc_write_data,{29'd0,auto_master_out_awsize},auto_master_out_wvalid);
end


ysyx_23060077 cpu (	
    .clock                   (clock),
    .reset                   (reset),
    .io_interrupt            (1'h0),	
    .io_master_awready      (auto_master_out_awready),
    .io_master_awvalid      (auto_master_out_awvalid),
    .io_master_awid         (auto_master_out_awid),
    .io_master_awaddr       (auto_master_out_awaddr),
    .io_master_awlen        (auto_master_out_awlen),
    .io_master_awsize       (auto_master_out_awsize),
    .io_master_awburst      (auto_master_out_awburst),
    .io_master_wready       (auto_master_out_wready),
    .io_master_wvalid       (auto_master_out_wvalid),
    .io_master_wdata        (auto_master_out_wdata),
    .io_master_wstrb        (auto_master_out_wstrb),
    .io_master_wlast        (auto_master_out_wlast),
    .io_master_bready       (auto_master_out_bready),
    .io_master_bvalid       (auto_master_out_bvalid),
    .io_master_bid          (auto_master_out_bid),
    .io_master_bresp        (auto_master_out_bresp),
    .io_master_arready      (auto_master_out_arready),
    .io_master_arvalid      (auto_master_out_arvalid),
    .io_master_arid         (auto_master_out_arid),
    .io_master_araddr       (auto_master_out_araddr),
    .io_master_arlen        (auto_master_out_arlen),
    .io_master_arsize       (auto_master_out_arsize),
    .io_master_arburst      (auto_master_out_arburst),
    .io_master_rready       (auto_master_out_rready),
    .io_master_rvalid       (auto_master_out_rvalid),
    .io_master_rid          (auto_master_out_rid),
    .io_master_rdata        (auto_master_out_rdata),
    .io_master_rresp        (auto_master_out_rresp),
    .io_master_rlast        (auto_master_out_rlast),
    .io_slave_awready       (/* unused */),
    .io_slave_awvalid       (1'h0),	
    .io_slave_awid          (4'h0),	
    .io_slave_awaddr        (32'h0),	
    .io_slave_awlen         (8'h0),	
    .io_slave_awsize        (3'h0),	
    .io_slave_awburst       (2'h0),	
    .io_slave_wready        (/* unused */),
    .io_slave_wvalid        (1'h0),	
    .io_slave_wdata         (64'h0),	
    .io_slave_wstrb         (8'h0),	
    .io_slave_wlast         (1'h0),	
    .io_slave_bready        (1'h0),	
    .io_slave_bvalid        (/* unused */),
    .io_slave_bid           (/* unused */),
    .io_slave_bresp         (/* unused */),
    .io_slave_arready       (/* unused */),
    .io_slave_arvalid       (1'h0),	
    .io_slave_arid          (4'h0),	
    .io_slave_araddr        (32'h0),	
    .io_slave_arlen         (8'h0),	
    .io_slave_arsize        (3'h0),	
    .io_slave_arburst       (2'h0),	
    .io_slave_rready        (1'h0),	
    .io_slave_rvalid        (/* unused */),
    .io_slave_rid           (/* unused */),
    .io_slave_rdata         (/* unused */),
    .io_slave_rresp         (/* unused */),
    .io_slave_rlast         (/* unused */)
  );	
endmodule