#include <DHT.h>

#define MQ2_PIN 34
#define FLAME_PIN 32
#define DHT_PIN 4
#define LED_PIN 2
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);

  pinMode(MQ2_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  dht.begin();
}

void loop() {
  int smokeValue = analogRead(MQ2_PIN);
  int flameValue = analogRead(FLAME_PIN);

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Smoke: ");
  Serial.println(smokeValue);

  Serial.print("Flame: ");
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

  Serial.println("--------------------");

  delay(1000);
}
