`timescale 1ns/1ps
// Four-digit hex 7-segment display driver.
// Scans two groups of four digits; count[4] selects the group.
// Identical to the competition reference display_seg.
module display_seg (
    input  wire        clk,
    input  wire        rst,
    input  wire [31:0] s,
    output wire [6:0]  seg1,
    output wire [6:0]  seg2,
    output wire [6:0]  seg3,
    output wire [6:0]  seg4,
    output wire [7:0]  ans
);
    reg [4:0] count;

    always @(posedge clk or posedge rst) begin
        if (rst) count <= 5'b0;
        else     count <= count + 5'b1;
    end

    reg [7:0]  ans_r;
    reg [3:0]  d1, d2, d3, d4;

    always @(*) begin
        if (!count[4]) begin
            ans_r = 8'b10101010;
            d1 = s[7:4];
            d2 = s[15:12];
            d3 = s[23:20];
            d4 = s[31:28];
        end else begin
            ans_r = 8'b01010101;
            d1 = s[3:0];
            d2 = s[11:8];
            d3 = s[19:16];
            d4 = s[27:24];
        end
    end

    assign ans = ans_r;

    seg7 SEG1 (.din(d1), .dout(seg1));
    seg7 SEG2 (.din(d2), .dout(seg2));
    seg7 SEG3 (.din(d3), .dout(seg3));
    seg7 SEG4 (.din(d4), .dout(seg4));

endmodule
