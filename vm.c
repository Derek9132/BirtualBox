// C refreshers

/* Operators */
// << - left shift
// >> - right shift

/* VM-related notes */
// Instruction set - PUSH, POP, ADD, SUB, MUL, DIV, AND, OR, XOR, NOT
// 


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum { // Instruction set
    INSTRUCTION_PUSH,
    INSTRUCTION_POP,
    INSTRUCTION_ADD,
    INSTRUCTION_SUB,
    INSTRUCTION_MUL,
    INSTRUCTION_DIV,
    INSTRUCTION_AND,
    INSTRUCTION_OR,
    INSTRUCTION_XOR,
    INSTRUCTION_NOT,
    INSTRUCTION_HALT,
} Inst_set;

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
} Registers;



#define memory_size (1 << 16) // size of memory (128 KB)
uint16_t memory[memory_size]; // memory array



void load() { // load data from disk into memory
    printf("Loading data...\n");
}


int main() { // main loop
    return 0;
}