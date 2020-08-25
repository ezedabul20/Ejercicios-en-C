/*
 * blincky.h
 *
 *  Created on: 22 ago. 2017
 *      Author: Alumno
 */

#ifndef BLINCKY_H_
#define BLINCKY_H_
//pin rojo
#define port_LED_R    0
#define pin_LED_R    22
#define LED_R    port_LED_R,pin_LED_R

#define DEMORA    1000
#define ENTRADA   0
#define SALIDA    ~ENTRADA //esto es 1
//pin azul
#define port_LED_A   3
#define pin_LED_A    25
#define LED_A    port_LED_A,pin_LED_A
//pin verde
#define port_LED_V    3
#define pin_LED_V    26
#define LED_V    port_LED_V,pin_LED_V

#define APAGADO		0
#define ENCENDIDO	1

//variables globales

extern int contador;
extern int flag;



#endif /* BLINCKY_H_ */
