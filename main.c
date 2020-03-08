#include <msp430.h>

#define Przycisk      BIT3                        // Przyciskitch -> P1.3
#define LedRed     BIT0                        // LedRed LED -> P1.0
#define LedGreen      BIT6                        // LedGreen LED -> P1.6

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;           // Stop watchdog timer

    P1DIR |= LedRed+LedGreen;                 // Set LED pins -> Output
    P1DIR &= ~Przycisk;                       // Set Przycisk pin -> Input
    P1REN |= Przycisk;                        // Enable Resistor for Przycisk pin
    P1OUT |= Przycisk;                        // Select Pull Up for Przycisk pin


    int przyciskPressed = 0;
    int ktoraSekwencja = 0;
    if(!(P1IN & Przycisk)){

        przyciskPressed++;
        __delay_cycles(20000);

    }
    else{
        przyciskPressed=0;
    }

    if(przyciskPressed == 1){
        ktoraSekwencja++;

    }




}
