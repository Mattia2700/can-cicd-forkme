import bms_pb2

def protobuf2dict(id, payload):
    match id:
        case 1536 | 1568 | 1600 | 1632 | 1664 | 1696:
            message = bms_pb2.BoardStatus()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 1281 | 1313 | 1345 | 1377 | 1409 | 1441:
            message = bms_pb2.Temperatures()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 514 | 546 | 578 | 610 | 642 | 674:
            message = bms_pb2.Voltages()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 515:
            message = bms_pb2.Balancing()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

        case 260:
            message = bms_pb2.FwUpdate()
            message.ParseFromString(payload)
            return {field.name: getattr(message, field.name) for field in message.DESCRIPTOR.fields}

    raise Exception("Unknown message id")