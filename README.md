# Automatic_Steert_Light
The **Automatic Street Light** project uses an Arduino, IR sensors, and LEDs to control street lights based on vehicle movement. Lights turn ON only when a vehicle is detected and turn OFF afterward, reducing energy consumption and demonstrating a simple, smart, and energy-efficient street lighting system.


## Project Overview

This project demonstrates a simple and energy-efficient street lighting system using an Arduino Uno, IR sensors, and LEDs. It simulates how smart street lights can improve energy conservation by illuminating only the required section of the road.

---

## Objectives

* Reduce unnecessary power consumption.
* Detect vehicle movement using IR sensors.
* Automatically control street lights based on vehicle position.
* Learn sensor interfacing and Arduino programming.

---

## Components Used

* Arduino Uno
* 3 × IR Sensors
* 3 × LEDs
* 3 × 220 Ω Resistors
* Breadboard
* Jumper Wires
* USB Cable

---

## Circuit Diagram

Example:

```
images/Circuit_Diagram.png
```

---

## Hardware Connections

| Component   | Arduino Pin |
| ----------- | ----------- |
| LED 1       | D2          |
| LED 2       | D3          |
| LED 3       | D4          |
| IR Sensor 1 | D8          |
| IR Sensor 2 | D9          |
| IR Sensor 3 | D10         |

---

## Source Code

The Arduino source code is available in this repository.

```
src_code.ino
```

---

## Working Photos


Example:

```
images/Block_Diagram.png
images/Flow_Chart.png
images/hardware.jpg
```

---

## 🎥 Demo Video

Example:

```
video/project.mp4
```

---

## How It Works

1. The Arduino continuously monitors all three IR sensors.
2. When a vehicle is detected by an IR sensor, the corresponding LED turns ON.
3. LEDs remain OFF when no vehicle is present.
4. As the vehicle moves, the next LED turns ON while the previous one turns OFF.
5. This process simulates an energy-efficient automatic street lighting system.

---

## Features

* Automatic street light control
* Vehicle detection using IR sensors
* Energy-efficient operation
* Simple and low-cost implementation
* Easy to understand and modify
* Beginner-friendly Arduino project

---

## Applications

* Smart city street lighting
* Parking areas
* Industrial roads
* College mini projects
* Embedded systems learning

---

## Challenges Faced

* Correct alignment of IR sensors.
* Avoiding false detections.
* Proper timing of LED switching.
* Managing sensor sensitivity.

---

## Learning Outcomes

Through this project, I learned:

* Arduino programming
* IR sensor interfacing
* Digital input/output control
* Circuit design and wiring
* Debugging embedded systems
* Building real-world automation projects

---

## Future Improvements

* Replace LEDs with high-power street lights using relays.
* Add an LDR for day/night detection.
* Use ESP32 for IoT monitoring.
* Integrate solar power.
* Monitor energy usage in real time.

---

## Author

**Naveen Nekar**

Electronics and Communication Engineering (ECE) Student

Passionate about Embedded Systems, IoT.

---

## ⭐ If you found this project useful, consider giving it a Star!
