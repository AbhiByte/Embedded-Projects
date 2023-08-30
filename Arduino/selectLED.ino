//Output pins
int pinRed = 4;
int pinGreen = 8;
int pinBlue = 12;

//Strings
String msg = "What LED do you want on? ";
String res;

//Other
int waitT = 500;
int waitT2 = 150;

void setup() {

  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  Serial.println(msg);
  while(Serial.available() == 0){
    //Polling
  }
  res = Serial.readString();
  if(res == "red"){
    digitalWrite(pinRed, HIGH);
    delay(waitT);
    digitalWrite(pinRed, LOW);
  }
  else if(res == "green"){
    digitalWrite(pinGreen, HIGH);
    delay(waitT);
    digitalWrite(pinGreen, LOW);
  }
  else if(res == "blue"){
    digitalWrite(pinBlue, HIGH);
    delay(waitT);
    digitalWrite(pinBlue, LOW);
  }
  else{
    for (int i = 0; i < 10; i++){
      digitalWrite(pinRed, HIGH);
      delay(waitT2);
      digitalWrite(pinGreen, HIGH);
      delay(waitT2);
      digitalWrite(pinBlue, HIGH);
      delay(waitT2);
      digitalWrite(pinRed, LOW);
      delay(waitT2);
      digitalWrite(pinGreen, LOW);
      delay(waitT2);
      digitalWrite(pinBlue, LOW);
      delay(waitT2);
    }
  }
}
  
