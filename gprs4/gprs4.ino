#include <SoftwareSerial.h>
#include <String.h>
String lat = "52.6272690";
String lng = "-1.1526180";
SoftwareSerial sim800(10, 11); // RX, TX
int vs = 9;
void setup()
{
 
  pinMode(vs,INPUT);
  sim800.begin(9600);
  Serial.begin(9600);   
  delay(500);
}
 
void loop()
{
   long measurment =vibration();
  delay(50);
  Serial.println(measurment);
  if(measurment > 50)
  {
   void SendTextMessage();
  }
 
if (sim800.available()){ 
    Serial.write(sim800.read()); 
  }
}
long vibration(){
  long measurment = pulseIn(vs,HIGH);
  return measurment;
}

 
void SendTextMessage()
{
  Serial.println("Sending Text...");
  sim800.print("AT+CMGF=1\r"); // Set the shield to SMS mode
  delay(100);
 
  sim800.print("AT+CMGS=\"+8801780087615\"\r");  
  delay(200);
  sim800.print("http://maps.google.com/?q=");
  sim800.print(lat);
  sim800.print(",");
  sim800.print(lng);

  sim800.print("The vehicle is in danger pleas help\r"); //the content of the message
  delay(500);
  sim800.print((char)26);//the ASCII code of the ctrl+z is 26 (required according to the datasheet)
  delay(100);
  sim800.println();
  Serial.println("Text Sent.");
   delay(500);
 
}
 
void DialVoiceCall()
{
  sim800.println("ATD+8801780087615;");//dial the number, must include country code
  delay(100);
  sim800.println();
}
