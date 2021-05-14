/*
 * ledTest2.c
 *
 * Created: 23-Apr-21 8:25:29 PM
 * Author : gamer
 */ 

#include <avr/io.h>


int main(void)
{
	//Set DDRD to output to power leds: L0 and L1
	//	PD0 -> L0
	//	PD1 -> L1
	DDRD=0xFF;
	PORTD = 0x00;
    while (1) 
    {
		PORTD=0xFF;
		
    }
}

