#include "stdint.h"

uint16_t reg_af();
uint16_t reg_bc();
uint16_t reg_de();
uint16_t reg_hl();

/* REGISTERS
- There are eight 8-bit registers: A, B, C, D, E, F, H, L
- Registers can be combined to form AF, BC, DE, HL. These are 16-bit.
- There are two 16-bit registers: SP, PC
*/
struct registers 
{
	uint8_t a, b, c, d, e, h, l;

	// This is the flags register. It's layout looks like this:
	// 7 6 5 4 3 2 1 0
	// Z N H C 0 0 0 0
	uint8_t f;

	uint16_t af, bc, de, hl;

	uint16_t pc, sp;
} reg;

/* FLAGS
...
*/