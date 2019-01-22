#include <stdio.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#ifdef XTAL
#undef XTAL
#endif
#define XTAL 16000000UL
#define F_CPU XTAL

#include <util/delay.h>

volatile uint16_t freq;

int main(void)
{
    DDRC |= (1 << PC0) | (1 << PC1) | (1 << PC2) | (1 << PC3);
    DDRD |= (1 << PD5) | (1 << PD6);
    DDRD &= ~(1 << PD3);

    PORTC |= (1 << PC0);
    PORTD |= (1 << PD3);
}