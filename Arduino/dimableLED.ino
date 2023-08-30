int potPin = A2;
int gPin = 9;
float potVal;
float LEDVal;
int waitT = 500;

void setup() {

 pinMode(potPin, INPUT);
 pinMode(gPin, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);
  LEDVal = (255. / 1023.) * potVal;
  analogWrite(gPin, LEDVal);


  Serial.println(LEDVal);
  delay(waitT);
  
}
  

