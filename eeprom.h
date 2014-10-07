#ifndef EEPROM_H_
#define EEPROM_H_

#include "Arduino.h"

class EEPROMCLASS {
public:
	uint8_t read(uint32_t address);
	void write(uint32_t address, uint8_t valu);
	EEPROMCLASS();
};

extern EEPROMCLASS EEPROM;

#endif