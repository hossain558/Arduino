int trig=A0;
int echo=A1;
float distance;
float duration;

void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = (duration*0.034)/2;
  
  Serial.print("The distance is = ");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
