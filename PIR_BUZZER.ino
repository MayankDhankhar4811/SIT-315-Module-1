const int pirPin = 4;  // Connect the output pin of the PIR sensor to digital pin 2
const int buzzerPin = 8; // Connect the positive (longer) leg of the buzzer to digital pin 9

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int pirState = digitalRead(pirPin);
  
  if (pirState == HIGH) {
    Serial.println("Motion detected!");
    
    // Turn on the buzzer when motion is detected
    digitalWrite(buzzerPin, HIGH);
    delay(500); // Buzzer on for 500 milliseconds
    digitalWrite(buzzerPin, LOW);
  } else {
    // Turn off the buzzer when no motion is detected
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(100); // Adjust the delay according to your requirements
}
