# System Architecture

## 1. Overview

The Automatic Fire Extinguisher System is a proposed fire-detection and suppression concept designed to identify potential fire conditions and support an appropriate suppression response.

The electronic prototype uses an ESP32 to process sensor readings and evaluate programmed detection conditions. The long-term concept uses a potassium-based aerosol suppression agent in powder form.

The system is intended to be investigated for applications such as vehicles, factories, transformers, and electrical panels. Each application requires separate validation of the detection method, suppression agent, installation, and safety requirements.

## 2. Main System Components

The proposed architecture consists of the following components:

1. **Detection sensors:** Collect information about smoke, flame-related radiation, and temperature.
2. **ESP32 controller:** Reads sensor data and evaluates programmed detection conditions.
3. **Decision logic:** Processes sensor readings and determines whether a configured detection condition has been met.
4. **Output indication:** Uses an LED or another safe low-voltage indicator to represent a detection event during prototype development.
5. **Suppression interface:** A future interface to a compatible, manufacturer-approved suppression unit, subject to professional engineering and validation.
6. **Power supply:** Provides suitable power to the electronic prototype and, in a future product, the required electronic components.

## 3. Proposed System Architecture

The planned electronic prototype follows this sequence:

**Sensors → ESP32 → Detection Logic → Simulated Output**

The future product concept may include a professionally engineered interface to a compatible suppression assembly:

**Sensors → Controller and Validated Decision Logic → Approved Interface → Compatible Suppression Unit**

The real suppression unit will not be connected to an improvised ESP32 activation circuit. Initial development will use a simulated low-voltage output.

## 4. Sensor Layer

### Smoke Sensor

Provides readings that may indicate smoke or airborne particles. The selected sensor's performance, limitations, and suitability must be evaluated for the intended application.

### Flame Sensor

Detects radiation within its sensing range. Its readings may be affected by orientation, distance, lighting, and environmental conditions.

### Temperature Sensor

Measures the local temperature. Temperature readings may provide additional information for evaluating possible fire conditions.

The final sensor selection will depend on the application and the results of appropriate testing.

## 5. Controller Layer

The ESP32 is proposed as the controller for the initial electronic prototype.

Its responsibilities include:

- Initializing the sensors.
- Reading sensor values.
- Evaluating configured detection conditions.
- Monitoring supported sensor faults.
- Producing a simulated output during testing.
- Reporting sensor readings and system status through the serial monitor.

The production design may use a compact PCB and a suitably selected microcontroller after functional requirements and manufacturing costs have been evaluated.

## 6. Decision Logic

The decision logic will evaluate the available sensor readings against configured conditions.

The proposed design may combine information from multiple sensors rather than relying on one reading alone. Timing conditions and fault checks may also be considered to help evaluate the reliability of a detection event.

Sensor thresholds and decision rules have not yet been validated. They must be selected and tested for the actual sensor models and intended application.

## 7. Output and Suppression Interface

During prototype development, the output will be represented by a low-voltage indicator, such as an LED.

This allows the detection logic to be tested without activating real suppression hardware.

The future product may use a suitable commercial suppression assembly containing a potassium-based aerosol agent. The exact product, activation mechanism, compatibility, installation requirements, and performance must be verified with the manufacturer and qualified professionals.

No homemade igniter or improvised circuit will be used to activate a real aerosol cartridge.

## 8. Power Supply

The initial prototype may use a suitable USB power supply for the ESP32 and its supported low-voltage electronics.

A production design will require a power solution appropriate to the intended installation, including suitable electrical protection and backup power where required.

Power requirements may differ between vehicles, factories, transformers, and electrical panels.

## 9. Operating Sequence

The proposed electronic prototype operates in the following sequence:

1. The controller starts and initializes the available sensors.
2. The system reads sensor values.
3. The controller evaluates the readings against configured conditions.
4. The system records or reports the readings.
5. If the programmed test condition is met, the simulated output indicates a detection event.
6. The controller continues monitoring and handles supported sensor faults.

This sequence describes the planned prototype behavior. It does not establish that the system can reliably detect or suppress every fire.

## 10. Fault Handling

Future development may include:

- Identifying invalid or unavailable sensor readings.
- Reporting initialization failures.
- Recording detection events and fault conditions.
- Indicating when the prototype cannot obtain valid sensor data.
- Preventing invalid readings from being treated as confirmed fire conditions.

Fault handling must be tested against the selected hardware and software implementation.

## 11. Potential Applications

The project may be investigated for the following applications:

- Vehicle fire-suppression systems.
- Factory and industrial equipment protection.
- Transformer protection.
- Electrical panels and equipment affected by electrical faults.

These are potential application areas, not validated capabilities. Each requires a separate assessment of the hazards, detection method, suppression agent, installation conditions, and applicable safety requirements.

## 12. Future Enhancements

Planned areas for investigation include:

- Multi-sensor detection logic.
- Improved handling of false alarms.
- Sensor fault monitoring.
- Compact PCB design.
- Modular hardware configurations.
- Application-specific detection settings.
- Event logging and diagnostic information.
- Manufacturing cost optimization.
- Professional evaluation of suppression-system integration.
- Application-specific performance and compliance testing.

These items are planned improvements and should not be presented as completed features until implemented and tested.

## 13. Safety Considerations

- Initial testing will use safe, low-voltage simulated outputs.
- The prototype will not be tested by starting an actual fire.
- Real suppression hardware will not be activated through an improvised circuit.
- The suppression unit must be compatible with the intended application.
- Professional engineering review and appropriate validation are required before any real suppression integration.
- The prototype is not a certified fire-protection system and must not be relied upon to protect lives or property.

## 14. Development Status

The project is in the documentation and prototype-development stage.

The electronic detection system, sensor thresholds, fault-handling behavior, and manufacturing design require implementation and testing. The real suppression interface and application-specific performance remain to be validated.

## 15. Conclusion

The proposed architecture separates sensor monitoring, controller-based decision logic, simulated output, and future suppression-system integration.

The design aims to reuse a common electronic platform where practical while allowing application-specific configurations. Cost optimization will be pursued alongside safety, reliability, and appropriate professional validation.
