#include<SoftwareSerial.h>
#include<ArduinoJson.h>
SoftwareSerial ArduinoUno(3,2);
SoftwareSerial s(5,6);
void setup() {
  s.begin(9600);
  Serial.begin(9600);
  ArduinoUno.begin(4800);

}

void loop() {
  int sensorValue = analogRead(A3);
  float volt2 = sensorValue *(0.11*100);
  Serial.println(volt2);
  //int z = map(volt2, 176, 242, 1, 100);
  
  /*StaticJsonBuffer<1000> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();
  root["data1"]=ldr2;
  root["data2"]=z;
  if(s.available()>0){
      root.printTo(s);
  }
  while(ArduinoUno.available()>0){
    float val = ArduinoUno.parseFloat();
    if(ArduinoUno.read()=='\n'){
      Serial.println(val);
    }
  }
  delay(30);*/
}
