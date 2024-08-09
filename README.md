# AVR-LED-Cycler

Description
The "AVR-LED-Cycler" is a simple embedded systems project designed to demonstrate basic digital output on an Atmega 328p. This project incrementally cycles through values from 0 to 255 on Port D of the microcontroller, making it suitable for applications like driving an LED display or testing digital outputs.

Components
AVR Microcontroller: The code is written for an AVR microcontroller, which is configured to use Port D as an output port.
LEDs (Optional): If connected, LEDs can be used to visually represent the binary value being output on Port D.

Functionality
Initialization: The microcontroller's Port B and Port C are configured as inputs, while Port D is set as an output.
Main Loop: The program continuously runs a loop where it outputs each value from 0 to 255 on Port D. Each output value is displayed for 100 milliseconds before moving to the next value.
Delay: A delay of 100 milliseconds between outputs allows enough time to observe changes in the output if connected to an LED array or other visualization devices.

Applications
Learning Tool: Ideal for beginners in embedded systems to understand port manipulation and timing.
Display Drivers: Can be used to drive a simple 8-bit LED display, showing binary counting.
Hardware Testing: Useful for testing digital output functionality on AVR boards.
Feel free to ask if you need more details or have specific questions!
