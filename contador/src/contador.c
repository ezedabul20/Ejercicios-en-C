
#include "chip.h"

#include "cont.h"
int x = 0;
int estado = CONTANDO;
int main(void) {
				//Configura la funcion Del pin
			    Chip_IOCON_PinMux(LPC_IOCON, LED_R, MD_PLN, ENTRADA);
			    Chip_IOCON_PinMux(LPC_IOCON, LED_A, MD_PLN, ENTRADA);
			    Chip_IOCON_PinMux(LPC_IOCON, 2,10,MD_PLN, ENTRADA);
			    //configuracion de la direccion
			    Chip_GPIO_SetPinDIR(LPC_GPIO, LED_A, 1);
			    Chip_GPIO_SetPinDIR(LPC_GPIO, LED_R, 1);
			    Chip_GPIO_SetPinDIR(LPC_GPIO, 2,10, 0);

			    Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_A);
			    Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
			    Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_V);

			    Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);
			    SysTick_Config(120000);
    while(1)
    {
    	switch(estado)
    	{
    	case CONTANDO:
    		//contando

    		if(Chip_GPIO_GetPinState(LPC_GPIO, 2, 10)==0 && res==0 )
    				{
    					 flag_c=1;
    					 res = 1;
    				}
    				else
    				{
    					if (Chip_GPIO_GetPinState(LPC_GPIO, 2, 10) && res==1)
    					{
    						res=0;
    						cant++;
    					}
    				}

    				if(enable_flag_c)
    					{
    						cant*=2;
    						Chip_GPIO_SetPinOutHigh(LPC_GPIO,LED_A);
    						enable_flag_c = 0;
    						enable_flag_P = 1;
    						estado = PARPADEANDO;

    					}

    		    	//if(Chip_GPIO_GetPinState(LPC_GPIO, 2, 10))
    		    	//	{
//    					Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);
//    					flag= 0;
//    					estado = PARPADEANDO;
//    					enable_flag_P = 1;
    		    	//}
    		break;
    	case PARPADEANDO:
    			if(enable_flag_P)
    			{
    				enable_flag_c=0;
    				if(!cant)//termino d contar
    				{
    					estado=CONTANDO;
    					a_timer_c=1;
    					enable_flag_p=0;
    					Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_A);

    				}
    				cant--;
    				Chip_GPIO_SetPinToggle(LPC_GPIO,LED_R);
    			}

    		//flag= 0;
//    			for (x=0;x<cant;x++)
//    			{
//    				Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_A);
//    				Chip_GPIO_SetPinOutLow(LPC_GPIO, LED_R);
//    				Chip_GPIO_SetPinOutHigh(LPC_GPIO, LED_R);
//
//
//
//    			}
//    			enable_flag_c = 1;
    			estado= CONTANDO;
    		break;

    		default:

    		break;
    	}




    }
    return 0 ;
}
