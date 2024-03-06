# I2C-communication-protocol-between-2-Arduino-boards
# I2C Communication for Automatic Barrier System ( Gate Guru)

## Overview

This project demonstrates the implementation of I2C communication between two Arduino boards to create an automatic barrier system ( GateGuru) . The first Arduino (Master) controls the barrier, while the second Arduino (Slave)  monitors the LCD.

## Hardware Requirements

- Two Arduino UNO boards 
- Two USB cables for programming and power
- Servo motor
- Three LEDs (for signaling)
- Buzzer
- Four resistors (1k ohm)
- One resistor (220 ohm)
- Ultrasonic sensor
- LCD
- Potentiometer
- Male-female wires
- Male-male wires

## Circuit Setup
- Build the circuit as it showen in the picture ( you find it in the repository )
- for Connecting the Two Arduinos:
    - Upload the Code 1 in arduino 1
    - Upload Code 2 in Arduino 2
    - Make sure that there's no connection between the 2 arduinos and they must only have a common Ground
    - Ufter Uploading Establish the coneection by :
      Connecting  the SDA and SCL pins of the first Arduino (Master) to the corresponding pins on the second Arduino 
     (Slave) 


## Circuit Diagram

Feel free to contribute to the project by submitting bug reports, feature requests, or improvements. Fork the repository, make your changes, and submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE), allowing for open collaboration and use.
