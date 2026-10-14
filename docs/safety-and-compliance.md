# Safety and Compliance

## 1. Objective

The objective of this document is to identify the safety considerations for developing the proposed Automatic Fire Extinguisher System.

The current project focuses on an ESP32-based electronic prototype with sensor monitoring and simulated output. A real fire suppression system requires separate engineering, testing, and validation.

## 2. Prototype Safety

During initial development:

- Use a suitable low-voltage power supply for the electronic prototype.
- Use an LED as a simulated warning output.
- Check sensor wiring and power requirements before connecting components.
- Keep the prototype away from actual flames and hazardous test conditions.
- Disconnect the power before changing wiring.
- Do not connect a homemade circuit directly to a suppression cartridge or ignition mechanism.

## 3. Fire Detection Limitations

The proposed prototype may use smoke, flame, and temperature sensors.

However:

- Individual sensors may produce false readings.
- Environmental conditions can affect sensor performance.
- A sensor reading alone cannot guarantee that a fire exists.
- Untested thresholds may cause false alarms or missed detections.
- Sensor faults must not be interpreted as confirmation that the environment is safe.

The detection logic must be evaluated under suitable controlled test conditions.

## 4. Suppression System Safety

The project explores the possible use of a potassium-based aerosol suppression agent in powder form.

Before any real suppression unit is selected or integrated, the following must be established:

- The exact product and its intended applications
- Compatibility with the intended fire risks
- Installation and mounting requirements
- Operating temperature and environmental limits
- Electrical and mechanical interface requirements
- Maintenance and replacement procedures
- Manufacturer instructions and applicable safety requirements

The agent description alone does not establish that a product is suitable for every application.

## 5. Passive and Electronic Approaches

Two possible approaches are considered.

### A. Passive Thermal Activation

A commercially designed unit may use a manufacturer-specified thermal activation mechanism. Its operation and limitations depend on the particular product.

### B. Electronic Detection and Control

An electronic controller may evaluate sensor readings and generate a control request. Any connection to a real suppression unit must use an approved, compatible interface designed for that purpose.

These approaches are alternatives unless a qualified engineering design establishes that they can safely work together.

## 6. Application-Specific Assessment

The system may eventually be investigated for applications such as:

- Vehicles
- Factories and industrial equipment
- Electrical panels
- Transformers

Each application has different fire risks, environmental conditions, installation constraints, and protection requirements.

The current prototype has not been validated for these applications. A separate technical assessment is required for each intended use.

## 7. Electrical and Environmental Protection

A production design may require suitable protection against:

- Electrical faults and short circuits
- Overcurrent and incorrect polarity
- Heat, dust, and moisture
- Vibration and mechanical damage
- Power interruption
- Loose connections and component failure

The required protections depend on the final design and operating environment.

## 8. Testing and Validation

Before considering real-world deployment, the project requires documented evaluation of:

1. Sensor operation and calibration
2. Detection consistency
3. False alarms and missed detections
4. Controller and power-supply reliability
5. Fault reporting and failure behaviour
6. Enclosure and installation suitability
7. Suppression-product compatibility
8. Applicable testing and approval requirements

Real suppression testing must be conducted only through suitable facilities and qualified professionals using approved equipment and procedures.

## 9. Compliance Considerations

Applicable standards, certifications, and legal requirements must be identified based on the intended application, location, and selected suppression product.

No specific certification is claimed for the current prototype.

## 10. Current Safety Status

- The project is at the prototype and documentation stage.
- The initial electronic output is simulated using a low-voltage indicator.
- The final hardware configuration and detection thresholds remain unvalidated.
- No real suppression interface has been established.
- The system must not be relied upon as a certified fire protection device.

## 11. Conclusion

Safety is a primary design requirement for the Automatic Fire Extinguisher System. Progress toward a practical product requires suitable components, manufacturer-approved suppression equipment, qualified engineering review, and application-specific validation.
