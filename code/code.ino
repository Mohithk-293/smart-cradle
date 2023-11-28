#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266>
#define BLYNK_PRINT Serial


Char auth[]=”N_526PBuvF/ngblQ2UbHwUCuy5Nx0LHQ5”;
Char ssid[]=”BSNL”;
Char pass[]=”8172295121”;
BlynkTimer timer;
Iotflag=0;
void notifyOnThings() 
{ 
 int isButtonPressed=digitalRead(D1);
 if (isButtonPressed==1&&flag==0)
{
Serial.println(“signal came.”);
Blynk.notify(“baby is crying!”);
 flag=1;
} 
int irButtonPressed=digitalRead(D2);
if(irButtonPressed==1&&flag==0) 
{ 
Serial.println(“signal came”);
Blynk.notify(“baby bed got wet!”);
 Flag=1;
}
Else if(irButtonPressed==0||irButtonPressed==0)
{
 Flag=0;
}
}
Void setup()
{
Serial.begin(9600);
Blynk.begin(auth.ssid.pass);
pinMode(D1,INPUT_PULLUP);
pinMode(D@,INPUT_PULLUP);
Department of Information Science and Engineering 
timer.setInterval(1000L,notifyOnThings);
}
void loop()
{
Blynk.run();
Timer.run();
}
