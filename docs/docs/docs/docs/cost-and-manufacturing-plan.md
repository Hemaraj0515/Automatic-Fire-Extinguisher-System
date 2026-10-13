# Cost and Manufacturing Plan

## 1. Objective

The objective is to develop a cost-conscious Automatic Fire Extinguisher System while maintaining safety, reliability, and suitability for the intended application.

The project aims to reuse a common electronic platform where practical while allowing application-specific detection and suppression configurations.

Low manufacturing cost must not come at the expense of required fire protection performance.

## 2. Product Design Strategy

The proposed design has three main parts:

1. **Common controller platform:** Processes sensor information, evaluates detection conditions, monitors supported faults, and produces a control request.
2. **Application-specific detection:** Uses appropriate sensors and validated detection rules for the intended environment.
3. **Compatible suppression assembly:** Uses a suitable commercial suppression product and its approved activation interface.

The same controller architecture may support multiple product variants. However, one fixed sensor combination, enclosure, or suppression unit must not be assumed suitable for every application.

## 3. Prototype Components

| Component | Purpose | Cost Strategy |
|---|---|---|
| ESP32 development board | Reads sensor data and executes prototype logic | Reuse the existing board |
| MQ-2 sensor, if available | Provides smoke/gas-related experimental readings | Reuse for learning and testing |
| IR flame sensor, if available | Provides flame-related experimental readings | Reuse for controlled testing |
| DHT11, if available | Measures temperature and humidity | Reuse for basic experiments |
| LED and resistor | Simulates a detection or suppression-request output | Use a simple low-voltage output |
| Breadboard and jumper wires | Connect prototype electronics | Reuse available materials |
| USB power supply | Powers the prototype | Use a suitable, reliable supply |

These hobby components are for development and experimentation. They are not automatically suitable for a commercial fire-protection product.

## 4. Production Component Strategy

| Component | Proposed Production Direction |
|---|---|
| Controller | Compact PCB using a suitably selected microcontroller |
| Sensors | Application-appropriate components with documented performance |
| Power supply | Protected supply appropriate to the installation environment |
| PCB | Designed for repeatable assembly, inspection, and testing |
| Connectors | Reliable connectors suited to the environment |
| Enclosure | Appropriate environmental, mechanical, and installation rating |
| Suppression assembly | Compatible commercial unit with manufacturer-approved activation |
| Firmware | Documented, tested, and maintainable software |
| Quality testing | Repeatable functional tests and recorded results |

The final component selection will depend on verified performance requirements, supplier availability, order quantities, and applicable compliance requirements.

## 5. Common Platform and Product Variants

The project may share these elements across multiple applications:

- Controller architecture
- Firmware framework
- Sensor input interfaces where suitable
- Fault-reporting framework
- Manufacturing documentation
- Production test procedures

The following may differ by application:

- Detection sensor types and placement
- Detection thresholds and timing rules
- Enclosure and mounting
- Power requirements
- Environmental protection
- Suppression agent and discharge arrangement
- Installation and maintenance requirements

Potential applications include vehicles, factories, transformers, and electrical panels. Each application requires its own engineering assessment and validation.

## 6. Manufacturing Cost Categories

The estimated cost per finished unit should include:

1. Electronic components
2. PCB fabrication and assembly
3. Sensors and connectors
4. Enclosure and mounting hardware
5. Suppression unit and replaceable cartridge, where applicable
6. Assembly labour
7. Firmware programming and configuration
8. Functional testing and quality inspection
9. Packaging and transport
10. Installation, servicing, and warranty provisions

Certification, compliance testing, development, and tooling should also be budgeted separately.

## 7. Cost Optimization Methods

### Reuse During Prototyping

Use existing development hardware to avoid unnecessary early purchases.

### Reduce Unnecessary Features

Add displays, wireless connectivity, and additional sensors only when their benefits justify their cost and complexity.

### Design for Manufacturing

Use a compact PCB, standardized connectors where appropriate, documented assembly steps, and accessible test points.

### Compare Suppliers

Request quotations for multiple order quantities and compare component specifications, quality, availability, lead times, and warranty terms.

### Test Before Redesigning

Use measured test results to determine whether each component provides sufficient value. Do not remove safety-relevant components solely to reduce cost.

## 8. Cost Estimation Template

Actual quotations will be added as the design develops.

| Cost Item | Supplier | Quantity | Unit Cost | Notes |
|---|---|---:|---:|---|
| Controller and PCB | To be confirmed | To be confirmed | To be confirmed | Production design required |
| Detection sensors | To be confirmed | To be confirmed | To be confirmed | Depends on application |
| Enclosure and connectors | To be confirmed | To be confirmed | To be confirmed | Environmental requirements apply |
| Suppression assembly | To be confirmed | To be confirmed | To be confirmed | Compatibility and safety first |
| Assembly and testing | To be confirmed | To be confirmed | To be confirmed | Requires manufacturing estimate |

No final manufacturing cost or selling price is claimed until the component specifications and supplier quotations have been established.

## 9. Development Roadmap

### Stage 1: Low-Cost Prototype

Reuse the available ESP32 and sensors. Verify basic sensor readings and use an LED to represent a detection event.

### Stage 2: Detection Evaluation

Record sensor readings, test controlled inputs, evaluate false alarms and missed detections, and document limitations.

### Stage 3: Production Electronics

Develop a compact PCB, evaluate component alternatives, and prepare a repeatable manufacturing test procedure.

### Stage 4: Suppression-System Evaluation

Work with qualified professionals and the suppression-system manufacturer to select a suitable unit and approved integration method.

### Stage 5: Product Validation

Assess application-specific performance, installation requirements, applicable regulations, certification needs, and ongoing maintenance.

## 10. Safety and Compliance

- Do not connect an improvised circuit directly to an aerosol cartridge or its igniter.
- Use a low-voltage simulated output during initial development.
- Do not test the prototype by starting an actual fire.
- Do not claim that the prototype is certified or proven to protect lives and property.
- Select suppression equipment and detection components for the actual fire hazards.
- Complete appropriate professional validation and applicable compliance assessments before commercialization.

## 11. Current Status

This plan documents the proposed cost and manufacturing strategy. Production component selection, supplier quotations, final manufacturing costs, and product validation remain pending.

## 12. Conclusion

The project will aim to control cost through hardware reuse during prototyping, a common electronic platform, modular product configurations, manufacturing-friendly design, and supplier comparison.

Safety and verified performance will remain essential requirements throughout development.
