# 5o21 LHS Keypad

This is a variant/modification of the [Nine Nano](https://github.com/bsag/nine-nano) split keyboard by @bsag.  This variant has been expanded to 17 keys, and is configured to accept an RP2040 MCU in a left-hand only (single hand) configuration.

![Top View](https://i.imgur.com/rChU6CK.jpeg)

Make example for this keyboard (after setting up your build environment):

    make 5o21_lhs:test

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Builder's note: I started with a fresh clone of the QMK repository, dated as of 2024/10/19.  You may run into issues with other clones from late 2022 or earlier.

## Copying The Config

Once you've set up your QMK build environment, do the following steps:

* Copy the CONTENTS of folder "keyboards" from this repository into directory "qmk_firmware/keyboards/".  Once you do this, you should have a new keyboard named "5o21_lhs" which is what you should use to build the firmware.
* Copy the CONTENTS of folder "layouts/community" from this repository into directory "qmk_firmware/layouts/community". Once you do this, you should have a new community layout named "single_4x6_pad" which is used by this keyboard.


## Using RP2040 Boards

Pro Micro RP2040 boards are supported natively.

From directory "qmk_firmware", run this command:

    make 5o21_lhs:test

Once the UF2 file has been created, you should put the RP2040 into bootloader mode and then copy the "5o21_lhs_test.uf2" file to the USB Mass Storage device (RPI-RP2).

The QMK "converters" are not needed.  This keyboard config uses RP2040 natively.


## Hardware Testing

I've been using the "test" layout.  You can also create other layouts as subdirectories in the "5o21_lhs/keymaps" directory, and use those to build the firmware:

    make 5o21_lhs:YOUR_KEYMAP_HERE
    
## Bootloader

Enter bootloader mode in one of 3 ways:

* **Plug with physical BOOT button**:  If the MCU is unplugged, then hold down the BOOT button, keep it down while plugging in the USB cable, then release the BOOT button.
* **Physical BOOT+RESET buttons**: (see below)
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if this is configured.

Here is the usual BOOT+RESET sequence - this only works if the MCU is currently plugged in:

* Step 1: Press and hold BOOT button
* Step 2: Press RESET button and then release it
* Step 3: Release the BOOT button


Note: If you wish to leave bootloader mode WITHOUT updating the firmware, you can either (1) push the RESET button, or (2) simply un-plug and re-plug the USB-C cable.  The RP2040 will return to its last uploaded firmware on a reset or power-cycle.


Once you have entered bootloader mode, you will see a USB flash drive (i.e., mass storage device) appear with the name "RPI-RP2".  Then you can simply copy the UF2 file manually to the "RPI-RP2" drive.  Once the UF2 file has been copied, the RP2040 will reset itself automatically and start using the new firmware that you just uploaded.


