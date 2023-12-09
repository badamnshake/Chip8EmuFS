#pragma once


#include <vector>
#include <string>
#include <map>


class cpu
{
public:
	cpu();
	~cpu();

public:
	// cpu core registers for chip 8

	// 16, 8 bit registers
	uint8_t V0 = 0x00;
	uint8_t V1 = 0x00;
	uint8_t V2 = 0x00;
	uint8_t V3 = 0x00;
	uint8_t V4 = 0x00;
	uint8_t V5 = 0x00;
	uint8_t V6 = 0x00;
	uint8_t V7 = 0x00;
	uint8_t V8 = 0x00;
	uint8_t V9 = 0x00;
	uint8_t VA = 0x00;
	uint8_t VB = 0x00;
	uint8_t VC = 0x00;
	uint8_t VD = 0x00;
	uint8_t VE = 0x00;
	// its the carry flag , no borrow flag as well as collision flag it should be ignored
	uint8_t VF = 0x00; // it doubles as a flag for some instructions


	// ------------------------------------------------
	// I is the address register I am using 16 bits
	uint16_t I = 0x0000; 
	uint16_t SP = 0x0000; // stack pointer
	uint16_t PC = 0x0000; // program counter



	// timers -- I am not sure if this implementation is correct for now
	uint8_t delay_timer = 0x00; 
	uint8_t sound_timer = 0x00; 





};