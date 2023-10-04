#include "constants.h"
//void __interrupt_isr(void)
//__interrupt() void MY_ISR(void)
__interrupt() void philippo(void)
{
   /* if(INTCONbits.TMR0IF == HI && INTCONbits.TMR0IE == HI)
    {
        
        
    }
    TMR0 = 0;
    INTCONbits.TMR0IF = LO;*/
    
    if(PIR1bits.TMR2IF == HI)
    {
        LATCbits.LATC7 = ~LATCbits.LATC7;
         TMR2 = 0;
        
    }
   
    PIR1bits.TMR2IF = LO;
}
