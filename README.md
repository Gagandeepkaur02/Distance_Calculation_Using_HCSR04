Ultrasonic Distance Sensor with LED & Buzzer using Arduino

This project demonstrates how to use an **HC-SR04 ultrasonic sensor** with an Arduino to measure the distance of an object. When an object is detected within a specific range, an **LED blinks** and a **buzzer sounds** as an alert.

---

## Features

- Real-time distance measurement using ultrasonic sensor (HC-SR04)
- LED and Buzzer alert when an object is detected within a threshold
- Simple and beginner-friendly code
- Serial Monitor outputs live distance readings

---

## Hardware Required

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

## Circuit Connections

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
