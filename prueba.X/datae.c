/*
 * File:   datae.c
 * Author: the_pc_heri24
 *
 * Created on February 23, 2025, 7:22 PM
 */


#include <avr/io.h>
#include <util/delay.h>

#define LED PB0  // Definimos el pin del LED (en ATmega328P, PB5 suele ser el LED integrado)

int main(void) {
    // Configuramos el pin LED como salida
    DDRB |= (1 << LED);
    
    while (1) {
        // Encender el LED
        PORTB |= (1 << LED);
        _delay_ms(1000);  // Retardo de 500 ms
        
        // Apagar el LED
        PORTB &= ~(1 << LED);
        _delay_ms(1000);  // Retardo de 500 ms
    }
    
    return 0;
}
