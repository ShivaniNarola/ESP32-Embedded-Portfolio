#define LED_PIN 18

void setup() {
  ledcAttach(LED_PIN, 5000, 8);  // pin, freq, resolution
}

void loop() {
  for (int duty = 0; duty <= 255; duty++) {
    ledcWrite(LED_PIN, duty);
    delay(10);
  }

  for (int duty = 255; duty >= 0; duty--) {
    ledcWrite(LED_PIN, duty);
    delay(10);
  }
}
