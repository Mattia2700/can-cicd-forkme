NETWORK_VERSION = 1.3

# TOPIC BROADCAST
TOPIC_BROADCAST_MASK = 0b00000011111
TOPIC_BROADCAST_FILTER = 0b00000000000
"""
periodic message containing current can definitions version
"""
ID_STEER_VERSION = 0b10000000000
"""
periodic message containing current can definitions version
"""
ID_DAS_VERSION = 0b10000100000
"""
periodic message containing current can definitions version
"""
ID_HV_VERSION = 0b10001000000
"""
periodic message containing current can definitions version
"""
ID_LV_VERSION = 0b10001100000
"""
periodic message containing current can definitions version
"""
ID_TLM_VERSION = 0b10010000000
"""
every second unix encoded time and date used by logging devices to sync
"""
ID_TIMESTAMP = 0b00100000000

# TOPIC TLM
TOPIC_TLM_MASK = 0b00000011111
TOPIC_TLM_FILTER = 0b00000000001
"""
Ask telemetry to turn on/off and send a tuple containing the current{test, driver, map); only once
"""
ID_SET_TLM_STATUS = 0b00100000001
"""
System stats of the raspberry pi inside the steering wheel
"""
ID_STEER_SYSTEM_STATUS = 0b11100000001
"""
Send a marker to telemetry
"""
ID_MARKER = 0b00000000001

# TOPIC STEER
TOPIC_STEER_MASK = 0b00000011111
TOPIC_STEER_FILTER = 0b00000000010
"""
The answer to the steering wheel's message that changes the status of the telemetry
"""
ID_TLM_STATUS = 0b00100000010
"""
Car status, all states managed by the DAS will be send (car status, inverters status)
"""
ID_CAR_STATUS = 0b01000000010
"""
DAS errors messages
"""
ID_DAS_ERRORS = 0b00000000010
"""
Encoder speed and inverter RPMs
"""
ID_SPEED = 0b01000100010

# TOPIC DASnSTEERnCART
TOPIC_DASnSTEERnCART_MASK = 0b00000011111
TOPIC_DASnSTEERnCART_FILTER = 0b00000000011
"""
Pack stats
"""
ID_HV_VOLTAGE = 0b01100000011
"""
Current supplied by the pack
"""
ID_HV_CURRENT = 0b01100100011
"""
Cell temperatures
"""
ID_HV_TEMP = 0b01101000011
"""
Battery-related errors
"""
ID_HV_ERRORS = 0b00000000011
"""
BMS status
"""
ID_TS_STATUS = 0b00000100011

# TOPIC BMS_HV
TOPIC_BMS_HV_MASK = 0b00000011111
TOPIC_BMS_HV_FILTER = 0b00000000100
"""
Requests a TS status; only once
"""
ID_SET_TS_STATUS = 0b00000000100
"""
Set cell balancing status; only once
"""
ID_SET_CELL_BALANCING_STATUS = 0b01000000100
"""
Sends updates on the presence of the handcart
"""
ID_HANDCART_STATUS = 0b01100000100

# TOPIC DAS
TOPIC_DAS_MASK = 0b00000011111
TOPIC_DAS_FILTER = 0b00000000101
"""
Send update of the tuneable values from the steering wheel
"""
ID_STEER_STATUS = 0b00100000101
"""
Ask to DAS to change car status; only once
"""
ID_SET_CAR_STATUS = 0b01100000101
"""
Ask to calibrate pedals and steer in x_START, x_END steps; only once
"""
ID_SET_PEDALS_RANGE = 0b10000000101

# TOPIC DASnSTEER
TOPIC_DASnSTEER_MASK = 0b00000011111
TOPIC_DASnSTEER_FILTER = 0b00000000110
"""
Current of LV battery pack: total current taken from the battery itself
"""
ID_LV_CURRENT = 0b01100000110
"""
Voltages of LV battery pack: total voltage 16 bit [12,17.2]V (0x0000 under_voltage,0xFFFF over_voltage), 4x single cell voltage 8bit [3,4.2]V 0.005mV/bit (no additional info, 0x000 is 3V 0xFFFF is 4.2V)
"""
ID_LV_VOLTAGE = 0b01100100110
"""
Temperature of LV battery pack,[0,80]Celsius, uint8 0.32C/bit. battery pack and dcdc converter
"""
ID_LV_TEMPERATURE = 0b01101000110
"""
Percentage value 0% to 100% of bms_hv_fans, bms_lv_fans, pump_speed, 8bit
"""
ID_COOLING_STATUS = 0b01101100110

# TOPIC HANDCART
TOPIC_HANDCART_MASK = 0b00000011111
TOPIC_HANDCART_FILTER = 0b00000000111
"""
Voltages for each cell
"""
ID_HV_CELLS_VOLTAGE = 0b01000000111
"""
Cell temperatures
"""
ID_HV_CELLS_TEMP = 0b01000100111
"""
Cell balancing status
"""
ID_HV_CELL_BALANCING_STATUS = 0b01001000111

# TOPIC FIXED_IDS
ID_INV_L_SET_TORQUE = 0b01000000001
ID_INV_L_RESPONSE = 0b00110000001


