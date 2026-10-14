# Wiring Diagram

## 1. Purpose

This document describes the proposed wiring for the ESP32-based Automatic Fire Extinguisher System prototype.

The initial circuit is intended for sensor monitoring and a simulated LED output. It does not control a real fire suppression cartridge.

## 2. Planned Pin Connections

The following GPIO assignments are proposed for a compatible ESP32 development board.

| Component | Component pin | Proposed ESP32 connection |
|---|---|---|
| MQ-2 sensor | Analog output (AO) | GPIO 34 |
| IR flame sensor | Analog output (AO) | GPIO 32 |
| DHT11 sensor | Data | GPIO 4 |
| LED indicator | GPIO control through a suitable resistor | GPIO 2 |
| Sensors | GND | Common GND |
| Sensors | VCC | According to each module's specifications |

**Important:** These assignments must be checked against the actual board and sensor modules before wiring. Do not assume every module uses the same pin labels or voltage requirements.

## 3. Power and Voltage Checks

- Confirm the operating voltage required by each sensor module.
- Check the ESP32 board's input and GPIO voltage limits.
- Ensure that signals connected to ESP32 GPIO pins do not exceed the permitted input voltage.
- Do not connect a 5 V analog output directly to an ESP32 input unless the signal is appropriately adapted.
- Use a suitable current-limiting resistor with the LED.
- Disconnect power before changing any connections.

## 4. Connection Overview

The proposed signal flow is:

`MQ-2 Sensor → ESP32 GPIO 34`

`IR Flame Sensor → ESP32 GPIO 32`

`DHT11 Sensor → ESP32 GPIO 4`

`ESP32 GPIO 2 → Suitable Resistor → LED Indicator`

The sensors and controller require appropriate power and ground connections according to their specifications.

## 5. Testing Procedure

1. Identify the exact ESP32 board and sensor models.
2. Check the manufacturer's pinout and voltage specifications.
3. Connect one sensor at a time.
4. Inspect the wiring before applying power.
5. Upload the relevant sensor-reading program.
6. Check readings in the Arduino IDE Serial Monitor.
7. Add the LED output only after verifying the relevant connections.
8. Record the confirmed wiring and test results.

## 6. Suppression Hardware

No real suppression cartridge or ignition mechanism should be connected to this prototype.

Any future connection to a commercial suppression product requires a compatible manufacturer-approved interface, qualified engineering review, and application-specific validation.

## 7. Current Status

The GPIO assignments are proposed and have not been verified against the final hardware configuration. The wiring diagram must be updated after the actual board, sensor modules, and connections are confirmed.

The prototype is not a certified fire detection or suppression system.
