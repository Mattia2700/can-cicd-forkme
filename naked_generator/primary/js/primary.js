const byteify = require('byteify');

const PrimarySteerVersion_ms = 1000
function serializePrimarySteerVersion(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.component_version),
        ...byteify.serializeUint8(data.cancicd_version),
    ]);
}
function deserializePrimarySteerVersion(bytes) {
    return {
        component_version: byteify.deserializeUint8(bytes.slice(0, 1)),
        cancicd_version: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

const PrimaryDasVersion_ms = 1000
function serializePrimaryDasVersion(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.component_version),
        ...byteify.serializeUint8(data.cancicd_version),
    ]);
}
function deserializePrimaryDasVersion(bytes) {
    return {
        component_version: byteify.deserializeUint8(bytes.slice(0, 1)),
        cancicd_version: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

const PrimaryHvVersion_ms = 1000
function serializePrimaryHvVersion(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.component_version),
        ...byteify.serializeUint8(data.cancicd_version),
    ]);
}
function deserializePrimaryHvVersion(bytes) {
    return {
        component_version: byteify.deserializeUint8(bytes.slice(0, 1)),
        cancicd_version: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

const PrimaryLvVersion_ms = 1000
function serializePrimaryLvVersion(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.component_version),
        ...byteify.serializeUint8(data.cancicd_version),
    ]);
}
function deserializePrimaryLvVersion(bytes) {
    return {
        component_version: byteify.deserializeUint8(bytes.slice(0, 1)),
        cancicd_version: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

const PrimaryTlmVersion_ms = 1000
function serializePrimaryTlmVersion(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.component_version),
        ...byteify.serializeUint8(data.cancicd_version),
    ]);
}
function deserializePrimaryTlmVersion(bytes) {
    return {
        component_version: byteify.deserializeUint8(bytes.slice(0, 1)),
        cancicd_version: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

const PrimaryTimestamp_ms = 1000
function serializePrimaryTimestamp(data) {
    return Uint8Array.from([
        ...byteify.serializeUint32(data.timestamp),
    ]);
}
function deserializePrimaryTimestamp(bytes) {
    return {
        timestamp: byteify.deserializeUint32(bytes.slice(0, 4)),
    }
}

function serializePrimarySetTlmStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.tlm_status_set),
        ...byteify.serializeInt8(data.race_type),
        ...byteify.serializeUint8(data.driver),
        ...byteify.serializeUint8(data.circuit),
    ]);
}
function deserializePrimarySetTlmStatus(bytes) {
    return {
        tlm_status_set: byteify.deserializeInt8(bytes.slice(0, 1)),
        race_type: byteify.deserializeInt8(bytes.slice(1, 2)),
        driver: byteify.deserializeUint8(bytes.slice(2, 3)),
        circuit: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

const PrimarySteerSystemStatus_ms = 2000
function serializePrimarySteerSystemStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.soc_temp),
    ]);
}
function deserializePrimarySteerSystemStatus(bytes) {
    return {
        soc_temp: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}

const PrimaryTlmStatus_ms = 1000
function serializePrimaryTlmStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.tlm_status),
        ...byteify.serializeInt8(data.race_type),
        ...byteify.serializeUint8(data.driver),
        ...byteify.serializeUint8(data.circuit),
    ]);
}
function deserializePrimaryTlmStatus(bytes) {
    return {
        tlm_status: byteify.deserializeInt8(bytes.slice(0, 1)),
        race_type: byteify.deserializeInt8(bytes.slice(1, 2)),
        driver: byteify.deserializeUint8(bytes.slice(2, 3)),
        circuit: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

const PrimaryCarStatus_ms = 100
function serializePrimaryCarStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.inverter_l),
        ...byteify.serializeInt8(data.inverter_r),
        ...byteify.serializeInt8(data.car_status),
    ]);
}
function deserializePrimaryCarStatus(bytes) {
    return {
        inverter_l: byteify.deserializeInt8(bytes.slice(0, 1)),
        inverter_r: byteify.deserializeInt8(bytes.slice(1, 2)),
        car_status: byteify.deserializeInt8(bytes.slice(2, 3)),
    }
}

