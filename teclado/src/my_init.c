/*
 * my_init.c
 *
 *  Created on: 19 sep. 2017
 *      Author: Alumno
 */

#include "chip.h"
#include "main.h"


void sticklpc1769(void)
{
	//Configura la funcion Del pin
		Chip_IOCON_PinMux(LPC_IOCON, LED_R, MD_PLN, ENTRADA);
		Chip_IOCON_PinMux(LPC_IOCON, LED_A, MD_PLN, ENTRADA);
		Chip_IOCON_PinMux(LPC_IOCON, LED_V, MD_PLN, ENTRADA);
		//configura la direcdion de los pins
		 Chip_GPIO_SetPinDIR(LPC_GPIO, LED_R, 1);
		 Chip_GPIO_SetPinDIR(LPC_GPIO, LED_A, 1);
		 Chip_GPIO_SetPinDIR(LPC_GPIO, LED_V, 1);


		 SysTick_Config(120000);

			Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
			Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_A);
			Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_V);

			//configuracion de botones

			Chip_IOCON_PinMux(LPC_IOCON, c0, IOCON_MODE_INACT, IOCON_FUNC0);
			Chip_IOCON_PinMux(LPC_IOCON, c1, IOCON_MODE_INACT, IOCON_FUNC0);
			Chip_IOCON_PinMux(LPC_IOCON, c2, IOCON_MODE_INACT, IOCON_FUNC0);
			Chip_IOCON_PinMux(LPC_IOCON, c3, IOCON_MODE_INACT, IOCON_FUNC0);

			 Chip_GPIO_SetPinDIR(LPC_GPIO, c0, 1);
			 Chip_GPIO_SetPinDIR(LPC_GPIO, c1, 1);
			 Chip_GPIO_SetPinDIR(LPC_GPIO, c2, 1);
			 Chip_GPIO_SetPinDIR(LPC_GPIO, c3, 1);

			Chip_IOCON_PinMux(LPC_IOCON, r5, IOCON_MODE_PULLUP, IOCON_FUNC0);
			Chip_IOCON_PinMux(LPC_IOCON, r6, IOCON_MODE_PULLUP, IOCON_FUNC0);
			Chip_IOCON_PinMux(LPC_IOCON, r7, IOCON_MODE_PULLUP, IOCON_FUNC0);
			Chip_IOCON_PinMux(LPC_IOCON, r8, IOCON_MODE_PULLUP, IOCON_FUNC0);

			 Chip_GPIO_SetPinDIR(LPC_GPIO, r5, 0);
			 Chip_GPIO_SetPinDIR(LPC_GPIO, r6, 0);
			 Chip_GPIO_SetPinDIR(LPC_GPIO, r7, 0);
			 Chip_GPIO_SetPinDIR(LPC_GPIO, r8, 0);

			 Chip_GPIO_SetPinOutHigh(LPC_GPIO, c0);
			 Chip_GPIO_SetPinOutHigh(LPC_GPIO, c1);
			 Chip_GPIO_SetPinOutHigh(LPC_GPIO, c2);
			 Chip_GPIO_SetPinOutHigh(LPC_GPIO, c3);
}
