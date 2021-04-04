/**
This file is part of pax-BB5 (https://github.com/CalinRadoni/pax-BB5)
Copyright (C) 2021 by Calin Radoni

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stm32l0xx_hal.h"

int main(void)
{
    HAL_Init();

    // enable the clock to GPIOA
    __HAL_RCC_GPIOA_CLK_ENABLE();

    // set PA15 to be general purpose output
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin   = GPIO_PIN_15;
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull  = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    while (1) {
        // PA15 reset (LED on)
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);
        HAL_Delay(300);

        // PA15 set (LED off)
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
        HAL_Delay(600);
    }
}

// Cortex-M0+ Processor Interruption and Exception Handlers

void SysTick_Handler(void)
{
    HAL_IncTick();
}

void NMI_Handler(void) { while (1) {} }

void HardFault_Handler(void) { while (1) {} }

void SVC_Handler(void) { }

void PendSV_Handler(void) { }
