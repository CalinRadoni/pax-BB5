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

#include "stm32l0xx.h"

void ms_delay(int ms)
{
   while (ms-- > 0) {
      volatile int x = 500;
      while (x-- > 0)
         __asm("nop");
   }
}

int main(void)
{
    // enable the clock to GPIOA
    RCC->IOPENR |= RCC_IOPENR_GPIOAEN;

    // set PA15 to be general purpose output
    GPIOA->MODER = ((GPIOA->MODER ^ GPIO_MODER_MODE15) | GPIO_MODER_MODE15_0);

    for (;;) {
        // PA15 reset (LED on)
        GPIOA->BSRR |= GPIO_BSRR_BR_15;
        ms_delay(300);

        // PA15 set (LED off)
        GPIOA->BSRR |= GPIO_BSRR_BS_15;
        ms_delay(600);
    }

    return 0;
}
