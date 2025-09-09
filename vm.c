// Notes

/* Example LC-3 Program */
// .ORIG x3000          memory address of the program
// .LEA R0, STRING  // Load effective address of STRING into R0
// 

#include <stdio.h>
#include <stdint.h>
#include <signal.h>
#include <Windows.h>
#include <conio.h>  



typedef enum { // Opcodes
    OP_BR = 0, // Branch
    OP_ADD,    // Add
    OP_LD,     // Load
    OP_ST,     // Store
    OP_JSR,    // Jump to Subroutine
    OP_AND,    // bitwise AND
    OP_LDR,    // Load Register
    OP_STR,    // Store Register
    OP_NOT,    // bitwise NOT
    OP_LDI,    // Load Indirect
    OP_STI,    // Store Indirect
    OP_JMP,    // Jump
    OP_RES,    // Reserved
    OP_LEA,    // Load Effective Address
    OP_TRAP    // Trap
} Opcodes;

// RAM / Registers
// Holds a single piece of data to be used by the CPU
// 16-bit registers (10 count)
typedef enum { 
    REG_A,
    REG_B,
    REG_C,
    REG_D,
    REG_E,
    REG_F,
    REG_G,
    REG_H,
    REG_PC, // Program Counter
    REG_COND,// Condition register
} Registers;

typedef enum {
    COND_POS = 1 << 0,
    COND_ZERO = 1 << 1,
    COND_NEG = 1 << 2,
} Condition;


#define memory_size (1 << 16) // size of memory (128 KB)
uint16_t memory[memory_size]; // memory array

uint16_t registers[8]; // Array for storing registers


// Methods
void handle_interrupt(int signal)
{
    restore_input_buffering();
    printf("\n");
    exit(-2);
}

void memory_write(uint16_t address, uint16_t value) {
    memory[address] = value; // Writes a value to an address in memory
}

uint16_t memory_read(uint16_t address) {
    return memory[address]; // Reads a value from an address in memory

}

/* Procedure */
// 1) Load an instruction from memory at the PC register's address
// 2) Increment the PC register
// 3) Determine the instruction to execute based on the opcode
// 4) Perform the instruction using parameters from the instruction
// 5) Back to step 1

int main(int argc, const char* argv[]) { // main loop

    // Load arguments
    if (argc < 2) {
        exit(2);
    }

    for (int i = 1; i < argc; i++) {
        
    }

    signal(SIGINT, handle_interrupt);
    disable_input_buffering();

    registers[REG_COND] = COND_ZERO; // Initialize condition register to zero
    registers[REG_PC] = 0x3000; // 0x3000 is the default starting address

    int running = 1;
    while (running) {
        uint16_t instruction = memory_read(registers[REG_PC]++); // Fetch instruction and increment PC
        uint16_t opcode = instruction >> 12; // Get the opcode

        switch(opcode) {

            case OP_ADD: {

            }
            case OP_LD: {

            }
            case OP_ST: {

            }
            case OP_JSR: {

            }
            case OP_AND: {

            }
            case OP_NOT: {

            }
            case OP_STR: {

            }
            case OP_LDR: {

            }
            case OP_LDI: {

            }
            case OP_STI: {

            }
            case OP_JMP: {
                
            }
            case OP_RES: {

            }
            case OP_LEA: {

            }
            case OP_TRAP: {

            }
        }
    }


    return 0;
}

// RIP Haru Urara