# PAx BaseBoard STM32L051K8T

The hardware board is the one created by me in 2017, published in [PAx5](https://github.com/CalinRadoni/PAx5) repository. The new addition is PlatformIO compatibility files to allow programming the board with 
Arduino, CMSIS, LibOpenCM3 or STM32Cube frameworks.

See the [docs site](https://calinradoni.github.io/pax-BB5/) for pinout, schematic and more.

## The code

In the `src` directory I have created blink test code for Arduino, CMSIS, LibOpenCM3 and STM32Cube.
The selection between directories is made through `platformio.ini` configuration file.

## Hardware details

- STM32L051K8T MCU
- RFM69HW transceiver module 868MHz
- M25P10 128kB Flash memory
- on-board LED
- on-board switch port

## Development Environment

- [PlatformIO](https://platformio.org) Core, version 5.1.1.
- editing was done in [Visual Studio Code](https://code.visualstudio.com)
- version control with [Git](https://git-scm.com)
- [KiCad EDA](http://kicad-pcb.org/) for hardware schematic and PCB board
- [GIMP](https://www.gimp.org/) and [Inkscape](https://inkscape.org/en/) for images

## License

*Unless otherwise specified:*

The software and documentation are released under the [GNU GPLv3](http://www.gnu.org/licenses/gpl-3.0.html) License. See the __LICENSE-GPLv3.txt__ file.

The hardware schematics are licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-sa/4.0/).
See the __LICENSE-CC-BY-SA-4.0.txt__ file.

The code for Arduino Variant is released under the [BSD 3-Clause license](https://opensource.org/licenses/BSD-3-Clause)
- Copyright (c) 2021, STMicroelectronics
- Copyright (c) 2021, CalinRadoni (https://github.com/CalinRadoni)
