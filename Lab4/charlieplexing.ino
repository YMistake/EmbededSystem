
int led1 = 13;
int led2 = 12;
int led3 = 11;
int s1 = 2;
int s2 = 3;
int s3 = A0;
int temp1,temp2;

void setup(){
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  Serial.begin(9600);
}

void loop(){
  // use 2 jumper for switch case
  // temp1 = digitalRead(s1);
  // temp2 = digitalRead(s2);
  // if (temp1 == 0 && temp2 == 0){
  //   LED_BLANK();
  // }
  // if (temp1 == 1){
  //   swipe(50);
  // } else if (temp2 == 1){
  //   two_way();
  // }

  // use LDR or Variable Resister to switch case
  // temp1 = analogRead(s3);
  // Serial.println(temp1);
  // if (temp1 < 500 && temp1 > 0){
  //   swipe(50);
  // } else if (temp1 >= 500){
  //   two_way();
  // } else if (temp1 == 0){
  //   LED_BLANK();
  // }

  // use Variable Resister to control speed of LED
  temp1 = analogRead(s3);
  Serial.println(temp1);
  temp1 = temp1 / 5;
  temp2 = 205 - temp1;

  if(temp2 == 205){
    LED_BLANK();
  } else {
    swipe(temp2);
  }
}

// function for define each LED
void LED(int l1, int l2, int l3){
  pinMode(l1, OUTPUT);
  digitalWrite(l1, HIGH);
  pinMode(l2, OUTPUT);
  digitalWrite(l2, LOW);
  pinMode(l3, INPUT);
  digitalWrite(l3, LOW);
  delay(5);
}

// function for blank LED
void LED_BLANK(){
  pinMode(led1, OUTPUT);
  digitalWrite(led1, LOW);
  pinMode(led2, OUTPUT);
  digitalWrite(led2, LOW);
  pinMode(led3, OUTPUT);
  digitalWrite(led3, LOW);
  delay(3);
}

// function Blink LED from 1 to 6 and back to 1
void swipe(int d){
  LED1();
  delay(d);
  LED2();
  delay(d);
  LED3();
  delay(d);
  LED4();
  delay(d);
  LED5();
  delay(d);
  LED6();
  delay(d);
  LED5();
  delay(d);
  LED4();
  delay(d);
  LED3();
  delay(d);
  LED2();
  delay(d);
}

// function for blink LED two way (multiplex)
void two_way(){
  int j = 15;
  for (int i=0; i<j; i++){
    LED1();
    LED6();
  }
  dl();
  for (int i=0; i<j; i++){
    LED2();
    LED5();
  }
  dl();
  for (int i=0; i<j; i++){
    LED3();
    LED4();
  }
  dl();
  for (int i=0; i<j; i++){
    LED_BLANK();
  }
  for (int i=0; i<j; i++){
    LED3();
    LED4();
  }
  dl();
  for (int i=0; i<j; i++){
    LED2();
    LED5();
  }
  dl();
}

// function for set LED 1 - 6 on
void LED1(){
  LED(led2,led1,led3);
}

void LED2(){
  LED(led1,led2,led3);
}

void LED3(){
  LED(led3,led2,led1);
}

void LED4(){
  LED(led2,led3,led1);
}

void LED5(){
  LED(led3,led1,led2);
}

void LED6(){
  LED(led1,led3,led2);
}

// function delay
void dl(){
  delay(40);
}
