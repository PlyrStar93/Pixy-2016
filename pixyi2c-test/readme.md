# Pixy I<sup>2</sup>C Test

This is a quick experiment on I<sup>2</sup>C transmission for 2 Pixys using some simple equipment. The program essentially comes from the Pixy I<sup>2</sup>C example, except that we use two Pixys with 1 single Arduino UNO.

## Hardware

### Equipment

- 1 Arduino UNO Microcontroller
- 2 Pixy cameras
- 1 breadboard
- Multiple jumper wires
- USB cable (A-male to B-female)
- PC

### Configuration

We need to change some parameters of both cameras using PixyMon. 

Set the address of the first Pixy to ```0x20```, and the second Pixy to ```0x60```. For both cameras, use ```I2C``` as communication mode and ```19200``` as baud rate.

### Connection

The Arduino UNO connects to PC via USB. GND, +5V, A4, A5 extend to breadboard. The two Pixys have their communication ports directly connected to the breadboard using I<sup>2</sup>C standard:

| Arduino | Pixy |
| ------- | ---- |
| GND | GND (pin 10) |
| +5V | +5V (pin 2) |
| A4 | SDA (pin 9) |
| A5 | SCL (pin 5) |

From the back side of Pixy, the communication port pinouts are:
```
1  2
3  4
5  6
7  8
9 10
```


## Software

The source code, ```pixyi2c-test-2pixys.ino```, is a quick modification of the I<sup>2</sup>C example provided in the Pixy Arduino library. 2 Pixy instances are initiated, the first one using address ```0x20``` and the second one using address ```0x60```. This program needs to be compiled and uploaded to Arduino using the Arduino IDE.

The Serial Monitor in the Arduino IDE is used for displaying outputs. Launch the Serial Monitor and the program will run. Similar to what the example does, the two Pixys will both output their capture results once they detect something on their own. 

---

Created: 2016-7-10  
Last Edit: 2016-7-10
