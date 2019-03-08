#include "Click_GSM_3_types.h"

const uint32_t _GSM3_TIMER_LIMIT      = 5;	    // 5 ticks
const uint16_t _GSM3_BUF_WARNING      = 192;	// 192 bytes activate warning
const uint8_t  _GSM3_POLL_ENABLE      = 1; 	// poll enabled
const uint8_t  _GSM3_CALLBACK_ENABLE  = 0;	    // calback disabled

const uint32_t _GSM3_UART_CFG[ 4 ] = 
{
	9600, 
	_UART_8_BIT_DATA, 
    _UART_NOPARITY, 
    _UART_ONE_STOPBIT
};