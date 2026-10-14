# Firmware

## 1. Overview

This folder contains the firmware for the Automatic Fire Extinguisher System prototype.

The firmware is developed using Arduino C++ and is intended to run on a compatible ESP32 development board.

## 2. Current Features

The initial firmware supports:

- Reading the MQ-2 sensor's analog output
- Reading the IR flame sensor's analog output
- Reading temperature and humidity from the DHT11 sensor
- Displaying sensor readings in the Serial Monitor
- Repeating sensor readings at regular intervals

## 3. Firmware Location

The main firmware file is:

`esp32_fire_detection/esp32_fire_detection.ino`

## 4. Development Environment

The firmware is intended to be developed using:

- Arduino IDE
- ESP32 board support package
- DHT sensor library by Adafruit
- Adafruit Unified Sensor library

The required libraries must be installed before compiling the program.

## 5. Current Limitations

The current firmware reads and displays sensor data only.

It does not yet implement validated fire detection logic, automatic suppression, or a working fire warning system. The LED output is kept off in the starter code.

## 6. Safety

The prototype is intended for safe electronic testing. Do not connect homemade circuitry to a real suppression cartridge or ignition mechanism.

## 7. Future Development

Planned improvements include:

- Sensor reading validation
- Detection logic development
- Simulated LED warning output
- Basic fault handling
- Testing and documentation

All changes should be tested and documented before being considered reliable.
