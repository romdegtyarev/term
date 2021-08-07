#ifndef BLINKLED_H_
#define BLINKLED_H_


#include "stm32f10x.h"


/* Constants */
/* Port numbers: 0=A, 1=B, 2=C, 3=D, 4=E, 5=F, 6=G */
#define BLINK_PORT_NUMBER               (2)
#define BLINK_PIN_NUMBER                (13)
#define BLINK_ACTIVE_LOW                (1)


#define BLINK_GPIOx(_N)                 ((GPIO_TypeDef *)(GPIOA_BASE + (GPIOB_BASE-GPIOA_BASE)*(_N)))
#define BLINK_PIN_MASK(_N)              (1 << (_N))
#define BLINK_RCC_MASKx(_N)             (RCC_APB2Periph_GPIOA << (_N))


/* Functions */
/*
 * -----------------------------------------------------------------------------
 * Function Name:
 * Function Input Param:
 * Function Output Param:
 * Function Return:
 * -----------------------------------------------------------------------------
 */
class BlinkLed {
public:
    BlinkLed() = default;


    void powerUp();


    void turnOn(int port, int pin) {
#if (BLINK_ACTIVE_LOW)
    GPIO_ResetBits(BLINK_GPIOx(port),
                   BLINK_PIN_MASK(pin));

#else
    GPIO_SetBits(BLINK_GPIOx(port),
                 BLINK_PIN_MASK(pin));

#endif
    }


    void turnOff(int port, int pin) {
#if (BLINK_ACTIVE_LOW)
    GPIO_SetBits(BLINK_GPIOx(port),
                 BLINK_PIN_MASK(pin));

#else
    GPIO_ResetBits(BLINK_GPIOx(port),
                   BLINK_PIN_MASK(pin));

#endif
    }
};


#endif /* BLINKLED_H_ */


