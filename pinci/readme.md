# pinci

![pinci](https://user-images.githubusercontent.com/22048739/164290993-4e2e00ce-5f53-4566-806d-7cfd0e3107a0.png)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Camrbuss](https://github.com/camrbuss/)
* Hardware Supported: *Keyboard based on the RPi Pico. Any other MCU with the same footprint and pinout should work. (No support for batteries though).*
* Hardware Availability: *Order your own set of PCBs with the gerbers from [Camrbuss' Github page](https://github.com/camrbuss/pinci)*

Make example for this keyboard (after setting up your build environment):

    make pinci:default

Flashing example for this keyboard:

    make pinci:default:flash

Original firmware for this keyboard is Rust based. This repo contains my QMK setup for this keyboard with a Miryoku derived layout. You might or might not like this. Copy and/or edit to your hearts content!

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Press the BootSel button on the RPi Pico while connecting the USB cable.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
