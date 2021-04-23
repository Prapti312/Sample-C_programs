#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
DDRB|=(1<<PB0);//SET PB0 AS OUTPUT PIN FOR LED
DDRD&=~(1<<PD0);//PUSH BUTTON FOR PASENGER CHECK
DDRD&=~(1<<PD4);//PUSH BUTTON FOR HEATER CHECK

PORTD|=(1<<PD0);//SET 5 VOLT WHEN SWITCH IS OFF
PORTD|=(1<<PD4);//SET 5 VOLT WHEN SWITCH IS OFF

    while(1)
    {
        if(!(PIND & (1<<PD0))  &&  !(PIND & (1<<PD4)))
        {
            PORTB|=(1<<PB0);
            _delay_ms(2000);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }
    }

    return 0;
}
