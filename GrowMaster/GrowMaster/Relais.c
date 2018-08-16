/*
 * Relais.c
 * This controls the 4x Relay card attached to the AVR. 
 * https://www.amazon.de/AZDelivery-4-Relais-Optokoppler-Low-Level-Trigger-Arduino/dp/B078Q8S9S9/ref=sr_1_1?ie=UTF8&qid=1534451814&sr=8-1&keywords=arduino+optokoppler
 * NOTE: this is a low level trigger board. In order to sink the pins, the pinAx represent pins, that are connected to the base pin of a NPN transistor ( not done yet ), that sinks the pin to GND, an the relay switches.
 * Created: 16.08.2018 22:34:12
 *  Author: Janik
 *
 *
 *
 *
 *	TODO: implement setDDR that sets the ports to outputs (DDR = Data direction register)
*			implement getRelayState that reads the PORTx Register and sets Ax to a corresponding value.
			implement switchRelay
 */ 
#include"Relais.h"

#define pinA0 PORTD0;
#define pinA1 PORTD0;
#define pinA2 PORTD0;
#define pinA3 PORTD0;

int A0,A1,A2,A3;

void setDDR()
{
	//DDRx = DDRx || 1 < x
	//....
	
}


void getRelayState()
{
	//A0=PORTx << x  ...
}


void switchRelay(int id, int state)
{
	if (state==0)
	{
		//PORTx=PORTx || 1<<x
	}
	else
	{
		//PORTx=PORTx && ~(1<<x)
	}
}
