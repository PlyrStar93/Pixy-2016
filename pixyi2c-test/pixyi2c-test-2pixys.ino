//
// begin license header
//
// This file is part of Pixy CMUcam5 or "Pixy" for short
//
// All Pixy source code is provided under the terms of the
// GNU General Public License v2 (http://www.gnu.org/licenses/gpl-2.0.html).
// Those wishing to use Pixy source code, software and/or
// technologies under different licensing terms should contact us at
// cmucam@cs.cmu.edu. Such licensing terms are available for
// all portions of the Pixy codebase presented here.
//
// end license header
//
// This sketch is like hello_world but uses I2C communications.  If you're
// not sure what I2C is, run the hello_world sketch!
//

#include <Wire.h>
#include <PixyI2C.h>


PixyI2C pixy(0x20);
PixyI2C pixy2(0x60); //bo guan 08
// PixyI2C pixy(0x55); // You can set the I2C address through PixyI2C object 

void setup()
{
  Serial.begin(19200);
  Serial.print("Starting...\n");
  
  pixy.init();
  pixy2.init();
  
}


void loop() 
{ 
  static int i = 0;
  int j;
  uint16_t blocks;
  char buf[32]; 

  static int i2 = 0;
  int j2;
  uint16_t blocks2;
  char buf2[32];
  
  blocks = pixy.getBlocks();
  blocks2 = pixy2.getBlocks();
  
  if (blocks)
  {
    i++;
    
    // do this (print) every 50 frames because printing every
    // frame would bog down the Arduino
    if (i%50==0)
    {
      sprintf(buf, "1511-16712 Detected %d:\n", blocks);
      Serial.print(buf);
      for (j=0; j<blocks; j++)
      {
        sprintf(buf, "  [Sida] block %d: ", j);
        Serial.print(buf); 
        pixy.blocks[j].print();
      }
    }
  }

  if (blocks2)
  {
    i2++;
    
    // do this (print) every 50 frames because printing every
    // frame would bog down the Arduino
    if (i2%50==0)
    {
      sprintf(buf2, "1508-15967 Detected  %d:\n", blocks2);
      Serial.print(buf2);
      for (j2=0; j2<blocks2; j2++)
      {
        sprintf(buf2, "  [Bo] block %d: ", j2);
        Serial.print(buf2); 
        pixy2.blocks[j2].print();
      }
    }
  }
}

