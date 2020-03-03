int ma_in1=2;
int ma_in2=3;
int mb_in1=4;
int mb_in2=5;
int ma_pwm=6;
int mb_pwm=7;
int spd=150;
int sped=50;
void setup() {
 pinMode(ma_in1,OUTPUT);
 pinMode(ma_in2,OUTPUT);
 pinMode(mb_in1,OUTPUT);
 pinMode(mb_in2,OUTPUT);
 pinMode(ma_pwm,OUTPUT);
 pinMode(mb_pwm,OUTPUT);

}

void loop() {
  //forward move
  digitalWrite(ma_pwm,spd);
  digitalWrite(mb_pwm,spd);

  digitalWrite(ma_in1,HIGH);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,HIGH);
  digitalWrite(mb_in2,LOW);
  delay(6000);

   digitalWrite(ma_in1,LOW);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,LOW);
  digitalWrite(mb_in2,LOW);
  delay(1500);

  //backward move
  
  digitalWrite(ma_in1,LOW);
  digitalWrite(ma_in2,HIGH);

  digitalWrite(mb_in1,LOW);
  digitalWrite(mb_in2,HIGH);
  delay(4000);

   digitalWrite(ma_in1,LOW);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,LOW);
  digitalWrite(mb_in2,LOW);
  delay(1500);
  
//Right side move
 
  digitalWrite(ma_in1,HIGH);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,LOW);
  digitalWrite(mb_in2,LOW);
  delay(2000);

//left side move
  
  digitalWrite(ma_in1,LOW);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,HIGH);
  digitalWrite(mb_in2,LOW);
  delay(2000);
}
