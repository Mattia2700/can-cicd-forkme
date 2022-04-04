#include <string>
#include "primary.pb.h"
extern "C" {
#include "../../../../naked_generator/primary/c/primary.h"
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

std::string primary_naked2protobuf(uint32_t id, uint8_t* payload){
    uint64_t bitset_value, current_value;

    switch(id) {

        case 1024: {
            primary_STEER_VERSION* primary_steer_version_d = (primary_STEER_VERSION*)malloc(sizeof(primary_STEER_VERSION));
            deserialize_primary_STEER_VERSION(payload, primary_steer_version_d);
    
            primary::SteerVersion primary_steer_version_p;
            primary_steer_version_p.set_component_version(static_cast<uint32_t>(primary_steer_version_d->component_version));
            primary_steer_version_p.set_cancicd_version(static_cast<uint32_t>(primary_steer_version_d->cancicd_version));

            free(primary_steer_version_d);

            std::string serialized;
            primary_steer_version_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1056: {
            primary_DAS_VERSION* primary_das_version_d = (primary_DAS_VERSION*)malloc(sizeof(primary_DAS_VERSION));
            deserialize_primary_DAS_VERSION(payload, primary_das_version_d);
    
            primary::DasVersion primary_das_version_p;
            primary_das_version_p.set_component_version(static_cast<uint32_t>(primary_das_version_d->component_version));
            primary_das_version_p.set_cancicd_version(static_cast<uint32_t>(primary_das_version_d->cancicd_version));

            free(primary_das_version_d);

            std::string serialized;
            primary_das_version_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1088: {
            primary_HV_VERSION* primary_hv_version_d = (primary_HV_VERSION*)malloc(sizeof(primary_HV_VERSION));
            deserialize_primary_HV_VERSION(payload, primary_hv_version_d);
    
            primary::HvVersion primary_hv_version_p;
            primary_hv_version_p.set_component_version(static_cast<uint32_t>(primary_hv_version_d->component_version));
            primary_hv_version_p.set_cancicd_version(static_cast<uint32_t>(primary_hv_version_d->cancicd_version));

            free(primary_hv_version_d);

            std::string serialized;
            primary_hv_version_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1120: {
            primary_LV_VERSION* primary_lv_version_d = (primary_LV_VERSION*)malloc(sizeof(primary_LV_VERSION));
            deserialize_primary_LV_VERSION(payload, primary_lv_version_d);
    
            primary::LvVersion primary_lv_version_p;
            primary_lv_version_p.set_component_version(static_cast<uint32_t>(primary_lv_version_d->component_version));
            primary_lv_version_p.set_cancicd_version(static_cast<uint32_t>(primary_lv_version_d->cancicd_version));

            free(primary_lv_version_d);

            std::string serialized;
            primary_lv_version_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1152: {
            primary_TLM_VERSION* primary_tlm_version_d = (primary_TLM_VERSION*)malloc(sizeof(primary_TLM_VERSION));
            deserialize_primary_TLM_VERSION(payload, primary_tlm_version_d);
    
            primary::TlmVersion primary_tlm_version_p;
            primary_tlm_version_p.set_component_version(static_cast<uint32_t>(primary_tlm_version_d->component_version));
            primary_tlm_version_p.set_cancicd_version(static_cast<uint32_t>(primary_tlm_version_d->cancicd_version));

            free(primary_tlm_version_d);

            std::string serialized;
            primary_tlm_version_p.SerializeToString(&serialized);
            return serialized;
        }

        case 256: {
            primary_TIMESTAMP* primary_timestamp_d = (primary_TIMESTAMP*)malloc(sizeof(primary_TIMESTAMP));
            deserialize_primary_TIMESTAMP(payload, primary_timestamp_d);
    
            primary::Timestamp primary_timestamp_p;
            primary_timestamp_p.set_timestamp(static_cast<uint32_t>(primary_timestamp_d->timestamp));

            free(primary_timestamp_d);

            std::string serialized;
            primary_timestamp_p.SerializeToString(&serialized);
            return serialized;
        }

        case 257: {
            primary_SET_TLM_STATUS* primary_set_tlm_status_d = (primary_SET_TLM_STATUS*)malloc(sizeof(primary_SET_TLM_STATUS));
            deserialize_primary_SET_TLM_STATUS(payload, primary_set_tlm_status_d);
    
            primary::SetTlmStatus primary_set_tlm_status_p;
            primary_set_tlm_status_p.set_tlm_status_set(static_cast<primary::TlmStatusSetType>(primary_set_tlm_status_d->tlm_status_set));
            primary_set_tlm_status_p.set_race_type(static_cast<primary::RaceTypeType>(primary_set_tlm_status_d->race_type));
            primary_set_tlm_status_p.set_driver(static_cast<uint32_t>(primary_set_tlm_status_d->driver));
            primary_set_tlm_status_p.set_circuit(static_cast<uint32_t>(primary_set_tlm_status_d->circuit));

            free(primary_set_tlm_status_d);

            std::string serialized;
            primary_set_tlm_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 258: {
            primary_TLM_STATUS* primary_tlm_status_d = (primary_TLM_STATUS*)malloc(sizeof(primary_TLM_STATUS));
            deserialize_primary_TLM_STATUS(payload, primary_tlm_status_d);
    
            primary::TlmStatus primary_tlm_status_p;
            primary_tlm_status_p.set_tlm_status(static_cast<primary::TlmStatusType>(primary_tlm_status_d->tlm_status));
            primary_tlm_status_p.set_race_type(static_cast<primary::RaceTypeType>(primary_tlm_status_d->race_type));
            primary_tlm_status_p.set_driver(static_cast<uint32_t>(primary_tlm_status_d->driver));
            primary_tlm_status_p.set_circuit(static_cast<uint32_t>(primary_tlm_status_d->circuit));

            free(primary_tlm_status_d);

            std::string serialized;
            primary_tlm_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1793: {
            primary_STEER_SYSTEM_STATUS* primary_steer_system_status_d = (primary_STEER_SYSTEM_STATUS*)malloc(sizeof(primary_STEER_SYSTEM_STATUS));
            deserialize_primary_STEER_SYSTEM_STATUS(payload, primary_steer_system_status_d);
    
            primary::SteerSystemStatus primary_steer_system_status_p;
            primary_steer_system_status_p.set_soc_temp(static_cast<uint32_t>(primary_steer_system_status_d->soc_temp));

            free(primary_steer_system_status_d);

            std::string serialized;
            primary_steer_system_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 771: {
            primary_HV_VOLTAGE* primary_hv_voltage_d = (primary_HV_VOLTAGE*)malloc(sizeof(primary_HV_VOLTAGE));
            deserialize_primary_HV_VOLTAGE(payload, primary_hv_voltage_d);
    
            primary::HvVoltage primary_hv_voltage_p;
            primary_hv_voltage_p.set_pack_voltage(static_cast<uint32_t>(primary_hv_voltage_d->pack_voltage));
            primary_hv_voltage_p.set_bus_voltage(static_cast<uint32_t>(primary_hv_voltage_d->bus_voltage));
            primary_hv_voltage_p.set_max_cell_voltage(static_cast<uint32_t>(primary_hv_voltage_d->max_cell_voltage));
            primary_hv_voltage_p.set_min_cell_voltage(static_cast<uint32_t>(primary_hv_voltage_d->min_cell_voltage));

            free(primary_hv_voltage_d);

            std::string serialized;
            primary_hv_voltage_p.SerializeToString(&serialized);
            return serialized;
        }

        case 803: {
            primary_HV_CURRENT* primary_hv_current_d = (primary_HV_CURRENT*)malloc(sizeof(primary_HV_CURRENT));
            deserialize_primary_HV_CURRENT(payload, primary_hv_current_d);
    
            primary::HvCurrent primary_hv_current_p;
            primary_hv_current_p.set_current(static_cast<uint32_t>(primary_hv_current_d->current));
            primary_hv_current_p.set_power(static_cast<int32_t>(primary_hv_current_d->power));

            free(primary_hv_current_d);

            std::string serialized;
            primary_hv_current_p.SerializeToString(&serialized);
            return serialized;
        }

        case 835: {
            primary_HV_TEMP* primary_hv_temp_d = (primary_HV_TEMP*)malloc(sizeof(primary_HV_TEMP));
            deserialize_primary_HV_TEMP(payload, primary_hv_temp_d);
    
            primary::HvTemp primary_hv_temp_p;
            primary_hv_temp_p.set_average_temp(static_cast<uint32_t>(primary_hv_temp_d->average_temp));
            primary_hv_temp_p.set_max_temp(static_cast<uint32_t>(primary_hv_temp_d->max_temp));
            primary_hv_temp_p.set_min_temp(static_cast<uint32_t>(primary_hv_temp_d->min_temp));

            free(primary_hv_temp_d);

            std::string serialized;
            primary_hv_temp_p.SerializeToString(&serialized);
            return serialized;
        }

        case 3: {
            primary_HV_ERRORS* primary_hv_errors_d = (primary_HV_ERRORS*)malloc(sizeof(primary_HV_ERRORS));
            deserialize_primary_HV_ERRORS(payload, primary_hv_errors_d);
    
            primary::HvErrors primary_hv_errors_p;
            BITSET_VALUE(primary_hv_errors_d->warnings, sizeof(primary_hv_errors_d->warnings))
            primary_hv_errors_p.set_warnings(bitset_value);
            BITSET_VALUE(primary_hv_errors_d->errors, sizeof(primary_hv_errors_d->errors))
            primary_hv_errors_p.set_errors(bitset_value);

            free(primary_hv_errors_d);

            std::string serialized;
            primary_hv_errors_p.SerializeToString(&serialized);
            return serialized;
        }

        case 35: {
            primary_TS_STATUS* primary_ts_status_d = (primary_TS_STATUS*)malloc(sizeof(primary_TS_STATUS));
            deserialize_primary_TS_STATUS(payload, primary_ts_status_d);
    
            primary::TsStatus primary_ts_status_p;
            primary_ts_status_p.set_ts_status(static_cast<primary::TsStatusType>(primary_ts_status_d->ts_status));

            free(primary_ts_status_d);

            std::string serialized;
            primary_ts_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 4: {
            primary_SET_TS_STATUS* primary_set_ts_status_d = (primary_SET_TS_STATUS*)malloc(sizeof(primary_SET_TS_STATUS));
            deserialize_primary_SET_TS_STATUS(payload, primary_set_ts_status_d);
    
            primary::SetTsStatus primary_set_ts_status_p;
            primary_set_ts_status_p.set_ts_status_set(static_cast<primary::TsStatusSetType>(primary_set_ts_status_d->ts_status_set));

            free(primary_set_ts_status_d);

            std::string serialized;
            primary_set_ts_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 261: {
            primary_STEER_STATUS* primary_steer_status_d = (primary_STEER_STATUS*)malloc(sizeof(primary_STEER_STATUS));
            deserialize_primary_STEER_STATUS(payload, primary_steer_status_d);
    
            primary::SteerStatus primary_steer_status_p;
            primary_steer_status_p.set_traction_control(static_cast<primary::TractionControlType>(primary_steer_status_d->traction_control));
            primary_steer_status_p.set_map(static_cast<primary::MapType>(primary_steer_status_d->map));

            free(primary_steer_status_d);

            std::string serialized;
            primary_steer_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 773: {
            primary_SET_CAR_STATUS* primary_set_car_status_d = (primary_SET_CAR_STATUS*)malloc(sizeof(primary_SET_CAR_STATUS));
            deserialize_primary_SET_CAR_STATUS(payload, primary_set_car_status_d);
    
            primary::SetCarStatus primary_set_car_status_p;
            primary_set_car_status_p.set_car_status_set(static_cast<primary::CarStatusSetType>(primary_set_car_status_d->car_status_set));

            free(primary_set_car_status_d);

            std::string serialized;
            primary_set_car_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1029: {
            primary_SET_PEDALS_RANGE* primary_set_pedals_range_d = (primary_SET_PEDALS_RANGE*)malloc(sizeof(primary_SET_PEDALS_RANGE));
            deserialize_primary_SET_PEDALS_RANGE(payload, primary_set_pedals_range_d);
    
            primary::SetPedalsRange primary_set_pedals_range_p;
            primary_set_pedals_range_p.set_bound(static_cast<primary::BoundType>(primary_set_pedals_range_d->bound));
            primary_set_pedals_range_p.set_pedal(static_cast<primary::PedalType>(primary_set_pedals_range_d->pedal));

            free(primary_set_pedals_range_d);

            std::string serialized;
            primary_set_pedals_range_p.SerializeToString(&serialized);
            return serialized;
        }

        case 514: {
            primary_CAR_STATUS* primary_car_status_d = (primary_CAR_STATUS*)malloc(sizeof(primary_CAR_STATUS));
            deserialize_primary_CAR_STATUS(payload, primary_car_status_d);
    
            primary::CarStatus primary_car_status_p;
            primary_car_status_p.set_inverter_l(static_cast<primary::InverterStatusType>(primary_car_status_d->inverter_l));
            primary_car_status_p.set_inverter_r(static_cast<primary::InverterStatusType>(primary_car_status_d->inverter_r));
            primary_car_status_p.set_car_status(static_cast<primary::CarStatusType>(primary_car_status_d->car_status));

            free(primary_car_status_d);

            std::string serialized;
            primary_car_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 2: {
            primary_DAS_ERRORS* primary_das_errors_d = (primary_DAS_ERRORS*)malloc(sizeof(primary_DAS_ERRORS));
            deserialize_primary_DAS_ERRORS(payload, primary_das_errors_d);
    
            primary::DasErrors primary_das_errors_p;
            BITSET_VALUE(primary_das_errors_d->das_error, sizeof(primary_das_errors_d->das_error))
            primary_das_errors_p.set_das_error(bitset_value);

            free(primary_das_errors_d);

            std::string serialized;
            primary_das_errors_p.SerializeToString(&serialized);
            return serialized;
        }

        case 774: {
            primary_LV_CURRENT* primary_lv_current_d = (primary_LV_CURRENT*)malloc(sizeof(primary_LV_CURRENT));
            deserialize_primary_LV_CURRENT(payload, primary_lv_current_d);
    
            primary::LvCurrent primary_lv_current_p;
            primary_lv_current_p.set_current(static_cast<uint32_t>(primary_lv_current_d->current));

            free(primary_lv_current_d);

            std::string serialized;
            primary_lv_current_p.SerializeToString(&serialized);
            return serialized;
        }

        case 806: {
            primary_LV_VOLTAGE* primary_lv_voltage_d = (primary_LV_VOLTAGE*)malloc(sizeof(primary_LV_VOLTAGE));
            deserialize_primary_LV_VOLTAGE(payload, primary_lv_voltage_d);
    
            primary::LvVoltage primary_lv_voltage_p;
            primary_lv_voltage_p.set_total_voltage(static_cast<uint32_t>(primary_lv_voltage_d->total_voltage));
            primary_lv_voltage_p.set_voltage_1(static_cast<uint32_t>(primary_lv_voltage_d->voltage_1));
            primary_lv_voltage_p.set_voltage_2(static_cast<uint32_t>(primary_lv_voltage_d->voltage_2));
            primary_lv_voltage_p.set_voltage_3(static_cast<uint32_t>(primary_lv_voltage_d->voltage_3));
            primary_lv_voltage_p.set_voltage_4(static_cast<uint32_t>(primary_lv_voltage_d->voltage_4));

            free(primary_lv_voltage_d);

            std::string serialized;
            primary_lv_voltage_p.SerializeToString(&serialized);
            return serialized;
        }

        case 838: {
            primary_LV_TEMPERATURE* primary_lv_temperature_d = (primary_LV_TEMPERATURE*)malloc(sizeof(primary_LV_TEMPERATURE));
            deserialize_primary_LV_TEMPERATURE(payload, primary_lv_temperature_d);
    
            primary::LvTemperature primary_lv_temperature_p;
            primary_lv_temperature_p.set_bp_temperature(static_cast<uint32_t>(primary_lv_temperature_d->bp_temperature));
            primary_lv_temperature_p.set_dcdc_temperature(static_cast<uint32_t>(primary_lv_temperature_d->dcdc_temperature));

            free(primary_lv_temperature_d);

            std::string serialized;
            primary_lv_temperature_p.SerializeToString(&serialized);
            return serialized;
        }

        case 870: {
            primary_COOLING_STATUS* primary_cooling_status_d = (primary_COOLING_STATUS*)malloc(sizeof(primary_COOLING_STATUS));
            deserialize_primary_COOLING_STATUS(payload, primary_cooling_status_d);
    
            primary::CoolingStatus primary_cooling_status_p;
            primary_cooling_status_p.set_hv_fan_speed(static_cast<uint32_t>(primary_cooling_status_d->hv_fan_speed));
            primary_cooling_status_p.set_lv_fan_speed(static_cast<uint32_t>(primary_cooling_status_d->lv_fan_speed));
            primary_cooling_status_p.set_pump_speed(static_cast<uint32_t>(primary_cooling_status_d->pump_speed));

            free(primary_cooling_status_d);

            std::string serialized;
            primary_cooling_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1: {
            primary::Marker primary_marker_p;

            std::string serialized;
            primary_marker_p.SerializeToString(&serialized);
            return serialized;
        }

        case 519: {
            primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage_d = (primary_HV_CELLS_VOLTAGE*)malloc(sizeof(primary_HV_CELLS_VOLTAGE));
            deserialize_primary_HV_CELLS_VOLTAGE(payload, primary_hv_cells_voltage_d);
    
            primary::HvCellsVoltage primary_hv_cells_voltage_p;
            primary_hv_cells_voltage_p.set_cell_index(static_cast<uint32_t>(primary_hv_cells_voltage_d->cell_index));
            primary_hv_cells_voltage_p.set_voltage_0(static_cast<uint32_t>(primary_hv_cells_voltage_d->voltage_0));
            primary_hv_cells_voltage_p.set_voltage_1(static_cast<uint32_t>(primary_hv_cells_voltage_d->voltage_1));
            primary_hv_cells_voltage_p.set_voltage_2(static_cast<uint32_t>(primary_hv_cells_voltage_d->voltage_2));

            free(primary_hv_cells_voltage_d);

            std::string serialized;
            primary_hv_cells_voltage_p.SerializeToString(&serialized);
            return serialized;
        }

        case 551: {
            primary_HV_CELLS_TEMP* primary_hv_cells_temp_d = (primary_HV_CELLS_TEMP*)malloc(sizeof(primary_HV_CELLS_TEMP));
            deserialize_primary_HV_CELLS_TEMP(payload, primary_hv_cells_temp_d);
    
            primary::HvCellsTemp primary_hv_cells_temp_p;
            primary_hv_cells_temp_p.set_cell_index(static_cast<uint32_t>(primary_hv_cells_temp_d->cell_index));
            primary_hv_cells_temp_p.set_temp_0(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_0));
            primary_hv_cells_temp_p.set_temp_1(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_1));
            primary_hv_cells_temp_p.set_temp_2(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_2));
            primary_hv_cells_temp_p.set_temp_3(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_3));
            primary_hv_cells_temp_p.set_temp_4(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_4));
            primary_hv_cells_temp_p.set_temp_5(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_5));
            primary_hv_cells_temp_p.set_temp_6(static_cast<uint32_t>(primary_hv_cells_temp_d->temp_6));

            free(primary_hv_cells_temp_d);

            std::string serialized;
            primary_hv_cells_temp_p.SerializeToString(&serialized);
            return serialized;
        }

        case 583: {
            primary_HV_CELL_BALANCING_STATUS* primary_hv_cell_balancing_status_d = (primary_HV_CELL_BALANCING_STATUS*)malloc(sizeof(primary_HV_CELL_BALANCING_STATUS));
            deserialize_primary_HV_CELL_BALANCING_STATUS(payload, primary_hv_cell_balancing_status_d);
    
            primary::HvCellBalancingStatus primary_hv_cell_balancing_status_p;
            primary_hv_cell_balancing_status_p.set_balancing_status(static_cast<primary::BalancingStatusType>(primary_hv_cell_balancing_status_d->balancing_status));

            free(primary_hv_cell_balancing_status_d);

            std::string serialized;
            primary_hv_cell_balancing_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 516: {
            primary_SET_CELL_BALANCING_STATUS* primary_set_cell_balancing_status_d = (primary_SET_CELL_BALANCING_STATUS*)malloc(sizeof(primary_SET_CELL_BALANCING_STATUS));
            deserialize_primary_SET_CELL_BALANCING_STATUS(payload, primary_set_cell_balancing_status_d);
    
            primary::SetCellBalancingStatus primary_set_cell_balancing_status_p;
            primary_set_cell_balancing_status_p.set_set_balancing_status(static_cast<primary::SetBalancingStatusType>(primary_set_cell_balancing_status_d->set_balancing_status));

            free(primary_set_cell_balancing_status_d);

            std::string serialized;
            primary_set_cell_balancing_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 772: {
            primary_HANDCART_STATUS* primary_handcart_status_d = (primary_HANDCART_STATUS*)malloc(sizeof(primary_HANDCART_STATUS));
            deserialize_primary_HANDCART_STATUS(payload, primary_handcart_status_d);
    
            primary::HandcartStatus primary_handcart_status_p;
            primary_handcart_status_p.set_connected(static_cast<bool>(primary_handcart_status_d->connected));

            free(primary_handcart_status_d);

            std::string serialized;
            primary_handcart_status_p.SerializeToString(&serialized);
            return serialized;
        }

        case 546: {
            primary_SPEED* primary_speed_d = (primary_SPEED*)malloc(sizeof(primary_SPEED));
            deserialize_primary_SPEED(payload, primary_speed_d);
    
            primary::Speed primary_speed_p;
            primary_speed_p.set_encoder_r(static_cast<uint32_t>(primary_speed_d->encoder_r));
            primary_speed_p.set_encoder_l(static_cast<uint32_t>(primary_speed_d->encoder_l));
            primary_speed_p.set_inverter_r(static_cast<uint32_t>(primary_speed_d->inverter_r));
            primary_speed_p.set_inverter_l(static_cast<uint32_t>(primary_speed_d->inverter_l));

            free(primary_speed_d);

            std::string serialized;
            primary_speed_p.SerializeToString(&serialized);
            return serialized;
        }

        case 513: {
            primary_INV_L_SET_TORQUE* primary_inv_l_set_torque_d = (primary_INV_L_SET_TORQUE*)malloc(sizeof(primary_INV_L_SET_TORQUE));
            deserialize_primary_INV_L_SET_TORQUE(payload, primary_inv_l_set_torque_d);
    
            primary::InvLSetTorque primary_inv_l_set_torque_p;
            primary_inv_l_set_torque_p.set_regid(static_cast<uint32_t>(primary_inv_l_set_torque_d->regid));
            primary_inv_l_set_torque_p.set_lsb(static_cast<uint32_t>(primary_inv_l_set_torque_d->lsb));
            primary_inv_l_set_torque_p.set_msb(static_cast<uint32_t>(primary_inv_l_set_torque_d->msb));

            free(primary_inv_l_set_torque_d);

            std::string serialized;
            primary_inv_l_set_torque_p.SerializeToString(&serialized);
            return serialized;
        }

        case 385: {
            primary_INV_L_RESPONSE* primary_inv_l_response_d = (primary_INV_L_RESPONSE*)malloc(sizeof(primary_INV_L_RESPONSE));
            deserialize_primary_INV_L_RESPONSE(payload, primary_inv_l_response_d);
    
            primary::InvLResponse primary_inv_l_response_p;
            primary_inv_l_response_p.set_reg_id(static_cast<uint32_t>(primary_inv_l_response_d->reg_id));
            BITSET_VALUE(primary_inv_l_response_d->reg_val, sizeof(primary_inv_l_response_d->reg_val))
            primary_inv_l_response_p.set_reg_val(bitset_value);

            free(primary_inv_l_response_d);

            std::string serialized;
            primary_inv_l_response_p.SerializeToString(&serialized);
            return serialized;
        }

    }
    throw std::runtime_error("Unknown message id");
}