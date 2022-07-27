/* Copyright 2022 Cipulot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ec_switch_matrix.h"

#include "quantum.h"
#include "analog.h"
#include "atomic_util.h"
#include "print.h"

#define WAIT_DISCHARGE()
#define WAIT_CHARGE()

/* Pin and port array */
const uint32_t row_pins[]     = MATRIX_ROW_PINS;

static ecsm_config_t config;
static uint16_t      ecsm_sw_value[MATRIX_ROWS][MATRIX_COLS];

static adc_mux adcMux;

static inline void discharge_capacitor(void) {
    writePinLow(DISCHARGE_PIN);
}
static inline void charge_capacitor(uint8_t row) {
    writePinHigh(DISCHARGE_PIN);
    writePinHigh(row_pins[row]);
}

static inline void clear_all_row_pins(void) {
    for (int row = 0; row < 8; row++) {
        writePinLow(row_pins[row]);
    }
}

static inline void init_row(void) {
    for (int idx = 0; idx < 8; idx++) {
        setPinOutput(row_pins[idx]);
        writePinLow(row_pins[idx]);
    }
}

/* Initialize the peripherals pins */
int ecsm_init(ecsm_config_t const* const ecsm_config) {
    // Save config
    config = *ecsm_config;

    palSetLineMode(ANALOG_PORT, PAL_MODE_INPUT_ANALOG);
    adcMux = pinToMux(ANALOG_PORT);

    // Initialize discharge pin as discharge mode
    writePinLow(DISCHARGE_PIN);
    setPinOutputOpenDrain(DISCHARGE_PIN);

    // Initialize drive lines
    init_row();

    return 0;
}

// Read the capacitive sensor value
static uint16_t ecsm_readkey_raw(uint8_t row) {
    uint16_t sw_value = 0;

    // Set strobe pins to low state
    writePinLow(row_pins[row]);

    ATOMIC_BLOCK_FORCEON {
        // Set the row pin to high state and have capacitor charge
        charge_capacitor(row);

        WAIT_CHARGE();
        sw_value = adc_read(adcMux);
    }

    // Discharge peak hold capacitor
    discharge_capacitor();
    WAIT_DISCHARGE();

    return sw_value;
}

// Update press/release state of key at (row, col)
static bool ecsm_update_key(matrix_row_t* current_row, uint8_t row, uint16_t sw_value) {
    bool current_state = (*current_row >> 0) & 1;

    // press to release
    if (current_state && sw_value < config.low_threshold_matrix[row][0]) {
        *current_row &= ~(1 << 0);
        return true;
    }

    // release to press
    if ((!current_state) && sw_value > config.high_threshold_matrix[row][0]) {
        *current_row |= (1 << 0);
        return true;
    }

    return false;
}

// Scan key values and update matrix state
bool ecsm_matrix_scan(matrix_row_t current_matrix[]) {
    bool updated = false;

    for (int row = 0; row < 8; row++) {
        ecsm_sw_value[row][0] = ecsm_readkey_raw(row);
        updated |= ecsm_update_key(&current_matrix[row], row, ecsm_sw_value[row][0]);
    }

    return updated;
}

// Debug print key values
void ecsm_print_matrix(void) {
    for (int row = 0; row < 8; row++) {
        uprintf("%4d", ecsm_sw_value[row][0]);
        print("\n");
    }
    print("\n");
}
