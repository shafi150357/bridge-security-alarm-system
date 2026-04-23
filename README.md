# bridge Residential-security-alarm-system
# 🛡️ Simple Residential Security Alarm System

## 📌 Overview

This project is a **basic security alarm system** designed for residential properties using simple electronic components. It simulates how a home security system monitors entry points and alerts occupants when an intrusion is detected.

The system operates in different states and provides real-time feedback through the Serial Monitor, making it ideal for beginners learning embedded systems or Arduino-based projects.

---

## ⚙️ Features

* 🚪 **Intruder Detection**: A push button acts as a door sensor. When triggered, the system detects a potential intruder.
* 🔄 **System Reset**: A reset button allows the user to turn off the alarm and return the system to monitoring mode.
* 🌙 **Night Mode**: Automatically activates based on ambient light using an LDR sensor.
* 💡 **Visual Indicators**:

  * Green LED → System monitoring
  * Red LED → Intruder alert
* 🔊 **Audible Alert**: A buzzer sounds when an intruder is detected.
* 🖥️ **Serial Monitor Feedback**:

  * `MONITORING ACTIVE`
  * `INTRUDER DETECTED`
  * `SYSTEM RESET`
  * `NIGHT MODE ON`

---

## 🧰 Components Required

* Breadboard
* Push buttons ×2 (Door sensor + Reset button)
* Red LED
* Green LED
* Buzzer
* LDR (Light Dependent Resistor) sensor
* Resistors and jumper wires

---

## 🔌 How It Works

1. When powered on, the system enters **monitoring mode**, indicated by the green LED and the message *MONITORING ACTIVE*.
2. Pressing the **door sensor button** simulates an intruder:

   * Red LED turns on
   * Buzzer sounds
   * Serial Monitor displays *INTRUDER DETECTED*
3. Pressing the **reset button**:

   * Turns off the alarm
   * Restores monitoring mode
   * Displays *SYSTEM RESET*
4. The **LDR sensor** detects low light conditions:

   * Activates *NIGHT MODE ON*
   * Enhances awareness during nighttime

---

## 🎯 Project Goals

* Demonstrate basic security system logic
* Practice working with input/output components
* Understand state-based system behavior
* Learn Serial Monitor communication

---

## 🚀 Future Improvements

* Add motion sensors (PIR)
* Integrate GSM module for SMS alerts
* Include LCD display for standalone operation
* Implement password-based deactivation

---

## 📖 Conclusion

This simple alarm system provides a hands-on introduction to building real-world security applications. It combines sensor input, user interaction, and output responses to simulate a functional home security solution.

---
