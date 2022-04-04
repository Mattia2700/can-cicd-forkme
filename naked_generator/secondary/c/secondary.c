#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "secondary.h"

/*
*   STDC Version check
*   check if STDC version is greater or equal than the minimum version required
*/
#define NAKED_STDC_MIN_VERSION 201112L
#if __STDC_VERSION__ < NAKED_STDC_MIN_VERSION
	#error "** STDC VERSION NOT SUPPORTED **"
#endif

/* secondary_IMU_ANGULAR_RATE */
size_t serialize_secondary_IMU_ANGULAR_RATE(uint8_t* buffer, uint16_t ang_rate_x, uint16_t ang_rate_y, uint16_t ang_rate_z) {
    secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate = { ang_rate_x, ang_rate_y, ang_rate_z };
	// assert(buf_len >= sizeof(secondary_IMU_ANGULAR_RATE));
	memcpy(buffer, &secondary_imu_angular_rate, sizeof(secondary_IMU_ANGULAR_RATE));
    return sizeof(secondary_IMU_ANGULAR_RATE);
} 
size_t deserialize_secondary_IMU_ANGULAR_RATE(uint8_t* buffer, secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate) {
	// assert(buf_len >= sizeof(secondary_IMU_ANGULAR_RATE));
	memcpy(secondary_imu_angular_rate, buffer, sizeof(secondary_IMU_ANGULAR_RATE));
    return sizeof(secondary_IMU_ANGULAR_RATE);
}
/* secondary_IMU_ACCELERATION */
size_t serialize_secondary_IMU_ACCELERATION(uint8_t* buffer, uint16_t accel_x, uint16_t accel_y, uint16_t accel_z) {
    secondary_IMU_ACCELERATION secondary_imu_acceleration = { accel_x, accel_y, accel_z };
	// assert(buf_len >= sizeof(secondary_IMU_ACCELERATION));
	memcpy(buffer, &secondary_imu_acceleration, sizeof(secondary_IMU_ACCELERATION));
    return sizeof(secondary_IMU_ACCELERATION);
} 
size_t deserialize_secondary_IMU_ACCELERATION(uint8_t* buffer, secondary_IMU_ACCELERATION* secondary_imu_acceleration) {
	// assert(buf_len >= sizeof(secondary_IMU_ACCELERATION));
	memcpy(secondary_imu_acceleration, buffer, sizeof(secondary_IMU_ACCELERATION));
    return sizeof(secondary_IMU_ACCELERATION);
}
/* secondary_IRTS_FL_0 */
size_t serialize_secondary_IRTS_FL_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4) {
    secondary_IRTS_FL_0 secondary_irts_fl_0 = { channel1, channel2, channel3, channel4 };
	// assert(buf_len >= sizeof(secondary_IRTS_FL_0));
	memcpy(buffer, &secondary_irts_fl_0, sizeof(secondary_IRTS_FL_0));
    return sizeof(secondary_IRTS_FL_0);
} 
size_t deserialize_secondary_IRTS_FL_0(uint8_t* buffer, secondary_IRTS_FL_0* secondary_irts_fl_0) {
	// assert(buf_len >= sizeof(secondary_IRTS_FL_0));
	memcpy(secondary_irts_fl_0, buffer, sizeof(secondary_IRTS_FL_0));
    return sizeof(secondary_IRTS_FL_0);
}
/* secondary_IRTS_FL_1 */
size_t serialize_secondary_IRTS_FL_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8) {
    secondary_IRTS_FL_1 secondary_irts_fl_1 = { channel5, channel6, channel7, channel8 };
	// assert(buf_len >= sizeof(secondary_IRTS_FL_1));
	memcpy(buffer, &secondary_irts_fl_1, sizeof(secondary_IRTS_FL_1));
    return sizeof(secondary_IRTS_FL_1);
} 
size_t deserialize_secondary_IRTS_FL_1(uint8_t* buffer, secondary_IRTS_FL_1* secondary_irts_fl_1) {
	// assert(buf_len >= sizeof(secondary_IRTS_FL_1));
	memcpy(secondary_irts_fl_1, buffer, sizeof(secondary_IRTS_FL_1));
    return sizeof(secondary_IRTS_FL_1);
}
/* secondary_IRTS_FL_2 */
size_t serialize_secondary_IRTS_FL_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12) {
    secondary_IRTS_FL_2 secondary_irts_fl_2 = { channel9, channel10, channel11, channel12 };
	// assert(buf_len >= sizeof(secondary_IRTS_FL_2));
	memcpy(buffer, &secondary_irts_fl_2, sizeof(secondary_IRTS_FL_2));
    return sizeof(secondary_IRTS_FL_2);
} 
size_t deserialize_secondary_IRTS_FL_2(uint8_t* buffer, secondary_IRTS_FL_2* secondary_irts_fl_2) {
	// assert(buf_len >= sizeof(secondary_IRTS_FL_2));
	memcpy(secondary_irts_fl_2, buffer, sizeof(secondary_IRTS_FL_2));
    return sizeof(secondary_IRTS_FL_2);
}
/* secondary_IRTS_FL_3 */
size_t serialize_secondary_IRTS_FL_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16) {
    secondary_IRTS_FL_3 secondary_irts_fl_3 = { channel13, channel14, channel15, channel16 };
	// assert(buf_len >= sizeof(secondary_IRTS_FL_3));
	memcpy(buffer, &secondary_irts_fl_3, sizeof(secondary_IRTS_FL_3));
    return sizeof(secondary_IRTS_FL_3);
} 
size_t deserialize_secondary_IRTS_FL_3(uint8_t* buffer, secondary_IRTS_FL_3* secondary_irts_fl_3) {
	// assert(buf_len >= sizeof(secondary_IRTS_FL_3));
	memcpy(secondary_irts_fl_3, buffer, sizeof(secondary_IRTS_FL_3));
    return sizeof(secondary_IRTS_FL_3);
}
/* secondary_IRTS_FR_0 */
size_t serialize_secondary_IRTS_FR_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4) {
    secondary_IRTS_FR_0 secondary_irts_fr_0 = { channel1, channel2, channel3, channel4 };
	// assert(buf_len >= sizeof(secondary_IRTS_FR_0));
	memcpy(buffer, &secondary_irts_fr_0, sizeof(secondary_IRTS_FR_0));
    return sizeof(secondary_IRTS_FR_0);
} 
size_t deserialize_secondary_IRTS_FR_0(uint8_t* buffer, secondary_IRTS_FR_0* secondary_irts_fr_0) {
	// assert(buf_len >= sizeof(secondary_IRTS_FR_0));
	memcpy(secondary_irts_fr_0, buffer, sizeof(secondary_IRTS_FR_0));
    return sizeof(secondary_IRTS_FR_0);
}
/* secondary_IRTS_FR_1 */
size_t serialize_secondary_IRTS_FR_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8) {
    secondary_IRTS_FR_1 secondary_irts_fr_1 = { channel5, channel6, channel7, channel8 };
	// assert(buf_len >= sizeof(secondary_IRTS_FR_1));
	memcpy(buffer, &secondary_irts_fr_1, sizeof(secondary_IRTS_FR_1));
    return sizeof(secondary_IRTS_FR_1);
} 
size_t deserialize_secondary_IRTS_FR_1(uint8_t* buffer, secondary_IRTS_FR_1* secondary_irts_fr_1) {
	// assert(buf_len >= sizeof(secondary_IRTS_FR_1));
	memcpy(secondary_irts_fr_1, buffer, sizeof(secondary_IRTS_FR_1));
    return sizeof(secondary_IRTS_FR_1);
}
/* secondary_IRTS_FR_2 */
size_t serialize_secondary_IRTS_FR_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12) {
    secondary_IRTS_FR_2 secondary_irts_fr_2 = { channel9, channel10, channel11, channel12 };
	// assert(buf_len >= sizeof(secondary_IRTS_FR_2));
	memcpy(buffer, &secondary_irts_fr_2, sizeof(secondary_IRTS_FR_2));
    return sizeof(secondary_IRTS_FR_2);
} 
size_t deserialize_secondary_IRTS_FR_2(uint8_t* buffer, secondary_IRTS_FR_2* secondary_irts_fr_2) {
	// assert(buf_len >= sizeof(secondary_IRTS_FR_2));
	memcpy(secondary_irts_fr_2, buffer, sizeof(secondary_IRTS_FR_2));
    return sizeof(secondary_IRTS_FR_2);
}
/* secondary_IRTS_FR_3 */
size_t serialize_secondary_IRTS_FR_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16) {
    secondary_IRTS_FR_3 secondary_irts_fr_3 = { channel13, channel14, channel15, channel16 };
	// assert(buf_len >= sizeof(secondary_IRTS_FR_3));
	memcpy(buffer, &secondary_irts_fr_3, sizeof(secondary_IRTS_FR_3));
    return sizeof(secondary_IRTS_FR_3);
} 
size_t deserialize_secondary_IRTS_FR_3(uint8_t* buffer, secondary_IRTS_FR_3* secondary_irts_fr_3) {
	// assert(buf_len >= sizeof(secondary_IRTS_FR_3));
	memcpy(secondary_irts_fr_3, buffer, sizeof(secondary_IRTS_FR_3));
    return sizeof(secondary_IRTS_FR_3);
}
/* secondary_IRTS_RL_0 */
size_t serialize_secondary_IRTS_RL_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4) {
    secondary_IRTS_RL_0 secondary_irts_rl_0 = { channel1, channel2, channel3, channel4 };
	// assert(buf_len >= sizeof(secondary_IRTS_RL_0));
	memcpy(buffer, &secondary_irts_rl_0, sizeof(secondary_IRTS_RL_0));
    return sizeof(secondary_IRTS_RL_0);
} 
size_t deserialize_secondary_IRTS_RL_0(uint8_t* buffer, secondary_IRTS_RL_0* secondary_irts_rl_0) {
	// assert(buf_len >= sizeof(secondary_IRTS_RL_0));
	memcpy(secondary_irts_rl_0, buffer, sizeof(secondary_IRTS_RL_0));
    return sizeof(secondary_IRTS_RL_0);
}
/* secondary_IRTS_RL_1 */
size_t serialize_secondary_IRTS_RL_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8) {
    secondary_IRTS_RL_1 secondary_irts_rl_1 = { channel5, channel6, channel7, channel8 };
	// assert(buf_len >= sizeof(secondary_IRTS_RL_1));
	memcpy(buffer, &secondary_irts_rl_1, sizeof(secondary_IRTS_RL_1));
    return sizeof(secondary_IRTS_RL_1);
} 
size_t deserialize_secondary_IRTS_RL_1(uint8_t* buffer, secondary_IRTS_RL_1* secondary_irts_rl_1) {
	// assert(buf_len >= sizeof(secondary_IRTS_RL_1));
	memcpy(secondary_irts_rl_1, buffer, sizeof(secondary_IRTS_RL_1));
    return sizeof(secondary_IRTS_RL_1);
}
/* secondary_IRTS_RL_2 */
size_t serialize_secondary_IRTS_RL_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12) {
    secondary_IRTS_RL_2 secondary_irts_rl_2 = { channel9, channel10, channel11, channel12 };
	// assert(buf_len >= sizeof(secondary_IRTS_RL_2));
	memcpy(buffer, &secondary_irts_rl_2, sizeof(secondary_IRTS_RL_2));
    return sizeof(secondary_IRTS_RL_2);
} 
size_t deserialize_secondary_IRTS_RL_2(uint8_t* buffer, secondary_IRTS_RL_2* secondary_irts_rl_2) {
	// assert(buf_len >= sizeof(secondary_IRTS_RL_2));
	memcpy(secondary_irts_rl_2, buffer, sizeof(secondary_IRTS_RL_2));
    return sizeof(secondary_IRTS_RL_2);
}
/* secondary_IRTS_RL_3 */
size_t serialize_secondary_IRTS_RL_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16) {
    secondary_IRTS_RL_3 secondary_irts_rl_3 = { channel13, channel14, channel15, channel16 };
	// assert(buf_len >= sizeof(secondary_IRTS_RL_3));
	memcpy(buffer, &secondary_irts_rl_3, sizeof(secondary_IRTS_RL_3));
    return sizeof(secondary_IRTS_RL_3);
} 
size_t deserialize_secondary_IRTS_RL_3(uint8_t* buffer, secondary_IRTS_RL_3* secondary_irts_rl_3) {
	// assert(buf_len >= sizeof(secondary_IRTS_RL_3));
	memcpy(secondary_irts_rl_3, buffer, sizeof(secondary_IRTS_RL_3));
    return sizeof(secondary_IRTS_RL_3);
}
/* secondary_IRTS_RR_0 */
size_t serialize_secondary_IRTS_RR_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4) {
    secondary_IRTS_RR_0 secondary_irts_rr_0 = { channel1, channel2, channel3, channel4 };
	// assert(buf_len >= sizeof(secondary_IRTS_RR_0));
	memcpy(buffer, &secondary_irts_rr_0, sizeof(secondary_IRTS_RR_0));
    return sizeof(secondary_IRTS_RR_0);
} 
size_t deserialize_secondary_IRTS_RR_0(uint8_t* buffer, secondary_IRTS_RR_0* secondary_irts_rr_0) {
	// assert(buf_len >= sizeof(secondary_IRTS_RR_0));
	memcpy(secondary_irts_rr_0, buffer, sizeof(secondary_IRTS_RR_0));
    return sizeof(secondary_IRTS_RR_0);
}
/* secondary_IRTS_RR_1 */
size_t serialize_secondary_IRTS_RR_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8) {
    secondary_IRTS_RR_1 secondary_irts_rr_1 = { channel5, channel6, channel7, channel8 };
	// assert(buf_len >= sizeof(secondary_IRTS_RR_1));
	memcpy(buffer, &secondary_irts_rr_1, sizeof(secondary_IRTS_RR_1));
    return sizeof(secondary_IRTS_RR_1);
} 
size_t deserialize_secondary_IRTS_RR_1(uint8_t* buffer, secondary_IRTS_RR_1* secondary_irts_rr_1) {
	// assert(buf_len >= sizeof(secondary_IRTS_RR_1));
	memcpy(secondary_irts_rr_1, buffer, sizeof(secondary_IRTS_RR_1));
    return sizeof(secondary_IRTS_RR_1);
}
/* secondary_IRTS_RR_2 */
size_t serialize_secondary_IRTS_RR_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12) {
    secondary_IRTS_RR_2 secondary_irts_rr_2 = { channel9, channel10, channel11, channel12 };
	// assert(buf_len >= sizeof(secondary_IRTS_RR_2));
	memcpy(buffer, &secondary_irts_rr_2, sizeof(secondary_IRTS_RR_2));
    return sizeof(secondary_IRTS_RR_2);
} 
size_t deserialize_secondary_IRTS_RR_2(uint8_t* buffer, secondary_IRTS_RR_2* secondary_irts_rr_2) {
	// assert(buf_len >= sizeof(secondary_IRTS_RR_2));
	memcpy(secondary_irts_rr_2, buffer, sizeof(secondary_IRTS_RR_2));
    return sizeof(secondary_IRTS_RR_2);
}
/* secondary_IRTS_RR_3 */
size_t serialize_secondary_IRTS_RR_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16) {
    secondary_IRTS_RR_3 secondary_irts_rr_3 = { channel13, channel14, channel15, channel16 };
	// assert(buf_len >= sizeof(secondary_IRTS_RR_3));
	memcpy(buffer, &secondary_irts_rr_3, sizeof(secondary_IRTS_RR_3));
    return sizeof(secondary_IRTS_RR_3);
} 
size_t deserialize_secondary_IRTS_RR_3(uint8_t* buffer, secondary_IRTS_RR_3* secondary_irts_rr_3) {
	// assert(buf_len >= sizeof(secondary_IRTS_RR_3));
	memcpy(secondary_irts_rr_3, buffer, sizeof(secondary_IRTS_RR_3));
    return sizeof(secondary_IRTS_RR_3);
}
/* secondary_GPS_COORDS */
size_t serialize_secondary_GPS_COORDS(uint8_t* buffer, float latitude, float longitude) {
    secondary_GPS_COORDS secondary_gps_coords = { latitude, longitude };
	// assert(buf_len >= sizeof(secondary_GPS_COORDS));
	memcpy(buffer, &secondary_gps_coords, sizeof(secondary_GPS_COORDS));
    return sizeof(secondary_GPS_COORDS);
} 
size_t deserialize_secondary_GPS_COORDS(uint8_t* buffer, secondary_GPS_COORDS* secondary_gps_coords) {
	// assert(buf_len >= sizeof(secondary_GPS_COORDS));
	memcpy(secondary_gps_coords, buffer, sizeof(secondary_GPS_COORDS));
    return sizeof(secondary_GPS_COORDS);
}
/* secondary_GPS_SPEED */
size_t serialize_secondary_GPS_SPEED(uint8_t* buffer, uint16_t speed) {
    secondary_GPS_SPEED secondary_gps_speed = { speed };
	// assert(buf_len >= sizeof(secondary_GPS_SPEED));
	memcpy(buffer, &secondary_gps_speed, sizeof(secondary_GPS_SPEED));
    return sizeof(secondary_GPS_SPEED);
} 
size_t deserialize_secondary_GPS_SPEED(uint8_t* buffer, secondary_GPS_SPEED* secondary_gps_speed) {
	// assert(buf_len >= sizeof(secondary_GPS_SPEED));
	memcpy(secondary_gps_speed, buffer, sizeof(secondary_GPS_SPEED));
    return sizeof(secondary_GPS_SPEED);
}
/* secondary_LAP_COUNT */
size_t serialize_secondary_LAP_COUNT(uint8_t* buffer, uint8_t lap_count, uint32_t timestamp) {
    secondary_LAP_COUNT secondary_lap_count = { lap_count, 0x00, 0x00, 0x00, timestamp };
	// assert(buf_len >= sizeof(secondary_LAP_COUNT));
	memcpy(buffer, &secondary_lap_count, sizeof(secondary_LAP_COUNT));
    return sizeof(secondary_LAP_COUNT);
} 
size_t deserialize_secondary_LAP_COUNT(uint8_t* buffer, secondary_LAP_COUNT* secondary_lap_count) {
	// assert(buf_len >= sizeof(secondary_LAP_COUNT));
	memcpy(secondary_lap_count, buffer, sizeof(secondary_LAP_COUNT));
    return sizeof(secondary_LAP_COUNT);
}
