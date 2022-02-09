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
 * Copyright (c) 2021, CalinRadoni (https://github.com/CalinRadoni)
 * 
 * This file is part of PAX_BB5 Arduino Variant (https://github.com/CalinRadoni/pax-BB5)
 * Original file was heavily modified for pax-BB5 board (STM32L051K8T MCU)
 *
 *******************************************************************************
 */

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

unsigned char scc_ExitCode = 0;
unsigned char SystemClock_Config_ExitCode(void) { return scc_ExitCode; }

// Digital PinName array
const PinName digitalPin[] = {
  PA_8,  // D0
  PA_9,  // D1
  PA_10, // D2
  PA_11, // D3
  PA_12, // D4
  PB_3,  // D5
  PB_4,  // D6
  PB_5,  // D7
  PB_6,  // D8
  PB_7,  // D9
  PA_0,  // D10 / A0 / T2C1
  PA_1,  // D11 / A1 / T2C2
  PA_2,  // D12 / A2 / T2C3
  PA_3,  // D13 / A3 / T2C4
  PA_15, // D14 UserLED
  PB_1,  // D15 IntRadio
  PB_0,  // D16 CSRadio
  PA_4,  // D17 CSMemory
  PA_5,  // D18 SPI1_SCK
  PA_6,  // D19 SPI1_MISO
  PA_7,  // D20 SPI1_MOSI
  PA_13, // D21 SWDIO
  PA_14  // D22 SWCLK
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  10,  // A0, PA0 - ADC_IN0
  11,  // A1, PA1 - ADC_IN1
  12,  // A2, PA2 - ADC_IN2
  13   // A3, PA3 - ADC_IN3
};

/**
  * @brief  System Clock Configuration
  *
  * Configures the SYSCLK to 32MHz from
  * HSI16 oscillator clock through PLL * 4 / 2
  *
  * HCLK and FCLK are 32 MHz
  * Cortex System Timer is 32 MHZ
  * PCLK1 (APB1 peripheral clock and APB1 timer clock) is 32 MHz
  * PCLK2 (APB2 peripheral clock and APB2 timer clock) is 32 MHz
  *
  * USART1 clock is PCLK2
  * I2C1 clock is PCLK1
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  scc_ExitCode = 0;

  /** Configure the main internal regulator output voltage */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters in the RCC_OscInitTypeDef structure. */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLLMUL_4;
  RCC_OscInitStruct.PLL.PLLDIV = RCC_PLLDIV_2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    scc_ExitCode |= 2;
  }

  /** Initializes the CPU, AHB and APB buses clocks */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK) {
    scc_ExitCode |= 4;
  }

  /** Initialize the peripherals clocks */
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART1 | RCC_PERIPHCLK_I2C1;
  PeriphClkInit.Usart1ClockSelection = RCC_USART1CLKSOURCE_PCLK2;
  PeriphClkInit.I2c1ClockSelection = RCC_I2C1CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK) {
    scc_ExitCode |= 8;
  }

  scc_ExitCode |= 1;
}

#ifdef __cplusplus
}
#endif
