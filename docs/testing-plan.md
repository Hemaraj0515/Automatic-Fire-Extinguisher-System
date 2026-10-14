# Testing Plan

## 1. Objective

The objective of this testing plan is to verify the basic operation of the ESP32-based fire detection prototype.

The initial tests focus on sensor readings, controller behaviour, simulated output, and fault handling. They do not validate the performance of a real fire suppression system.

## 2. Testing Scope

The prototype testing covers:

- ESP32 initialization
- Sensor readings
- Serial Monitor output
- Simulated LED indication
- Detection logic
- Basic fault handling
- Recording test results

Real fire suppression performance is outside the scope of the initial prototype tests.

## 3. Required Components

| Component | Purpose |
|---|---|
| ESP32 development board | Reads inputs and runs the program |
| MQ-2 sensor, if available | Provides smoke or gas-related readings |
| IR flame sensor, if available | Provides flame-related readings |
| DHT11 sensor, if available | Measures temperature and humidity |
| LED and suitable resistor | Simulates a warning output |
| USB cable and suitable power source | Powers the prototype |
| Arduino IDE | Compiles and uploads the firmware |

Confirm the actual component models and wiring before beginning the tests.

## 4. Pre-Test Checklist

Before powering the prototype:

- [ ] Confirm the ESP32 board model.
- [ ] Check each sensor's pin labels and operating voltage.
- [ ] Verify the wiring against the selected board and sensor documentation.
- [ ] Check that the LED uses a suitable current-limiting resistor.
- [ ] Confirm the correct libraries are installed.
- [ ] Select the correct board and serial port in Arduino IDE.
- [ ] Keep the suppression cartridge and activation mechanism disconnected.

## 5. Test Cases

| Test ID | Test | Expected result |
|---|---|---|
| TC-01 | Power on the ESP32 | The board starts successfully |
| TC-02 | Initialize the sensors | Available sensors initialize as expected |
| TC-03 | Read the MQ-2 sensor | A reading is displayed in the Serial Monitor |
| TC-04 | Read the flame sensor | A reading is displayed in the Serial Monitor |
| TC-05 | Read the DHT11 sensor | Valid temperature and humidity readings are displayed |
| TC-06 | Check the LED output | The LED responds to the configured simulated condition |
| TC-07 | Check invalid sensor data | The program reports or handles invalid data where supported |
| TC-08 | Observe repeated readings | Readings continue without unexpected program interruption |

Some tests depend on which components are actually installed. Do not mark a test as passed until it has been performed.

## 6. Testing Procedure

### Step 1: Verify the Hardware

Check the board, sensors, power source, and connections against their documentation.

### Step 2: Upload the Firmware

Compile the program in Arduino IDE, select the correct board and port, and upload the firmware.

### Step 3: Observe Sensor Readings

Open the Serial Monitor at the baud rate configured in the program. Record the sensor readings under ordinary, safe environmental conditions.

### Step 4: Check Sensor Response

Use only controlled, safe test conditions appropriate for each sensor. Follow the sensor manufacturer's instructions. Do not create an actual fire or expose components to hazardous heat or smoke.

### Step 5: Check the Simulated Output

If detection logic has been implemented, verify that the LED follows the configured conditions. If detection logic is not yet implemented, record the LED test as pending.

### Step 6: Record Problems

Document compilation errors, missing readings, unexpected values, sensor initialization failures, and wiring issues.

### Step 7: Repeat the Tests

Repeat relevant tests to check whether the results are consistent.

## 7. Test Results Template

Record actual observations in the following table.

| Test ID | Date | Observed result | Status | Notes |
|---|---|---|---|---|
| TC-01 | TBD | TBD | Pending | TBD |
| TC-02 | TBD | TBD | Pending | TBD |
| TC-03 | TBD | TBD | Pending | TBD |
| TC-04 | TBD | TBD | Pending | TBD |
| TC-05 | TBD | TBD | Pending | TBD |
| TC-06 | TBD | TBD | Pending | TBD |
| TC-07 | TBD | TBD | Pending | TBD |
| TC-08 | TBD | TBD | Pending | TBD |

Update each row only after performing the corresponding test. Use **Pass**, **Fail**, or **Pending** as appropriate.

## 8. Safety Precautions

- Do not perform uncontrolled fire tests.
- Do not use a homemade circuit to activate an aerosol cartridge.
- Keep the prototype disconnected from real suppression hardware.
- Disconnect power before changing wiring.
- Follow the component manufacturer's electrical and handling instructions.
- Do not treat successful sensor readings as proof that the system can reliably detect or extinguish fires.

## 9. Limitations

The test results apply only to the hardware, firmware, and conditions actually tested.

Successful prototype testing does not establish certification, reliable fire detection, or effective fire suppression. Additional engineering and application-specific validation are required before real-world deployment.

## 10. Conclusion

This testing plan provides a structured way to evaluate the ESP32 prototype and document its behaviour. Recorded results will help identify problems and guide future improvements while keeping initial testing focused on safe electronic simulation.
