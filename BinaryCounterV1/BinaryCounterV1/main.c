/*
 * BinaryCounterV1.c
 *
 * Created: 23-Apr-21 8:37:51 PM
 * Author : gamer
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

#
/*PD0 PD1 PD2 PD3 PD4 PD5 PD6 PD7		PB0	PB1
   |   |   |   |   |   |   |   |		 |	 |
   L0  L1  L2  L3  L4  L5  L6  L7		K0	 K1
*/
   
int main(void)
{
	char b=0, c=0;
	char d=0, e=0;
	unsigned int counter = 0;
	DDRB = 0x00;	// set as input for switches: K0 -> count up & K1 -> count down
	PORTB = 0xFF;	//init with max val
	
	DDRD = 0xFF;	//set as output for leds
	PORTD = 0x05;	//init all leds are off
	
	
    while (1) 
    {
		c=b; //used to eliminate debounce when button is pressed
		if(!(PINB & 0x01)){
			//PORTD ^= 0xF8;
			//_delay_ms(500);
			b=1;
		}
		else
			b=0;
			
		if ((c==1) & (b==0)){
			counter++;
			PORTD = counter;
		}

		e=d;
		if(!(PINB & 0x02)){
			d=1;
		}
		else
			d=0;
			
		if ((e==1) & (d==0)){
			counter--;
			PORTD = counter;
		}
		
			


    }
}

