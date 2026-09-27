
/*
 * toggle.c
 *
 *  Created on: Aug 6, 2026
 *      Author: DELL
 */

#include "toggle.h"
void driver(void)
{
	CLOCK_DRV_Init(&clockMan1_InitConfig0);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0,g_pin_mux_InitConfigArr0);
	PINS_DRV_WritePin(PTD, 16, 1);
}
void delay(void)
{
	volatile int i;
	for(i=0;i<7200000;i++)
	{

	}
}
void led(void)

{
	for(int i = 0; i < 20; i++)
	    {
	        PINS_DRV_TogglePins(PTD, 1 << 16);
	        delay();
	    }

	    PINS_DRV_WritePin(PTD, 16, 1);

	    while(1)
	    {

	    }



}
