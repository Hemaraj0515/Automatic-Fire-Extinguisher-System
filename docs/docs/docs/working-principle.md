# Working Principle

## 1. Introduction

The Automatic Fire Extinguisher System is a proposed fire-detection and suppression project. Its electronic prototype uses an ESP32 to process sensor readings and indicate when a possible fire condition is detected.

The long-term concept involves a potassium-based aerosol suppression agent. Actual suppression hardware is not part of the electronic testing process unless a suitable product and an approved integration method are confirmed.

## 2. Basic Working Principle

The proposed electronic prototype follows these stages:

1. **Sensor monitoring:** Sensors collect information about smoke, flame-related radiation, and temperature.
2. **Data processing:** The ESP32 reads the available sensor values.
3. **Condition evaluation:** The program checks whether the readings meet configured detection conditions.
4. **Detection indication:** If the conditions are met, the ESP32 activates a low-voltage indicator, such as an LED.
5. **Fault monitoring:** The prototype may identify certain invalid readings or sensor faults, depending on the sensor and firmware design.
6. **Future suppression integration:** A real suppression unit may be considered only after product compatibility, safety requirements, and an approved activation interface are verified.

## 3. System Flow

**Start → Initialize ESP32 → Read sensors → Evaluate readings → Indicate possible fire condition → Continue monitoring**

During early development, the output represents a simulated suppression request. It does not activate a real aerosol cartridge.

## 4. Role of Each Sensor

### Smoke Sensor

Provides readings that may indicate smoke or airborne particles. Performance depends on the selected sensor, calibration, and environmental conditions.

### Flame Sensor

Detects radiation within its sensing range. Its readings may be influenced by lighting, orientation, distance, and other environmental factors.

### Temperature Sensor

Measures the local temperature. Temperature changes may support the detection decision but should not be treated as proof of a fire by themselves.

### ESP32

Reads sensor data, applies the programmed conditions, and manages the prototype's low-voltage indicators.

## 5. Detection Logic

The planned detection algorithm may evaluate the sensor readings together rather than depending on a single sensor.

For example, the program may check whether a smoke reading exceeds a configured threshold and whether another sensor also indicates a possible fire condition.

The actual thresholds, timing rules, and combination of sensor readings will be decided after the hardware models are confirmed and tested.

These example conditions are design concepts, not validated fire-detection settings.

## 6. Passive Thermal Activation Alternative

A separate approach uses a manufacturer-designed thermal activation mechanism.

Depending on the selected product, a passive unit may activate when its specified thermal conditions are reached without relying on ESP32 software or external electrical power.

This passive approach differs from electronic sensor-based detection. The two approaches must not be treated as interchangeable without a properly engineered design.

## 7. Testing Plan

The electronic prototype will be evaluated in stages:

1. Confirm that the ESP32 and individual sensors operate correctly.
2. Read and record sensor values under ordinary conditions.
3. Test the program using controlled sensor inputs.
4. Verify the detection decision and LED indication.
5. Test simulated fault conditions where practical.
6. Document observed results, limitations, and required improvements.

Initial tests will use safe, low-voltage indicators. The prototype will not be tested by starting an actual fire or improvising an aerosol activation circuit.

## 8. Potential Applications

The project concept may be investigated for applications such as:

- Vehicle fire-suppression systems
- Factory and industrial equipment protection
- Transformer protection
- Electrical panel and equipment protection

Each application requires a separate assessment of the fire hazards, suppression-agent suitability, installation requirements, and relevant safety standards. These are potential applications, not confirmed capabilities.

## 9. Current Limitations

- Sensor models and calibrated thresholds must be confirmed.
- Sensor readings may produce false alarms or miss hazardous conditions.
- The prototype is not a certified fire alarm or fire-suppression system.
- Real aerosol integration has not been established.
- Suppression performance must not be assumed without appropriate professional testing.

## 10. Conclusion

The proposed working principle combines sensor monitoring, ESP32-based decision logic, and a simulated output for safe prototype development. Future work will focus on reliable detection, fault handling, measured testing, and evaluating whether a suitable manufacturer-approved suppression system can be integrated.
