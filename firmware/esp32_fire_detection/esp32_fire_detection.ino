```cpp
#include <DHT.h>

#define MQ2_PIN 34
#define FLAME_PIN 32
#define DHT_PIN 4
#define LED_PIN 2
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

int smokeLimit = 1800;
int flameLimit = 1000;
float tempLimit = 50.0;

void setup() {
  Serial.begin(115200);

  pinMode(MQ2_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  dht.begin();

  Serial.println("Automatic Fire Detection Prototype");
  Serial.println("Suppression activation: SIMULATION ONLY");
}

void loop() {
  int smokeValue = analogRead(MQ2_PIN);
  int flameValue = analogRead(FLAME_PIN);

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  bool smokeDetected = smokeValue > smokeLimit;
  bool flameDetected = flameValue < flameLimit;
  bool highTemperature = !isnan(temperature) &&
                         temperature >= tempLimit;

  bool fireDetected = smokeDetected ||
                      flameDetected ||
                      highTemperature;

  Serial.println("\n-------------------------");

  Serial.print("Smoke value: ");
  Serial.println(smokeValue);

  Serial.print("Flame value: ");
  Serial.println(flameValue);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("DHT11 reading failed");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  if (fireDetected) {
    digitalWrite(LED_PIN, HIGH);

    Serial.println("WARNING: POSSIBLE FIRE DETECTED");
    Serial.println("SUPPRESSION REQUEST - SIMULATION ONLY");
    Serial.println("REAL EXTINGUISHER NOT CONNECTED");
  } else {
    digitalWrite(LED_PIN, LOW);

    Serial.println("No warning condition detected");
  }

  delay(1000);
}
```
