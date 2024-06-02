module sdram(
  input        clk,
  input        cke,
  input        cs,
  input        ras,
  input        cas,
  input        we,
  input [12:0] a,
  input [ 1:0] ba,
  input [ 1:0] dqm,
  inout [15:0] dq
);

localparam CMD_W              = 3;
localparam CMD_NOP            = 3'b111;
localparam CMD_ACTIVE         = 3'b011;
localparam CMD_READ           = 3'b101;
localparam CMD_WRITE          = 3'b100;
localparam CMD_TERMINATE      = 3'b110;
localparam CMD_PRECHARGE      = 3'b010;
localparam CMD_REFRESH        = 3'b001;
localparam CMD_LOAD_MODE      = 3'b000;

localparam SDRAM_SIZE         = 8192*512*4;

reg [15:0] bank [0:SDRAM_SIZE-1];
wire [63:0] bank_temp = {bank[0],bank[1],bank[2],bank[3]};
// assign dq = 16'bz;
wire [15:0] dout_en;
reg  [15:0] dout;
wire [15:0] din;
assign din = dq;
genvar i;
generate
  for(i=0; i<16; i=i+1)begin
    assign dq[i] = dout_en[i] ? dout[i] : 1'bz;
  end
endgenerate

reg [2:0] CAS_Latency;
reg [2:0] Brust_Length;
wire [CMD_W-1:0] command = {ras,cas,we};

reg  [12:0] Line_Address;
reg  [ 1:0] L_Bank;
reg  [8:0]  Row_Address;
reg  [1:0] dqm_buf1,dqm_buf2,dqm_buf3;


always @(posedge clk or posedge cke) begin
  if(!cke)begin
    Line_Address  <= 'd0;
    L_Bank        <= 'd0;
  end
  else if(!cs & (command == CMD_ACTIVE))begin
    Line_Address  <= a;
    L_Bank        <= ba;
  end
end

always @(posedge clk or posedge cke) begin
  if(!cke)begin
    Row_Address   <= 'd0;
  end
  else if(!cs & (command == CMD_READ | command == CMD_WRITE))begin
    Row_Address   <= a[8:0];
  end
end

always @(posedge clk or posedge cke) begin
  if(!cke)begin
    CAS_Latency   <= 3'd2;
    Brust_Length  <= 3'd1;
  end
  else if(!cs & (command == CMD_LOAD_MODE))begin
    CAS_Latency   <= din[6:4];
    Brust_Length  <= din[2:0];
  end
  else begin
    CAS_Latency   <= 3'd2;
    Brust_Length  <= 3'd1;
  end
end

always @(posedge clk or posedge cke) begin
  if(!cke)begin
    dqm_buf1      <= 'd0;
    dqm_buf2      <= 'd0;
    dqm_buf3      <= 'd0;
  end
  else if(!cs)begin
    dqm_buf1      <= dqm;
    dqm_buf2      <= dqm_buf1;
    dqm_buf3      <= dqm_buf2;
  end
end


reg [3:0] r_counter;
reg [3:0] w_counter;
reg read_flag;
reg [8:0] R_Address;
reg [8:0] W_Address;
reg [15:0] W_data;
wire [23:0] r_sdram_address = {L_Bank,Line_Address,R_Address};
wire [23:0] w_sdram_address = {L_Bank,Line_Address,W_Address};
wire [3:0] Length = (Brust_Length == 3'b011) ? 4'd8 :
                    (Brust_Length == 3'b010) ? 4'd4 :
                    (Brust_Length == 3'b001) ? 4'd2 :4'd1;

assign dout_en =  read_flag ? 16'hffff : 16'd0;
always @(posedge clk or posedge cke) begin
  if(!cke)begin
    r_counter <= 'd0;
    R_Address <= 'd0;
    dout <= 'd0;
    read_flag <='d0;
  end
  else if(!cs)begin
    if(command == CMD_READ)begin
      r_counter <= r_counter + 1;
      R_Address <= a[8:0];
      read_flag <= 'd1;
    end
    else if((r_counter > 0) && (r_counter < {1'b0,CAS_Latency}-1 ))begin
      r_counter <= r_counter + 1;
    end
    else if(r_counter >= {1'b0,CAS_Latency}-1)begin
      r_counter <= (r_counter < Length+CAS_Latency) ? r_counter + 1 : 'd0;
      R_Address <= R_Address + 1;
      dout[15:8] <= bank[r_sdram_address][15:8];
      dout[7:0]  <= bank[r_sdram_address][7:0];
    end
    else begin
      r_counter <= 'd0;
      R_Address <= 'd0;
      dout <= 'd0;
      read_flag <='d0;
    end
  end
  else begin
    r_counter <= 'd0;
    R_Address <= 'd0;
    dout <= 'd0;
    read_flag <='d0;
  end
end

always @(posedge clk or posedge cke) begin
  if(!cke)begin
    w_counter <= 'd0;
    W_Address <= 'd0;
    W_data    <= 'd0;
  end
  else if(!cs)begin
    if(command == CMD_WRITE)begin
      w_counter <= w_counter + 1;
      W_Address <= a[8:0];
      W_data    <= din;
    end
    else if(w_counter > 0)begin
      w_counter <= (w_counter < Length) ? w_counter + 1 : 'd0;
      W_Address <= W_Address + 1;
      W_data    <= din;
      bank[w_sdram_address][15:8] <= (!dqm_buf1[1]) ? W_data[15:8] : bank[w_sdram_address][15:8];
      bank[w_sdram_address][7:0]  <= (!dqm_buf1[0]) ? W_data[7:0]  : bank[w_sdram_address][7:0];
    end
    else begin
      w_counter <= 'd0;
      W_Address <= 'd0;
      W_data    <= 'd0;
    end
  end
end

endmodule
