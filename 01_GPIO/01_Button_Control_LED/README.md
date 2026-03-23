# Button Controlled LED (ESP32)

## Overview

In this project, I built a simple button-controlled LED system using ESP32 to understand how a microcontroller interacts with real hardware components.

---

## Implementation

* LED turns ON when the button is not pressed
* LED turns OFF when the button is pressed
* Used GPIO pins for both input (button) and output (LED)
* Configured the button using internal pull-up (INPUT_PULLUP)

---

## Hardware Setup

### Button

* GPIO 4 → Button → GND
* Internal pull-up used (no external resistor required)

### LED

* GPIO 2 → 220Ω resistor → LED (Anode)
* LED (Cathode) → GND

---

## Concepts Covered

* GPIO input and output
* Internal pull-up vs pull-down resistors
* Active LOW logic
* Floating input and how to avoid it

---

## Working

* When the button is not pressed, the pin reads HIGH and the LED turns ON
* When the button is pressed, the pin reads LOW and the LED turns OFF

---

## Learning

* Understood how GPIO works with real hardware
* Learned the practical use of pull-up and pull-down configurations
* Observed how floating inputs lead to unstable behavior
* Improved hardware debugging and wiring skills
* Connected theoretical concepts with real embedded implementation

---

## Demo

See demo.mp4

## Circuit

See circuit.png

---
