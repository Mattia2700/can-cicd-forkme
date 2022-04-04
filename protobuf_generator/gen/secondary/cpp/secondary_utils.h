#include <string>
#include "secondary.pb.h"
extern "C" {
#include "../../../../naked_generator/secondary/c/secondary.h"
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

std::string secondary_naked2protobuf(uint32_t id, uint8_t* payload){
    uint64_t bitset_value, current_value;

    switch(id) {

        case 1260: {
            secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate_d = (secondary_IMU_ANGULAR_RATE*)malloc(sizeof(secondary_IMU_ANGULAR_RATE));
            deserialize_secondary_IMU_ANGULAR_RATE(payload, secondary_imu_angular_rate_d);
    
            secondary::ImuAngularRate secondary_imu_angular_rate_p;
            secondary_imu_angular_rate_p.set_ang_rate_x(static_cast<uint32_t>(secondary_imu_angular_rate_d->ang_rate_x));
            secondary_imu_angular_rate_p.set_ang_rate_y(static_cast<uint32_t>(secondary_imu_angular_rate_d->ang_rate_y));
            secondary_imu_angular_rate_p.set_ang_rate_z(static_cast<uint32_t>(secondary_imu_angular_rate_d->ang_rate_z));

            free(secondary_imu_angular_rate_d);

            std::string serialized;
            secondary_imu_angular_rate_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1261: {
            secondary_IMU_ACCELERATION* secondary_imu_acceleration_d = (secondary_IMU_ACCELERATION*)malloc(sizeof(secondary_IMU_ACCELERATION));
            deserialize_secondary_IMU_ACCELERATION(payload, secondary_imu_acceleration_d);
    
            secondary::ImuAcceleration secondary_imu_acceleration_p;
            secondary_imu_acceleration_p.set_accel_x(static_cast<uint32_t>(secondary_imu_acceleration_d->accel_x));
            secondary_imu_acceleration_p.set_accel_y(static_cast<uint32_t>(secondary_imu_acceleration_d->accel_y));
            secondary_imu_acceleration_p.set_accel_z(static_cast<uint32_t>(secondary_imu_acceleration_d->accel_z));

            free(secondary_imu_acceleration_d);

            std::string serialized;
            secondary_imu_acceleration_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1460: {
            secondary_IRTS_FL_0* secondary_irts_fl_0_d = (secondary_IRTS_FL_0*)malloc(sizeof(secondary_IRTS_FL_0));
            deserialize_secondary_IRTS_FL_0(payload, secondary_irts_fl_0_d);
    
            secondary::IrtsFl0 secondary_irts_fl_0_p;
            secondary_irts_fl_0_p.set_channel1(static_cast<uint32_t>(secondary_irts_fl_0_d->channel1));
            secondary_irts_fl_0_p.set_channel2(static_cast<uint32_t>(secondary_irts_fl_0_d->channel2));
            secondary_irts_fl_0_p.set_channel3(static_cast<uint32_t>(secondary_irts_fl_0_d->channel3));
            secondary_irts_fl_0_p.set_channel4(static_cast<uint32_t>(secondary_irts_fl_0_d->channel4));

            free(secondary_irts_fl_0_d);

            std::string serialized;
            secondary_irts_fl_0_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1461: {
            secondary_IRTS_FL_1* secondary_irts_fl_1_d = (secondary_IRTS_FL_1*)malloc(sizeof(secondary_IRTS_FL_1));
            deserialize_secondary_IRTS_FL_1(payload, secondary_irts_fl_1_d);
    
            secondary::IrtsFl1 secondary_irts_fl_1_p;
            secondary_irts_fl_1_p.set_channel5(static_cast<uint32_t>(secondary_irts_fl_1_d->channel5));
            secondary_irts_fl_1_p.set_channel6(static_cast<uint32_t>(secondary_irts_fl_1_d->channel6));
            secondary_irts_fl_1_p.set_channel7(static_cast<uint32_t>(secondary_irts_fl_1_d->channel7));
            secondary_irts_fl_1_p.set_channel8(static_cast<uint32_t>(secondary_irts_fl_1_d->channel8));

            free(secondary_irts_fl_1_d);

            std::string serialized;
            secondary_irts_fl_1_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1462: {
            secondary_IRTS_FL_2* secondary_irts_fl_2_d = (secondary_IRTS_FL_2*)malloc(sizeof(secondary_IRTS_FL_2));
            deserialize_secondary_IRTS_FL_2(payload, secondary_irts_fl_2_d);
    
            secondary::IrtsFl2 secondary_irts_fl_2_p;
            secondary_irts_fl_2_p.set_channel9(static_cast<uint32_t>(secondary_irts_fl_2_d->channel9));
            secondary_irts_fl_2_p.set_channel10(static_cast<uint32_t>(secondary_irts_fl_2_d->channel10));
            secondary_irts_fl_2_p.set_channel11(static_cast<uint32_t>(secondary_irts_fl_2_d->channel11));
            secondary_irts_fl_2_p.set_channel12(static_cast<uint32_t>(secondary_irts_fl_2_d->channel12));

            free(secondary_irts_fl_2_d);

            std::string serialized;
            secondary_irts_fl_2_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1463: {
            secondary_IRTS_FL_3* secondary_irts_fl_3_d = (secondary_IRTS_FL_3*)malloc(sizeof(secondary_IRTS_FL_3));
            deserialize_secondary_IRTS_FL_3(payload, secondary_irts_fl_3_d);
    
            secondary::IrtsFl3 secondary_irts_fl_3_p;
            secondary_irts_fl_3_p.set_channel13(static_cast<uint32_t>(secondary_irts_fl_3_d->channel13));
            secondary_irts_fl_3_p.set_channel14(static_cast<uint32_t>(secondary_irts_fl_3_d->channel14));
            secondary_irts_fl_3_p.set_channel15(static_cast<uint32_t>(secondary_irts_fl_3_d->channel15));
            secondary_irts_fl_3_p.set_channel16(static_cast<uint32_t>(secondary_irts_fl_3_d->channel16));

            free(secondary_irts_fl_3_d);

            std::string serialized;
            secondary_irts_fl_3_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1464: {
            secondary_IRTS_FR_0* secondary_irts_fr_0_d = (secondary_IRTS_FR_0*)malloc(sizeof(secondary_IRTS_FR_0));
            deserialize_secondary_IRTS_FR_0(payload, secondary_irts_fr_0_d);
    
            secondary::IrtsFr0 secondary_irts_fr_0_p;
            secondary_irts_fr_0_p.set_channel1(static_cast<uint32_t>(secondary_irts_fr_0_d->channel1));
            secondary_irts_fr_0_p.set_channel2(static_cast<uint32_t>(secondary_irts_fr_0_d->channel2));
            secondary_irts_fr_0_p.set_channel3(static_cast<uint32_t>(secondary_irts_fr_0_d->channel3));
            secondary_irts_fr_0_p.set_channel4(static_cast<uint32_t>(secondary_irts_fr_0_d->channel4));

            free(secondary_irts_fr_0_d);

            std::string serialized;
            secondary_irts_fr_0_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1465: {
            secondary_IRTS_FR_1* secondary_irts_fr_1_d = (secondary_IRTS_FR_1*)malloc(sizeof(secondary_IRTS_FR_1));
            deserialize_secondary_IRTS_FR_1(payload, secondary_irts_fr_1_d);
    
            secondary::IrtsFr1 secondary_irts_fr_1_p;
            secondary_irts_fr_1_p.set_channel5(static_cast<uint32_t>(secondary_irts_fr_1_d->channel5));
            secondary_irts_fr_1_p.set_channel6(static_cast<uint32_t>(secondary_irts_fr_1_d->channel6));
            secondary_irts_fr_1_p.set_channel7(static_cast<uint32_t>(secondary_irts_fr_1_d->channel7));
            secondary_irts_fr_1_p.set_channel8(static_cast<uint32_t>(secondary_irts_fr_1_d->channel8));

            free(secondary_irts_fr_1_d);

            std::string serialized;
            secondary_irts_fr_1_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1466: {
            secondary_IRTS_FR_2* secondary_irts_fr_2_d = (secondary_IRTS_FR_2*)malloc(sizeof(secondary_IRTS_FR_2));
            deserialize_secondary_IRTS_FR_2(payload, secondary_irts_fr_2_d);
    
            secondary::IrtsFr2 secondary_irts_fr_2_p;
            secondary_irts_fr_2_p.set_channel9(static_cast<uint32_t>(secondary_irts_fr_2_d->channel9));
            secondary_irts_fr_2_p.set_channel10(static_cast<uint32_t>(secondary_irts_fr_2_d->channel10));
            secondary_irts_fr_2_p.set_channel11(static_cast<uint32_t>(secondary_irts_fr_2_d->channel11));
            secondary_irts_fr_2_p.set_channel12(static_cast<uint32_t>(secondary_irts_fr_2_d->channel12));

            free(secondary_irts_fr_2_d);

            std::string serialized;
            secondary_irts_fr_2_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1467: {
            secondary_IRTS_FR_3* secondary_irts_fr_3_d = (secondary_IRTS_FR_3*)malloc(sizeof(secondary_IRTS_FR_3));
            deserialize_secondary_IRTS_FR_3(payload, secondary_irts_fr_3_d);
    
            secondary::IrtsFr3 secondary_irts_fr_3_p;
            secondary_irts_fr_3_p.set_channel13(static_cast<uint32_t>(secondary_irts_fr_3_d->channel13));
            secondary_irts_fr_3_p.set_channel14(static_cast<uint32_t>(secondary_irts_fr_3_d->channel14));
            secondary_irts_fr_3_p.set_channel15(static_cast<uint32_t>(secondary_irts_fr_3_d->channel15));
            secondary_irts_fr_3_p.set_channel16(static_cast<uint32_t>(secondary_irts_fr_3_d->channel16));

            free(secondary_irts_fr_3_d);

            std::string serialized;
            secondary_irts_fr_3_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1468: {
            secondary_IRTS_RL_0* secondary_irts_rl_0_d = (secondary_IRTS_RL_0*)malloc(sizeof(secondary_IRTS_RL_0));
            deserialize_secondary_IRTS_RL_0(payload, secondary_irts_rl_0_d);
    
            secondary::IrtsRl0 secondary_irts_rl_0_p;
            secondary_irts_rl_0_p.set_channel1(static_cast<uint32_t>(secondary_irts_rl_0_d->channel1));
            secondary_irts_rl_0_p.set_channel2(static_cast<uint32_t>(secondary_irts_rl_0_d->channel2));
            secondary_irts_rl_0_p.set_channel3(static_cast<uint32_t>(secondary_irts_rl_0_d->channel3));
            secondary_irts_rl_0_p.set_channel4(static_cast<uint32_t>(secondary_irts_rl_0_d->channel4));

            free(secondary_irts_rl_0_d);

            std::string serialized;
            secondary_irts_rl_0_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1469: {
            secondary_IRTS_RL_1* secondary_irts_rl_1_d = (secondary_IRTS_RL_1*)malloc(sizeof(secondary_IRTS_RL_1));
            deserialize_secondary_IRTS_RL_1(payload, secondary_irts_rl_1_d);
    
            secondary::IrtsRl1 secondary_irts_rl_1_p;
            secondary_irts_rl_1_p.set_channel5(static_cast<uint32_t>(secondary_irts_rl_1_d->channel5));
            secondary_irts_rl_1_p.set_channel6(static_cast<uint32_t>(secondary_irts_rl_1_d->channel6));
            secondary_irts_rl_1_p.set_channel7(static_cast<uint32_t>(secondary_irts_rl_1_d->channel7));
            secondary_irts_rl_1_p.set_channel8(static_cast<uint32_t>(secondary_irts_rl_1_d->channel8));

            free(secondary_irts_rl_1_d);

            std::string serialized;
            secondary_irts_rl_1_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1470: {
            secondary_IRTS_RL_2* secondary_irts_rl_2_d = (secondary_IRTS_RL_2*)malloc(sizeof(secondary_IRTS_RL_2));
            deserialize_secondary_IRTS_RL_2(payload, secondary_irts_rl_2_d);
    
            secondary::IrtsRl2 secondary_irts_rl_2_p;
            secondary_irts_rl_2_p.set_channel9(static_cast<uint32_t>(secondary_irts_rl_2_d->channel9));
            secondary_irts_rl_2_p.set_channel10(static_cast<uint32_t>(secondary_irts_rl_2_d->channel10));
            secondary_irts_rl_2_p.set_channel11(static_cast<uint32_t>(secondary_irts_rl_2_d->channel11));
            secondary_irts_rl_2_p.set_channel12(static_cast<uint32_t>(secondary_irts_rl_2_d->channel12));

            free(secondary_irts_rl_2_d);

            std::string serialized;
            secondary_irts_rl_2_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1471: {
            secondary_IRTS_RL_3* secondary_irts_rl_3_d = (secondary_IRTS_RL_3*)malloc(sizeof(secondary_IRTS_RL_3));
            deserialize_secondary_IRTS_RL_3(payload, secondary_irts_rl_3_d);
    
            secondary::IrtsRl3 secondary_irts_rl_3_p;
            secondary_irts_rl_3_p.set_channel13(static_cast<uint32_t>(secondary_irts_rl_3_d->channel13));
            secondary_irts_rl_3_p.set_channel14(static_cast<uint32_t>(secondary_irts_rl_3_d->channel14));
            secondary_irts_rl_3_p.set_channel15(static_cast<uint32_t>(secondary_irts_rl_3_d->channel15));
            secondary_irts_rl_3_p.set_channel16(static_cast<uint32_t>(secondary_irts_rl_3_d->channel16));

            free(secondary_irts_rl_3_d);

            std::string serialized;
            secondary_irts_rl_3_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1472: {
            secondary_IRTS_RR_0* secondary_irts_rr_0_d = (secondary_IRTS_RR_0*)malloc(sizeof(secondary_IRTS_RR_0));
            deserialize_secondary_IRTS_RR_0(payload, secondary_irts_rr_0_d);
    
            secondary::IrtsRr0 secondary_irts_rr_0_p;
            secondary_irts_rr_0_p.set_channel1(static_cast<uint32_t>(secondary_irts_rr_0_d->channel1));
            secondary_irts_rr_0_p.set_channel2(static_cast<uint32_t>(secondary_irts_rr_0_d->channel2));
            secondary_irts_rr_0_p.set_channel3(static_cast<uint32_t>(secondary_irts_rr_0_d->channel3));
            secondary_irts_rr_0_p.set_channel4(static_cast<uint32_t>(secondary_irts_rr_0_d->channel4));

            free(secondary_irts_rr_0_d);

            std::string serialized;
            secondary_irts_rr_0_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1473: {
            secondary_IRTS_RR_1* secondary_irts_rr_1_d = (secondary_IRTS_RR_1*)malloc(sizeof(secondary_IRTS_RR_1));
            deserialize_secondary_IRTS_RR_1(payload, secondary_irts_rr_1_d);
    
            secondary::IrtsRr1 secondary_irts_rr_1_p;
            secondary_irts_rr_1_p.set_channel5(static_cast<uint32_t>(secondary_irts_rr_1_d->channel5));
            secondary_irts_rr_1_p.set_channel6(static_cast<uint32_t>(secondary_irts_rr_1_d->channel6));
            secondary_irts_rr_1_p.set_channel7(static_cast<uint32_t>(secondary_irts_rr_1_d->channel7));
            secondary_irts_rr_1_p.set_channel8(static_cast<uint32_t>(secondary_irts_rr_1_d->channel8));

            free(secondary_irts_rr_1_d);

            std::string serialized;
            secondary_irts_rr_1_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1474: {
            secondary_IRTS_RR_2* secondary_irts_rr_2_d = (secondary_IRTS_RR_2*)malloc(sizeof(secondary_IRTS_RR_2));
            deserialize_secondary_IRTS_RR_2(payload, secondary_irts_rr_2_d);
    
            secondary::IrtsRr2 secondary_irts_rr_2_p;
            secondary_irts_rr_2_p.set_channel9(static_cast<uint32_t>(secondary_irts_rr_2_d->channel9));
            secondary_irts_rr_2_p.set_channel10(static_cast<uint32_t>(secondary_irts_rr_2_d->channel10));
            secondary_irts_rr_2_p.set_channel11(static_cast<uint32_t>(secondary_irts_rr_2_d->channel11));
            secondary_irts_rr_2_p.set_channel12(static_cast<uint32_t>(secondary_irts_rr_2_d->channel12));

            free(secondary_irts_rr_2_d);

            std::string serialized;
            secondary_irts_rr_2_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1475: {
            secondary_IRTS_RR_3* secondary_irts_rr_3_d = (secondary_IRTS_RR_3*)malloc(sizeof(secondary_IRTS_RR_3));
            deserialize_secondary_IRTS_RR_3(payload, secondary_irts_rr_3_d);
    
            secondary::IrtsRr3 secondary_irts_rr_3_p;
            secondary_irts_rr_3_p.set_channel13(static_cast<uint32_t>(secondary_irts_rr_3_d->channel13));
            secondary_irts_rr_3_p.set_channel14(static_cast<uint32_t>(secondary_irts_rr_3_d->channel14));
            secondary_irts_rr_3_p.set_channel15(static_cast<uint32_t>(secondary_irts_rr_3_d->channel15));
            secondary_irts_rr_3_p.set_channel16(static_cast<uint32_t>(secondary_irts_rr_3_d->channel16));

            free(secondary_irts_rr_3_d);

            std::string serialized;
            secondary_irts_rr_3_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1025: {
            secondary_GPS_COORDS* secondary_gps_coords_d = (secondary_GPS_COORDS*)malloc(sizeof(secondary_GPS_COORDS));
            deserialize_secondary_GPS_COORDS(payload, secondary_gps_coords_d);
    
            secondary::GpsCoords secondary_gps_coords_p;
            secondary_gps_coords_p.set_latitude(static_cast<float>(secondary_gps_coords_d->latitude));
            secondary_gps_coords_p.set_longitude(static_cast<float>(secondary_gps_coords_d->longitude));

            free(secondary_gps_coords_d);

            std::string serialized;
            secondary_gps_coords_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1057: {
            secondary_GPS_SPEED* secondary_gps_speed_d = (secondary_GPS_SPEED*)malloc(sizeof(secondary_GPS_SPEED));
            deserialize_secondary_GPS_SPEED(payload, secondary_gps_speed_d);
    
            secondary::GpsSpeed secondary_gps_speed_p;
            secondary_gps_speed_p.set_speed(static_cast<uint32_t>(secondary_gps_speed_d->speed));

            free(secondary_gps_speed_d);

            std::string serialized;
            secondary_gps_speed_p.SerializeToString(&serialized);
            return serialized;
        }

        case 1089: {
            secondary_LAP_COUNT* secondary_lap_count_d = (secondary_LAP_COUNT*)malloc(sizeof(secondary_LAP_COUNT));
            deserialize_secondary_LAP_COUNT(payload, secondary_lap_count_d);
    
            secondary::LapCount secondary_lap_count_p;
            secondary_lap_count_p.set_lap_count(static_cast<uint32_t>(secondary_lap_count_d->lap_count));
            secondary_lap_count_p.set_timestamp(static_cast<uint32_t>(secondary_lap_count_d->timestamp));

            free(secondary_lap_count_d);

            std::string serialized;
            secondary_lap_count_p.SerializeToString(&serialized);
            return serialized;
        }

    }
    throw std::runtime_error("Unknown message id");
}