//MOTOR WORKS//
int RMA=13;
int RMB=14;
int LMA=15;
int LMB=12;

//MOTOR SPEED//
int full=255;
int zero=0;

//LINE & BACKGROUND//
int line = 0;
int bg = 1;

//IR CHANNELS//
int S1;
int S2;
int S3;
int S4;
int S5;
int S6;
int S7;
int S8;

void setup() {
  Serial.begin(9600);
  pinMode(RMA,OUTPUT);
  pinMode(RMB,OUTPUT);
  pinMode(LMA,OUTPUT);
  pinMode(LMB,OUTPUT);

  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  pinMode(S5,INPUT);
  pinMode(S6,INPUT);
  pinMode(S7,INPUT);
  pinMode(S8,INPUT);
}

void loop() {
  S1=digitalRead(2);
  S2=digitalRead(3);
  S3=digitalRead(4);
  S4=digitalRead(5);
  S5=digitalRead(6);
  S6=digitalRead(7);
  S7=digitalRead(8);
  S8=digitalRead(9);
  Serial.println(S1);

  if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == line) && (S5 == line) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   forward();
  }
  
  if((S1 == bg) && (S2 == bg) && (S3 == line) && (S4 == line) && (S5 == line) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }
  
  if((S1 == bg) && (S2 == line) && (S3 == line) && (S4 == line) && (S5 == line) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }
  
  if((S1 == line) && (S2 == line) && (S3 == line) && (S4 == line) && (S5 == line) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }
  
  if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == line) && (S5 == line) && (S6 == line) && (S7 == bg) && (S8 == bg))
  {
   right();
  }
  
  if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == line) && (S5 == line) && (S6 == line) && (S7 == line) && (S8 == bg))
  {
   right();
  }
  
  if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == line) && (S5 == line) && (S6 == line) && (S7 == line) && (S8 == line))
  {
   right();
  }

  if((S1 == bg) && (S2 == bg) && (S3 == line) && (S4 == line) && (S5 == bg) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }

  if((S1 == bg) && (S2 == line) && (S3 == line) && (S4 == bg) && (S5 == bg) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }

  if((S1 == line) && (S2 == line) && (S3 == bg) && (S4 == bg) && (S5 == bg) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }

  if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == bg) && (S5 == line) && (S6 == line) && (S7 == bg) && (S8 == bg))
  {
   right();
  }

   if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == bg) && (S5 == bg) && (S6 == line) && (S7 == line) && (S8 == bg))
  {
   right();
  }

   if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == bg) && (S5 == bg) && (S6 == bg) && (S7 == line) && (S8 == line))
  {
   right();
  }

  if((S1 == bg) && (S2 == bg) && (S3 == bg) && (S4 == bg) && (S5 == bg) && (S6 == bg) && (S7 == bg) && (S8 == bg))
  {
   left();
  }

  if((S1 == line) && (S2 == line) && (S3 == line) && (S4 == line) && (S5 == line) && (S6 == line) && (S7 == line) && (S8 == line))
  {
   forward();
  }
}

//FUNCTIONS//

void forward(){
  analogWrite(LMA,full);
  analogWrite(LMB,zero);
  analogWrite(RMA,full);
  analogWrite(RMB,zero);
}

void left(){
  analogWrite(LMA,zero);
  analogWrite(LMB,full);
  analogWrite(RMA,full);
  analogWrite(RMB,zero);
}

void right(){
  analogWrite(LMA,full);
  analogWrite(LMB,zero);
  analogWrite(RMA,zero);
  analogWrite(RMB,full);
}

void STOP(){
  analogWrite(LMA,zero);
  analogWrite(LMB,zero);
  analogWrite(RMA,zero);
  analogWrite(RMB,zero);
}
