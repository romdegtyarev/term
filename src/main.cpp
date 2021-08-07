#include <stdio.h>
#include <stdlib.h>
#include "../lib/led/BlinkLed.h"
#include "../lib/onewire102/onewire.h"
#include "../lib/timer/Timer.h"
#include "../lib/tm1637/tm1637.h"


/* Global Internal Struts */


/* Global Internal Enums */


/* Global Internal Variables */


/* Global External Struts */


/* Global External Enums */


/* Global External Variables */


/* Definitions visible only within this translation unit */
namespace {
  /* Keep the LED on for 2/3 of a second */
  constexpr Timer::ticks_t BLINK_ON_TICKS  = Timer::FREQUENCY_HZ * 3 / 4;
  constexpr Timer::ticks_t BLINK_OFF_TICKS = Timer::FREQUENCY_HZ -
                                             BLINK_ON_TICKS;
}


/* Internal Functions */
/*
 * -----------------------------------------------------------------------------
 * Function Name:
 * Function Input Param:
 * Function Output Param:
 * Function Return:
 * -----------------------------------------------------------------------------
 */
int main(int argc, char* argv[]) {
    Timer       timer;
    //BlinkLed    blinkLed;
    uint32_t    seconds = 0;

    //timer.start();
    /* Perform all necessary initialisations for the LED */
    //blinkLed.powerUp();

    while (1) {
      //blinkLed.turnOn(2, 13);
      //timer.sleep(seconds== 0 ? Timer::FREQUENCY_HZ : BLINK_ON_TICKS);

      //blinkLed.turnOff(2, 13);
      //timer.sleep(BLINK_OFF_TICKS);

      ++seconds;




      OW_Init();
      //OW_Send(OW_SEND_RESET, "\xcc\x44", 2, NULL, NULL, OW_NO_READ);

      /* Назначаем функцию двухтактного выхода - подаем "питание" на шину */
      //OW_out_set_as_Power_pin();

      /* Выдерживаем время измерения (например 750 мс для 12-битного измерения) */
      //for (i=0; i<1000000; i++);

      /* Восстанавливаем функцию передатчика UART */
      //OW_out_set_as_TX_pin();

      //uint8_t buf[2];
      //OW_Send(OW_SEND_RESET, "\xcc\xbe\xff\xff", 4, buf,2, 2);




    }
}


