# Sensor Test Results

## 1. Purpose

This document records the observed behaviour of the sensors used in the Automatic Fire Extinguisher System prototype.

Only actual observations should be recorded. Untested results must remain marked as pending.

## 2. Hardware Configuration

| Item | Details |
|---|---|
| Controller board | ESP32, exact model to be confirmed |
| Smoke sensor | MQ-2, if installed |
| Flame sensor | IR flame sensor, if installed |
| Temperature sensor | DHT11, if installed |
| Firmware version | To be recorded |
| Test date | To be recorded |

Update this table to match the hardware actually used during testing.

## 3. Sensor Test Records

| Test ID | Sensor | Test condition | Observed reading | Status |
|---|---|---|---|---|
| ST-01 | MQ-2 | Ordinary environment | Not recorded | Pending |
| ST-02 | IR flame sensor | Safe test condition | Not recorded | Pending |
| ST-03 | DHT11 | Ordinary environment | Not recorded | Pending |

These entries are planned tests, not completed test results.

## 4. Repeated Readings

Use the following template to record readings during each test.

| Sample | Time | Smoke reading | Flame reading | Temperature (°C) | Humidity (%) |
|---|---|---|---|---|---|
| 1 | TBD | TBD | TBD | TBD | TBD |
| 2 | TBD | TBD | TBD | TBD | TBD |
| 3 | TBD | TBD | TBD | TBD | TBD |
| 4 | TBD | TBD | TBD | TBD | TBD |
| 5 | TBD | TBD | TBD | TBD | TBD |

Enter the actual values shown by the Serial Monitor. Leave unavailable sensor fields marked as TBD or not applicable.

## 5. Observations

Record details such as:

- Whether the sensor initialized successfully
- Whether readings were available
- Whether readings changed under controlled test conditions
- Whether values were stable or fluctuated
- Whether any unexpected behaviour occurred

Do not assume that a sensor reading confirms a fire.

## 6. Problems and Fixes

| Problem observed | Possible cause investigated | Action taken | Result |
|---|---|---|---|
| None recorded yet | Not applicable | Not applicable | Pending |

Add an entry whenever an issue is observed and investigated.

## 7. Test Summary

- Sensor initialization: Pending
- Reading collection: Pending
- Repeated-reading consistency: Pending
- Detection logic: Pending
- Simulated LED output: Pending

Update these statuses only after the corresponding tests have been performed.

## 8. Safety Notes

Initial testing is limited to safe electronic prototype evaluation. Do not create an actual fire, perform uncontrolled smoke tests, or connect homemade circuitry to a real suppression cartridge.

Sensor readings alone do not demonstrate reliable fire detection or suppression performance.

## 9. Conclusion

This document provides a record of sensor testing for the prototype. Actual readings and observations will be added as tests are completed. The results apply only to the hardware and conditions tested.
