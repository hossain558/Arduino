int trig=A0;
int echo=A1;
float distance;
float duration;
int ma_in1=2;
int ma_in2=3;
int mb_in1=4;
int mb_in2=5;
int ma_pwm=6;
int mb_pwm=7;
int spd=200;
int sped=10;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  pinMode(ma_in1,OUTPUT);
 pinMode(ma_in2,OUTPUT);
 pinMode(mb_in1,OUTPUT);
 pinMode(mb_in2,OUTPUT);
 pinMode(ma_pwm,OUTPUT);
 pinMode(mb_pwm,OUTPUT);
}

void loop(){
  // digitalWrite(trig,LOW);
  // delay(10);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  duration = pulseIn(echo,HIGH);
  distance = (duration/2)/29.1;
  
  //Serial.print("The distance is = ");
 // Serial.print(distance);
 // Serial.println("cm");
 // delay(500);

  if(distance >25)
  {
    digitalWrite(ma_pwm,spd);
  digitalWrite(mb_pwm,spd);

  digitalWrite(ma_in1,HIGH);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,HIGH);
  digitalWrite(mb_in2,LOW);
   //delay(6000);
  }

  else if(distance < 25)
  {
  digitalWrite(ma_pwm,sped);
  digitalWrite(mb_pwm,sped);
  digitalWrite(ma_in1,HIGH);
  digitalWrite(ma_in2,LOW);

  digitalWrite(mb_in1,LOW);
  digitalWrite(mb_in2,LOW);
   //delay(2000);
  }
}
