/*

Use mikroE Timer Calculator to generate proper timer configuration
and timer ISR.

https://www.mikroe.com/timer-calculator

*/
#include "Click_GSM_3_types.h"

#define __GSM_3_TIMER__

static void gsm3_configTimer()
{
    RCC_APB1ENR.TIM2EN = 1;
    TIM2_CR1.CEN = 0;
    TIM2_PSC = 1;
    TIM2_ARR = 35999;
    NVIC_IntEnable(IVT_INT_TIM2);
    TIM2_DIER.UIE = 1;
    TIM2_CR1.CEN = 1;
    EnableInterrupts();
}

void Timer_interrupt() iv IVT_INT_TIM2
{
    gsm3_tick();
    TIM2_SR.UIF = 0;
}
