#include<stdio.h>
#include<stdbool.h>
#include "stm32f446xx.h"
#include "led.h"

int main(void)
{

	/*------ This part needs to be updated using RCC and GPIO struct ----------*/
	
	// while(1){		
	// 	uint32_t gpioa_input = GPIOA->IDR;
	// 	bool flag1, flag2;
		
	// 	flag1 = gpioa_input & (1);
	// 	flag2 = gpioa_input & (1 << 1);

	// 	if(flag1){
	// 		printf("Input 1 is on and so Output 1 is on\n");
	// 		led_on(LED_ODD);
	// 	}
	// 	else{
	// 		printf("Input 1 is off and so Output 1 is off\n");
	// 		led_off(LED_ODD);
	// 	}

	// 	if(flag2){
	// 		printf("Input 2 is on and so Output 2 is on\n");
	// 		led_on(LED_EVEN);
	// 	}
	// 	else{
	// 		printf("Input 2 is off and so Output 2 is off\n");
	// 		led_off(LED_EVEN);
	// 	}	
	// }
}