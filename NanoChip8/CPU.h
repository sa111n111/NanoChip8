//author: Sutinder S. Saini
#include <iostream>
#include <vector>

/****************************/
//Chip8 Spec impl (attempt)
/****************************/
class CPU {
public:
	uint8_t program_counter;
	uint8_t curr_op;
	uint8_t cpuMemory[4096];
	uint8_t stack[0x10];
	unsigned short stack_ptr;

	void clear();

};