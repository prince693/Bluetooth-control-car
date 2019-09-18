#include <SoftwareSerial.h>

char junk;
int red=5;
int green=7;
int blue=6;
int ma1=8;
int ma2=9;
int mb1=10;
int mb2=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
pinMode(ma1,OUTPUT);
pinMode(ma2,OUTPUT);
pinMode(mb1,OUTPUT);
pinMode(mb2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()){
  junk=Serial.read();
  if(junk=='f'){
  digitalWrite(ma1,HIGH);
  digitalWrite(ma2,LOW);
  digitalWrite(mb1,LOW);
  digitalWrite(mb2,HIGH);
  digitalWrite(red,LOW); digitalWrite(blue,LOW); digitalWrite(green,HIGH);
  }
  else if(junk=='b'){
    digitalWrite(ma2,HIGH);
  digitalWrite(ma1,LOW);
  digitalWrite(mb2,LOW);
  digitalWrite(mb1,HIGH);
 digitalWrite(red,LOW); digitalWrite(blue,LOW); digitalWrite(green,HIGH);
  }
else if(junk=='l'){
  digitalWrite(ma1,HIGH);
  digitalWrite(ma2,LOW);
  digitalWrite(mb2,LOW);
  digitalWrite(mb1,HIGH);
  digitalWrite(red,HIGH); digitalWrite(blue,LOW); digitalWrite(green,HIGH);
  }
  else if(junk=='r'){
  digitalWrite(ma2,HIGH);
  digitalWrite(ma1,LOW);
  digitalWrite(mb1,LOW);
  digitalWrite(mb2,HIGH);
  digitalWrite(red,HIGH); digitalWrite(blue,LOW); digitalWrite(green,HIGH);
  }
  else {
  digitalWrite(ma1,LOW);
  digitalWrite(ma2,LOW);
  digitalWrite(mb2,LOW);
  digitalWrite(mb1,LOW);
  digitalWrite(red,LOW); digitalWrite(blue,HIGH); digitalWrite(green,LOW);
  }
  
  }
delay(100); 
}
