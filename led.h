
#ifndef LED_H_
#define LED_H_

#define LED_ODD  13
#define LED_EVEN 12

void led_init_all(void);
void led_on(uint8_t led_no);
void led_off(uint8_t led_no);

#endif /* LED_H_ */
