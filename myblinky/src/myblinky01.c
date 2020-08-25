#include "chip.h"

#include "blincky.h"
 	 	 	 //int estado = APAGADO;

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

int main(void)
{
	int i=0;


//set clock
 //   SystemCoreClockUpdate();
//Configura la funcion Del pin
    Chip_IOCON_PinMux(LPC_IOCON, LED_V, MD_PLN, ENTRADA);
    Chip_IOCON_PinMux(LPC_IOCON, LED_R, MD_PLN, ENTRADA);
    Chip_IOCON_PinMux(LPC_IOCON, LED_A, MD_PLN, ENTRADA);
    //configuracion de la direccion
    Chip_GPIO_SetPinDIR(LPC_GPIO, LED_V, 1);
    Chip_GPIO_SetPinDIR(LPC_GPIO, LED_A, 1);
    Chip_GPIO_SetPinDIR(LPC_GPIO,LED_R, 1);

    		//inicializacion systick
    		//obtenemos la frecuencia del clock
    		//i = Chip_Clock_GetSystemClockRate();
    		//configuramos el stick paraa que interrumpa
    		//cada 1 ms
    		//    if (SysTick_Config(i/1000))
    		//    	return 1;
    		//    i = 0;

    		//  SysTick_Config(120000);
    while(1)
    {
    		//    	if(contador == 2*DEMORA)
    		//    	{
    		//    		   Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
    		//    		   Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_A);
    		//    		   Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_V);
    		//    	}
    		//    		   if(contador == 3*DEMORA)
    		//    		   {
    		//    			   Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
    		//    			   Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_V);
    		//    			   Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);
    		//    			   contador = ENTRADA;
    		//    		   }

    		//ponemos el pin en uno . prendemos el led
    		//  Chip_GPIO_SetPinOutHigh(LPC_GPIO, 3, 26);
    		//demora rustica
    		//   while(i !=1000000)
    		//	{
    		//	i++;
    		//	//ponemos el pin en cero .apagamos el led
    		//	}
    		//   Chip_GPIO_SetPinOutLow(LPC_GPIO, 3, 26);
    		//	i = 0;
        	//demora rustica
    		//    while(i !=1000000)
    		//    	{
    		//   	i++;
          	//ponemos el pin en cero .apagamos el led
    		//   	}
    		//	i = 0;

    		//switch(estado)
    		//    {
    		//    case APAGADO:
    		//    	if (flag)
    		//    	{
    		//    		 Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
    		//    		 flag = 0;
    		//    		 estado = ENCENDIDO;
    		//
    		//    	}
    		//    	break;
    		//    case ENCENDIDO:
    		//    	if (flag)
    		//        	{
    		//        		 Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
    		//        		 flag = 0;
    		//        		 estado = APAGADO;
    		//
    		//        	}
    		//    		break;
    		//    }
    		//    }
    		//
    		//    return 0 ;
    }
}
