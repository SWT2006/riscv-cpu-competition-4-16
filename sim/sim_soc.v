// =============================================================================
// sim_soc.v  –  Simulation SoC for COE-based test cases.
//
// Memory map matches the competition hardware (reference/perip_bridge.sv):
//   Instruction ROM: pc[13:2]           → 4096 words = 16 KB
//   DRAM:            perip_addr[17:2]   → 65536 words = 256 KB
//                    active range: 0x8010_0000 – 0x8013_FFFF
//   MMIO reads:      return 0 (unused in simulation)
//   MMIO writes:     ignored (unused in simulation)
//
// Reset: active-high cpu_rst (converted from active-low rst_n).
// =============================================================================
`timescale 1ns/1ps

module sim_soc (
    input  wire        clk,
    input  wire        rst_n       // active-low reset from testbench
);

    // -----------------------------------------------------------------------
    // Reset polarity
    // -----------------------------------------------------------------------
    wire cpu_rst = ~rst_n;

    // -----------------------------------------------------------------------
    // CPU ↔ memory wires
    // -----------------------------------------------------------------------
    wire [31:0] irom_addr;          // full 32-bit PC from cpu_core
    wire [31:0] irom_data;

    wire [31:0] perip_addr;
    wire        perip_wen;
    wire [1:0]  perip_mask;
    wire [31:0] perip_wdata;
    wire [31:0] perip_rdata;

    // -----------------------------------------------------------------------
    // CPU core (5-stage pipeline)
    // Instance must be u_cpu so testbench can probe u_cpu.u_stage_id.regfile
    // -----------------------------------------------------------------------
    cpu_core u_cpu (
        .cpu_clk    (clk),
        .cpu_rst    (cpu_rst),
        .irom_addr  (irom_addr),
        .irom_data  (irom_data),
        .perip_addr (perip_addr),
        .perip_wen  (perip_wen),
        .perip_mask (perip_mask),
        .perip_wdata(perip_wdata),
        .perip_rdata(perip_rdata)
    );

    // -----------------------------------------------------------------------
    // Instruction ROM: 4096 words (16 KB), word-addressed by pc[13:2].
    // Instance must be u_imem, array must be mem[], for testbench probing.
    // -----------------------------------------------------------------------
    reg [31:0] imem [0:4095];
    assign irom_data = imem[irom_addr[13:2]];

    // -----------------------------------------------------------------------
    // Data RAM: 65536 words (256 KB), word-addressed by perip_addr[17:2].
    // Active only for addresses in [DRAM_BASE, DRAM_END).
    // Instance must be u_dmem, array must be mem[], for testbench probing.
    // -----------------------------------------------------------------------
    localparam [31:0] DRAM_BASE = 32'h8010_0000;
    localparam [31:0] DRAM_END  = 32'h8014_0000;

    reg [31:0] dmem [0:65535];

    wire        dram_sel      = (perip_addr >= DRAM_BASE) && (perip_addr < DRAM_END);
    wire [15:0] dram_word_addr = perip_addr[17:2];
    wire [1:0]  dram_offset   = perip_addr[1:0];

    // -----------------------------------------------------------------------
    // Combinatorial read with byte/halfword extraction
    // (sign extension is done by stage_mem; we only need to zero-extend here)
    // -----------------------------------------------------------------------
    wire [31:0] dram_cur = dmem[dram_word_addr];

    reg [31:0] dram_rdata;
    always @(*) begin
        dram_rdata = 32'b0;
        if (dram_sel) begin
            case (perip_mask)
                2'b00: begin  // LB / LBU  — byte selected by offset
                    case (dram_offset)
                        2'b00: dram_rdata = {24'b0, dram_cur[ 7: 0]};
                        2'b01: dram_rdata = {24'b0, dram_cur[15: 8]};
                        2'b10: dram_rdata = {24'b0, dram_cur[23:16]};
                        2'b11: dram_rdata = {24'b0, dram_cur[31:24]};
                    endcase
                end
                2'b01: begin  // LH / LHU  — halfword selected by offset[1]
                    case (dram_offset[1])
                        1'b0: dram_rdata = {16'b0, dram_cur[15: 0]};
                        1'b1: dram_rdata = {16'b0, dram_cur[31:16]};
                    endcase
                end
                default: dram_rdata = dram_cur;  // LW
            endcase
        end
        // else: MMIO or out-of-range — return 0
    end

    assign perip_rdata = dram_rdata;

    // -----------------------------------------------------------------------
    // Write path: read-modify-write for sub-word stores
    // -----------------------------------------------------------------------
    reg [31:0] dram_wdata;
    always @(*) begin
        dram_wdata = perip_wdata;  // default: SW
        case (perip_mask)
            2'b00: begin  // SB
                case (dram_offset)
                    2'b00: dram_wdata = {dram_cur[31: 8], perip_wdata[7:0]};
                    2'b01: dram_wdata = {dram_cur[31:16], perip_wdata[7:0], dram_cur[ 7:0]};
                    2'b10: dram_wdata = {dram_cur[31:24], perip_wdata[7:0], dram_cur[15:0]};
                    2'b11: dram_wdata = {perip_wdata[7:0], dram_cur[23:0]};
                endcase
            end
            2'b01: begin  // SH
                case (dram_offset[1])
                    1'b0: dram_wdata = {dram_cur[31:16], perip_wdata[15:0]};
                    1'b1: dram_wdata = {perip_wdata[15:0], dram_cur[15:0]};
                endcase
            end
            default: dram_wdata = perip_wdata;  // SW
        endcase
    end

    always @(posedge clk) begin
        if (perip_wen && dram_sel)
            dmem[dram_word_addr] <= dram_wdata;
    end

    // -----------------------------------------------------------------------
    // MMIO counter stub: always returns 0 (no real peripheral in simulation)
    // -----------------------------------------------------------------------
    // perip_rdata = 0 for all non-DRAM addresses (handled above by default=0)

endmodule
