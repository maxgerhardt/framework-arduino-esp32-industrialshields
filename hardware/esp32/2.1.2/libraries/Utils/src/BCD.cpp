#include "BCD.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
uint8_t BCD2DEC(uint8_t bcd) {
	return (((bcd >> 4) & 0xf) * 10) + (bcd & 0xf);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
uint8_t DEC2BCD(uint8_t dec) {
	return (((dec / 10) << 4) & 0xf0) + (dec % 10);
}