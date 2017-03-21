int SEG_A = 2;
int SEG_B = 3;
int SEG_C = 4;
int SEG_D = 5;
int SEG_E = 6;
int SEG_F = 7;
int SEG_G = 8;
int SEG_DP = 9;
int Q1 = 13;
int Q2 = 12;
int Q3 = 11;
int Q4 = 10;

char seg[] = {
  0b10000000,
  0b00000100,
  0b00001000,
  0b00010000,
  0b00100000,
  0b01000000,
  0b00000010
};

void display7seg(int a, int b){
  digitalWrite(SEG_A,seg[a] & 1<<7);
  digitalWrite(SEG_B,seg[a] & 1<<6);
  digitalWrite(SEG_C,seg[a] & 1<<5);
  digitalWrite(SEG_D,seg[a] & 1<<4);
  digitalWrite(SEG_E,seg[a] & 1<<3);
  digitalWrite(SEG_F,seg[a] & 1<<2);
  digitalWrite(SEG_G,seg[a] & 1<<1);
  digitalWrite(SEG_DP,seg[a] & 1<<0);
  digitalWrite(Q1, 1 & 1 << b);
  digitalWrite(Q2, 2 & 1 << b);
  digitalWrite(Q3, 4 & 1 << b);
  digitalWrite(Q4, 8 & 1 << b);
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  pinMode(SEG_DP, OUTPUT);
  pinMode(Q1, OUTPUT);
  pinMode(Q2, OUTPUT);
  pinMode(Q3, OUTPUT);
  pinMode(Q4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    for ( int i = 3; i >= 0; i-- ){
      display7seg(0, i);
      delay1();
      }
     display7seg(1, 0);
     delay1();
     display7seg(2, 0);
     delay1(); 
     for ( int j = 0; j < 4; j++){
      display7seg(3, j);
      delay1();
     }
     display7seg(4, 3);
     delay1();
     display7seg(5, 3);
     delay1();
     display7seg(0, 3);
     delay1();
     display7seg(1, 3);
     delay1();
     display7seg(2, 3);
     delay1();
     display7seg(4, 2);
     delay1();
     display7seg(5, 2);
     delay1();
     display7seg(0, 2);
     delay1();
     display7seg(1, 2);
     delay1();
     display7seg(2, 2);
     delay1();
     display7seg(4, 1);
     delay1();
     display7seg(5, 1);
     delay1();
     display7seg(0, 1);
     delay1();
     display7seg(1, 1);
     delay1();
     display7seg(2, 1);
     delay1();
     display7seg(4, 0);
     delay1();
     display7seg(5, 0);
     delay1();
     display7seg(0, 0);
     delay1();
     for ( int l = 0; l<=3; l++){
       for ( int k = 1; k<=5; k++){
        display7seg(k, l);
        delay1();
       }
     }
     delay(300);
     for ( int m = 3; m>=0; m--){
      display7seg(6, m);
      delay(80);
     }
     for ( int n = 0; n<=3; n++){
      display7seg(6, n);
      delay(80);
     }
     delay(300);
}

void delay1(){
  delay(120);
}


