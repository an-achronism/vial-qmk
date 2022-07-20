# MCU name
MCU = STM32F411

# Bootloader selection
BOOTLOADER = stm32-dfu

KEYBOARD_SHARED_EP = yes

CUSTOM_MATRIX = lite
SRC += analog.c stm32/matrix.c stm32/ec_switch_matrix.c
