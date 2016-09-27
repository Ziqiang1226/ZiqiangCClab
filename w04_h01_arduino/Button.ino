
int led = 13;
int led2 = 12;
int led3 = 11; 
int buttonPin = 3; 
int buttonPin2 = 4;
int buttonState = 0;
int buttonState2 = 0;
bool a= false;         

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState == 0) {
    a= true;
  }
  if (buttonState2 == 0){
    a= false;  
  }
  if (a == true){
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led2,HIGH);
    delay(300);
    digitalWrite(led2, LOW);
    delay(300);
    digitalWrite(led3, HIGH);
    delay(300);
    digitalWrite(led3, LOW);
    delay(300);
  }
    
}

