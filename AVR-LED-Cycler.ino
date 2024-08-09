#include <avr/io.h>        // Include AVR IO library for input/output functions
#include <util/delay.h>    // Include delay library for creating time delays

#ifdef F_CPU
#define F_CPU 16000000UL   // Define CPU frequency as 16 MHz
#endif

int main(void) {
    
    int i = 0;              // Initialize variable i to 0
    
    DDRB = 0x00;            // Set all pins on port B as input
    DDRC = 0x00;            // Set all pins on port C as input
    DDRD = 0xFF;            // Set all pins on port D as output

    PORTB = 0x00;           // Set all pins on port B to low
    PORTC = 0x00;           // Set all pins on port C to low
    PORTD = 0x00;           // Set all pins on port D to low

    while (1) {             // Infinite loop
        
        for (i = 0; i < 256; i++) {  // Loop from 0 to 255
            PORTD = i;      // Output the value of i to port D
            _delay_ms(100); // Wait for 100 milliseconds
        }
    }
}