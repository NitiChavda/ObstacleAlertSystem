# Obstacle Alert System

A simple real-time obstacle alert system using an ultrasonic sensor and Arduino. The system measures the distance of nearby objects and triggers a buzzer when an object is detected within 15 cm. The distance is also displayed on the Serial Monitor.

---

## Technologies Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- C/C++ (Arduino IDE)

---

## Project Description
This project uses an ultrasonic sensor to continuously measure the distance to an object in front of it. When the distance is less than or equal to 15 cm, a buzzer is activated to alert the presence of an obstacle. The measured distance is printed on the Serial Monitor for real-time monitoring.

This system demonstrates basic sensor integration, real-time data processing, and embedded system alert mechanisms. It can be applied in assistive technology such as blind assistance or as a basic proximity alert system.

---

## Circuit Connections
| Component           | Arduino Pin         |
|---------------------|---------------------|
| Ultrasonic Trig Pin | Digital Pin 9       |
| Ultrasonic Echo Pin | Digital Pin 10      |
| Buzzer              | Digital Pin 13      |
| GND                 | GND                 |
| VCC                 | 5V                  |

---

## How to Use
1. Connect the components as per the circuit diagram.
2. Open the Arduino IDE and upload the `.ino` sketch to your Arduino Uno.
3. Open the Serial Monitor at 9600 baud rate to see the distance readings.
4. The buzzer will sound when an object is detected within 15 cm.

---

## Source Code
You can find the complete source code here: [ObstacleAlertSystem.ino](ObstacleAlertSystem.ino)

---

## License
This project is open-source and available under the MIT License.
