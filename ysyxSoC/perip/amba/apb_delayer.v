module apb_delayer(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  assign out_paddr   = in_paddr;
  assign out_psel    = (delay_state == DELAY_WAIT | delay_state == DELAY_STOP) ? 'd0 : in_psel;
  assign out_penable = (delay_state == DELAY_WAIT | delay_state == DELAY_STOP) ? 'd0 : in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;
  // assign in_pready   = out_pready;
  // assign in_prdata   = out_prdata;
  assign in_pslverr  = out_pslverr;

  wire [15:0] r;            // r = 3.625, s = 2^4 = 16
  assign r[15:4] = 'd2;     // 设置成2，意味着传输每一个周期要多2个delay
  assign r[3:0]  = 4'b1010; // 定点数0.5+0.125 = 0.625
  
  localparam DELAY_STATE_WIDTH = 2;
  
  reg [DELAY_STATE_WIDTH-1:0] delay_state;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_IDLE   = 'd0;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_TRANS  = 'd1;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_WAIT   = 'd2;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_STOP   = 'd3;
  
  reg  [15:0] counter;
  reg 	      pready_r;
  reg  [31:0] prdata_r;
  reg  [31:0] prdata_s;
  
  assign in_pready   = pready_r;
  assign in_prdata   = prdata_r;
  
  always @(posedge clock ) begin
    if(reset)begin
        delay_state <= DELAY_IDLE;
        counter     <= 'd0;
        pready_r		<= 'd0;
        prdata_r		<= 'd0;
        prdata_s    <= 'd0;
    end
    else begin
      case(delay_state)
        DELAY_IDLE:begin
          if(in_psel)begin
              delay_state     <= DELAY_TRANS;
              counter					<= counter + r;
          end
        end
        DELAY_TRANS:begin
          counter						<= counter + r;
          if(out_pready)begin
            delay_state     <= DELAY_WAIT;
            prdata_s				<= out_prdata;
          end
        end
        DELAY_WAIT:begin
          if(counter[15:4] == 'd0)begin
            delay_state <= DELAY_STOP;
            pready_r		<= 'd1;
            prdata_r		<= prdata_s;
          end
          else begin
            counter[15:4] <= counter[15:4] - 12'd1;
          end
        end
        DELAY_STOP:begin
          pready_r		<= 'd0;
          prdata_r		<= 'd0;
          prdata_s    <= 'd0;

          delay_state <= DELAY_IDLE;
        end
        default:begin
          delay_state <= DELAY_IDLE;
        end
      endcase
    end
  end
endmodule
