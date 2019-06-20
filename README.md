# speccy2010
FPGA development board dedicated for the implementation of various gaming computers (primarily ZX Spectrum).

Harware Key Features:
---------------------

* FPGA: EP2C8Q208C8N
* Microcontroller: STR755FV2T6 (or STR750FV2T6)
* Memory: SDRAM 16 Mb K4S281632J-UC75 (or 32 Mb K4S561632J-UC75)
* RTC: DS1338Z-33 +
* Slot for SD card
* Two PS/2 ports (keyboard, mouse)
* 2 ports for joysticks
* USB - virtual com for debugging and programming the microcontroller
* Video: three R-2R matrixes, 8 bits each (output to VGA, Composite, S-Video)
* Audio TDA1543 or two R-2R matrixes, 8 bits each
* Power supply 5V, 1A.

Firmware for microcontroller is upgradeable via USB virtual com. Firmware for FPGA is loaded directly from the SD card. No special programming tools are needed.

ZX Spectrum implementation features
-----------------------------------

* ZX Spectrum 48k/128k, Pentagon 128k/512k/1024k and Scorpion 256 modes (including timing)
* Betadisk (TRD, SCL, FDI)
* 2 x AY (Turbosound), Covox/Soundrive
* TAP / TZX support
* full SNA support
* S-Video and Composite output
* VGA output (50, 60 or 75 Hz) 
* Turbo (7, 14 and 28 MHz)
* Kempston and sinclair joysticks
* Kempston mouse
* Gluk RTC (read-only)

WARNING! This is not the official repository! For studying purposes only!