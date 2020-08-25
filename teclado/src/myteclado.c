#include "chip.h"
#include "main.h"

char my_tecladox_drive(void)
{
	char i= 0xFF;
	Chip_GPIO_SetPinOutLow(LPC_GPIO, c0);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c1);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c2);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c3);
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r5))
	{
		i=tec_d;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r6))
	{
		i=tec_c;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r7))
	{
		i=tec_b;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r8))
	{
		i=tec_a;
	}

	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c0);
	Chip_GPIO_SetPinOutLow(LPC_GPIO, c1);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c2);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c3);

	if(!Chip_GPIO_GetPinState(LPC_GPIO, r5))
			i=tec_ast;

	if(!Chip_GPIO_GetPinState(LPC_GPIO, r6))
	{
		i=9;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r7))
	{
		i=6;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r8))
	{
		i=3;
	}

	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c0);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c1);
	Chip_GPIO_SetPinOutLow(LPC_GPIO, c2);
	Chip_GPIO_SetPinOutHigh(LPC_GPIO, c3);

	if(!Chip_GPIO_GetPinState(LPC_GPIO, r5))
		{
			i=0;
		}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r6))
	{
		i=8;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r7))
	{
		i=5;
	}
	if(!Chip_GPIO_GetPinState(LPC_GPIO, r8))
	{
		i=2;
	}

		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c0);
		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c1);
		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c2);
		Chip_GPIO_SetPinOutLow(LPC_GPIO, c3);

		if(!Chip_GPIO_GetPinState(LPC_GPIO, r5))
			{
				i=tec_nvm;
			}
		if(!Chip_GPIO_GetPinState(LPC_GPIO, r6))
		{
			i=7;
		}
		if(!Chip_GPIO_GetPinState(LPC_GPIO, r7))
		{
			i=4;
		}
		if(!Chip_GPIO_GetPinState(LPC_GPIO, r8))
		{
			i=1;
		}

		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c0);
		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c1);
		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c2);
		Chip_GPIO_SetPinOutHigh(LPC_GPIO, c3);
		return i;
}


