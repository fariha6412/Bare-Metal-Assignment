
#include<stdint.h>
#include "stm32f446xx.h"
#include "led.h"


void led_init_all(void)
{


	/*----- This also have to be updated -------*/
	uint32_t *pRccAhb1enr = (uint32_t*)0x40023830;
	uint32_t *pGpiodModeReg = (uint32_t*)0x40020C00;



	*pRccAhb1enr |= ( 1 << 3);
	*pGpiodModeReg |= ( 1 << (2 * LED_ODD));
	*pGpiodModeReg |= ( 1 << (2 * LED_EVEN));

    led_off(LED_ODD);
    led_off(LED_EVEN);
}

void led_on(uint8_t led_no)
{
  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
  *pGpiodDataReg |= ( 1 << led_no);

}

void led_off(uint8_t led_no)
{
	  uint32_t *pGpiodDataReg = (uint32_t*)0x40020C14;
	  *pGpiodDataReg &= ~( 1 << led_no);

}


