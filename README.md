---

# Arduino PID Line Follower Robot

This project involves creating a PID-based line follower robot using an Arduino. The robot uses six sensors to detect a line and adjusts its motors to follow the path accurately.

## Features

- **PID Control**: Utilizes Proportional, Integral, and Derivative control to maintain accurate line following.
- **Six Sensors**: Uses six sensors to detect the line, ensuring precise path following.
- **Speed Adjustment**: Adjusts the speed of the motors based on PID calculations to follow the line smoothly.

## Components Required

- Arduino Board
- 6 Line Sensors
- 2 DC Motors
- Motor Driver Module (e.g., L298N)
- Wheels and Chassis
- Power Supply (Battery)

## Wiring

- Connect the six line sensors to the analog pins of the Arduino.
- Connect the motor driver module to the digital pins 5, 6, 9, and 10 for motor control.
- Connect the motors to the motor driver module.
- Power the Arduino and the motor driver module appropriately.

## How It Works

1. **Calibration**: The robot calibrates the sensors to determine the threshold values for line detection.
2. **Line Detection**: The sensors read the line and determine the position of the robot relative to the line.
3. **PID Calculation**: The PID algorithm calculates the error and adjusts the motor speeds to correct the robot's path.
4. **Motor Control**: Based on the PID output, the motors are controlled to keep the robot following the line.

## Code

Upload the provided Arduino code to your Arduino board. The main functions of the code include:

- **setup()**: Initializes the serial communication and sets up the pins.
- **loop()**: Continuously reads the sensor values, calculates the PID error, and adjusts the motor speeds.
- **calibrate()**: Calibrates the sensors to determine the threshold values.
- **error2()**: Calculates the error based on sensor readings.
- **calculate_pid()**: Calculates the PID value based on the current error.
- **motorSpeed()**: Adjusts the motor speeds based on the PID value.

## Getting Started

1. Clone or download the repository.
2. Open the `line_follower.ino` file in the Arduino IDE.
3. Connect your Arduino board to your computer.
4. Upload the code to the Arduino board.
5. Place the robot on a track with a visible line.
6. Power the robot and observe it following the line.

## Troubleshooting

- Ensure the sensors are properly aligned and calibrated.
- Check the wiring connections between the Arduino, sensors, and motor driver.
- Adjust the PID constants (`Kp`, `Ki`, `Kd`) for better performance based on your specific setup.

## Contributing

Feel free to fork this repository and submit pull requests if you have improvements or bug fixes.

---
