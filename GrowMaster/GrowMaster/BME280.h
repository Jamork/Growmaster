/*
 * BME280.h
 *	This controls the Bosch BME280 Sensor unit. It measures humidity pressure and temperature.
 *	Datasheet: https://ae-bst.resource.bosch.com/media/_tech/media/datasheets/BST-BME280_DS001-12.pdf
 * Created: 16.08.2018 21:02:51
 *  Author: Janik
 */ 
#include <avr/io.h>
#include "i2c_master/i2cmaster.h"

#ifndef INCFILE2_H_
#define INCFILE2_H_

extern int status;

typedef struct BME280_DATA
{
	float humidity;
	float pressure;
	float temperature;
	
}BME280_DATA;

extern int initCommunication();
extern BME280_DATA* getData ();






#endif /* INCFILE2_H_ */