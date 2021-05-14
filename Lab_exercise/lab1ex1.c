DDRD = 0xFF;
PORTD = 0b00000011;

while (1)
{
    _delay_ms(500);
    PORTD = (PORTD << 1);
    _delay_ms(500);
    if (PORTD == 0b10000000)
    {
        _delay_ms(500);
        PORTD = 0b00000001;
        _delay_ms(500);
        PORTD = 0b00000011;
    }


    //the leds are open sequential
    for (u = 0; u < 5; u++)
    {
        PORTD = PORTD << 2;
        _delay_ms(500);
        if (PORTD >= 0x40)
        {
            PORTD = 0x01;
            _delay_ms(500);
        }
    };

    /* LAB1 EX 1 */
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
            _delay_ms(500);
            PORTD ^= 0b10101010;
        }
    }