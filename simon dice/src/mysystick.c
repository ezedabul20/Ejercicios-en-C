#include "chip.h"
#include "main.h"

int my_contador(int segundos,int control, int indice)
{
	static int i[8];
	if (control == START)
	{
		i[indice]= i[indice] + 1;
		if(i[indice] == segundos)
		{
			i[indice] = 0;
			return 1;
		}
	}


//	static int i = 0;
//	if (control == contador_start)
//	{
//		i++;
//		if(i == segundos*1000)
//		{
//			i = 0;
//			return 1;
//		}
//	}
//
	if (control == RESET)
	{
		i[indice] = 0;

	}

	if(control==RESTART)
	{
		i[indice]=1;
		contador_control=START;
	}
	return 0;
}

char aux = 0;
int contador0=0;
int sec=0;
void SysTick_Handler(void)
{
	//aux = my_tecladox_drive();
	contador0 = my_contador(tiempo,contador_control,0);

}


