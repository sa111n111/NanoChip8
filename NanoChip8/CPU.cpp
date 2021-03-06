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

void CPU::__1NNN()
{
	uint16_t address = opcode & 0x0FFFu;
	program_counter = address;			
}

void CPU::__2nnn()
{
	uint16_t address = opcode & 0x0FFFu;
	stack[stack_ptr] = program_counter;
	++stack_ptr;
	program_counter = address;
}

void CPU::hardReset()
{
	//clear cpu memory
	for (int i = 0; i < std::size(this->cpuMemory); i++) {
		this->cpuMemory[i] = 0;
	}

	// clear stack memory
	for (int i = 0; i < std::size(this->stack); i++) {
		this->stack[i] = 0;
	}
}

