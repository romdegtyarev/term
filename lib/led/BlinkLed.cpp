#include "BlinkLed.h"


/* External Functions */
/*
 * -----------------------------------------------------------------------------
 * Function Name:
 * Function Input Param:
 * Function Output Param:
 * Function Return:
 * -----------------------------------------------------------------------------
 */
void BlinkLed::powerUp() {
    GPIO_InitTypeDef GPIO_InitStructure;

    /* Enable GPIO Peripheral clock */
    RCC_APB2PeriphClockCmd(BLINK_RCC_MASKx(BLINK_PORT_NUMBER), ENABLE);

    /* Configure pin in output push/pull mode */
    GPIO_InitStructure.GPIO_Pin   = BLINK_PIN_MASK(BLINK_PIN_NUMBER);
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_Out_PP;
    GPIO_Init(BLINK_GPIOx(BLINK_PORT_NUMBER), &GPIO_InitStructure);

    /* Start with led turned off */
    turnOff(BLINK_PORT_NUMBER, BLINK_PIN_NUMBER);
}


