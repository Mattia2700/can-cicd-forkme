#ifdef __cplusplus
extern "C" {
#endif

#ifndef SECONDARY_H
#define SECONDARY_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

/*
*   NAKED SHARED 
*   Common functions, defines and checks between all the network.h files
*/
#ifndef __NAKED_SHARED
#define __NAKED_SHARED
    /*
    *   Endianness check
    *   static check for supported endianness
    */
    #ifndef __NAKED_ENDIAN_ORDER
        #define __NAKED_ENDIAN_ORDER 1094861636L // "ABCD"
    #endif
    #if !defined(__NAKED_LITTLE_ENDIAN) && !defined(__NAKED_BIG_ENDIAN) && !defined(__NAKED_PDP_ENDIAN)
        #if __NAKED_ENDIAN_ORDER==0x41424344UL 
            #define __NAKED_LITTLE_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x44434241UL
            #define __NAKED_BIG_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x42414443UL
            #define __NAKED_PDP_ENDIAN
        #else
            #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
        #endif
    #endif
    
    #ifndef __NAKED_LITTLE_ENDIAN
        #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
    #endif
    
    /*
    *   Floating point types size check
    *   the only supported sizes for now are 32 bits for float and 64 for double
    */
    static_assert(sizeof(float) == 4,"** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'float' OF 4 BYTES **");
    static_assert(sizeof(double) == 8, "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'double' OF 8 BYTES **");

    /*
    *   Packed macro
    *   macro for packed structs on multiple compilers
    */
    #if defined(__MINGW32__)
        #define __is_packed __attribute__((__gcc_struct__, __packed__)) // , __aligned__(1)))
    #else
        #define __is_packed __attribute__((__packed__)) // , __aligned__(1)))
    #endif
    
    /*
    *   Bitset setter/getter
    *   macros for reading/writing bitsets
    */
    #define setBit(bitset, index, value) \
    do { \
        (bitset)[(index)/8] &= ~( 1 << (index) % 8); \
        (bitset)[(index)/8] |=  ((value) << (index) % 8); \
    } while(0);
    #define flipBit(bitset, index) ((bitset)[(index)/8] ^= (1 << (index) % 8) )
    #define getBit(bitset, index)  ((bitset)[(index)/8] &  (1 << (index) % 8) )
#endif



/* secondary_IMU_ANGULAR_RATE */
    
typedef struct __is_packed {
    uint16_t ang_rate_x;
    uint16_t ang_rate_y;
    uint16_t ang_rate_z;
} secondary_IMU_ANGULAR_RATE;
static_assert(sizeof(secondary_IMU_ANGULAR_RATE) == 6, "struct size mismatch");
    
size_t serialize_secondary_IMU_ANGULAR_RATE(uint8_t* buffer, uint16_t ang_rate_x, uint16_t ang_rate_y, uint16_t ang_rate_z);
size_t deserialize_secondary_IMU_ANGULAR_RATE(uint8_t* buffer, secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate);

/* secondary_IMU_ACCELERATION */
    
typedef struct __is_packed {
    uint16_t accel_x;
    uint16_t accel_y;
    uint16_t accel_z;
} secondary_IMU_ACCELERATION;
static_assert(sizeof(secondary_IMU_ACCELERATION) == 6, "struct size mismatch");
    
size_t serialize_secondary_IMU_ACCELERATION(uint8_t* buffer, uint16_t accel_x, uint16_t accel_y, uint16_t accel_z);
size_t deserialize_secondary_IMU_ACCELERATION(uint8_t* buffer, secondary_IMU_ACCELERATION* secondary_imu_acceleration);

/* secondary_IRTS_FL_0 */
    
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} secondary_IRTS_FL_0;
static_assert(sizeof(secondary_IRTS_FL_0) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FL_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_secondary_IRTS_FL_0(uint8_t* buffer, secondary_IRTS_FL_0* secondary_irts_fl_0);

/* secondary_IRTS_FL_1 */
    
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} secondary_IRTS_FL_1;
static_assert(sizeof(secondary_IRTS_FL_1) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FL_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_secondary_IRTS_FL_1(uint8_t* buffer, secondary_IRTS_FL_1* secondary_irts_fl_1);

/* secondary_IRTS_FL_2 */
    
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} secondary_IRTS_FL_2;
static_assert(sizeof(secondary_IRTS_FL_2) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FL_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_secondary_IRTS_FL_2(uint8_t* buffer, secondary_IRTS_FL_2* secondary_irts_fl_2);

/* secondary_IRTS_FL_3 */
    
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} secondary_IRTS_FL_3;
static_assert(sizeof(secondary_IRTS_FL_3) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FL_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_secondary_IRTS_FL_3(uint8_t* buffer, secondary_IRTS_FL_3* secondary_irts_fl_3);

/* secondary_IRTS_FR_0 */
    
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} secondary_IRTS_FR_0;
static_assert(sizeof(secondary_IRTS_FR_0) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FR_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_secondary_IRTS_FR_0(uint8_t* buffer, secondary_IRTS_FR_0* secondary_irts_fr_0);

/* secondary_IRTS_FR_1 */
    
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} secondary_IRTS_FR_1;
static_assert(sizeof(secondary_IRTS_FR_1) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FR_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_secondary_IRTS_FR_1(uint8_t* buffer, secondary_IRTS_FR_1* secondary_irts_fr_1);

/* secondary_IRTS_FR_2 */
    
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} secondary_IRTS_FR_2;
static_assert(sizeof(secondary_IRTS_FR_2) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FR_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_secondary_IRTS_FR_2(uint8_t* buffer, secondary_IRTS_FR_2* secondary_irts_fr_2);

/* secondary_IRTS_FR_3 */
    
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} secondary_IRTS_FR_3;
static_assert(sizeof(secondary_IRTS_FR_3) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_FR_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_secondary_IRTS_FR_3(uint8_t* buffer, secondary_IRTS_FR_3* secondary_irts_fr_3);

/* secondary_IRTS_RL_0 */
    
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} secondary_IRTS_RL_0;
static_assert(sizeof(secondary_IRTS_RL_0) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RL_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_secondary_IRTS_RL_0(uint8_t* buffer, secondary_IRTS_RL_0* secondary_irts_rl_0);

/* secondary_IRTS_RL_1 */
    
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} secondary_IRTS_RL_1;
static_assert(sizeof(secondary_IRTS_RL_1) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RL_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_secondary_IRTS_RL_1(uint8_t* buffer, secondary_IRTS_RL_1* secondary_irts_rl_1);

/* secondary_IRTS_RL_2 */
    
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} secondary_IRTS_RL_2;
static_assert(sizeof(secondary_IRTS_RL_2) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RL_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_secondary_IRTS_RL_2(uint8_t* buffer, secondary_IRTS_RL_2* secondary_irts_rl_2);

/* secondary_IRTS_RL_3 */
    
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} secondary_IRTS_RL_3;
static_assert(sizeof(secondary_IRTS_RL_3) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RL_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_secondary_IRTS_RL_3(uint8_t* buffer, secondary_IRTS_RL_3* secondary_irts_rl_3);

/* secondary_IRTS_RR_0 */
    
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} secondary_IRTS_RR_0;
static_assert(sizeof(secondary_IRTS_RR_0) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RR_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_secondary_IRTS_RR_0(uint8_t* buffer, secondary_IRTS_RR_0* secondary_irts_rr_0);

/* secondary_IRTS_RR_1 */
    
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} secondary_IRTS_RR_1;
static_assert(sizeof(secondary_IRTS_RR_1) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RR_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_secondary_IRTS_RR_1(uint8_t* buffer, secondary_IRTS_RR_1* secondary_irts_rr_1);

/* secondary_IRTS_RR_2 */
    
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} secondary_IRTS_RR_2;
static_assert(sizeof(secondary_IRTS_RR_2) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RR_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_secondary_IRTS_RR_2(uint8_t* buffer, secondary_IRTS_RR_2* secondary_irts_rr_2);

/* secondary_IRTS_RR_3 */
    
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} secondary_IRTS_RR_3;
static_assert(sizeof(secondary_IRTS_RR_3) == 8, "struct size mismatch");
    
