#include <string.h>

void primary_msgname_from_id(uint32_t msg_id, char buffer[static 26]) {
    /*
    *       Returns a string containing the name of the message having the specified id
    *           Parameters:
    *               msg_id: the id of the message
    *               buffer: the pre allocated buffer where the message name will be returned
    */
    switch (msg_id) {
        case 1024:
            strcpy(buffer, "STEER_VERSION");
            break;
        case 1056:
            strcpy(buffer, "DAS_VERSION");
            break;
        case 1088:
            strcpy(buffer, "HV_VERSION");
            break;
        case 1120:
            strcpy(buffer, "LV_VERSION");
            break;
        case 1152:
            strcpy(buffer, "TLM_VERSION");
            break;
        case 256:
            strcpy(buffer, "TIMESTAMP");
            break;
        case 257:
            strcpy(buffer, "SET_TLM_STATUS");
            break;
        case 258:
            strcpy(buffer, "TLM_STATUS");
            break;
        case 1793:
            strcpy(buffer, "STEER_SYSTEM_STATUS");
            break;
        case 771:
            strcpy(buffer, "HV_VOLTAGE");
            break;
        case 803:
            strcpy(buffer, "HV_CURRENT");
            break;
        case 835:
            strcpy(buffer, "HV_TEMP");
            break;
        case 3:
            strcpy(buffer, "HV_ERRORS");
            break;
        case 35:
            strcpy(buffer, "TS_STATUS");
            break;
        case 4:
            strcpy(buffer, "SET_TS_STATUS");
            break;
        case 261:
            strcpy(buffer, "STEER_STATUS");
            break;
        case 773:
            strcpy(buffer, "SET_CAR_STATUS");
            break;
        case 1029:
            strcpy(buffer, "SET_PEDALS_RANGE");
            break;
        case 514:
            strcpy(buffer, "CAR_STATUS");
            break;
        case 2:
            strcpy(buffer, "DAS_ERRORS");
            break;
        case 774:
            strcpy(buffer, "LV_CURRENT");
            break;
        case 806:
            strcpy(buffer, "LV_VOLTAGE");
            break;
        case 838:
            strcpy(buffer, "LV_TEMPERATURE");
            break;
        case 870:
            strcpy(buffer, "COOLING_STATUS");
            break;
        case 1:
            strcpy(buffer, "MARKER");
            break;
        case 519:
            strcpy(buffer, "HV_CELLS_VOLTAGE");
            break;
        case 551:
            strcpy(buffer, "HV_CELLS_TEMP");
            break;
        case 583:
            strcpy(buffer, "HV_CELL_BALANCING_STATUS");
            break;
        case 516:
            strcpy(buffer, "SET_CELL_BALANCING_STATUS");
            break;
        case 772:
            strcpy(buffer, "HANDCART_STATUS");
            break;
        case 546:
            strcpy(buffer, "SPEED");
            break;
        case 513:
            strcpy(buffer, "INV_L_SET_TORQUE");
            break;
        case 385:
            strcpy(buffer, "INV_L_RESPONSE");
            break;
        default:
            strcpy(buffer, ""); // Unknown message
    }
}
