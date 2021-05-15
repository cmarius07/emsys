/*
 * Lab1_ex1.c
 * Description: blink even/odd leds
 *
 * Created: 15-May-21 4:38:29 PM
 * Author : gamer
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000UL

/*
even:       odd:
0000 0001   0000 0010
0000 0100   0000 1000
0001 0000   0010 0000
0100 0000   1000 0000
*/

int main()
{
	DDRD = 0xFF;
	PORTD = 0x00;

	while (1)
	{
		PORTD ^= 0b01010101;
		_delay_ms(5000);
		PORTD ^= 0b10101010;
	}
}

