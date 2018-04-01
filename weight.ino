#include <Q2HX711.h>

const byte hx711_data_pin = A2;
const byte hx711_clock_pin = A3;

Q2HX711 hx711(hx711_data_pin, hx711_clock_pin);

void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  int a =( hx711.read()/(837.63*100.0))-100;
  if(a>10){
    digitalWrite(11,LOW);
    }
  else{
    digitalWrite(11,HIGH);
    }
  Serial.println(a);
  //Serial.println((hx711.read()/(837.63*100.0))-100);
  delay(1000);
}
