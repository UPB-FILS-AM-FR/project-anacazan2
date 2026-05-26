# Smart Object Finder

## Author
Podeanu Andrei

## Description
Smart Object Finder is an ESP32-based project designed to help users locate misplaced objects using a mobile application.

The system uses:
- ESP32
- RGB LED
- Active buzzer
- Blynk mobile application

When the FIND button is pressed in the application:
- the red LED starts blinking
- the buzzer emits a beep-beep sound

When STOP is pressed:
- the buzzer stops
- the LED becomes green for 5 seconds
- then returns to blue standby mode

## Motivation
The project was created to provide a simple and interactive way to locate personal objects such as keys, bags, or backpacks.

## Architecture
The ESP32 acts as the central controller and communicates with the Blynk application through WiFi.

## Components
- ESP32 Dev Module
- RGB LED
- Active buzzer
- Breadboard
- Jumper wires
- Power bank

## Features
- Remote control from phone
- Audio alert
- Visual alert
- Portable system
- Works using hotspot connection
