/*
 * File:   LED_BLINK_APP_GITHUB.c
 * Author: yavuz
 *
 * Created on January 30, 2023, 4:24 PM
 */

#pragma config FOSC = XT     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)
#include <xc.h>

#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISB = 0x00;
    TRISA = 0x03;
    
    PORTA = 0;
    PORTB = 0;
    
    while(1){
        if(PORTA == 0x01){
            PORTB = 0x0F;
        }
        else if(PORTA == 0x02){
            PORTB = 0xF0;
        }
        else if(PORTA == 0x03){
            PORTB = 0xFF;
        }
        else if(PORTA == 0x00){
            PORTB = 0x00;
        }
    }
    return;
}
