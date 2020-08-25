#ifndef MAIN_H_
#define MAIN_H_

#define ENTRADA   0
#define APAGADO   0
#define ENCENDIDO   1

#define LED_V    3,25
#define LED_R    0,22
#define LED_A    3,26
#define START	1
#define PAUSE	2
#define RESET	3
#define RESTART	4
#define c0	 2,1
#define c1 	 2,2
#define c2   2,3
#define c3 	 2,4
#define r5   2,5
#define r6   2,6
#define r7   2,7
#define r8   2,8
#define tec_a	10
#define tec_b	11
#define tec_c	12
#define tec_d	13
#define tec_ast	14
#define tec_nvm	15


void sticklpc1769(void);
int SecuenciaVictoria(void);

//variables externas
extern char aux;
extern int contador_control;
extern int contador0;
extern int tiempo;




#endif /* MAIN_H_ */
