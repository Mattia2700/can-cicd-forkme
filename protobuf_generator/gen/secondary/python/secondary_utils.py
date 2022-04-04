import secondary_pb2

def protobuf2dict(id, payload):
    match id:
        case 1260:
            message = secondary_pb2.ImuAngularRate()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1261:
            message = secondary_pb2.ImuAcceleration()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1460:
            message = secondary_pb2.IrtsFl0()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1461:
            message = secondary_pb2.IrtsFl1()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1462:
            message = secondary_pb2.IrtsFl2()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1463:
            message = secondary_pb2.IrtsFl3()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1464:
            message = secondary_pb2.IrtsFr0()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1465:
            message = secondary_pb2.IrtsFr1()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1466:
            message = secondary_pb2.IrtsFr2()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1467:
            message = secondary_pb2.IrtsFr3()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1468:
            message = secondary_pb2.IrtsRl0()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1469:
            message = secondary_pb2.IrtsRl1()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1470:
            message = secondary_pb2.IrtsRl2()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1471:
            message = secondary_pb2.IrtsRl3()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1472:
            message = secondary_pb2.IrtsRr0()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1473:
            message = secondary_pb2.IrtsRr1()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1474:
            message = secondary_pb2.IrtsRr2()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1475:
            message = secondary_pb2.IrtsRr3()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1025:
            message = secondary_pb2.GpsCoords()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1057:
            message = secondary_pb2.GpsSpeed()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1089:
            message = secondary_pb2.LapCount()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

    raise Exception("Unknown message id")