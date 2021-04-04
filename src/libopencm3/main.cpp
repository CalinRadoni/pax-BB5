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

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

int main(void)
{
    // enable the clock to GPIOA
	rcc_periph_clock_enable(RCC_GPIOA);

    // set PA15 to be general purpose output
	gpio_mode_setup(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO15);

	while (1) {
        // PA15 reset (LED on)
		gpio_clear(GPIOA, GPIO15);
		for (uint32_t i = 0; i < 300000; i++) {
			__asm__("nop");
		}

        // PA15 set (LED off)
		gpio_set(GPIOA, GPIO15);
		for (uint32_t i = 0; i < 600000; i++) {
			__asm__("nop");
		}
	}

	return 0;
}
