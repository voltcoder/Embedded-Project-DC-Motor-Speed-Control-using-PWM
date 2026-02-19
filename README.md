# Embedded-Project-DC-Motor-Speed-Control-using-PWM
PWM-based DC motor speed control using Arduino.

# DC Motor Speed Control using PWM 

## Overview
This project demonstrates DC motor speed control using PWM (Pulse Width Modulation) with Arduino. The motor speed is controlled using a potentiometer input.

The entire system is simulated in Proteus.

## Features
- Reads analog input using ADC
- Generates PWM signal
- Controls DC motor speed
- Uses transistor for safe motor driving
- Displays PWM duty cycle on serial monitor

## Components Used
- Arduino Uno
- DC Motor
- NPN Transistor (2N2222)
- Flyback Diode (1N4007)
- Potentiometer
- Resistors
- Virtual Terminal
- Proteus 8

## Working Principle
1. The potentiometer provides analog voltage.
2. Arduino reads the voltage using ADC.
3. ADC value is mapped to PWM (0–255).
4. PWM signal controls the transistor.
5. Transistor drives the motor safely.
6. Duty cycle is displayed via serial communication.

