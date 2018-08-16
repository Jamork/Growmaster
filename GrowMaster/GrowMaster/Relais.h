/*
 * Relais.h
 *
 * Created: 16.08.2018 21:05:11
 *  Author: Janik
 */ 


#ifndef RELAIS_H_
#define RELAIS_H_

extern int A0,A1,A2,A3;
extern void switchRelay(int id,int state); // state 0 means the relay is closed, state 1 means the state is open. ID references to the relay to be opened / closed
extern void getRelayState();



#endif /* RELAIS_H_ */