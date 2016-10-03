
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  pinMode(5,INPUT_PULLUP);
}

void loop() {
  int pinVal= digitalRead(5);
  if(pinVal== HIGH){
      digitalWrite(13, LOW);
      digitalWrite(9, HIGH);
      delay(100);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      delay(100);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      delay(100);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      delay(100);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
      delay(100);
    }
    else{
        digitalWrite(9, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(13, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(12, LOW);
        delay(500);
        digitalWrite(9, LOW);
        digitalWrite(11, LOW);
        digitalWrite(13, LOW);
        digitalWrite(10, HIGH);
        digitalWrite(12, HIGH);
        delay(500);
      }
}