size_t serialize_secondary_IRTS_RR_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_secondary_IRTS_RR_3(uint8_t* buffer, secondary_IRTS_RR_3* secondary_irts_rr_3);

/* secondary_GPS_COORDS */
    
typedef struct __is_packed {
    float latitude;
    float longitude;
} secondary_GPS_COORDS;
static_assert(sizeof(secondary_GPS_COORDS) == 8, "struct size mismatch");
    
size_t serialize_secondary_GPS_COORDS(uint8_t* buffer, float latitude, float longitude);
size_t deserialize_secondary_GPS_COORDS(uint8_t* buffer, secondary_GPS_COORDS* secondary_gps_coords);

/* secondary_GPS_SPEED */
    
typedef struct __is_packed {
    uint16_t speed;
} secondary_GPS_SPEED;
static_assert(sizeof(secondary_GPS_SPEED) == 2, "struct size mismatch");
    
size_t serialize_secondary_GPS_SPEED(uint8_t* buffer, uint16_t speed);
size_t deserialize_secondary_GPS_SPEED(uint8_t* buffer, secondary_GPS_SPEED* secondary_gps_speed);

/* secondary_LAP_COUNT */
    
typedef struct __is_packed {
    uint8_t lap_count;
    uint8_t __unused_padding_1;
    uint8_t __unused_padding_2;
    uint8_t __unused_padding_3;
    uint32_t timestamp;
} secondary_LAP_COUNT;
static_assert(sizeof(secondary_LAP_COUNT) == 8, "struct size mismatch");
    
size_t serialize_secondary_LAP_COUNT(uint8_t* buffer, uint8_t lap_count, uint32_t timestamp);
size_t deserialize_secondary_LAP_COUNT(uint8_t* buffer, secondary_LAP_COUNT* secondary_lap_count);
#endif

#ifdef __cplusplus
}
#endif