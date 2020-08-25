#include "chip.h"
#include "main.h"

int tiempo;
int contador_control;

int SecuenciaVictoria(void)
{
	static int i = 0;
	static int estadoled=APAGADO;
	if(!i)
	contador0=1;

	if(contador0)
	{
		contador0=0;
		if(estadoled==APAGADO)
		{
			if(i==0 || i==4 || i==8 || i==12)
			{
				Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
			}
			else
			{
				if(i==1|| i==5 || i==9 || i==13)
				{
					Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
					Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_V);
				}
				else
				{
					if(i==2|| i==6 || i==10)
					{
						Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);
					}
					else
					{
						if(i==3|| i==7 || i==11)
						{
							Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_V);
						}
					}
				}
			}
			tiempo=100;
			estadoled=ENCENDIDO;
			contador_control=RESTART;
		}
		else
		{
			if(i==0 || i==4 || i==8 || i==12)
			{
				Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
			}
			else
			{
				if(i==1|| i==5 || i==9 || i==13)
				{
					Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
					Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_V);
				}
				else
				{
					if(i==2|| i==6 || i==10)
					{
						Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_A);
					}
					else
					{
						if(i==3|| i==7 || i==11)
						{
							Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_V);
						}
					}
				}
			}
			tiempo=50;
			estadoled=APAGADO;
			i++;
			contador_control=RESTART;
		}
	}
	if(i==14)
	return 1;

	return 0;
}

