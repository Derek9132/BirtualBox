// Notes

/* Example LC-3 Program */
// .ORIG x3000          memory address of the program
// .LEA R0, STRING  // Load effective address of STRING into R0

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
// 16-bit registers
typedef enum { 
    REG_A,
    REG_B,
    REG_C,
    REG_D,
    REG_E,
    REG_F,
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

/* Procedure */
// 1) Load an instruction from memory at the PC register's address
// 2) Increment the PC register
// 3) Determine the instruction to execute based on the opcode
// 4) Perform the instruction using parameters from the instruction
// 5) Back to step 1

int main(int argc, const char* argv[]) { // main loop

    signal(SIGINT, handle_interrupt);
    disable_input_buffering();

    enum start {
        start = 0x3000 // default starting address for the program
    };

    return 0;
}