#include <string>
#include "bms.pb.h"
extern "C" {
#include "../../../../naked_generator/bms/c/bms.h"
}

#define BITSET_VALUE(bitset, size) \
    bitset_value=0; \
    current_value=0; \
    for(short i = 0; i < size*8; i++){ \
        current_value += getBit(bitset, i); \
        if(i%8 == 7){ \
            short shift_amount = i/8; \
            current_value <<= 8*shift_amount; \
            bitset_value += current_value; \
            current_value = 0; \
        } \
    }

std::string bms_naked2protobuf(uint32_t id, uint8_t* payload){
    uint64_t bitset_value, current_value;

    switch(id) {

        case 1536: case 1568: case 1600: case 1632: case 1664: case 1696: {
            bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
            deserialize_bms_BOARD_STATUS(payload, bms_board_status_d);
    
            bms::BoardStatus bms_board_status_p;
            BITSET_VALUE(bms_board_status_d->errors, sizeof(bms_board_status_d->errors))
            bms_board_status_p.set_errors(bitset_value);
            bms_board_status_p.set_balancing_status(static_cast<bms::BalancingStatusType>(bms_board_status_d->balancing_status));

            free(bms_board_status_d);

            std::string serialized;
            bms_board_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1281: case 1313: case 1345: case 1377: case 1409: case 1441: {
            bms_TEMPERATURES* bms_temperatures_d = (bms_TEMPERATURES*)malloc(sizeof(bms_TEMPERATURES));
            deserialize_bms_TEMPERATURES(payload, bms_temperatures_d);
    
            bms::Temperatures bms_temperatures_p;
            bms_temperatures_p.set_start_index(static_cast<uint32_t>(bms_temperatures_d->start_index));
            bms_temperatures_p.set_temp0(static_cast<uint32_t>(bms_temperatures_d->temp0));
            bms_temperatures_p.set_temp1(static_cast<uint32_t>(bms_temperatures_d->temp1));
            bms_temperatures_p.set_temp2(static_cast<uint32_t>(bms_temperatures_d->temp2));
            bms_temperatures_p.set_temp3(static_cast<uint32_t>(bms_temperatures_d->temp3));
            bms_temperatures_p.set_temp4(static_cast<uint32_t>(bms_temperatures_d->temp4));
            bms_temperatures_p.set_temp5(static_cast<uint32_t>(bms_temperatures_d->temp5));

            free(bms_temperatures_d);

            std::string serialized;
            bms_temperatures_p.SerializeToString(&serialized);
            return serialized;
        }

        case 514: case 546: case 578: case 610: case 642: case 674: {
            bms_VOLTAGES* bms_voltages_d = (bms_VOLTAGES*)malloc(sizeof(bms_VOLTAGES));
            deserialize_bms_VOLTAGES(payload, bms_voltages_d);
    
            bms::Voltages bms_voltages_p;
            bms_voltages_p.set_start_index(static_cast<uint32_t>(bms_voltages_d->start_index));
            bms_voltages_p.set_voltage0(static_cast<uint32_t>(bms_voltages_d->voltage0));
            bms_voltages_p.set_voltage1(static_cast<uint32_t>(bms_voltages_d->voltage1));
            bms_voltages_p.set_voltage2(static_cast<uint32_t>(bms_voltages_d->voltage2));

            free(bms_voltages_d);

            std::string serialized;
            bms_voltages_p.SerializeToString(&serialized);
            return serialized;
        }

        case 515: {
            bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
            deserialize_bms_BALANCING(payload, bms_balancing_d);
    
            bms::Balancing bms_balancing_p;
            bms_balancing_p.set_board_index(static_cast<uint32_t>(bms_balancing_d->board_index));
            BITSET_VALUE(bms_balancing_d->cells, sizeof(bms_balancing_d->cells))
            bms_balancing_p.set_cells(bitset_value);

            free(bms_balancing_d);

            std::string serialized;
            bms_balancing_p.SerializeToString(&serialized);
            return serialized;
        }

        case 260: {
            bms_FW_UPDATE* bms_fw_update_d = (bms_FW_UPDATE*)malloc(sizeof(bms_FW_UPDATE));
            deserialize_bms_FW_UPDATE(payload, bms_fw_update_d);
    
            bms::FwUpdate bms_fw_update_p;
            bms_fw_update_p.set_board_index(static_cast<uint32_t>(bms_fw_update_d->board_index));

            free(bms_fw_update_d);

            std::string serialized;
            bms_fw_update_p.SerializeToString(&serialized);
            return serialized;
        }

    }
    throw std::runtime_error("Unknown message id");
}