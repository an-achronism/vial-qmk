# Routemaster EC

Electrostatic Capacitive Minivan XT

* Keyboard Maintainer: [cipulot](https://github.com/cipulot)
* Hardware Supported: Routemaster EC
* Hardware Availability: TBD

Make example for this keyboard (after setting up your build environment):

    make routemaster_ec:default
    make routemaster_ec:via
    make routemaster_ec:vial

Flashing example for this keyboard:

    make routemaster_ec:default:flash
    make routemaster_ec:via:flash
    make routemaster_ec:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 main ways:

* **Physical reset pins**: Long press the reset button on the keyboard.
* **Keycode in layout**: Press the key mapped to `RESET` if it is available.
