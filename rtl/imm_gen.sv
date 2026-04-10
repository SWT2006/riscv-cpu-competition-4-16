`timescale 1ns/1ps
// Immediate generator: sign-extends instruction-encoded immediates to 32 bits.
module imm_gen (
    input  wire [31:0] instruction,
    output reg  [31:0] imm
);
    wire [6:0] opcode = instruction[6:0];

    always @(*) begin
        case (opcode)
            7'b0010011,  // I-type ALU
            7'b0000011,  // LOAD
            7'b1100111:  // JALR
                imm = {{20{instruction[31]}}, instruction[31:20]};

            7'b0100011:  // S-type STORE
                imm = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};

            7'b1100011:  // B-type BRANCH
                imm = {{19{instruction[31]}}, instruction[31], instruction[7],
                        instruction[30:25], instruction[11:8], 1'b0};

            7'b0110111,  // LUI
            7'b0010111:  // AUIPC
                imm = {instruction[31:12], 12'b0};

            7'b1101111:  // J-type JAL
                imm = {{11{instruction[31]}}, instruction[31], instruction[19:12],
                        instruction[20], instruction[30:21], 1'b0};

            7'b0001111:  // FENCE / FENCE.I — return 4 so JAL-trick lands at PC+4
                imm = 32'd4;

            7'b1110011:  // SYSTEM (CSR instructions)
                imm = {{20{instruction[31]}}, instruction[31:20]};

            default:
                imm = 32'b0;
        endcase
    end

endmodule
