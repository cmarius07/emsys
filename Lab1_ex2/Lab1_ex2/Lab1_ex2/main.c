/*
 * Lab1_ex2.c
 *
 * Created: 15-May-21 8:12:46 PM
 * Author : gamer
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000UL

int main(void)
{
	DDRD = 0xFF;
	PORTD = 0b00000011;
	
    while (1) 
    {
	_delay_ms(5000);
	PORTD = (PORTD << 1);
	_delay_ms(5000);
	if (PORTD == 0b10000000)
	{
		_delay_ms(5000);
		PORTD = 0b00000001;
		_delay_ms(5000);
		PORTD = 0b00000011;
	}
}
}

