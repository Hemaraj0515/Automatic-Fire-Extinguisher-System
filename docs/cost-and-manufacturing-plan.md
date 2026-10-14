# Cost and Manufacturing Plan

## 1. Objective

The objective is to develop a cost-conscious automatic fire extinguisher system while maintaining safety and reliability.

The design should reuse a common electronic platform wherever practical. Different applications may require different sensors, enclosures, power supplies, and compatible fire suppression units.

## 2. Product Design Strategy

The proposed design follows three principles:

- **Common controller platform:** Reuse the controller design where suitable.
- **Application-specific detection:** Select sensors and detection rules based on the intended environment.
- **Compatible suppression assembly:** Use a commercially designed suppression unit with a suitable, approved interface.

A single configuration should not be assumed suitable for every application.

## 3. Prototype Components

| Component | Purpose | Status |
|---|---|---|
| ESP32 development board | Reads sensors and processes data | Reuse if available |
| MQ-2 sensor | Detects smoke or combustible gases | Confirm availability |
| IR flame sensor | Detects flame-related radiation | Confirm availability |
| DHT11 sensor | Measures temperature and humidity | Confirm availability |
| LED and resistor | Indicates a simulated fire condition | Planned |
| Breadboard and jumper wires | Prototype connections | Confirm availability |
| USB power supply | Powers the prototype | Confirm availability |

These components are intended for learning and prototype evaluation, not a certified fire protection product.

## 4. Production Component Strategy

| Component | Manufacturing consideration |
|---|---|
| Controller PCB | Compact design suitable for the application |
| Sensors | Select according to the fire risks and environment |
| Power supply | Provide appropriate protection and reliability |
| Connectors and wiring | Use suitable ratings and secure connections |
| Enclosure | Consider temperature, dust, moisture, vibration, and mounting |
| Suppression unit | Select a compatible commercial product |
| Firmware | Include detection logic and fault handling |
| Testing | Verify performance under defined test conditions |

Final components must be selected after the intended application and safety requirements are established.

## 5. Common Platform and Product Variants

A common platform may share:

- Controller hardware and firmware structure
- Sensor interfaces where suitable
- Fault-monitoring functions
- Documentation and test procedures

Different product variants may require different:

- Sensors and sensor placement
- Detection rules and thresholds
- Enclosures and mounting arrangements
- Power supplies and backup arrangements
- Suppression agents and discharge systems
- Installation and maintenance procedures

This modular approach may reduce development effort without forcing unsuitable components into every application.

## 6. Manufacturing Cost Categories

The main cost categories include:

1. Electronic components
2. Printed circuit board (PCB)
3. Sensors and connectors
4. Enclosure and mounting hardware
5. Commercial suppression unit and replacement cartridge
6. Assembly labour
7. Firmware development and programming
8. Testing and quality control
9. Packaging and transportation
10. Installation, maintenance, and warranty
11. Certification, compliance, development, and tooling

The final cost will depend on the product configuration, production quantity, supplier prices, and applicable requirements.

## 7. Cost Optimization

Possible cost-saving methods include:

- Reusing available development hardware during prototyping.
- Avoiding unnecessary features in the first prototype.
- Designing the PCB for easier manufacturing and assembly.
- Comparing quotations from multiple suppliers.
- Using a common platform where technically appropriate.
- Testing components before committing to large production quantities.
- Improving the design based on documented test results.

Safety-critical components and required protection must not be removed simply to reduce cost.

## 8. Cost Estimation Template

Use this table to record actual supplier quotations.

| Cost item | Supplier | Quantity | Unit cost | Notes |
|---|---|---:|---:|---|
| Controller and PCB | TBD | TBD | TBD | Final design pending |
| Sensors | TBD | TBD | TBD | Models pending |
| Enclosure and connectors | TBD | TBD | TBD | Application dependent |
| Suppression assembly | TBD | TBD | TBD | Product selection pending |
| Assembly and testing | TBD | TBD | TBD | Process pending |

No final manufacturing cost is claimed at this stage. Actual quotations and confirmed specifications are required.

## 9. Development Roadmap

1. Build a low-cost electronic prototype.
2. Verify sensor readings and simulated output.
3. Evaluate detection behaviour and possible false alarms.
4. Develop production-oriented electronics.
5. Evaluate suppression compatibility with qualified professionals.
6. Complete application-specific testing and required approvals.
7. Estimate manufacturing costs using supplier quotations.

## 10. Safety and Compliance

- Use a low-voltage simulated output during initial electronic testing.
- Do not connect a homemade circuit directly to an aerosol cartridge or ignition mechanism.
- Use only a suitable suppression product and its manufacturer-approved interface.
- Obtain qualified engineering review and application-specific validation.
- Do not claim that the prototype is certified or suitable for life-safety use.

## 11. Current Status

The cost and manufacturing strategy is documented. Final production components, supplier quotations, manufacturing costs, suppression integration, and validation remain pending.

## 12. Conclusion

The project aims to control development and manufacturing costs through hardware reuse, modular design, suitable component selection, and supplier comparison. Cost optimization must remain secondary to safety, reliability, and application-specific validation.
