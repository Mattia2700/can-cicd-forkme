#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "bms.h"

/*
*   STDC Version check
*   check if STDC version is greater or equal than the minimum version required
*/
#define NAKED_STDC_MIN_VERSION 201112L
#if __STDC_VERSION__ < NAKED_STDC_MIN_VERSION
	#error "** STDC VERSION NOT SUPPORTED **"
#endif

/* bms_BOARD_STATUS */
size_t serialize_bms_BOARD_STATUS(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS bms_board_status = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS));
	memcpy(buffer, &bms_board_status, sizeof(bms_BOARD_STATUS));
    return sizeof(bms_BOARD_STATUS);
} 
size_t deserialize_bms_BOARD_STATUS(uint8_t* buffer, bms_BOARD_STATUS* bms_board_status) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS));
	memcpy(bms_board_status, buffer, sizeof(bms_BOARD_STATUS));
    return sizeof(bms_BOARD_STATUS);
}
/* bms_TEMPERATURES */
size_t serialize_bms_TEMPERATURES(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMPERATURES bms_temperatures = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMPERATURES));
	memcpy(buffer, &bms_temperatures, sizeof(bms_TEMPERATURES));
    return sizeof(bms_TEMPERATURES);
} 
size_t deserialize_bms_TEMPERATURES(uint8_t* buffer, bms_TEMPERATURES* bms_temperatures) {
	// assert(buf_len >= sizeof(bms_TEMPERATURES));
	memcpy(bms_temperatures, buffer, sizeof(bms_TEMPERATURES));
    return sizeof(bms_TEMPERATURES);
}
/* bms_VOLTAGES */
size_t serialize_bms_VOLTAGES(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES bms_voltages = { start_index, 0x00, voltage0, voltage1, voltage2 };
	// assert(buf_len >= sizeof(bms_VOLTAGES));
	memcpy(buffer, &bms_voltages, sizeof(bms_VOLTAGES));
    return sizeof(bms_VOLTAGES);
} 
size_t deserialize_bms_VOLTAGES(uint8_t* buffer, bms_VOLTAGES* bms_voltages) {
	// assert(buf_len >= sizeof(bms_VOLTAGES));
	memcpy(bms_voltages, buffer, sizeof(bms_VOLTAGES));
    return sizeof(bms_VOLTAGES);
}
/* bms_BALANCING */
size_t serialize_bms_BALANCING(uint8_t* buffer, uint8_t board_index, bms_balancing_cells cells) {
    bms_BALANCING bms_balancing = { board_index, {cells[0], cells[1], cells[2]} };
	// assert(buf_len >= sizeof(bms_BALANCING));
	memcpy(buffer, &bms_balancing, sizeof(bms_BALANCING));
    return sizeof(bms_BALANCING);
} 
size_t deserialize_bms_BALANCING(uint8_t* buffer, bms_BALANCING* bms_balancing) {
	// assert(buf_len >= sizeof(bms_BALANCING));
	memcpy(bms_balancing, buffer, sizeof(bms_BALANCING));
    return sizeof(bms_BALANCING);
}
/* bms_FW_UPDATE */
size_t serialize_bms_FW_UPDATE(uint8_t* buffer, uint8_t board_index) {
    bms_FW_UPDATE bms_fw_update = { board_index };
	// assert(buf_len >= sizeof(bms_FW_UPDATE));
	memcpy(buffer, &bms_fw_update, sizeof(bms_FW_UPDATE));
    return sizeof(bms_FW_UPDATE);
} 
size_t deserialize_bms_FW_UPDATE(uint8_t* buffer, bms_FW_UPDATE* bms_fw_update) {
	// assert(buf_len >= sizeof(bms_FW_UPDATE));
	memcpy(bms_fw_update, buffer, sizeof(bms_FW_UPDATE));
    return sizeof(bms_FW_UPDATE);
}
