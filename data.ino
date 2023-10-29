#include <SoftwareSerial.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>
SoftwareSerial NodeMCU(D2,D3);

void setup() {
Serial.begin(9600);
NodeMCU.begin(4800);
pinMode(D2,INPUT);
pinMode(D3,OUTPUT);
pinMode(D1,OUTPUT);
}

void loop() {
  NodeMCU.print("10");
  NodeMCU.println("\n");
  delay(30);
	int sensorValue = analogRead(A0);   // read the input on analog pin 0
	float voltage = sensorValue *(0.11*100);   // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  int y = map(voltage,176,242,1,100);
	
  Serial.println(y);   // print out the value you read
  if(y<=10){
    digitalWrite(D1,HIGH);
  }
  else {
    digitalWrite(D1,LOW);
  }
}