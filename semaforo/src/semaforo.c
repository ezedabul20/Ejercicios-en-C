/*
===============================================================================
 Name        : semaforo.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#include "chip.h"
#include "semaf.h"

int estado = AMAV;
int main(void)
{
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



    		   Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_A);
    		   Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_V);
    		   Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
	SysTick_Config(120000);

	while(1) {
				//if(contador == 2*DEMORA)
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


					switch(estado)
		    		    {
		    		    case ROJO:
		    		    	if (flag)
		    		    	{
		    		    		Chip_GPIO_SetPinOutHigh(LPC_GPIO,LED_A);
		    		    		Chip_GPIO_SetPinOutHigh(LPC_GPIO,LED_V);
		    		    		 flag = 0;
		    		    		 estado = AMAV;

		    		    	}
		    		    	break;
		    		    case AMAV:
		    		    	if (flag)
		    		        	{
		    		    			Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_V);
		    		    			Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);
		    		        		 flag = 0;
		    		        		 estado = VERDE;

		    		        	}
		    		    		break;
		    		    		case VERDE:
		    		      		    	if (flag)
		      		    		        	{
		    		      		    			Chip_GPIO_SetPinOutHigh(LPC_GPIO,LED_R);
		    		      		    			Chip_GPIO_SetPinOutHigh(LPC_GPIO,LED_A);
		    		    		    		       flag = 0;
		    		    		    	  		 estado = AMAR;
		    		    		    	  	}
		    		    		    	break;
		    		    		case AMAR:
		    		    				if (flag)
		    		    				    {
		    		    				    	Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);
		    		    				    	Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
		    		    				    	flag = 0;
		    		    				    	estado = ROJO;
		    		    				   	}
		    		    				   	   break;
		    		    		default:
		    		    		break;
		    		    }

    }
    return 0 ;


}
