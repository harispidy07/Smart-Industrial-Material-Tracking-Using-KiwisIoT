#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

#define IR_SENSOR_PIN D5

const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

int materialCount = 0;

bool previousState = HIGH;

unsigned long lastDetectionTime = 0;
const unsigned long debounceDelay = 500;

void setup() {
  Serial.begin(115200);

  pinMode(IR_SENSOR_PIN, INPUT);

  kiwisiot.begin();

  Serial.println("Industrial Material Tracking Started");
}

void loop() {
  kiwisiot.run();

  int sensorState = digitalRead(IR_SENSOR_PIN);

  // Most IR obstacle modules are active LOW
  if (sensorState == LOW && previousState == HIGH) {

    unsigned long currentTime = millis();

    if (currentTime - lastDetectionTime > debounceDelay) {

      materialCount++;

      lastDetectionTime = currentTime;

      Serial.println("Material Detected!");

      Serial.print("Total Material Count: ");
      Serial.println(materialCount);

      kiwisiot.send("0", 1);
      kiwisiot.send("1", materialCount);
      kiwisiot.send("2", "MATERIAL DETECTED");
    }
  }

  // When the material is no longer detected
  if (sensorState == HIGH && previousState == LOW) {
    kiwisiot.send("0", 0);
    kiwisiot.send("2", "TRACKING READY");
  }

  previousState = sensorState;

  delay(50);
}