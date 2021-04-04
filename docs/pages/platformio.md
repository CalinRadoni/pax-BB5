---
title: Usage with PlatformIO and Arduino, CMSIS, STM32Cube and LibOpenCM3 frameworks
#description: 
date: 2021-04-04
#date-modified: 
---

To install PlatformIO Core see the post [PlatformIO Core](https://calinradoni.github.io/pages/210403-platformiocli.html).

To use this board with PlatformIO see the post
[Custom STM32 board for PlatformIO and Arduino, CMSIS, STM32Cube and LibOpenCM3](https://calinradoni.github.io/pages/210403-platformio-customstm32board.html).

- to compile the all the *blinky* examples execute `pio run`
- to compile only the Arduino example execute `pio run --environment pax_bb5_a`
- to upload the Arduino example execute `pio run --environment pax_bb5_a --target upload`
- to clean up the build files execute `pio run --target clean`
