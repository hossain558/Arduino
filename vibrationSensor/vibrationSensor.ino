 int led = 10;
int vs = 9;
void setup() {
  // put your setup code here, to run once:
 //pinMode(led,OUTPUT);
pinMode(vs,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long measurment =vibration();
  delay(50);
  Serial.println(measurment);
if(measurment > 50)
{
  digitalWrite(led, HIGH);
}
else
{
  digitalWrite(led,LOW);
}}
long vibration(){
  long measurment = pulseIn(vs,HIGH);
  return measurment;
}
