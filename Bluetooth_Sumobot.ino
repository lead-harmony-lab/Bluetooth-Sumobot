#include <SoftwareSerial.h>
SoftwareSerial BlueTooth(3, 4); // (RX, TX) - These are the pins on the Arduino we are using instead of the built-in RX and TX pins
// Connect the HC-06 TX to the Arduino RX on pin 3. 
// Connect the HC-06 RX to the Arduino TX on pin 4 through a voltage divider.

//L293D
//Motor A
const int motorPin1  = 5;   // Pin 14 of L293D
const int motorPin2  = 6;   // Pin 10 of L293D
//Motor B
const int motorPin3  = 8;   // Pin  7 of L293D
const int motorPin4  = 7;   // Pin  2 of L293D
//Enable Motors
const int enableLeftMotorSwitch = 9;   // Pin  1 of L293D
const int enableRightMotorSwitch = 10;  // Pin  9 of L293D

String msg;
char c;
int motorSpeed = 255; // Motor speed is an number between 0 - 255. Half speed is 153.

//This will run only one time.
void setup(){
  
  // HC-06 default serial speed is 9600
  BlueTooth.begin(9600); 
  Serial.begin(9600);

  //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4
  //Set pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);

  pinMode(enableLeftMotorSwitch, OUTPUT);
  pinMode(enableRightMotorSwitch, OUTPUT);

}


void loop(){
  msg = "";

  analogWrite(enableLeftMotorSwitch, motorSpeed);
  analogWrite(enableRightMotorSwitch, motorSpeed);
  
  while(BlueTooth.available()){
    c = BlueTooth.read();
    msg += String(c);
    delay(5);
  }

  if(msg == "forward"){
    rightMotorForward();
    leftMotorForward();
  }
  else if(msg == "reverse"){
    rightMotorReverse();
    leftMotorReverse();
  }
  else if(msg == "right"){
    rightMotorStop();
    leftMotorForward();
  }
  else if(msg == "left"){
    rightMotorForward();
    leftMotorStop();
  }
  else if(msg == "half"){
    halfSpeed();
  }
  else if(msg == "stop"){
    stoprobot();
  }
  else if(msg == "faster"){
    increaseSpeed();
  }
  else if(msg == "slower"){
    decreaseSpeed();
  }

}  

// Control direction of RIGHT motor
void rightMotorForward(){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);  
}

void rightMotorReverse(){
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);  
}

void rightMotorStop(){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);  
}

// Control direction of LEFT motor
void leftMotorForward(){
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW); 
}

void leftMotorReverse(){
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH); 
}

void leftMotorStop(){
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW); 
}


// Control BOTH motors together 
void forward()
{
    rightMotorForward();
    leftMotorForward();
}

void reverse()
{
    rightMotorReverse();
    leftMotorReverse();
}

void left()
{
    rightMotorForward();
    leftMotorReverse();
}

void right()
{
    rightMotorReverse();
    leftMotorForward();
}

void stoprobot()
{
    rightMotorStop();
    leftMotorStop();
}

void increaseSpeed()
{
  if(motorSpeed < 255)
  {
    if(motorSpeed <= 205)
    {
      motorSpeed += 50;
    }
  }
}

void decreaseSpeed()
{
  if(motorSpeed > 0)
  {
    if(motorSpeed >= 55)
    {
      motorSpeed -= 50;
    }
  }
}

void halfSpeed()
{
  motorSpeed = 155;
}

