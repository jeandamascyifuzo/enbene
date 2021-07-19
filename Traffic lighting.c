/*
 * File:   Traffic lighting.c
 * Author: Teacher
 *
 * Created on July 19, 2021, 3:16 PM
 */
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ 8000000      //8Mhz osillator value

#include <xc.h>

void main(void) {
    TRISB = 0b00000000;        //making port B output
    
    while(1)
    {
    
        PORTBbits.RB0 = 1;  PORTBbits.RB1 = 0; PORTBbits.RB2 = 0;   //blinking first led on
        __delay_ms (1000); 
        
        PORTBbits.RB0 = 0;  PORTBbits.RB1 = 0; PORTBbits.RB2 = 1;
        __delay_ms (1000); 
        
        PORTBbits.RB0 = 0;  PORTBbits.RB1 = 1; PORTBbits.RB2 = 0;
       __delay_ms (2000); 
        
    }
    
}
