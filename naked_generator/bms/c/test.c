#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BOARD_STATUS */
    printf("bms_BOARD_STATUS:\n");
    uint8_t* buffer_bms_board_status = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS));
    
    bms_BOARD_STATUS bms_board_status_s = { {212}, -81 };
    serialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_s.errors, bms_board_status_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_s.errors[0], (long long int)bms_board_status_s.balancing_status);
    
    bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
    deserialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_d->errors[0], (long long int)bms_board_status_d->balancing_status);
    
    assert(memcmp(&bms_board_status_s, bms_board_status_d, sizeof(bms_BOARD_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMPERATURES */
    printf("bms_TEMPERATURES:\n");
    uint8_t* buffer_bms_temperatures = (uint8_t*)malloc(sizeof(bms_TEMPERATURES));
    
    bms_TEMPERATURES bms_temperatures_s = { 50.0, 74.0, 227.0, 239.0, 169.0, 61.0, 212.0 };
    serialize_bms_TEMPERATURES(buffer_bms_temperatures, bms_temperatures_s.start_index, bms_temperatures_s.temp0, bms_temperatures_s.temp1, bms_temperatures_s.temp2, bms_temperatures_s.temp3, bms_temperatures_s.temp4, bms_temperatures_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temperatures_s.start_index, (long long unsigned int)bms_temperatures_s.temp0, (long long unsigned int)bms_temperatures_s.temp1, (long long unsigned int)bms_temperatures_s.temp2, (long long unsigned int)bms_temperatures_s.temp3, (long long unsigned int)bms_temperatures_s.temp4, (long long unsigned int)bms_temperatures_s.temp5);
    
    bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
    deserialize_bms_TEMPERATURES(buffer_bms_temperatures, bms_temperatures_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temperatures_d->start_index, (long long unsigned int)bms_temperatures_d->temp0, (long long unsigned int)bms_temperatures_d->temp1, (long long unsigned int)bms_temperatures_d->temp2, (long long unsigned int)bms_temperatures_d->temp3, (long long unsigned int)bms_temperatures_d->temp4, (long long unsigned int)bms_temperatures_d->temp5);
    
    assert(memcmp(&bms_temperatures_s, bms_temperatures_d, sizeof(bms_TEMPERATURES)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES */
    printf("bms_VOLTAGES:\n");
    uint8_t* buffer_bms_voltages = (uint8_t*)malloc(sizeof(bms_VOLTAGES));
    
    bms_VOLTAGES bms_voltages_s = { 19.0, 0, 36194.0, 23113.0, 58738.0 };
    serialize_bms_VOLTAGES(buffer_bms_voltages, bms_voltages_s.start_index, bms_voltages_s.voltage0, bms_voltages_s.voltage1, bms_voltages_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_s.start_index, (long long unsigned int)bms_voltages_s.voltage0, (long long unsigned int)bms_voltages_s.voltage1, (long long unsigned int)bms_voltages_s.voltage2);
    
    bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
    deserialize_bms_VOLTAGES(buffer_bms_voltages, bms_voltages_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_d->start_index, (long long unsigned int)bms_voltages_d->voltage0, (long long unsigned int)bms_voltages_d->voltage1, (long long unsigned int)bms_voltages_d->voltage2);
    
    assert(memcmp(&bms_voltages_s, bms_voltages_d, sizeof(bms_VOLTAGES)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BALANCING */
    printf("bms_BALANCING:\n");
    uint8_t* buffer_bms_balancing = (uint8_t*)malloc(sizeof(bms_BALANCING));
    
    bms_BALANCING bms_balancing_s = { 21.0, {182, 152, 37} };
    serialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_s.board_index, bms_balancing_s.cells);
    printf("\tSerialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_s.board_index, (long long unsigned int)bms_balancing_s.cells[0], (long long unsigned int)bms_balancing_s.cells[1], (long long unsigned int)bms_balancing_s.cells[2]);
    
    bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
    deserialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_d);
    printf("\tDeserialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_d->board_index, (long long unsigned int)bms_balancing_d->cells[0], (long long unsigned int)bms_balancing_d->cells[1], (long long unsigned int)bms_balancing_d->cells[2]);
    
    assert(memcmp(&bms_balancing_s, bms_balancing_d, sizeof(bms_BALANCING)) == 0);
    puts("SUCCESS!\n");
        

/* bms_FW_UPDATE */
    printf("bms_FW_UPDATE:\n");
    uint8_t* buffer_bms_fw_update = (uint8_t*)malloc(sizeof(bms_FW_UPDATE));
    
    bms_FW_UPDATE bms_fw_update_s = { 40.0 };
    serialize_bms_FW_UPDATE(buffer_bms_fw_update, bms_fw_update_s.board_index);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)bms_fw_update_s.board_index);
    
    bms_FW_UPDATE* bms_fw_update_d = (bms_FW_UPDATE*)malloc(sizeof(bms_FW_UPDATE));
    deserialize_bms_FW_UPDATE(buffer_bms_fw_update, bms_fw_update_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)bms_fw_update_d->board_index);
    
    assert(memcmp(&bms_fw_update_s, bms_fw_update_d, sizeof(bms_FW_UPDATE)) == 0);
    puts("SUCCESS!\n");
        
}