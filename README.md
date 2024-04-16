# Arduino Fire-Fighting Robot

This repository contains the Arduino code for an autonomous fire-fighting robot. The robot uses infrared sensors to detect fires and a water pump to extinguish them. Designed for slow, steady movement, it ensures thorough coverage and quick response to fire detections.

## Features

- **Fire Detection**: Utilizes infrared sensors to detect fires from different directions.
- **Automatic Water Discharge**: Activates a water pump automatically to extinguish detected fires.
- **Controlled Navigation**: Moves forward slowly to cover areas effectively.

## Hardware Required

- Arduino Uno or similar Arduino board
- L293D Motor Driver Shield or compatible motor driver
- 2 x Infrared sensors
- 2 x DC motors for robot movement
- 1 x DC motor or water pump for extinguishing fires
- Battery for power supply
- Breadboard and jumper wires

## Software

The robot's behavior is controlled by an Arduino sketch that:
1. Reads inputs from the infrared sensors.
2. Controls the motors to move forward or stop based on sensor data.
3. Activates the water pump when fire is detected.

## Setup and Deployment

1. Assemble the hardware according to the circuit diagram provided in this repository.
2. Install the Arduino IDE and open the provided sketch.
3. Upload the sketch to the Arduino board.
4. Power the robot and test it in a safe, controlled environment to ensure it operates as expected.

## Contributing

Contributions to this project are welcome. You can contribute by:
- Forking the repository and submitting a pull request with your changes.
- Reporting bugs or suggesting enhancements through the issue tracker.

## License

This project is released under the MIT License. For more details, see the [LICENSE](LICENSE) file included in this repository.

