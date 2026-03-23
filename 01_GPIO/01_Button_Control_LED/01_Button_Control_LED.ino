#define BUTTON_PIN 4
#define LED_PIN 2

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // Button with internal pull-up
  pinMode(LED_PIN, OUTPUT);           // LED output

  Serial.begin(115200);               // Debug (optional but useful)
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  // Debug print
  Serial.println(buttonState);

  // Logic: NOT pressed → HIGH → LED ON
  //        Pressed → LOW → LED OFF
  if (buttonState == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
    }

  delay(50);  // small delay for stability
}