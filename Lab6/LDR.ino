
int led1 = 13;
int led2 = 12;
int led3 = 11;
int s3 = A0;
int temp;

void setup(){
  pinMode(s3, INPUT);
  Serial.begin(9600);
}

void loop(){
   temp = analogRead(s3);
   Serial.println(temp);
   if (temp > 10){
     LED_BLANK();
   } else {
     LED1();
     LED2();
     LED3();
     LED4();
     LED5();
     LED6();
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
  delay(1);
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

