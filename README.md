# 🏠 Edge Computing Smart Home Safety System using ESP32

An **ESP32-based Edge Computing Smart Home Safety System** that uses a **PIR Motion Sensor** with **hardware interrupts** for automatic lighting and an **MQ-2 Gas Sensor** for real-time gas leak detection. The system processes all data locally on the ESP32, ensuring fast response without relying on cloud connectivity.

---

## 📌 Project Overview

This project demonstrates an intelligent edge device capable of handling both user interaction and safety-critical events. Motion detection automatically controls a room light, while gas leakage immediately overrides all normal operations, activates an alarm, and alerts the user.

---

## 🚀 Features

* Hardware interrupt-based PIR motion detection
* Automatic smart lighting control
*  Real-time gas/smoke monitoring using the MQ-2 sensor
*  Immediate safety override during gas leaks
*  Red LED emergency indication
*  Active buzzer alarm
*  Local processing using Edge Computing
*  Fast and reliable fail-safe operation

---

##  Components Used

* ESP32 DevKit V1
* PIR Motion Sensor (HC-SR501)
* MQ-2 Gas Sensor
* Green LED
* Red LED
* Active Buzzer
* 220Ω Resistors
* Jumper Wires

---

## 🔌 Circuit Connections

| Component | ESP32 Pin |
| --------- | --------- |
| PIR OUT   | GPIO 14   |
| MQ-2 AO   | GPIO 34   |
| Green LED | GPIO 25   |
| Red LED   | GPIO 26   |
| Buzzer    | GPIO 27   |
| PIR VCC   | 3.3V      |
| MQ-2 VCC  | VIN (5V)  |
| All GND   | GND       |

---

## ⚙️ Working

* The PIR Motion Sensor detects human movement and triggers a hardware interrupt.
* The ESP32 turns ON the Green LED to simulate automatic room lighting.
* The MQ-2 Gas Sensor continuously monitors gas and smoke levels.
* When the gas level exceeds the predefined threshold:

  * The Green LED turns OFF immediately.
  * The Red LED flashes continuously.
  * The Buzzer sounds an alarm.
  * The safety override disables normal lighting control.
* Once the gas level returns to a safe value, the system resumes normal motion-based operation.

---

## 📷 Project Preview

<p align="center">
  <img src="https://github.com/user-attachments/assets/dc24fe61-c9b7-443a-8026-38a7f5e2bc6d" alt="Project Circuit" width="700">
</p>
<p align="center">
 <img width="700" height="465" alt="Project Circuit" src="https://github.com/user-attachments/assets/22894fb4-2c89-4122-a427-858045f111de">
</p>


## 💻 Technologies Used

* ESP32
* Arduino IDE
* Embedded C/C++
* Wokwi Simulator

---

## 📚 Concepts Demonstrated

* Edge Computing
* Hardware Interrupts (ISR)
* Multi-Sensor Integration
* Embedded Systems
* Safety Override Logic
* Smart Home Automation

---

## 🎯 Applications

*  Smart Homes
*  Industrial Safety
*  Gas Leak Detection Systems
*  Home Automation
*  IoT Edge Devices

---
