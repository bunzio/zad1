#include <msp430.h>

#define Przycisk      BIT3                        // Przyciskitch -> P1.3
#define LedRed        BIT0                        // LedRed LED -> P1.0
#define LedGreen      BIT6                        // LedGreen LED -> P1.6

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;           // Stop watchdog timer

    P1DIR |= LedRed+LedGreen;                 // Set LED pins -> Output
    P1DIR &= ~Przycisk;                       // Set Przycisk pin -> Input
    P1REN |= Przycisk;                        // Enable Resistor for Przycisk pin
    P1OUT |= Przycisk;                        // Select Pull Up for Przycisk pin
    int przyciskPressed = 0;
    int ktoraSekwencja = 0;


    if(!(P1IN & Przycisk)){                     // jeœli przycisk zostanie wcisniety

        przyciskPressed++;                     // dodaj jeden do zmiennej
        __delay_cycles(20000);                 //czekaj 20ms

    }
    else{                                      //jeœli poprzedni if nie jest spe³niony
        przyciskPressed=0;                     //ustaw wartoœæ zmiennej na 0
    }

    if(przyciskPressed == 1){                   //jesli zosta³o wykryte zbocze narastaj¹ce dodaje jeden do zmiennej
        ktoraSekwencja++;

    }

    if(ktoraSekwencja == 1){

    }

    if(ktoraSekwencja == 2){

        }

    if(ktoraSekwencja == 3){

        }

    if(ktoraSekwencja == 4){

        }

    if(ktoraSekwencja == 5){
        ktoraSekwencja = 0;

        }






}


