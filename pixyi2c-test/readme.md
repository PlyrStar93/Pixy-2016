# Pixy I2C Test

This program essentially comes from the Pixy I2C example, except that we use two Pixys with 1 single Arduino UNO.

Hardware-wise, The Arduino UNO connects to PC via USB. GND, +5V, A4, A5 extend to breadboard. The two Pixys directly connect their I2C port from the breadboard:

GND - GND (pin 10)
+5V - +5V (pin 2)
A4 - SDA (pin 9)
A5 - SCL (pin 5)

From the back side of Pixy, the port looks like:

1  2  
3  4  
5  6  
7  8  
9 10  

On the serial output, both devices will have output if they detect something.

2016-7-10
