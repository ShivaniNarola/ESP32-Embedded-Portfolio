#define LED_PIN 18
#define POT_PIN 34

void setup() {
  Serial.begin(115200);

  // Setup PWM directly on pin (new API)
  ledcAttach(LED_PIN, 5000, 8);  
}

void loop() {
  int potValue = analogRead(POT_PIN);   // 0–4095

  int brightness = map(potValue, 0, 4095, 0, 255);

  ledcWrite(LED_PIN, brightness);

  Serial.println(brightness);
  delay(50);
}