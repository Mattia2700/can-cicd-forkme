import primary_pb2

def protobuf2dict(id, payload):
    match id:
        case 1024:
            message = primary_pb2.SteerVersion()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1056:
            message = primary_pb2.DasVersion()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1088:
            message = primary_pb2.HvVersion()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1120:
            message = primary_pb2.LvVersion()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1152:
            message = primary_pb2.TlmVersion()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 256:
            message = primary_pb2.Timestamp()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 257:
            message = primary_pb2.SetTlmStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 258:
            message = primary_pb2.TlmStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1793:
            message = primary_pb2.SteerSystemStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 771:
            message = primary_pb2.HvVoltage()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 803:
            message = primary_pb2.HvCurrent()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 835:
            message = primary_pb2.HvTemp()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 3:
            message = primary_pb2.HvErrors()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 35:
            message = primary_pb2.TsStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 4:
            message = primary_pb2.SetTsStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 261:
            message = primary_pb2.SteerStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 773:
            message = primary_pb2.SetCarStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1029:
            message = primary_pb2.SetPedalsRange()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 514:
            message = primary_pb2.CarStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 2:
            message = primary_pb2.DasErrors()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 774:
            message = primary_pb2.LvCurrent()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 806:
            message = primary_pb2.LvVoltage()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 838:
            message = primary_pb2.LvTemperature()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 870:
            message = primary_pb2.CoolingStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1:
            message = primary_pb2.Marker()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 519:
            message = primary_pb2.HvCellsVoltage()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 551:
            message = primary_pb2.HvCellsTemp()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 583:
            message = primary_pb2.HvCellBalancingStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 516:
            message = primary_pb2.SetCellBalancingStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 772:
            message = primary_pb2.HandcartStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 546:
            message = primary_pb2.Speed()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 513:
            message = primary_pb2.InvLSetTorque()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 385:
            message = primary_pb2.InvLResponse()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

    raise Exception("Unknown message id")