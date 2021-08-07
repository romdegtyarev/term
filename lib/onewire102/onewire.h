/*
 * onewire.h
 *
 * Created on: 13.02.2012
 *     Author: di
 *    Version: 1.0.4
 * Moved from: http://we.easyelectronics.ru/STM32/stm32-1-wire-dma.html
 *             http://we.easyelectronics.ru/STM32/stm32-1-wire-dma-prodolzhenie.html
 *             http://we.easyelectronics.ru/STM32/esche-raz-o-stm32-i-ds18b20-podpravleno.html
 */


#ifndef ONEWIRE_H_
#define ONEWIRE_H_


#include "stm32f10x.h"


/* Constants */
/* USART 1-wire */
//#define OW_USART1
#define OW_USART2
//#define OW_USART3
//#define OW_USART4

/* FreeRTOS */
//#define OW_GIVE_TICK_RTOS

/* OW_Send */
#define OW_SEND_RESET    1
#define OW_NO_RESET      2
#define OW_OK            1
#define OW_ERROR         2
#define OW_NO_DEVICE     3
#define OW_NO_READ       0xff
#define OW_READ_SLOT     0xff

#define OW_0             0x00
#define OW_1             0xff
#define OW_R_1           0xff


/* Functions */
uint8_t OW_Init();
uint8_t OW_Send(uint8_t    sendReset,
                uint8_t   *command,
                uint8_t    cLen,
                uint8_t   *data,
                uint8_t    dLen,
                uint8_t    readStart);
void OW_out_set_as_Power_pin(void);
void OW_out_set_as_TX_pin(void);


#endif /* ONEWIRE_H_ */


