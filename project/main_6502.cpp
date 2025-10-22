#include <stdio.h>
#include <stdlib.h>



struct CPU
{
	using Byte = unsigned char;
	using Word = unsigned short;

	Word PC; // program counter
	Word SP; // stack pointer

	Byte A, X, Y; //registers

	// all below are status flags
	Byte C : 1; // carry flag is set if the last operation caused overflow (from bit 7) or underflow (from bit 0), happens during arithmetic, comparison and logical shifts
	Byte Z : 1; // zero flag is set to 1 if the result of last operation was 0
	Byte I : 1; // interrupt disable (while this flag is set the processor will not respond from devices until it is cleared with  Clear Interrupt Disable (CLI) instruction)
	Byte D : 1; // decimal flag (while this flag is set the processor will use Binary Coded Decimal (BCD) arithmetic for addition and subtraction)
	Byte B : 1; // break flag
	Byte V : 1; // overflow flag is set during arithmetic operations if the result has yeilded an invalid 2's complement result (adding positive numbers resulted with negative number 64+64 = -128)
	Byte N : 1; // negative flag is set if the result of the last operation had bit 7 set to 1 
};


int main()
{
	CPU cpu;
	return 0;
}