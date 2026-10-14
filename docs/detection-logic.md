# Detection Logic

## 1. Objective

The objective of the detection logic is to evaluate sensor readings and identify conditions that may indicate a fire.

The ESP32 prototype uses sensor inputs and decision rules to produce a simulated warning. The detection logic has not yet been validated for real fire protection.

## 2. Sensor Inputs

The proposed prototype may use the following sensors:

| Sensor | Input | Purpose |
|---|---|---|
| MQ-2 smoke sensor | Analog reading | Indicates smoke or certain combustible gases |
| IR flame sensor | Analog reading | Indicates flame-related infrared radiation |
| DHT11 sensor | Temperature and humidity readings | Provides environmental measurements |

The final sensor models and wiring must be confirmed before implementation.

## 3. Basic Detection Process

The proposed process is:

1. Initialize the ESP32 and sensors.
2. Read the available sensor values.
3. Check whether the readings are valid.
4. Evaluate the readings using configured conditions.
5. Indicate a possible fire condition through a safe simulated output.
6. Continue monitoring the sensors.
7. Report sensor or initialization problems where possible.

## 4. Combining Sensor Readings

Using multiple sensor readings may help distinguish possible fire conditions from ordinary environmental changes.

For example, the system could evaluate smoke readings together with flame-related readings or temperature changes.

However, the correct combination of readings depends on the sensor characteristics, intended environment, and testing results. No detection rule in this document is validated for real fire protection.

## 5. Threshold Configuration

A threshold is a value used to evaluate a sensor reading.

For example, a prototype may compare an analog sensor reading against a configurable threshold.

The threshold must be selected after collecting readings under appropriate test conditions. Sensor values can vary with the module, environment, power supply, and calibration.

The project must not treat an untested threshold as a reliable fire detection setting.

## 6. Timing and False Alarms

The future detection logic may include:

- Repeated readings before confirming a possible event
- A suitable time window for evaluating sensor changes
- Filtering or averaging where appropriate
- Conditions to reduce false alarms
- Clear indication when sensor data is unavailable

These features require testing before they can be considered reliable.

## 7. Invalid Readings and Fault Handling

The controller should check for issues such as:

- Sensor initialization failure
- Missing or invalid temperature readings
- Unexpected sensor values
- Sensor data that is unavailable or inconsistent

An invalid reading must not automatically be treated as confirmation of a fire. The system should report the fault where possible and avoid presenting an unverified state as safe.

## 8. Prototype Output

During initial development, the detection logic should control only a safe, low-voltage indicator, such as an LED.

The output represents a simulated warning condition. It does not activate a real fire suppression cartridge.

Any future connection to a suppression product requires a compatible manufacturer-approved interface and qualified engineering review.

## 9. Testing Plan

The detection logic should be evaluated by:

1. Recording ordinary sensor readings.
2. Checking that the controller receives the expected inputs.
3. Applying controlled, safe test conditions suitable for each sensor.
4. Confirming that the simulated output follows the configured rules.
5. Testing invalid readings and sensor initialization failures.
6. Recording results and adjusting the design.
7. Repeating tests to evaluate consistency.

Do not use uncontrolled fire tests or homemade aerosol activation circuits.

## 10. Current Limitations

- Final sensor models and wiring are not confirmed.
- Detection thresholds and timing rules are not validated.
- False-alarm and missed-detection performance is unknown.
- The prototype is not a certified fire detection or suppression product.
- Real suppression integration has not been established.

## 11. Future Improvements

Potential improvements include sensor calibration, better filtering, fault monitoring, configurable thresholds, event logging, application-specific detection rules, and systematic validation.

## 12. Conclusion

The detection logic provides the decision-making structure for the ESP32 prototype. Its immediate purpose is to evaluate sensor readings and control a simulated output. Reliable fire detection and any future suppression integration require suitable components, documented testing, and application-specific validation.
