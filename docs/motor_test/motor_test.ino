int MA_E = 5;   //pwm control motor speed
int MA_P = 4;    //power level control rotation direction
int MB_E = 6;   //pwm control motor speed
int MB_P = 7;    //power level control rotation direction

void setup() {
  // put your setup code here, to run once:
  pinMode(MA_E, OUTPUT);
  pinMode(MA_P, OUTPUT);
  pinMode(MB_E, OUTPUT);
  pinMode(MB_P, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //revers rotation
  analogWrite(MA_E, 255);
  digitalWrite(MA_P, HIGH);
  analogWrite(MB_E, 255);
  digitalWrite(MB_P, HIGH);
  delay(2000);
  //forward rotation
  // digitalWrite(MA_E, HIGH);
  analogWrite(MA_E, 255);
  digitalWrite(MA_P, LOW);
  analogWrite(MA_E, 255);
  digitalWrite(MB_P, LOW);
  delay(2000);
  //stop
  analogWrite(MA_E, 0);
  digitalWrite(MA_P, LOW);
  analogWrite(MB_E, 0); 
  digitalWrite(MB_P, LOW);
  delay(2000);
}
