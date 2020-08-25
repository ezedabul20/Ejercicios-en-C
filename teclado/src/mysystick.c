#include "chip.h"
#include "main.h"

int my_contador(int segundos,int control, int indice)
{
	static int i[8];
	if (control == contador_start)
	{
			i[indice]= i[indice] + 1;
			if(i[indice] == segundos*1000)
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
	if (control == contador_reset)
	{
		i[indice] = 0;

	}
	return 0;
}

char aux = 0;
void SysTick_Handler(void)
{

	contador0 = my_contador(2,contador0_control,0);
	contador1 = my_contador(3,contador1_control,1);

	aux = my_tecladox_drive();

}


