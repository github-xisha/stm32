#include "stm32f10x.h"
#include "led.h"
#define uint32 unsigned int

void delay(uint32 tm)
{
	while(--tm);
}

int main()
{
	LED_init();
	while(1)
	{
		delay(0xfffff);
		GPIO_ResetBits(LED_PORT,GPIO_Pin_3);
		delay(0xfffff);
		GPIO_SetBits(LED_PORT,LED_PIN);
	}
}


