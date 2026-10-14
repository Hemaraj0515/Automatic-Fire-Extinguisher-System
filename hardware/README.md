# Hardware Documentation

## 1. Purpose

This folder contains hardware-related documentation for the Automatic Fire Extinguisher System project.

The documentation describes the electronic prototype, component connections, and future hardware development.

## 2. Hardware Overview

The proposed electronic prototype uses an ESP32 development board to read sensor data and evaluate possible fire conditions.

The planned hardware may include:

- ESP32 development board
- MQ-2 smoke sensor
- IR flame sensor
- DHT11 temperature and humidity sensor
- LED indicator for simulated output
- Suitable power supply and connecting wires

The actual component list must be updated to match the hardware available and used in the prototype.

## 3. Wiring Documentation

The file `wiring-diagram.md` will document the verified connections between the ESP32 and the selected sensors.

Connections must be confirmed against the exact board and sensor specifications before powering the circuit.

## 4. Hardware Development

Future hardware development may include:

- A compact printed circuit board (PCB)
- Secure connectors and suitable wiring
- An application-appropriate enclosure
- Protected power supply
- Sensor interfaces suitable for the selected components
- Manufacturer-approved suppression-system integration, subject to qualified engineering review

## 5. Safety

The initial prototype is intended for electronic testing with a simulated warning output.

Do not connect a homemade circuit directly to a real aerosol cartridge or ignition mechanism. Any future suppression integration requires a compatible commercial product, an approved interface, and appropriate validation.

## 6. Current Status

Hardware documentation is in progress. The final component models, verified wiring diagram, PCB design, enclosure, and suppression interface remain to be confirmed.

The prototype must not be treated as a certified fire detection or suppression product.
