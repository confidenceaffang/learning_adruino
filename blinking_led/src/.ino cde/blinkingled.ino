/*
 * Project 01: Basic LED Blink
 * Hardware: External LED + 220-ohm current-limiting resistor on Pin 8 (active-high)
 */

#include <stdint.h>

constexpr uint8_t LED_PIN = 8;
constexpr uint32_t BLINK_INTERVAL_IN_MS = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_INTERVAL_IN_MS);

  digitalWrite(LED_PIN, LOW);
  delay(BLINK_INTERVAL_IN_MS);
}