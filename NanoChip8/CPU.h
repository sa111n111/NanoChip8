//author: Sutinder S. Saini
#include <iostream>
#include <vector>

/****************************/
// Chip8 Spec impl (attempt)
//
// http://devernay.free.fr/hacks/chip8/C8TECH10.HTM#00EE
/****************************/
class CPU {
public:
	uint8_t cpuMemory[4096];  /* alloc 4kb of cpu memory */
	uint8_t registers[16];
	uint8_t stack_ptr;	 	  /* The stack pointer. Can be 8 bit. */
	uint16_t stack[16];		  /* the stack itself */
	uint16_t program_counter; /* The program counter, should be 16-bit.*/
	uint16_t displayMemory[64 * 64];	/* The displa buffer. We are going 64 x 64 (ETI 660) rather than the standard (which is 64 x 32) */

	CPU() {
		this->program_counter = 0x200;  // According to sources (which may have been the standard documentation), 
										// This is normally the starting address for most chip8 programs.
	}

	// CLS.
	//	
	// 	Clear the display.
	//	
	// 	All this does is essentially zeroes out the buffer via memset.
	//
	void __00E0();
	
	//
	// RET.
	//
	//	Return from subroutine.
	//
	//	This sets the program counter to the address at the top of the stack, then subtracts
	//	one from the stack pointer.
	void __00EE();

	//
	// todo: lnn
	

	// CALL.
	//
	//	Call a subroutine at nnn.
	//
	//	This increments the stack pointer, then puts the program counter on top of the stack.
	//	the program counter is then set to nnn	
	//
	// !! todo
	void __2nnn();
};