const PrimaryDasErrors_ms = 20
function serializePrimaryDasErrors(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.das_error),
    ]);
}
function deserializePrimaryDasErrors(bytes) {
    return {
        das_error: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

const PrimarySpeed_ms = 100
function serializePrimarySpeed(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.encoder_r),
        ...byteify.serializeUint16(data.encoder_l),
        ...byteify.serializeUint16(data.inverter_r),
        ...byteify.serializeUint16(data.inverter_l),
    ]);
}
function deserializePrimarySpeed(bytes) {
    return {
        encoder_r: byteify.deserializeUint16(bytes.slice(0, 2)),
        encoder_l: byteify.deserializeUint16(bytes.slice(2, 4)),
        inverter_r: byteify.deserializeUint16(bytes.slice(4, 6)),
        inverter_l: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

const PrimaryHvVoltage_ms = 20
function serializePrimaryHvVoltage(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.pack_voltage),
        ...byteify.serializeUint16(data.bus_voltage),
        ...byteify.serializeUint16(data.max_cell_voltage),
        ...byteify.serializeUint16(data.min_cell_voltage),
    ]);
}
function deserializePrimaryHvVoltage(bytes) {
    return {
        pack_voltage: byteify.deserializeUint16(bytes.slice(0, 2)),
        bus_voltage: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_cell_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_cell_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

const PrimaryHvCurrent_ms = 20
function serializePrimaryHvCurrent(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.current),
        ...byteify.serializeInt16(data.power),
    ]);
}
function deserializePrimaryHvCurrent(bytes) {
    return {
        current: byteify.deserializeUint16(bytes.slice(0, 2)),
        power: byteify.deserializeInt16(bytes.slice(2, 4)),
    }
}

const PrimaryHvTemp_ms = 200
function serializePrimaryHvTemp(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.average_temp),
        ...byteify.serializeUint16(data.max_temp),
        ...byteify.serializeUint16(data.min_temp),
    ]);
}
function deserializePrimaryHvTemp(bytes) {
    return {
        average_temp: byteify.deserializeUint16(bytes.slice(0, 2)),
        max_temp: byteify.deserializeUint16(bytes.slice(2, 4)),
        min_temp: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}

const PrimaryHvErrors_ms = 20
function serializePrimaryHvErrors(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.warnings),
        ...byteify.serializeInt8(data.errors),
    ]);
}
function deserializePrimaryHvErrors(bytes) {
    return {
        warnings: byteify.deserializeInt8(bytes.slice(0, 2)),
        errors: byteify.deserializeInt8(bytes.slice(2, 4)),
    }
}

const PrimaryTsStatus_ms = 20
function serializePrimaryTsStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.ts_status),
    ]);
}
function deserializePrimaryTsStatus(bytes) {
    return {
        ts_status: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimarySetTsStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.ts_status_set),
    ]);
}
function deserializePrimarySetTsStatus(bytes) {
    return {
        ts_status_set: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimarySetCellBalancingStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.set_balancing_status),
    ]);
}
function deserializePrimarySetCellBalancingStatus(bytes) {
    return {
        set_balancing_status: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

const PrimaryHandcartStatus_ms = 500
function serializePrimaryHandcartStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeBool(data.connected),
    ]);
}
function deserializePrimaryHandcartStatus(bytes) {
    return {
        connected: byteify.deserializeBool(bytes.slice(0, 1)),
    }
}

const PrimarySteerStatus_ms = 100
function serializePrimarySteerStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.traction_control),
        ...byteify.serializeInt8(data.map),
    ]);
}
function deserializePrimarySteerStatus(bytes) {
    return {
        traction_control: byteify.deserializeInt8(bytes.slice(0, 1)),
        map: byteify.deserializeInt8(bytes.slice(1, 2)),
    }
}

function serializePrimarySetCarStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.car_status_set),
    ]);
}
function deserializePrimarySetCarStatus(bytes) {
    return {
        car_status_set: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimarySetPedalsRange(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.bound),
        ...byteify.serializeInt8(data.pedal),
    ]);
}
function deserializePrimarySetPedalsRange(bytes) {
    return {
        bound: byteify.deserializeInt8(bytes.slice(0, 1)),
        pedal: byteify.deserializeInt8(bytes.slice(1, 2)),
    }
}

