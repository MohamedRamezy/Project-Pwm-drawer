/*
 * GPT_Lconfig.c
 *
 * Created: 3/25/2021 4:46:01 PM
 *  Author: Mohamed_Ramezy
 */ 

#include "GPT.h"
const GPT_ConfigurationType gaStrGPT_Config[NUM_TIMERS_OPERATING] = 
{
	{
		GPT_TIMER_2,
		GPT_CTC_MODE,
		GPT_PRESCALE_8,
		GPT_INTERRUPT_DISABLED
	}
};