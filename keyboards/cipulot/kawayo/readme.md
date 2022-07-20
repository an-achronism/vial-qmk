# Kawayo

A board dedicated to Nakiri Ayame from Nakirigumi. 65% with top blocker.

* Keyboard Maintainer: [cipulot](https://github.com/cipulot) and the Mecha Team
* Hardware Supported: Kawayo
* Hardware Availability: https://mecha.store/collections/keyboards/products/gb-kawayo

Make example for this keyboard (after setting up your build environment):

    make kawayo:default
    make kawayo:via

If in Vial environment:

    make kawayo:vial

Flashing example for this keyboard:

    make kawayo:default:flash
    make kawayo:via:flash

If in Vial environment:

    make kawayo:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 main ways:

* **Physical reset pins**: Short pres of the Reset/Boot0 button will reset the board. Long press will enter Boot0. If the button is being pressed while powering the board it will enter DFU automatically.

## NOTE

On PCB with the `APM32F072CB` MCU autoreset after flash is not available. Unplug and replug the board to make it recognize after flash.
