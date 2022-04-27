import os, sys
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
import can
from includes_generator.primary import ids
from naked_generator.primary.py import primary

bus = can.Bus(interface='socketcan', channel='vcan0', receive_own_messages=True)

for msg in bus:
    if msg.arbitration_id == ids.ID_CAR_STATUS:
        test = primary.PrimaryCarStatusMsg()
        test.deserialize(msg.data)
        for key, value in test.__dict__.items():
            print(f"{key}: {value}")


notifier = can.Notifier(bus, [can.Logger("recorded.log"), can.Printer()])
