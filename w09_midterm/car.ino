
int trigPin= 10;
int echoPin= 11;
int rightMotorPin= 6;
int leftMotorPin= 5;
int state= 0;

String Val;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

  duration= pulseIn(echoPin, HIGH);
  distance= (duration/2)/29.1;
  
  if(Serial.available()){
    Val= Serial.read();
  }
  
  if(Val== "/n"){
      state++;
    }
  
  if(state== 1){
    if(Val== "w"){
        digitalWrite(leftMotorPin, HIGH);
        digitalWrite(rightMotorPin, HIGH);
      }
      if(Val== "a"){
          digitalWrite(leftMotorPin, LOW);
          digitalWrite(rightMotorPin, HIGH);
        }
        if(Val== "d"){
            digitalWrite(leftMotorPin, HIGH);
            digitalWrite(rightMotorPin, LOW);
          }
    }
    
  if(state== 2){
      digitalWrite(leftMotorPin, HIGH);
      digitalWrite(rightMotorPin, HIGH);
      
      if(distance< 10){
          digitalWrite(leftMotorPin, HIGH);
          digitalWrite(rightMotorPin, LOW);
        }
    }
    
  if(state== 3){
      state= 0;
    }

}
