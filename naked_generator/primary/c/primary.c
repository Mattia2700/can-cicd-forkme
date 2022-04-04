#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "primary.h"

/*
*   STDC Version check
*   check if STDC version is greater or equal than the minimum version required
*/
#define NAKED_STDC_MIN_VERSION 201112L
#if __STDC_VERSION__ < NAKED_STDC_MIN_VERSION
	#error "** STDC VERSION NOT SUPPORTED **"
#endif

/* primary_STEER_VERSION */
size_t serialize_primary_STEER_VERSION(uint8_t* buffer, uint8_t component_version, uint8_t cancicd_version) {
    primary_STEER_VERSION primary_steer_version = { component_version, cancicd_version };
	// assert(buf_len >= sizeof(primary_STEER_VERSION));
	memcpy(buffer, &primary_steer_version, sizeof(primary_STEER_VERSION));
    return sizeof(primary_STEER_VERSION);
} 
size_t deserialize_primary_STEER_VERSION(uint8_t* buffer, primary_STEER_VERSION* primary_steer_version) {
	// assert(buf_len >= sizeof(primary_STEER_VERSION));
	memcpy(primary_steer_version, buffer, sizeof(primary_STEER_VERSION));
    return sizeof(primary_STEER_VERSION);
}
/* primary_DAS_VERSION */
size_t serialize_primary_DAS_VERSION(uint8_t* buffer, uint8_t component_version, uint8_t cancicd_version) {
    primary_DAS_VERSION primary_das_version = { component_version, cancicd_version };
	// assert(buf_len >= sizeof(primary_DAS_VERSION));
	memcpy(buffer, &primary_das_version, sizeof(primary_DAS_VERSION));
    return sizeof(primary_DAS_VERSION);
} 
size_t deserialize_primary_DAS_VERSION(uint8_t* buffer, primary_DAS_VERSION* primary_das_version) {
	// assert(buf_len >= sizeof(primary_DAS_VERSION));
	memcpy(primary_das_version, buffer, sizeof(primary_DAS_VERSION));
    return sizeof(primary_DAS_VERSION);
}
/* primary_HV_VERSION */
size_t serialize_primary_HV_VERSION(uint8_t* buffer, uint8_t component_version, uint8_t cancicd_version) {
    primary_HV_VERSION primary_hv_version = { component_version, cancicd_version };
	// assert(buf_len >= sizeof(primary_HV_VERSION));
	memcpy(buffer, &primary_hv_version, sizeof(primary_HV_VERSION));
    return sizeof(primary_HV_VERSION);
} 
size_t deserialize_primary_HV_VERSION(uint8_t* buffer, primary_HV_VERSION* primary_hv_version) {
	// assert(buf_len >= sizeof(primary_HV_VERSION));
	memcpy(primary_hv_version, buffer, sizeof(primary_HV_VERSION));
    return sizeof(primary_HV_VERSION);
}
/* primary_LV_VERSION */
size_t serialize_primary_LV_VERSION(uint8_t* buffer, uint8_t component_version, uint8_t cancicd_version) {
    primary_LV_VERSION primary_lv_version = { component_version, cancicd_version };
	// assert(buf_len >= sizeof(primary_LV_VERSION));
	memcpy(buffer, &primary_lv_version, sizeof(primary_LV_VERSION));
    return sizeof(primary_LV_VERSION);
} 
size_t deserialize_primary_LV_VERSION(uint8_t* buffer, primary_LV_VERSION* primary_lv_version) {
	// assert(buf_len >= sizeof(primary_LV_VERSION));
	memcpy(primary_lv_version, buffer, sizeof(primary_LV_VERSION));
    return sizeof(primary_LV_VERSION);
}
/* primary_TLM_VERSION */
size_t serialize_primary_TLM_VERSION(uint8_t* buffer, uint8_t component_version, uint8_t cancicd_version) {
    primary_TLM_VERSION primary_tlm_version = { component_version, cancicd_version };
	// assert(buf_len >= sizeof(primary_TLM_VERSION));
	memcpy(buffer, &primary_tlm_version, sizeof(primary_TLM_VERSION));
    return sizeof(primary_TLM_VERSION);
} 
size_t deserialize_primary_TLM_VERSION(uint8_t* buffer, primary_TLM_VERSION* primary_tlm_version) {
	// assert(buf_len >= sizeof(primary_TLM_VERSION));
	memcpy(primary_tlm_version, buffer, sizeof(primary_TLM_VERSION));
    return sizeof(primary_TLM_VERSION);
}
/* primary_TIMESTAMP */
size_t serialize_primary_TIMESTAMP(uint8_t* buffer, uint32_t timestamp) {
    primary_TIMESTAMP primary_timestamp = { timestamp };
	// assert(buf_len >= sizeof(primary_TIMESTAMP));
	memcpy(buffer, &primary_timestamp, sizeof(primary_TIMESTAMP));
    return sizeof(primary_TIMESTAMP);
} 
size_t deserialize_primary_TIMESTAMP(uint8_t* buffer, primary_TIMESTAMP* primary_timestamp) {
	// assert(buf_len >= sizeof(primary_TIMESTAMP));
	memcpy(primary_timestamp, buffer, sizeof(primary_TIMESTAMP));
    return sizeof(primary_TIMESTAMP);
}
/* primary_SET_TLM_STATUS */
size_t serialize_primary_SET_TLM_STATUS(uint8_t* buffer, primary_Tlm_Status_Set tlm_status_set, primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    primary_SET_TLM_STATUS primary_set_tlm_status = { tlm_status_set, race_type, driver, circuit };
	// assert(buf_len >= sizeof(primary_SET_TLM_STATUS));
	memcpy(buffer, &primary_set_tlm_status, sizeof(primary_SET_TLM_STATUS));
    return sizeof(primary_SET_TLM_STATUS);
} 
size_t deserialize_primary_SET_TLM_STATUS(uint8_t* buffer, primary_SET_TLM_STATUS* primary_set_tlm_status) {
	// assert(buf_len >= sizeof(primary_SET_TLM_STATUS));
	memcpy(primary_set_tlm_status, buffer, sizeof(primary_SET_TLM_STATUS));
    return sizeof(primary_SET_TLM_STATUS);
}
/* primary_STEER_SYSTEM_STATUS */
size_t serialize_primary_STEER_SYSTEM_STATUS(uint8_t* buffer, uint8_t soc_temp) {
    primary_STEER_SYSTEM_STATUS primary_steer_system_status = { soc_temp };
	// assert(buf_len >= sizeof(primary_STEER_SYSTEM_STATUS));
	memcpy(buffer, &primary_steer_system_status, sizeof(primary_STEER_SYSTEM_STATUS));
    return sizeof(primary_STEER_SYSTEM_STATUS);
} 
size_t deserialize_primary_STEER_SYSTEM_STATUS(uint8_t* buffer, primary_STEER_SYSTEM_STATUS* primary_steer_system_status) {
	// assert(buf_len >= sizeof(primary_STEER_SYSTEM_STATUS));
	memcpy(primary_steer_system_status, buffer, sizeof(primary_STEER_SYSTEM_STATUS));
    return sizeof(primary_STEER_SYSTEM_STATUS);
}
/* primary_TLM_STATUS */
size_t serialize_primary_TLM_STATUS(uint8_t* buffer, primary_Tlm_Status tlm_status, primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    primary_TLM_STATUS primary_tlm_status = { tlm_status, race_type, driver, circuit };
	// assert(buf_len >= sizeof(primary_TLM_STATUS));
	memcpy(buffer, &primary_tlm_status, sizeof(primary_TLM_STATUS));
    return sizeof(primary_TLM_STATUS);
} 
size_t deserialize_primary_TLM_STATUS(uint8_t* buffer, primary_TLM_STATUS* primary_tlm_status) {
	// assert(buf_len >= sizeof(primary_TLM_STATUS));
	memcpy(primary_tlm_status, buffer, sizeof(primary_TLM_STATUS));
    return sizeof(primary_TLM_STATUS);
}
/* primary_CAR_STATUS */
size_t serialize_primary_CAR_STATUS(uint8_t* buffer, primary_Inverter_Status inverter_l, primary_Inverter_Status inverter_r, primary_Car_Status car_status) {
    primary_CAR_STATUS primary_car_status = { inverter_l, inverter_r, car_status };
	// assert(buf_len >= sizeof(primary_CAR_STATUS));
	memcpy(buffer, &primary_car_status, sizeof(primary_CAR_STATUS));
    return sizeof(primary_CAR_STATUS);
} 
size_t deserialize_primary_CAR_STATUS(uint8_t* buffer, primary_CAR_STATUS* primary_car_status) {
	// assert(buf_len >= sizeof(primary_CAR_STATUS));
	memcpy(primary_car_status, buffer, sizeof(primary_CAR_STATUS));
    return sizeof(primary_CAR_STATUS);
}
/* primary_DAS_ERRORS */
size_t serialize_primary_DAS_ERRORS(uint8_t* buffer, primary_Das_Errors das_error) {
    primary_DAS_ERRORS primary_das_errors = { {das_error[0]} };
	// assert(buf_len >= sizeof(primary_DAS_ERRORS));
	memcpy(buffer, &primary_das_errors, sizeof(primary_DAS_ERRORS));
    return sizeof(primary_DAS_ERRORS);
} 
size_t deserialize_primary_DAS_ERRORS(uint8_t* buffer, primary_DAS_ERRORS* primary_das_errors) {
	// assert(buf_len >= sizeof(primary_DAS_ERRORS));
	memcpy(primary_das_errors, buffer, sizeof(primary_DAS_ERRORS));
    return sizeof(primary_DAS_ERRORS);
}
/* primary_SPEED */
size_t serialize_primary_SPEED(uint8_t* buffer, uint16_t encoder_r, uint16_t encoder_l, uint16_t inverter_r, uint16_t inverter_l) {
    primary_SPEED primary_speed = { encoder_r, encoder_l, inverter_r, inverter_l };
	// assert(buf_len >= sizeof(primary_SPEED));
	memcpy(buffer, &primary_speed, sizeof(primary_SPEED));
    return sizeof(primary_SPEED);
} 
size_t deserialize_primary_SPEED(uint8_t* buffer, primary_SPEED* primary_speed) {
	// assert(buf_len >= sizeof(primary_SPEED));
	memcpy(primary_speed, buffer, sizeof(primary_SPEED));
    return sizeof(primary_SPEED);
}
/* primary_HV_VOLTAGE */
size_t serialize_primary_HV_VOLTAGE(uint8_t* buffer, uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage) {
    primary_HV_VOLTAGE primary_hv_voltage = { pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage };
	// assert(buf_len >= sizeof(primary_HV_VOLTAGE));
	memcpy(buffer, &primary_hv_voltage, sizeof(primary_HV_VOLTAGE));
    return sizeof(primary_HV_VOLTAGE);
} 
size_t deserialize_primary_HV_VOLTAGE(uint8_t* buffer, primary_HV_VOLTAGE* primary_hv_voltage) {
	// assert(buf_len >= sizeof(primary_HV_VOLTAGE));
	memcpy(primary_hv_voltage, buffer, sizeof(primary_HV_VOLTAGE));
    return sizeof(primary_HV_VOLTAGE);
}
/* primary_HV_CURRENT */
size_t serialize_primary_HV_CURRENT(uint8_t* buffer, uint16_t current, int16_t power) {
    primary_HV_CURRENT primary_hv_current = { current, power };
	// assert(buf_len >= sizeof(primary_HV_CURRENT));
	memcpy(buffer, &primary_hv_current, sizeof(primary_HV_CURRENT));
    return sizeof(primary_HV_CURRENT);
} 
size_t deserialize_primary_HV_CURRENT(uint8_t* buffer, primary_HV_CURRENT* primary_hv_current) {
	// assert(buf_len >= sizeof(primary_HV_CURRENT));
	memcpy(primary_hv_current, buffer, sizeof(primary_HV_CURRENT));
    return sizeof(primary_HV_CURRENT);
}
/* primary_HV_TEMP */
size_t serialize_primary_HV_TEMP(uint8_t* buffer, uint16_t average_temp, uint16_t max_temp, uint16_t min_temp) {
    primary_HV_TEMP primary_hv_temp = { average_temp, max_temp, min_temp };
	// assert(buf_len >= sizeof(primary_HV_TEMP));
	memcpy(buffer, &primary_hv_temp, sizeof(primary_HV_TEMP));
    return sizeof(primary_HV_TEMP);
} 
size_t deserialize_primary_HV_TEMP(uint8_t* buffer, primary_HV_TEMP* primary_hv_temp) {
	// assert(buf_len >= sizeof(primary_HV_TEMP));
	memcpy(primary_hv_temp, buffer, sizeof(primary_HV_TEMP));
    return sizeof(primary_HV_TEMP);
}
/* primary_HV_ERRORS */
size_t serialize_primary_HV_ERRORS(uint8_t* buffer, primary_Hv_Errors warnings, primary_Hv_Errors errors) {
    primary_HV_ERRORS primary_hv_errors = { {warnings[0], warnings[1]}, {errors[0], errors[1]} };
	// assert(buf_len >= sizeof(primary_HV_ERRORS));
	memcpy(buffer, &primary_hv_errors, sizeof(primary_HV_ERRORS));
    return sizeof(primary_HV_ERRORS);
} 
size_t deserialize_primary_HV_ERRORS(uint8_t* buffer, primary_HV_ERRORS* primary_hv_errors) {
	// assert(buf_len >= sizeof(primary_HV_ERRORS));
	memcpy(primary_hv_errors, buffer, sizeof(primary_HV_ERRORS));
    return sizeof(primary_HV_ERRORS);
}
/* primary_TS_STATUS */
size_t serialize_primary_TS_STATUS(uint8_t* buffer, primary_Ts_Status ts_status) {
    primary_TS_STATUS primary_ts_status = { ts_status };
	// assert(buf_len >= sizeof(primary_TS_STATUS));
	memcpy(buffer, &primary_ts_status, sizeof(primary_TS_STATUS));
    return sizeof(primary_TS_STATUS);
} 
size_t deserialize_primary_TS_STATUS(uint8_t* buffer, primary_TS_STATUS* primary_ts_status) {
	// assert(buf_len >= sizeof(primary_TS_STATUS));
	memcpy(primary_ts_status, buffer, sizeof(primary_TS_STATUS));
    return sizeof(primary_TS_STATUS);
}
/* primary_SET_TS_STATUS */
size_t serialize_primary_SET_TS_STATUS(uint8_t* buffer, primary_Ts_Status_Set ts_status_set) {
    primary_SET_TS_STATUS primary_set_ts_status = { ts_status_set };
	// assert(buf_len >= sizeof(primary_SET_TS_STATUS));
	memcpy(buffer, &primary_set_ts_status, sizeof(primary_SET_TS_STATUS));
    return sizeof(primary_SET_TS_STATUS);
} 
size_t deserialize_primary_SET_TS_STATUS(uint8_t* buffer, primary_SET_TS_STATUS* primary_set_ts_status) {
	// assert(buf_len >= sizeof(primary_SET_TS_STATUS));
	memcpy(primary_set_ts_status, buffer, sizeof(primary_SET_TS_STATUS));
    return sizeof(primary_SET_TS_STATUS);
}
/* primary_SET_CELL_BALANCING_STATUS */
size_t serialize_primary_SET_CELL_BALANCING_STATUS(uint8_t* buffer, primary_Set_Balancing_Status set_balancing_status) {
    primary_SET_CELL_BALANCING_STATUS primary_set_cell_balancing_status = { set_balancing_status };
	// assert(buf_len >= sizeof(primary_SET_CELL_BALANCING_STATUS));
	memcpy(buffer, &primary_set_cell_balancing_status, sizeof(primary_SET_CELL_BALANCING_STATUS));
    return sizeof(primary_SET_CELL_BALANCING_STATUS);
} 
size_t deserialize_primary_SET_CELL_BALANCING_STATUS(uint8_t* buffer, primary_SET_CELL_BALANCING_STATUS* primary_set_cell_balancing_status) {
	// assert(buf_len >= sizeof(primary_SET_CELL_BALANCING_STATUS));
	memcpy(primary_set_cell_balancing_status, buffer, sizeof(primary_SET_CELL_BALANCING_STATUS));
    return sizeof(primary_SET_CELL_BALANCING_STATUS);
}
/* primary_HANDCART_STATUS */
size_t serialize_primary_HANDCART_STATUS(uint8_t* buffer, bool connected) {
    primary_HANDCART_STATUS primary_handcart_status = { connected };
	// assert(buf_len >= sizeof(primary_HANDCART_STATUS));
	memcpy(buffer, &primary_handcart_status, sizeof(primary_HANDCART_STATUS));
    return sizeof(primary_HANDCART_STATUS);
} 
size_t deserialize_primary_HANDCART_STATUS(uint8_t* buffer, primary_HANDCART_STATUS* primary_handcart_status) {
	// assert(buf_len >= sizeof(primary_HANDCART_STATUS));
	memcpy(primary_handcart_status, buffer, sizeof(primary_HANDCART_STATUS));
    return sizeof(primary_HANDCART_STATUS);
}
/* primary_STEER_STATUS */
size_t serialize_primary_STEER_STATUS(uint8_t* buffer, primary_Traction_Control traction_control, primary_Map map) {
    primary_STEER_STATUS primary_steer_status = { traction_control, map };
	// assert(buf_len >= sizeof(primary_STEER_STATUS));
	memcpy(buffer, &primary_steer_status, sizeof(primary_STEER_STATUS));
    return sizeof(primary_STEER_STATUS);
} 
size_t deserialize_primary_STEER_STATUS(uint8_t* buffer, primary_STEER_STATUS* primary_steer_status) {
	// assert(buf_len >= sizeof(primary_STEER_STATUS));
	memcpy(primary_steer_status, buffer, sizeof(primary_STEER_STATUS));
    return sizeof(primary_STEER_STATUS);
}
/* primary_SET_CAR_STATUS */
size_t serialize_primary_SET_CAR_STATUS(uint8_t* buffer, primary_Car_Status_Set car_status_set) {
    primary_SET_CAR_STATUS primary_set_car_status = { car_status_set };
	// assert(buf_len >= sizeof(primary_SET_CAR_STATUS));
	memcpy(buffer, &primary_set_car_status, sizeof(primary_SET_CAR_STATUS));
    return sizeof(primary_SET_CAR_STATUS);
} 
size_t deserialize_primary_SET_CAR_STATUS(uint8_t* buffer, primary_SET_CAR_STATUS* primary_set_car_status) {
	// assert(buf_len >= sizeof(primary_SET_CAR_STATUS));
	memcpy(primary_set_car_status, buffer, sizeof(primary_SET_CAR_STATUS));
    return sizeof(primary_SET_CAR_STATUS);
}
/* primary_SET_PEDALS_RANGE */
size_t serialize_primary_SET_PEDALS_RANGE(uint8_t* buffer, primary_Bound bound, primary_Pedal pedal) {
    primary_SET_PEDALS_RANGE primary_set_pedals_range = { bound, pedal };
	// assert(buf_len >= sizeof(primary_SET_PEDALS_RANGE));
	memcpy(buffer, &primary_set_pedals_range, sizeof(primary_SET_PEDALS_RANGE));
    return sizeof(primary_SET_PEDALS_RANGE);
} 
size_t deserialize_primary_SET_PEDALS_RANGE(uint8_t* buffer, primary_SET_PEDALS_RANGE* primary_set_pedals_range) {
	// assert(buf_len >= sizeof(primary_SET_PEDALS_RANGE));
	memcpy(primary_set_pedals_range, buffer, sizeof(primary_SET_PEDALS_RANGE));
    return sizeof(primary_SET_PEDALS_RANGE);
}
/* primary_LV_CURRENT */
size_t serialize_primary_LV_CURRENT(uint8_t* buffer, uint8_t current) {
    primary_LV_CURRENT primary_lv_current = { current };
	// assert(buf_len >= sizeof(primary_LV_CURRENT));
	memcpy(buffer, &primary_lv_current, sizeof(primary_LV_CURRENT));
    return sizeof(primary_LV_CURRENT);
} 
size_t deserialize_primary_LV_CURRENT(uint8_t* buffer, primary_LV_CURRENT* primary_lv_current) {
	// assert(buf_len >= sizeof(primary_LV_CURRENT));
	memcpy(primary_lv_current, buffer, sizeof(primary_LV_CURRENT));
    return sizeof(primary_LV_CURRENT);
}
/* primary_LV_VOLTAGE */
size_t serialize_primary_LV_VOLTAGE(uint8_t* buffer, uint8_t voltage_1, uint8_t voltage_2, uint8_t voltage_3, uint8_t voltage_4, uint16_t total_voltage) {
    primary_LV_VOLTAGE primary_lv_voltage = { voltage_1, voltage_2, voltage_3, voltage_4, total_voltage };
	// assert(buf_len >= sizeof(primary_LV_VOLTAGE));
	memcpy(buffer, &primary_lv_voltage, sizeof(primary_LV_VOLTAGE));
    return sizeof(primary_LV_VOLTAGE);
} 
size_t deserialize_primary_LV_VOLTAGE(uint8_t* buffer, primary_LV_VOLTAGE* primary_lv_voltage) {
	// assert(buf_len >= sizeof(primary_LV_VOLTAGE));
	memcpy(primary_lv_voltage, buffer, sizeof(primary_LV_VOLTAGE));
    return sizeof(primary_LV_VOLTAGE);
}
/* primary_LV_TEMPERATURE */
size_t serialize_primary_LV_TEMPERATURE(uint8_t* buffer, uint8_t bp_temperature, uint8_t dcdc_temperature) {
    primary_LV_TEMPERATURE primary_lv_temperature = { bp_temperature, dcdc_temperature };
	// assert(buf_len >= sizeof(primary_LV_TEMPERATURE));
	memcpy(buffer, &primary_lv_temperature, sizeof(primary_LV_TEMPERATURE));
    return sizeof(primary_LV_TEMPERATURE);
} 
size_t deserialize_primary_LV_TEMPERATURE(uint8_t* buffer, primary_LV_TEMPERATURE* primary_lv_temperature) {
	// assert(buf_len >= sizeof(primary_LV_TEMPERATURE));
	memcpy(primary_lv_temperature, buffer, sizeof(primary_LV_TEMPERATURE));
    return sizeof(primary_LV_TEMPERATURE);
}
/* primary_COOLING_STATUS */
size_t serialize_primary_COOLING_STATUS(uint8_t* buffer, uint8_t hv_fan_speed, uint8_t lv_fan_speed, uint8_t pump_speed) {
    primary_COOLING_STATUS primary_cooling_status = { hv_fan_speed, lv_fan_speed, pump_speed };
	// assert(buf_len >= sizeof(primary_COOLING_STATUS));
	memcpy(buffer, &primary_cooling_status, sizeof(primary_COOLING_STATUS));
    return sizeof(primary_COOLING_STATUS);
} 
size_t deserialize_primary_COOLING_STATUS(uint8_t* buffer, primary_COOLING_STATUS* primary_cooling_status) {
	// assert(buf_len >= sizeof(primary_COOLING_STATUS));
	memcpy(primary_cooling_status, buffer, sizeof(primary_COOLING_STATUS));
    return sizeof(primary_COOLING_STATUS);
}
/* primary_HV_CELLS_VOLTAGE */
size_t serialize_primary_HV_CELLS_VOLTAGE(uint8_t* buffer, uint8_t cell_index, uint16_t voltage_0, uint16_t voltage_1, uint16_t voltage_2) {
    primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage = { cell_index, 0x00, voltage_0, voltage_1, voltage_2 };
	// assert(buf_len >= sizeof(primary_HV_CELLS_VOLTAGE));
	memcpy(buffer, &primary_hv_cells_voltage, sizeof(primary_HV_CELLS_VOLTAGE));
    return sizeof(primary_HV_CELLS_VOLTAGE);
} 
size_t deserialize_primary_HV_CELLS_VOLTAGE(uint8_t* buffer, primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage) {
	// assert(buf_len >= sizeof(primary_HV_CELLS_VOLTAGE));
	memcpy(primary_hv_cells_voltage, buffer, sizeof(primary_HV_CELLS_VOLTAGE));
    return sizeof(primary_HV_CELLS_VOLTAGE);
}
/* primary_HV_CELLS_TEMP */
size_t serialize_primary_HV_CELLS_TEMP(uint8_t* buffer, uint8_t cell_index, uint8_t temp_0, uint8_t temp_1, uint8_t temp_2, uint8_t temp_3, uint8_t temp_4, uint8_t temp_5, uint8_t temp_6) {
    primary_HV_CELLS_TEMP primary_hv_cells_temp = { cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6 };
	// assert(buf_len >= sizeof(primary_HV_CELLS_TEMP));
	memcpy(buffer, &primary_hv_cells_temp, sizeof(primary_HV_CELLS_TEMP));
    return sizeof(primary_HV_CELLS_TEMP);
} 
size_t deserialize_primary_HV_CELLS_TEMP(uint8_t* buffer, primary_HV_CELLS_TEMP* primary_hv_cells_temp) {
	// assert(buf_len >= sizeof(primary_HV_CELLS_TEMP));
	memcpy(primary_hv_cells_temp, buffer, sizeof(primary_HV_CELLS_TEMP));
    return sizeof(primary_HV_CELLS_TEMP);
}
/* primary_HV_CELL_BALANCING_STATUS */
size_t serialize_primary_HV_CELL_BALANCING_STATUS(uint8_t* buffer, primary_Balancing_Status balancing_status) {
    primary_HV_CELL_BALANCING_STATUS primary_hv_cell_balancing_status = { balancing_status };
	// assert(buf_len >= sizeof(primary_HV_CELL_BALANCING_STATUS));
	memcpy(buffer, &primary_hv_cell_balancing_status, sizeof(primary_HV_CELL_BALANCING_STATUS));
    return sizeof(primary_HV_CELL_BALANCING_STATUS);
} 
size_t deserialize_primary_HV_CELL_BALANCING_STATUS(uint8_t* buffer, primary_HV_CELL_BALANCING_STATUS* primary_hv_cell_balancing_status) {
	// assert(buf_len >= sizeof(primary_HV_CELL_BALANCING_STATUS));
	memcpy(primary_hv_cell_balancing_status, buffer, sizeof(primary_HV_CELL_BALANCING_STATUS));
    return sizeof(primary_HV_CELL_BALANCING_STATUS);
}
/* primary_INV_L_SET_TORQUE */
size_t serialize_primary_INV_L_SET_TORQUE(uint8_t* buffer, uint8_t regid, uint8_t lsb, uint8_t msb) {
    primary_INV_L_SET_TORQUE primary_inv_l_set_torque = { regid, lsb, msb };
	// assert(buf_len >= sizeof(primary_INV_L_SET_TORQUE));
	memcpy(buffer, &primary_inv_l_set_torque, sizeof(primary_INV_L_SET_TORQUE));
    return sizeof(primary_INV_L_SET_TORQUE);
} 
size_t deserialize_primary_INV_L_SET_TORQUE(uint8_t* buffer, primary_INV_L_SET_TORQUE* primary_inv_l_set_torque) {
	// assert(buf_len >= sizeof(primary_INV_L_SET_TORQUE));
	memcpy(primary_inv_l_set_torque, buffer, sizeof(primary_INV_L_SET_TORQUE));
    return sizeof(primary_INV_L_SET_TORQUE);
}
/* primary_INV_L_RESPONSE */
size_t serialize_primary_INV_L_RESPONSE(uint8_t* buffer, uint8_t reg_id, primary_Reg_Val reg_val) {
    primary_INV_L_RESPONSE primary_inv_l_response = { reg_id, {reg_val[0], reg_val[1], reg_val[2], reg_val[3]} };
	// assert(buf_len >= sizeof(primary_INV_L_RESPONSE));
	memcpy(buffer, &primary_inv_l_response, sizeof(primary_INV_L_RESPONSE));
    return sizeof(primary_INV_L_RESPONSE);
} 
size_t deserialize_primary_INV_L_RESPONSE(uint8_t* buffer, primary_INV_L_RESPONSE* primary_inv_l_response) {
	// assert(buf_len >= sizeof(primary_INV_L_RESPONSE));
	memcpy(primary_inv_l_response, buffer, sizeof(primary_INV_L_RESPONSE));
    return sizeof(primary_INV_L_RESPONSE);
}
