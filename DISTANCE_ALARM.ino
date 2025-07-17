#define trigPin 9
#define echoPin 10
#define LEDPin 5
#define Buzzzer 4

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  pinMode(Buzzzer, OUTPUT);
}

void loop() {
  long duration;
  float distance_cm;

  // Trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure echo time
  duration = pulseIn(echoPin, HIGH, 30000); // 30ms timeout
  distance_cm = (duration * 0.0343) / 2;

  // If object is detected within 400 cm
  if (duration != 0 && distance_cm <= 400) {
    Serial.print("🚨 Object Detected at: ");
    Serial.print(distance_cm);
    Serial.println(" cm");
     // Buzzer stays ON

    // Blink LED 3 times
    for (int i = 0; i < 8; i++) {
      digitalWrite(LEDPin, HIGH);
      digitalWrite(Buzzzer, HIGH);
      delay(300);
      digitalWrite(LEDPin, LOW);
      digitalWrite(Buzzzer, LOW);
      delay(300);
    }
  } else {
    Serial.println("✅ You are safe. No object detected.");
    digitalWrite(LEDPin, LOW);
    digitalWrite(Buzzzer, LOW); // Turn off buzzer if no object
  }

  delay(1000); // Wait before next check
}
