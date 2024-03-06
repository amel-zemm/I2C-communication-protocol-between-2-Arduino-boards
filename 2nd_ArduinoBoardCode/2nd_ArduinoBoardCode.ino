////////FIRST ARDUINO CODE///////
///it's  gonna be processed by the first arduino 

#include <Servo.h> 
// Leds pins :
int GREEN_ledPin = 12;
int ORANGE_ledPin = 13;
int RED_ledPin = 7;

// ultrasonic sensor pins :
 int trigPin = 11;
 int echoPin = 10;

// buzzer pin :
int buzz_Pin= 3;

//servo 
int pos = 0;
Servo myServo;

void setup()
{
  myServo.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(GREEN_ledPin, OUTPUT);
  pinMode(ORANGE_ledPin, OUTPUT);
  pinMode(RED_ledPin, OUTPUT);
  pinMode(buzz_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
   // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
 int duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
 int distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  // Send the distance information over serial communication to the secodn arduino 
  Serial.println(distance);
  
  if (distance <= 5) {
    myServo.write(90);
    digitalWrite(GREEN_ledPin, LOW);
    digitalWrite(ORANGE_ledPin, LOW);
    digitalWrite(RED_ledPin, HIGH);
//Keeping the green LED on for 2 seconds 
    delay(2000);  
    digitalWrite(RED_ledPin, LOW);
  } 
  else if (distance > 5 && distance < 15) {
    myServo.write(45);
    digitalWrite(GREEN_ledPin, LOW);
    digitalWrite(ORANGE_ledPin, HIGH);
    digitalWrite(RED_ledPin, LOW);
     analogWrite(buzz_Pin, 1000);// i set a random tone to the buzzer
    // Keeping the red LED and buzzer on for 2 seconds
    delay(2000);  
     analogWrite(buzz_Pin, 0);
}
  else {
    myServo.write(0);
    digitalWrite(GREEN_ledPin, HIGH);
    digitalWrite(ORANGE_ledPin, LOW);
    digitalWrite(RED_ledPin, LOW);
    delay(2000);
    digitalWrite(GREEN_ledPin, LOW);
  }
   delay(1000); 
}