int trigPin= 5;
int echoPin= 4;

int pin1= 8;
int pin2= 9;
int pin3= 10;
int pin4= 11;


void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);

}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

  duration= pulseIn(echoPin, HIGH);
  distance= (duration/2)/29.1;  

  Serial.print("distance");
  Serial.print(distance);
  delay(500);

  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  
  delay(500);
  
  if(distance<10){
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, LOW);

      delay(1000);
      
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
      digitalWrite(pin3, LOW);
      digitalWrite(pin4, HIGH);
      
    }
  

}