const PrimaryLvCurrent_ms = 500
function serializePrimaryLvCurrent(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.current),
    ]);
}
function deserializePrimaryLvCurrent(bytes) {
    return {
        current: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}

const PrimaryLvVoltage_ms = 200
function serializePrimaryLvVoltage(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.voltage_1),
        ...byteify.serializeUint8(data.voltage_2),
        ...byteify.serializeUint8(data.voltage_3),
        ...byteify.serializeUint8(data.voltage_4),
        ...byteify.serializeUint16(data.total_voltage),
    ]);
}
function deserializePrimaryLvVoltage(bytes) {
    return {
        voltage_1: byteify.deserializeUint8(bytes.slice(0, 1)),
        voltage_2: byteify.deserializeUint8(bytes.slice(1, 2)),
        voltage_3: byteify.deserializeUint8(bytes.slice(2, 3)),
        voltage_4: byteify.deserializeUint8(bytes.slice(3, 4)),
        total_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}

const PrimaryLvTemperature_ms = 200
function serializePrimaryLvTemperature(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.bp_temperature),
        ...byteify.serializeUint8(data.dcdc_temperature),
    ]);
}
function deserializePrimaryLvTemperature(bytes) {
    return {
        bp_temperature: byteify.deserializeUint8(bytes.slice(0, 1)),
        dcdc_temperature: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

const PrimaryCoolingStatus_ms = 1000
function serializePrimaryCoolingStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.hv_fan_speed),
        ...byteify.serializeUint8(data.lv_fan_speed),
        ...byteify.serializeUint8(data.pump_speed),
    ]);
}
function deserializePrimaryCoolingStatus(bytes) {
    return {
        hv_fan_speed: byteify.deserializeUint8(bytes.slice(0, 1)),
        lv_fan_speed: byteify.deserializeUint8(bytes.slice(1, 2)),
        pump_speed: byteify.deserializeUint8(bytes.slice(2, 3)),
    }
}

const PrimaryHvCellsVoltage_ms = 200
function serializePrimaryHvCellsVoltage(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.cell_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage_0),
        ...byteify.serializeUint16(data.voltage_1),
        ...byteify.serializeUint16(data.voltage_2),
    ]);
}
function deserializePrimaryHvCellsVoltage(bytes) {
    return {
        cell_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage_0: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage_1: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage_2: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

const PrimaryHvCellsTemp_ms = 100
function serializePrimaryHvCellsTemp(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.cell_index),
        ...byteify.serializeUint8(data.temp_0),
        ...byteify.serializeUint8(data.temp_1),
        ...byteify.serializeUint8(data.temp_2),
        ...byteify.serializeUint8(data.temp_3),
        ...byteify.serializeUint8(data.temp_4),
        ...byteify.serializeUint8(data.temp_5),
        ...byteify.serializeUint8(data.temp_6),
    ]);
}
function deserializePrimaryHvCellsTemp(bytes) {
    return {
        cell_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        temp_0: byteify.deserializeUint8(bytes.slice(1, 2)),
        temp_1: byteify.deserializeUint8(bytes.slice(2, 3)),
        temp_2: byteify.deserializeUint8(bytes.slice(3, 4)),
        temp_3: byteify.deserializeUint8(bytes.slice(4, 5)),
        temp_4: byteify.deserializeUint8(bytes.slice(5, 6)),
        temp_5: byteify.deserializeUint8(bytes.slice(6, 7)),
        temp_6: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

const PrimaryHvCellBalancingStatus_ms = 500
function serializePrimaryHvCellBalancingStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.balancing_status),
    ]);
}
function deserializePrimaryHvCellBalancingStatus(bytes) {
    return {
        balancing_status: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

const PrimaryInvLSetTorque_ms = 20
function serializePrimaryInvLSetTorque(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.regid),
        ...byteify.serializeUint8(data.lsb),
        ...byteify.serializeUint8(data.msb),
    ]);
}
function deserializePrimaryInvLSetTorque(bytes) {
    return {
        regid: byteify.deserializeUint8(bytes.slice(0, 1)),
        lsb: byteify.deserializeUint8(bytes.slice(1, 2)),
        msb: byteify.deserializeUint8(bytes.slice(2, 3)),
    }
}

const PrimaryInvLResponse_ms = 100
function serializePrimaryInvLResponse(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.reg_id),
        ...byteify.serializeInt8(data.reg_val),
    ]);
}
function deserializePrimaryInvLResponse(bytes) {
    return {
        reg_id: byteify.deserializeUint8(bytes.slice(0, 1)),
        reg_val: byteify.deserializeInt8(bytes.slice(1, 5)),
    }
}
