#define BUTTON_PIN1 4
#define BUTTON_PIN2 5
#define LED_NAND 18
#define LED_NOR 21

void setup() {
  pinMode(BUTTON_PIN1, INPUT_PULLUP);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
  pinMode(LED_NAND, OUTPUT);
  pinMode(LED_NOR, OUTPUT);
}

void loop() {
  int buttonState1 = digitalRead(BUTTON_PIN1);
  int buttonState2 = digitalRead(BUTTON_PIN2);

  // NAND
  if (!(buttonState1 && buttonState2)) {
    digitalWrite(LED_NAND, HIGH);
  } else {
    digitalWrite(LED_NAND, LOW);
  }

  // NOR
  if (!(buttonState1 || buttonState2)) {
    digitalWrite(LED_NOR, HIGH);
  } else {
    digitalWrite(LED_NOR, LOW);
  }
}
