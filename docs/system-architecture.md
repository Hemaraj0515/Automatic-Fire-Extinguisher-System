# System Architecture

## 1. Overview

The Automatic Fire Extinguisher System is a proposed fire-detection and automatic fire-suppression project using an ESP32-based electronic controller and a compatible potassium-based aerosol suppression system.

The project aims to detect potential fire conditions, process sensor readings, and initiate an approved suppression controller when the required conditions are satisfied.

The system is intended to be adaptable to different fire hazards, including vehicle, industrial, transformer, and electrical-equipment applications. Each application requires separate suitability assessment and validation.

## 2. Architecture

The proposed system contains five functional stages:

1. **Sensing:** Collect environmental measurements using suitable sensors.
2. **Processing:** Read and validate sensor measurements using the ESP32.
3. **Decision-making:** Evaluate detection conditions and sensor health.
4. **Activation interface:** Send a command to a compatible, manufacturer-approved suppression controller, where supported.
5. **Suppression:** Release the suppression agent through the selected equipment according to its approved operating procedure.

## 3. Functional Block Diagram

```text
+----------------------------+
|     Fire-related Inputs    |
|                            |
|  Flame Sensor              |
|  Temperature Sensor        |
|  Optional Smoke Sensor     |
+-------------+--------------+
              |
              v
+----------------------------+
|       ESP32 Controller     |
|                            |
|  Sensor Reading            |
|  Data Validation           |
|  Detection Logic           |
|  Fault Handling            |
+-------------+--------------+
              |
              v
+----------------------------+
|     Control Interface      |
|                            |
|  Initial: Simulated Output |
|  Future: Approved Control  |
+-------------+--------------+
              |
              v
+----------------------------+
| Compatible Aerosol         |
| Suppression Equipment      |
+----------------------------+
```

The real suppression equipment is not connected during initial prototype testing.

## 4. Sensor Layer

### Flame Sensor

Detects flame-like radiation within the sensor's operating range. Its performance depends on the sensor type, placement, environmental conditions, and calibration.

### Temperature Sensor

Measures temperature to provide an additional indicator of potentially hazardous conditions.

### Smoke Sensor

An optional sensor can provide additional information about smoke or certain gases. Its readings must be interpreted according to its specifications and limitations.

No individual hobby sensor can guarantee that a fire is present or absent.

## 5. Controller Layer

The ESP32 is intended to:

- Read available sensor measurements.
- Validate readings and identify basic sensor faults.
- Evaluate configured detection conditions.
- Apply confirmation logic to help reduce false activations.
- Generate a simulated activation command during initial testing.
- Record readings and controller states for debugging.
- Support future monitoring features where technically appropriate.

## 6. Activation and Suppression Layer

The final suppression equipment must be selected for the intended application.

The proposed agent is a potassium-based aerosol in powder form, as described in the project concept. Its exact formulation, operating conditions, and activation requirements must be confirmed from the selected manufacturer's documentation.

The ESP32 must not directly drive a cartridge's igniter or activation terminals. Any future electronic integration must use a manufacturer-approved activation interface that explicitly supports the intended control method.

## 7. Operating Sequence

1. The system starts and initializes its sensors.
2. The controller checks whether readings are available and plausible.
3. The sensors collect environmental measurements.
4. The ESP32 evaluates the configured detection conditions.
5. A confirmed detection event produces a simulated activation command.
6. The system records its state for testing.
7. Future integration with suppression equipment is considered only after the detection logic and approved interface have been verified.

## 8. Fault Handling

Potential faults to investigate include:

- Disconnected sensors.
- Invalid or unavailable temperature readings.
- Implausible sensor values.
- Controller restart or power interruption.
- Failed or incomplete activation feedback, if the selected equipment supports feedback.

The system must not treat missing sensor data as proof that the environment is safe.

## 9. Future Enhancements

Potential enhancements include:

- Improved multi-sensor detection.
- False-activation prevention.
- Sensor-health monitoring.
- Controller and system-readiness checks.
- Event logging.
- Optional remote status monitoring.
- Application-specific configurations.
- Testing with approved suppression equipment under qualified supervision.

## 10. Current Status

This architecture describes the proposed design. The complete system has not yet been validated as a fire-suppression product.

Initial development will focus on sensor testing, ESP32 control logic, and simulated activation before any investigation of real suppression integration.

## 11. Safety Note

This project is a prototype-development effort, not a certified fire-protection system. Actual suppression equipment must be selected, installed, and tested according to its manufacturer's instructions and applicable safety requirements.
