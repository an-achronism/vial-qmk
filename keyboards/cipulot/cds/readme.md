# CDS

Replacement PCB for the CDS Topre keyboard.

* Keyboard Maintainer: [cipulot](https://github.com/cipulot)
* Hardware Supported: CDS Replacement PCB
* Hardware Availability: TBD

Make example for this keyboard (after setting up your build environment):

    make cds:default
    make cds:via

Flashing example for this keyboard:

    make cds:default:flash
    make cds:via:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 main ways:

* **Physical reset pins**: Short circuit the pads marked as `BOOT0` on the top of the PCB and plug in the keyboard
* **Keycode in layout**: Press the key mapped to `RESET` if it is available.
