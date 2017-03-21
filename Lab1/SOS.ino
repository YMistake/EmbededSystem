

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();
  delay(1400);
}


void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(600);
}
