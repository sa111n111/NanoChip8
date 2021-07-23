#include "CPU.h"

void CPU::clear()
{
	memset(this->stack, 0, sizeof(this->stack)); //zero out stack memory
	this->program_counter = 0x200;
	this->curr_op = 0x200;
	this->stack_ptr &= 0; // clear stackpointer bits
}
