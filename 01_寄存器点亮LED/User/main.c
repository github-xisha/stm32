#include "stm32f10x.h"
#include "register_define.h"

void SystemInit()
{

}
void delay(unsigned int tm)
{
	while(--tm);
}
	
int main()
{
	RCC_APB2ENR |= 1<<4;
	GPIOC_CRL &= ~( 0x0F<< (4*6));
	GPIOC_CRL |= (3<<4*6);
	GPIOC_BSRR=(1<<(16+6));
	while(1)
	{
		GPIOC_BSRR=(1<<(16+6));
		delay(0xFFFFF);
		GPIOC_BSRR=(1<<(6));
		delay(0xFFFFF);
	}
}


