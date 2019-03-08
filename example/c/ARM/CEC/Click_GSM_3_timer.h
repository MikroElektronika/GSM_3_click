/*

Use mikroE Timer Calculator to generate proper timer configuration
and timer ISR.

https://www.mikroe.com/timer-calculator

*/
#include "Click_GSM_3_types.h"

#define __GSM_3_TIMER__

static void gsm3_configTimer()
{


    // Configure Timer
}

void Timer_interrupt()
{
    gsm3_tick();
    // Reset Flag
}