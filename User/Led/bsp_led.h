#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"

/** the macro definition to trigger the led on or off 
  * 1 - off
  *0 - on
  */
#define ON  0
#define OFF 1

/* ���κ꣬��������������һ��ʹ�� */
#define LED0(a)	if (a)	\
					GPIO_SetBits(GPIOA,GPIO_Pin_8);\
					else		\
					GPIO_ResetBits(GPIOA,GPIO_Pin_8)

#define LED1(a)	if (a)	\
					GPIO_SetBits(GPIOD,GPIO_Pin_2);\
					else		\
					GPIO_ResetBits(GPIOD,GPIO_Pin_2)


/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define	digitalHi(p,i)				{p->BSRR=i;}			//����Ϊ�ߵ�ƽ		
#define digitalLo(p,i)				{p->BRR	=i;}				//����͵�ƽ
#define digitalToggle(p,i)			{p->ODR ^=i;}			//�����ת״̬


/* �������IO�ĺ� */
#define LED0_TOGGLE		digitalToggle(GPIOA,GPIO_Pin_8)
#define LED0_OFF			digitalHi(GPIOA,GPIO_Pin_8)
#define LED0_ON				digitalLo(GPIOA,GPIO_Pin_8)

#define LED1_TOGGLE		digitalToggle(GPIOD,GPIO_Pin_2)
#define LED1_OFF			digitalHi(GPIOD,GPIO_Pin_2)
#define LED1_ON				digitalLo(GPIOD,GPIO_Pin_2)

void LED_GPIO_Config(void);

#endif /* __LED_H */