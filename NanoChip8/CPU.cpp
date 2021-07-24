#include "CPU.h"

void CPU::__00E0()
{
	memset(displayMemory, 0, sizeof(displayMemory)); // simply zero out the entire buffer.
}

void CPU::__00EE()
{
	--stack_ptr;
	program_counter = stack[stack_ptr];
}

void CPU::__2nnn()	/* todo */
{
	

}


