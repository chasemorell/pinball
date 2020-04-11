#include <Servo.h>


int ledPin = 3;
int analogPin = A0;
int pushButton = 8;
int motorPin = 3;
int bellPin = 2;
int isBellHit;
int bellState;
int n = 180;
int debounce = 1;
int previous = 1;
int greenLight1 = 3;
int greenLight2 = 5;
int i = 0;
int s = 45;
int delta = 1;
int sDelta = 1;

long time = 0; 

Servo myservo;
long pTime = 0;
boolean pressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLight1, OUTPUT);
  pinMode(greenLight2, OUTPUT);

  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(bellPin, INPUT);
  pinMode(motorPin, OUTPUT);
  analogWrite(motorPin, 255);

  myservo.attach(11);

}

void loop() {

  analogWrite(greenLight1, i);
  analogWrite(greenLight2, s);
  
  //delay(10);
  if(i > 100){
    delta = -1;
  }
  if(i < 1){
    delta = 1;
  }

  if(s > 100){
    sDelta = -1;
  }
  if(s < 1){
    sDelta = 1;
  }
  i = i + delta;
  s = s + sDelta;
  
  

  int buttonState = digitalRead(pushButton);
  //Serial.println(buttonState);
  if (buttonState == 1) {
    pressed = true;
    myservo.write(0);
  }
  if ((pressed == true) && (buttonState == 0)) {
    pressed = false;
    myservo.write(70);
    pTime = millis();
    //Serial.println("BUTTON PRESSED");
  }

  isBellHit = digitalRead(bellPin);
  Serial.println(isBellHit);

  // If the switch changed, due to bounce or pressing...
  if (isBellHit != previous) {
    // reset the debouncing timer
    time = millis();
  }

  if ((millis() - time) > debounce) {
    // whatever the switch is at, its been there for a long time
    // so lets settle on it!
    bellState = isBellHit;
    if(bellState == 0){
    }
    // Now invert the output on the pin13 LED
    
  }

  // Save the last reading so we keep a running tally
  previous = isBellHit;

}
