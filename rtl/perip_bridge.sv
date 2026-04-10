`timescale 1ns/1ps
// Peripheral bridge: decodes the CPU's full 32-bit address and routes
// to DRAM or MMIO peripherals.
//
// Address map (matches competition board software image):
//   0x8010_0000 – 0x8013_FFFF  DRAM  (64 KB effective, 14-bit word address)
//   0x8020_0000                SW0   switches [31:0]
//   0x8020_0004                SW1   switches [63:32]
//   0x8020_0010                KEY   key[7:0] zero-extended
//   0x8020_0020                SEG   32-bit display value (write/read)
//   0x8020_0040                LED   32-bit LED output (write)
//   0x8020_0050                CNT   millisecond counter
module perip_bridge (
    input  wire        clk,
    input  wire        cnt_clk,      // 50 MHz for the ms counter
    input  wire        rst,

    input  wire [31:0] perip_addr,
    input  wire [31:0] perip_wdata,
    input  wire        perip_wen,
    input  wire [1:0]  perip_mask,
    output wire [31:0] perip_rdata,

    input  wire [63:0] virtual_sw_input,
    input  wire [7:0]  virtual_key_input,
    output wire [39:0] virtual_seg_output,
    output wire [31:0] virtual_led_output
);
    // ---------------------------------------------------------------
    // Address decode
    // ---------------------------------------------------------------
    localparam DRAM_BASE = 32'h8010_0000;
    localparam DRAM_END  = 32'h8014_0000;  // exclusive
    localparam SW0_ADDR  = 32'h8020_0000;
    localparam SW1_ADDR  = 32'h8020_0004;
    localparam KEY_ADDR  = 32'h8020_0010;
    localparam SEG_ADDR  = 32'h8020_0020;
    localparam LED_ADDR  = 32'h8020_0040;
    localparam CNT_ADDR  = 32'h8020_0050;

    wire sel_dram = (perip_addr >= DRAM_BASE) && (perip_addr < DRAM_END);
    wire sel_sw0  = (perip_addr == SW0_ADDR);
    wire sel_sw1  = (perip_addr == SW1_ADDR);
    wire sel_key  = (perip_addr == KEY_ADDR);
    wire sel_seg  = (perip_addr == SEG_ADDR);
    wire sel_led  = (perip_addr == LED_ADDR);
    wire sel_cnt  = (perip_addr == CNT_ADDR);

    // ---------------------------------------------------------------
    // LED register
    // ---------------------------------------------------------------
    reg [31:0] led_reg;
    always @(posedge clk) begin
        if (rst)
            led_reg <= 32'b0;
        else if (perip_wen && sel_led)
            led_reg <= perip_wdata;
    end
    assign virtual_led_output = led_reg;

    // ---------------------------------------------------------------
    // SEG register + display driver
    // ---------------------------------------------------------------
    reg [31:0] seg_reg;
    always @(posedge clk) begin
        if (rst)
            seg_reg <= 32'b0;
        else if (perip_wen && sel_seg)
            seg_reg <= perip_wdata;
    end

    wire [6:0] seg1_w, seg2_w, seg3_w, seg4_w;
    wire [7:0] ans_w;

    display_seg u_seg (
        .clk  (clk),
        .rst  (rst),
        .s    (seg_reg),
        .seg1 (seg1_w),
        .seg2 (seg2_w),
        .seg3 (seg3_w),
        .seg4 (seg4_w),
        .ans  (ans_w)
    );

    // Pack into virtual_seg_output[39:0] per competition convention.
    // Bit 7,17,27,37 are dp (decimal point) bits driven by KEY in the
    // template; here they are 0 (SEG-only output).
    assign virtual_seg_output[ 6:0]  = seg1_w;
    assign virtual_seg_output[7]     = 1'b0;
    assign virtual_seg_output[16:10] = seg2_w;
    assign virtual_seg_output[17]    = 1'b0;
    assign virtual_seg_output[26:20] = seg3_w;
    assign virtual_seg_output[27]    = 1'b0;
    assign virtual_seg_output[36:30] = seg4_w;
    assign virtual_seg_output[37]    = 1'b0;
    assign virtual_seg_output[9:8]   = ans_w[1:0];
    assign virtual_seg_output[19:18] = ans_w[3:2];
    assign virtual_seg_output[29:28] = ans_w[5:4];
    assign virtual_seg_output[39:38] = ans_w[7:6];

    // ---------------------------------------------------------------
    // DRAM driver
    // ---------------------------------------------------------------
    wire [31:0] dram_rdata;

    dram_driver u_dram (
        .clk         (clk),
        .perip_addr  (perip_addr[17:0]),
        .perip_wdata (perip_wdata),
        .perip_mask  (perip_mask),
        .dram_wen    (perip_wen && sel_dram),
        .perip_rdata (dram_rdata)
    );

    // ---------------------------------------------------------------
    // Millisecond counter
    // ---------------------------------------------------------------
    wire [31:0] cnt_rdata;

    counter u_cnt (
        .clk         (cnt_clk),
        .rst         (rst),
        .perip_wdata (perip_wdata),
        .cnt_wen     (perip_wen && sel_cnt),
        .perip_rdata (cnt_rdata)
    );

    // ---------------------------------------------------------------
    // Read mux (combinatorial, one cycle)
    // ---------------------------------------------------------------
    reg [31:0] mmio_rdata;
    always @(*) begin
        case (1'b1)
            sel_sw0: mmio_rdata = virtual_sw_input[31:0];
            sel_sw1: mmio_rdata = virtual_sw_input[63:32];
            sel_key: mmio_rdata = {24'b0, virtual_key_input};
            sel_seg: mmio_rdata = seg_reg;
            default: mmio_rdata = 32'hDEAD_BEEF;
        endcase
    end

    assign perip_rdata = ({32{sel_dram}} & dram_rdata)
                       | ({32{sel_cnt}}  & cnt_rdata)
                       | ({32{sel_sw0 | sel_sw1 | sel_key | sel_seg}} & mmio_rdata);

endmodule
