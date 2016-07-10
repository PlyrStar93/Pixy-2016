# Pixy I<sup>2</sup>C Test

This program essentially comes from the Pixy I<sup>2</sup>C example, except that we use two Pixys with 1 single Arduino UNO.

## Hardware

We use 1 Arduino UNO Microcontroller, 2 Pixy cameras, 1 breadboard and multiple jumper wires.

The Arduino UNO connects to PC via USB. GND, +5V, A4, A5 extend to breadboard. The two Pixys directly connect their I2C port from the breadboard:
```
GND - GND (pin 10)
+5V - +5V (pin 2)
A4 - SDA (pin 9)
A5 - SCL (pin 5)
```

From the back side of Pixy, the port looks like:
```
1  2
3  4
5  6
7  8
9 10
```

## Software

The source code, ```pixyi2c-test-2pixys.ino```, is a quick modification of the I<sup>2</sup>C example provided in the Pixy Arduino library. 2 Pixy instances are initiated, the first one using address ```0x20``` and the second one using address ```0x60```.

The Serial Monitor in the Arduino IDE is used for displaying outputs. Similar to what the example does, the two Pixys will both output their capture results once they detect something on their own. 

---

Created: 2016-7-10  
Last Edit: 2016-7-10
