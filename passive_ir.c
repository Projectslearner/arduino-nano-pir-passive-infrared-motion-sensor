/*
    Project name : PIR Passive Infrared Motion Sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-pir-passive-infrared-motion-sensor
*/

int pirPin = 2; // PIR sensor output pin

void setup() {
  pinMode(pirPin, INPUT); // Set PIR pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int motionDetected = digitalRead(pirPin); // Read PIR sensor output
  
  // Check if motion is detected
  if (motionDetected == HIGH) {
    Serial.println("Motion Detected!");
  } else {
    Serial.println("No Motion Detected");
  }
  
  delay(1000); // Delay for stability
}
