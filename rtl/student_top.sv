`timescale 1ns/1ps
// student_top: board-level integration.
// Instantiates the 5-stage pipelined CPU, Vivado IROM IP, and perip_bridge.
//
// Interface matches top(4).sv exactly:
//   - single clock w_clk_50Mhz (50 MHz)
//   - active-high reset w_clk_rst (= ~pll_locked)
//   - virtual_sw/key/led/seg for the twin-controller virtual I/O
//
// IROM IP assumed: IROM(.a(addr[13:0]), .spo(data[31:0]))
//   spo is the asynchronous (combinatorial) output.
module student_top #(
    parameter P_SW_CNT  = 64,
    parameter P_LED_CNT = 32,
    parameter P_SEG_CNT = 40,
    parameter P_KEY_CNT = 8
) (
    input  wire                   w_clk_50Mhz,
    input  wire                   w_clk_rst,       // active-high
    input  wire [P_KEY_CNT-1:0]   virtual_key,
    input  wire [P_SW_CNT-1:0]    virtual_sw,
    output wire [P_LED_CNT-1:0]   virtual_led,
    output wire [P_SEG_CNT-1:0]   virtual_seg
);

    // -------------------------------------------------------------------
    // CPU ↔ IROM
    // -------------------------------------------------------------------
    wire [13:0] irom_word_addr;
    wire [31:0] irom_data;

    IROM Mem_IROM (
        .a   (irom_word_addr),
        .spo (irom_data)
    );

    // -------------------------------------------------------------------
    // CPU ↔ perip_bridge
    // -------------------------------------------------------------------
    wire [31:0] perip_addr, perip_wdata, perip_rdata;
    wire        perip_wen;
    wire [1:0]  perip_mask;

    // -------------------------------------------------------------------
    // CPU core
    // -------------------------------------------------------------------
    cpu_core u_cpu (
        .cpu_clk    (w_clk_50Mhz),
        .cpu_rst    (w_clk_rst),
        .irom_addr  (irom_word_addr),
        .irom_data  (irom_data),
        .perip_addr (perip_addr),
        .perip_wen  (perip_wen),
        .perip_mask (perip_mask),
        .perip_wdata(perip_wdata),
        .perip_rdata(perip_rdata)
    );

    // -------------------------------------------------------------------
    // Peripheral bridge (DRAM + MMIO)
    // Both the CPU clock and the counter clock are 50 MHz here.
    // -------------------------------------------------------------------
    perip_bridge u_bridge (
        .clk               (w_clk_50Mhz),
        .cnt_clk           (w_clk_50Mhz),
        .rst               (w_clk_rst),
        .perip_addr        (perip_addr),
        .perip_wdata       (perip_wdata),
        .perip_wen         (perip_wen),
        .perip_mask        (perip_mask),
        .perip_rdata       (perip_rdata),
        .virtual_sw_input  (virtual_sw),
        .virtual_key_input (virtual_key),
        .virtual_seg_output(virtual_seg),
        .virtual_led_output(virtual_led)
    );

endmodule
