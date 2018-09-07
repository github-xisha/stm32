#ifndef _LED_H
#define _LED_H

#define LED_PORT GPIOC
//#define LED_PIN (GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7)
#define LED_PIN GPIO_Pin_All
#define LED_PORT_RCC RCC_APB2Periph_GPIOC

void LED_init(void);

#endif
