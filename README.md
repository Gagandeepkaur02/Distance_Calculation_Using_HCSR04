# Distance_Calculation_Using_HCSR04
An Arduino-based Ultrasonic Distance Measurement system that detects objects within a certain range and activates an LED and buzzer alarm when an object is detected. This simple yet effective project is ideal for beginners to understand ultrasonic sensors, digital outputs, and real-time distance measurement.
# 🚀 Ultrasonic Distance Sensor with LED & Buzzer using Arduino

This project demonstrates how to use an **HC-SR04 ultrasonic sensor** with an Arduino to measure the distance of an object. When an object is detected within a specific range, an **LED blinks** and a **buzzer sounds** as an alert.

---

## 🎯 Features

- Real-time distance measurement using ultrasonic sensor (HC-SR04)
- LED and Buzzer alert when an object is detected within a threshold
- Simple and beginner-friendly code
- Serial Monitor outputs live distance readings

---

## 🧰 Hardware Required

| Component           | Quantity |
|--------------------|----------|
| Arduino UNO        | 1        |
| HC-SR04 Sensor     | 1        |
| LED                | 1        |
| Buzzer             | 1        |
| 220Ω Resistor      | 1        |
| Jumper Wires       | As needed|
| Breadboard         | 1        |

---

## 🔌 Circuit Connections

| HC-SR04 | Arduino |
|---------|---------|
| VCC     | 5V      |
| GND     | GND     |
| Trig    | Pin 9   |
| Echo    | Pin 10  |

| Other Components | Arduino |
|------------------|---------|
| LED (+)          | Pin 5   |
| Buzzer (+)       | Pin 4   |
| LED (-), Buzzer (-) | GND  |

---

## 💻 Arduino Code


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
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 20) { // adjust threshold as needed
    digitalWrite(LEDPin, HIGH);
    digitalWrite(Buzzzer, HIGH);
    delay(200);
    digitalWrite(LEDPin, LOW);
    delay(200);
  } else {
    digitalWrite(LEDPin, LOW);
    digitalWrite(Buzzzer, LOW);
  }

  delay(100);
}
