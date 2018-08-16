/*
 * BME280.c
 *
 * Created: 16.08.2018 21:12:33
 *  Author: Janik
 
 * Changed: 16.08.2018 22:31
 *	Author: Janik
 *	implemented a part of the registers and a basic communication-testing routine initCommunication()
 *
 * TODO:-complete register list
		-implement data acquisition and data processing
		
 */ 
#include "BME280.h"

#define address_write 0b11101110 //7th bit is changeable through SDO value (page 31 in manual) in this case it is tied to logic HIGH
#define address_read  0b11101111
#define REG_ID 0xD0; //should be 0x60
#define REG_RESET 0xE0; // write only 0xB6
#define REG_CTRL_HUM 0xF2; // sets the humidity data acquisition options of the device, only effctive after a write operation to ctrl_meas  -----------------> Page 26  <---------------- Bits 2,1,0
#define REG_STATUS 0xF3;  // Bit 3 is set to 1 if a conversion is running, and back to 0 when the results have been transferred to registers || Bit 0 is set to 1 when NVM data is being copied to image registers and back to 0 when done. happens before every conversion.
#define REG_CTRL_MEAS 0xF4; // only after ctrl_hum  Bit 7,6,5 -> OVERSAMPLING OF TEMP  Bits 4,3,2 -> OVERSAMPLING OF PRESSURE Bits 1,0 -> SENSOR MODE OF DEVICE
//....

int status=1;





/****************************
Initiates Communication with the BME280
returns 0 if device is accessible, 1 if not
*****************************/
int initCommunication()
{
	i2c_init();
	 status = i2c_start(address_write);
	if (status ==1)
	{
		i2c_stop();
		return 1;
	}
	i2c_write(0xD0); 
	i2c_rep_start(address_read);
	int id=i2c_read(0);
	if (id=!0xD0) 
	{
		return 1;
	}
	
	return 0;
}
BME280_DATA* getData ()
{
	
	return 0;
}

