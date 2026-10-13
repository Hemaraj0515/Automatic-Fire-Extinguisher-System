# Components and Their Functions

## 1. Overview

The Automatic Fire Extinguisher System is planned as a fire detection and suppression prototype using an ESP32-based control system and a potassium-based aerosol suppression concept.

The components below describe the proposed design. The final component list will be updated after the available hardware, sensor models, and suppression unit compatibility are confirmed.

## 2. Planned Hardware Components

| Component | Purpose | Status |
|---|---|---|
| ESP32 development board | Processes sensor readings and manages the prototype's decision logic | Planned |
| Smoke sensor | Detects smoke-related changes in the environment | Model to be confirmed |
| Flame sensor | Detects flame-related radiation within its sensing range | Model to be confirmed |
| Temperature sensor | Monitors temperature changes | Model to be confirmed |
| LED indicator | Represents a detection or warning state during testing | Planned |
| Buzzer | Provides an optional audible warning during testing | Optional |
| Breadboard and jumper wires | Support low-voltage prototype connections | Availability to be confirmed |
| USB power supply | Powers the ESP32 during development and testing | To be confirmed |
| Potassium-based aerosol suppression unit | Intended fire-suppression agent for the proposed system | Exact product and compatibility to be confirmed |

## 3. Software and Development Tools

| Tool | Purpose |
|---|---|
| Arduino IDE | Used to develop and upload ESP32 firmware |
| Embedded C/C++ | Used to implement sensor reading and decision logic |
| GitHub | Stores source code, documentation, and project development history |

## 4. Component Functions

### ESP32 Development Board

The ESP32 reads sensor data, evaluates the programmed detection conditions, and controls the prototype's low-voltage indicators. Any real suppression-system interface must remain separate until an approved interface and qualified integration method are established.

### Smoke Sensor

The smoke sensor provides readings that may indicate smoke or airborne particles. Its output depends on the sensor model and environmental conditions, so it must be calibrated and tested before being used in detection logic.

### Flame Sensor

The flame sensor detects radiation within its sensing range. Its readings can be affected by sensor orientation, distance, lighting, and the type of flame.

### Temperature Sensor

The temperature sensor monitors local temperature. Temperature readings can support detection logic, but a single reading cannot reliably establish that a fire is present.

### LED Indicator

An LED can represent states such as normal operation, possible fire detection, or a simulated suppression request.

### Potassium-Based Aerosol Suppression Unit

The project proposes a potassium-based aerosol agent for fire suppression. The exact product, activation mechanism, suitable fire classes, installation conditions, and compatibility must be verified with the manufacturer.

The real suppression unit will not be activated directly by an improvised ESP32 circuit. Initial development will use a simulated output, such as an LED, instead.

## 5. Proposed Detection Approach

The planned prototype may combine smoke, flame, and temperature readings to reduce reliance on a single sensor.

The ESP32 will evaluate the readings using configurable conditions and produce a simulated warning or suppression-request output.

Sensor thresholds, timing conditions, and fault-handling behavior will be selected and tested after the actual sensor models are confirmed.

## 6. Passive and Electronic Activation Approaches

Two possible approaches must be distinguished:

### Approach A: Passive Thermal Activation

A suitable manufacturer-designed thermal mechanism activates the suppression unit when its specified activation conditions are reached. This approach may operate without an ESP32 or external electrical power, depending on the product design.

### Approach B: Electronic Detection and Control

The ESP32 evaluates sensor readings and produces a control request. Any connection to a real suppression unit requires a manufacturer-approved interface and qualified engineering review.

These approaches are alternatives unless a professionally designed system explicitly combines them.

## 7. Components and Details to Confirm

- Exact ESP32 development-board model
- Available smoke sensor model
- Available flame sensor model
- Available temperature sensor model
- Availability of LEDs, resistors, buzzer, breadboard, and jumper wires
- Suitable low-voltage power supply
- Exact potassium-based aerosol product
- Manufacturer-approved activation and interface requirements
- Applicable fire-safety requirements and professional testing arrangements

## 8. Safety Notes

- Test detection logic with low-voltage indicators before considering any suppression hardware.
- Do not build an improvised igniter or connect a real aerosol cartridge directly to the ESP32.
- Do not test the prototype on an actual fire.
- Do not present the prototype as certified or proven to protect lives or property.
- Real suppression-system integration requires suitable equipment, qualified professionals, and manufacturer-approved procedures.

## 9. Current Development Status

This document describes the planned components and design considerations. The final hardware configuration, sensor thresholds, and suppression interface remain subject to confirmation and testing.
