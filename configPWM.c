#include "constants.h"
void configPWM(void)
{
    INTCONbits.GIE = HI;          // Enables all active interrupts
    TRISCbits.TRISC5 = HI;  //disable pin 5 as an output pin (PWM1)
   // TRISCbits.TRISC6 = HI;  //disable pin 8 as an output pin (PWM2))
    PWM1CON = 0;    // clear PWM1CON register
    PWM1CONbits.PWM1EN = HI;    // enable the PWM1 module
    PWM1CONbits.PWM1OE = HI;    // enable the output of PWM1 module
    TMR2 = 0;  // Load the PR2 register with the PWM period value
   // PR2 = 1023;
    PR2 = 255;
    PWM1DCH = 2; // Clear the PWMxDCH register and bits <7:6> of
    PWM1DCL = 1<<6; // the PWMxDCL register - can take value 1<<6 (64), 2<<6 (128), 3<<6 (192))
    T2CONbits.TMR2ON = HI; //Configure and start Timer2:
    PIR1bits.TMR2IF = LO; //Clear the TMR2IF interrupt flag bit of the
                          // PIR1 register
    PIE1bits.TMR2IE = HI;
    T2CONbits.T2CKPS1 = HI;  //Configure the T2CKPS bits of the T2CON
    T2CONbits.T2CKPS0 = HI; // register with the Timer2 prescale value 1:64
    TRISCbits.TRISC5 = LO;  //enable pin 5 as an output pin (PWM1)
    //TRISCbits.TRISC6 = LO;  //enable pin 8 as an output pin (PWM1)
}
