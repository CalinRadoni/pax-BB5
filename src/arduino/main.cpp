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

#include "Arduino.h"

void setup()
{
    // set LED_BUILTIN as output
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // LED_BUILTIN reset (LED on)
    digitalWrite(LED_BUILTIN, LOW);
    delay(300);

    // LED_BUILTIN set (LED off)
    digitalWrite(LED_BUILTIN, HIGH);
    delay(600);
}
