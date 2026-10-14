# Future Development Roadmap

## 1. Project Vision

The goal of the Automatic Fire Extinguisher System project is to explore an automatic fire detection and suppression concept using electronic sensing and a suitable suppression product.

The initial focus is an ESP32-based prototype that monitors sensors and produces a simulated warning output.

A practical fire suppression product would require further engineering, testing, and application-specific validation.

## 2. Phase 1: Basic Electronic Prototype

### Objectives

- Set up the ESP32 development board.
- Connect the available sensors.
- Read sensor values using the Arduino IDE.
- Display readings in the Serial Monitor.
- Verify the basic hardware connections.

### Expected outcome

A working prototype that collects sensor readings and displays them for observation.

## 3. Phase 2: Detection Logic

### Objectives

- Develop rules for evaluating sensor readings.
- Investigate how multiple sensor inputs can be combined.
- Handle invalid or unavailable readings.
- Add a simulated LED warning output.
- Record observations and identify possible false alarms.

### Expected outcome

A prototype that evaluates sensor data and demonstrates a simulated warning under configured test conditions.

Detection thresholds and rules must be tested before their reliability can be assessed.

## 4. Phase 3: Testing and Documentation

### Objectives

- Record ordinary sensor readings.
- Perform suitable controlled sensor tests.
- Document observed behaviour.
- Test basic fault-handling behaviour.
- Update the testing records and wiring documentation.

### Expected outcome

A documented prototype with recorded results, known limitations, and a list of improvements.

## 5. Phase 4: Hardware Improvement

### Objectives

- Confirm the final component models.
- Review sensor suitability for the intended application.
- Explore a compact PCB design.
- Improve wiring, connectors, and enclosure design.
- Evaluate power requirements and appropriate electrical protection.

### Expected outcome

A more organized hardware design suitable for further engineering evaluation.

## 6. Phase 5: Suppression-System Evaluation

### Objectives

- Identify a suitable commercial suppression product.
- Review its intended applications and operating limitations.
- Confirm compatibility with the intended fire risks.
- Obtain qualified engineering review.
- Determine the required interface, installation method, and maintenance procedures.

### Expected outcome

A documented suppression-integration proposal based on a compatible product and professional review.

The electronic prototype must remain disconnected from real cartridges and activation mechanisms until a suitable, approved design has been established.

## 7. Phase 6: Application-Specific Validation

Potential future applications include:

- Vehicles
- Factories and industrial equipment
- Electrical panels
- Transformers

Each application requires its own assessment of fire risks, environmental conditions, installation requirements, and applicable standards.

### Expected outcome

An application-specific validation plan. Suitability for real-world deployment must not be assumed before the required testing and approvals are completed.

## 8. Phase 7: Manufacturing and Cost Optimization

### Objectives

- Obtain supplier quotations.
- Compare component options.
- Estimate PCB and assembly costs.
- Evaluate enclosure and installation costs.
- Consider maintenance and replacement requirements.
- Reduce unnecessary cost without compromising safety.

### Expected outcome

A cost estimate based on confirmed specifications, supplier quotations, and the intended production quantity.

## 9. Future Improvements

Potential improvements include:

- Better sensor calibration
- Improved detection logic
- False-alarm handling
- Sensor fault monitoring
- Event logging
- Compact electronics
- Application-specific configurations
- Improved testing and maintenance documentation

Each improvement should be evaluated against the project's actual requirements.

## 10. Current Project Status

The project currently includes design documentation for the architecture, components, working principle, manufacturing strategy, detection logic, safety considerations, testing plan, and proposed hardware connections.

The next practical milestone is to confirm the available hardware, verify the wiring, and test sensor readings safely.

## 11. Conclusion

The roadmap provides a staged approach to developing the Automatic Fire Extinguisher System. It prioritizes a basic electronic prototype, documented testing, hardware improvement, and professional evaluation before any real suppression integration or manufacturing decision.
