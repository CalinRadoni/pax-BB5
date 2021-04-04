/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 *
 * Automatically generated from STM32L051K(6-8)Tx.xml
 * CubeMX DB release 6.0.10
 *
 *******************************************************************************
 *
 * Copyright (c) 2021, CalinRadoni (https://github.com/CalinRadoni)
 * 
 * This file is part of PAX_BB5 Arduino Variant (https://github.com/CalinRadoni/pax-BB5)
 * Original file was heavily modified for pax-BB5 board (STM32L051K8T MCU)
 *
 *******************************************************************************
 */

#include "Arduino.h"
#include "PeripheralPins.h"

/** ADC */
#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0
  {PA_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1
  {PA_2, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2
  {PA_3, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3
  {NC,   NP,   0}
};
#endif

/** I2C */
#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PB_7, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,   NP,   0}
};
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PB_6, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,   NP,   0}
};
#endif

/** PWM */
#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_PWM[] = {
  {PA_0,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  1, 0)}, // TIM2_CH1
  {PA_1,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  2, 0)}, // TIM2_CH2
  {PA_2,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  3, 0)}, // TIM2_CH3
  {PA_3,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  4, 0)}, // TIM2_CH4
  {PA_15, TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2,  1, 0)}, // TIM2_CH1 User LED
  {PB_3,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2,  2, 0)}, // TIM2_CH2
  {PB_4,  TIM22, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM22, 1, 0)}, // TIM22_CH1
  {PB_5,  TIM22, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM22, 2, 0)}, // TIM22_CH2
  {NC,    NP,    0}
};
#endif

/** UART */
#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_9,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
  {PA_2,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {NC,    NP,     0}
};
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_10, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
  {PA_3,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {NC,    NP,     0}
};
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_12, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
  {PA_1,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {NC,    NP,     0}
};
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_11, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
  {PA_0,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {NC,    NP,     0}
};
#endif

/** SPI */
#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,   0}
};
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,   0}
};
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,   NP,   0}
};
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,   0}
};
#endif
