#define F_CPU 16000000UL  //this tells out Arduino what speeds it should be running at
#include <avr/io.h> //to get register names and pin positions
#include <util/delay.h> //library to get the delay function

int main(void) {

    DDRB |= (1 << PB0);

    //implementing a forever loop
    while (true) {
        
        PORTB |= (1 << PB0);// we just turn the bit to 1 to turn the led on
        _delay_ms(1000);//delay for 1 second

        PORTB &= ~(1 << PB0); // turns the bit to 0 turning the led off
        _delay_ms(1000);//delay for 1 second
    }

    return 0;
}