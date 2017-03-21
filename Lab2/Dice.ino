int SWITCH = 0;
int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int LED4 = 13;
int dice;
int temp;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, HIGH);
  pinMode(LED2, HIGH);
  pinMode(LED3, HIGH);
  pinMode(LED4, HIGH);
  pinMode(SWITCH, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = digitalRead(SWITCH);
  if (temp == LOW){
    dice = random(1,7);
  } else if (dice == 1){
    digitalWrite(LED4,HIGH);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
  } else if (dice == 2){
    digitalWrite(LED3,HIGH);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED4,LOW);
  } else if (dice == 3){
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
  } else if (dice == 4){
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED1,LOW);
    digitalWrite(LED4,LOW);
  } else if (dice == 5){
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED1,LOW);
  } else if (dice == 6){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
  }
}
