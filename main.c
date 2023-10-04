/*
 * File:   main.c
 * Author: User
 *
 * Created on 11 September 2023, 20:03
 */


#include <xc.h>
#include "configurationBits.h"
#include "constants.h"
#include "configOsc.h"
#include "configPorts.h"
#include "configTMR0.h"
#include "configPWM.h"
#include "debounce_switch.h"
void main(void) 
{
    configOsc();
    configPorts();
    configTMR0();
    configPWM();
    debounce_switch();
    
 while(1)
 {
     
 }
    return;
}
