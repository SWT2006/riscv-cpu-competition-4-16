`timescale 1ns/1ps
// Sequential restoring divider for RV32IM DIV/DIVU/REM/REMU.
//
// Latency:
//   - Division by zero or signed overflow (MIN_INT / -1): 1 cycle (fast path)
//   - Normal division: 33 cycles (1 setup + 32 iterations)
//
// Protocol:
//   Caller asserts `start` for one cycle with operands stable.
//   `busy` is high while computing.
//   `done` is high for exactly one cycle when the result is valid.
//   On the cycle after `done`, the unit returns to idle.
module div_unit (
    input  wire        clk,
    input  wire        rst,
    input  wire        start,       // begin new division
    input  wire [31:0] dividend,    // a  (sampled when start=1)
    input  wire [31:0] divisor,     // b  (sampled when start=1)
    input  wire        op_signed,   // 1 for DIV/REM, 0 for DIVU/REMU
    input  wire        op_rem,      // 1 for REM/REMU, 0 for DIV/DIVU
    output wire        busy,
    output wire        done,
    output wire [31:0] result
);

    localparam S_IDLE = 2'd0;
    localparam S_CALC = 2'd1;
    localparam S_DONE = 2'd2;

    reg [1:0]  state;
    reg [4:0]  count;           // 31 downto 0
    reg [31:0] quo;             // quotient shift register
    reg [31:0] rem;             // remainder accumulator
    reg [31:0] div_reg;         // latched absolute divisor
    reg        sign_q, sign_r;  // sign-correction flags
    reg        is_rem;          // latched op_rem

    // --- Restoring division step ---
    // Shift {rem, quo} left by 1, then trial-subtract the divisor.
    wire [32:0] trial = {1'b0, rem[30:0], quo[31]} - {1'b0, div_reg};
    wire        can_sub = ~trial[32];   // no borrow ⇒ remainder >= divisor

    // --- Sign-corrected outputs (combinational from registered quo/rem) ---
    wire [31:0] q_out = sign_q ? (~quo + 32'd1) : quo;
    wire [31:0] r_out = sign_r ? (~rem + 32'd1) : rem;

    assign busy   = (state == S_CALC);
    assign done   = (state == S_DONE);
    assign result = is_rem ? r_out : q_out;

    always @(posedge clk) begin
        if (rst) begin
            state   <= S_IDLE;
            count   <= 5'd0;
            quo     <= 32'd0;
            rem     <= 32'd0;
            div_reg <= 32'd0;
            sign_q  <= 1'b0;
            sign_r  <= 1'b0;
            is_rem  <= 1'b0;
        end else begin
            case (state)
                // ---------------------------------------------------------
                S_IDLE: begin
                    if (start) begin
                        is_rem <= op_rem;
                        if (divisor == 32'd0) begin
                            // Division by zero: quo = all-ones, rem = dividend
                            quo    <= 32'hFFFF_FFFF;
                            rem    <= dividend;
                            sign_q <= 1'b0;
                            sign_r <= 1'b0;
                            state  <= S_DONE;
                        end else if (op_signed
                                     && dividend == 32'h8000_0000
                                     && divisor  == 32'hFFFF_FFFF) begin
                            // Signed overflow: MIN_INT / -1
                            quo    <= 32'h8000_0000;
                            rem    <= 32'd0;
                            sign_q <= 1'b0;
                            sign_r <= 1'b0;
                            state  <= S_DONE;
                        end else begin
                            // Normal: convert to unsigned magnitudes
                            quo     <= (op_signed && dividend[31]) ?
                                           (~dividend + 32'd1) : dividend;
                            div_reg <= (op_signed && divisor[31])  ?
                                           (~divisor  + 32'd1) : divisor;
                            rem     <= 32'd0;
                            sign_q  <= op_signed & (dividend[31] ^ divisor[31]);
                            sign_r  <= op_signed & dividend[31];
                            count   <= 5'd31;
                            state   <= S_CALC;
                        end
                    end
                end
                // ---------------------------------------------------------
                S_CALC: begin
                    if (can_sub) begin
                        rem <= trial[31:0];
                        quo <= {quo[30:0], 1'b1};
                    end else begin
                        rem <= {rem[30:0], quo[31]};
                        quo <= {quo[30:0], 1'b0};
                    end
                    if (count == 5'd0)
                        state <= S_DONE;
                    else
                        count <= count - 5'd1;
                end
                // ---------------------------------------------------------
                S_DONE: begin
                    // Result consumed this cycle; return to idle.
                    state <= S_IDLE;
                end
                // ---------------------------------------------------------
                default: state <= S_IDLE;
            endcase
        end
    end

endmodule
