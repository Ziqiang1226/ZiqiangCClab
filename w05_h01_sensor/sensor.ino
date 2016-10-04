int ledPin= 9;
int brightness= 0;
int lastBlinkTime= 0;

void setup() {
 Serial.begin(9600);

 pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorVal= analogRead(A0);
  int brightness= map(sensorVal, 0, 1023, 0, 255);
  int waitBlinkTime= brightness;
  Serial.println(waitBlinkTime);
  if(millis()-lastBlinkTime> waitBlinkTime){
    digitalWrite(ledPin, HIGH);
    lastBlinkTime= millis();
  }else{
      digitalWrite(ledPin, LOW);
    }
}
