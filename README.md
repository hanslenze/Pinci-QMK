# Pinci-QMK
After the addition of support for the RP2040 controller to QMK it was only a matter of time. This repository contains firmware to run QMK on a Pinci keyboard. The features in the default layout are bare minimum and cannot be called a true functional keyboard. Add layers, combo's and features as desired/needed and have fun!

Have a look at the [Github page for the Pinci keyboard](https://github.com/camrbuss/pinci) from Camrbuss to learn more about the keyboard itself and order your own set of PCBs with your favorite fabricator.

## How to use
This chapter is useful if you never used QMK before. This is a short version of the [introduction guide on docs.qmk.fm](https://docs.qmk.fm/#/newbs) with the specific commands for the Pinci keyboard.
### Set up the files
Clone your own version of the [QMK firmware](https://github.com/qmk/qmk_firmware) and put the "pinci" folder from this repo into the "qmk_firmware\keyboards" subfolder.

### Set up the build environment
[QMK MSYS](https://msys.qmk.fm/) works easy so that's the way I recommend to compile the firmware on a Windows system. 

### Compile
Compile the firmware itself by using the following command.

`qmk compile -kb pinci -km default`

This will get you started with the default layout. Replace `default` with whatever layout you've created in the "pinci/keymaps" subfolder to make it your own.  
There is a "via" subfolder available that may someday be used to edit the layout on [the website](https://usevia.app/#/) but VIA support is not functional at the moment.
