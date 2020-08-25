/*
 * semaf.h
 *
 *  Created on: 5 sep. 2017
 *      Author: Alumno
 */

#ifndef SEMAF_H_
#define SEMAF_H_

//pin rojo
#define port_LED_R    0
#define pin_LED_R    22
#define LED_R    port_LED_R,pin_LED_R

#define DEMORA    1000
#define ENTRADA   0
#define SALIDA    ~ENTRADA //esto es 1
//pin azul
#define port_LED_A   3
#define pin_LED_A    26
#define LED_A    port_LED_A,pin_LED_A
//pin verde
#define port_LED_V    3
#define pin_LED_V    25
#define LED_V    port_LED_V,pin_LED_V


#define ROJO	0
#define AMAV	1
#define VERDE   2
#define AMAR 	3
//variables globales

extern int contador;
extern int flag;



#endif /* SEMAF_H_ */
