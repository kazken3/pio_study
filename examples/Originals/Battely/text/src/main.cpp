#include <Arduino.h>
#include <M5EPD.h>


M5EPD_Canvas canvas(&M5.EPD);

uint32_t getBatteryLevel()
{
  uint32_t vol = M5.getBatteryVoltage();
  /*
  Wire.beginTransmission(0x75);
  Wire.write(0x78);
  if (Wire.endTransmission(false) == 0
   && Wire.requestFrom(0x75, 1)) {
    switch (Wire.read() & 0xF0) {
    case 0xE0: return 25;
    case 0xC0: return 50;
    case 0x80: return 75;
    case 0x00: return 100;
    default: return 0;
    }
  }
  return -1;
  */
 return vol;
}

void setup()
{
    M5.begin();
    Wire.begin();
    M5.EPD.SetRotation(90);
    M5.EPD.Clear(true);
    canvas.createCanvas(540, 960);

}


void loop(){
    int32_t ret;
    delay(1000);
    ret = getBatteryLevel();
    canvas.setTextSize(3);
    canvas.drawString("Battely level(mV):", 50, 100);
    canvas.drawNumber(ret, 350, 100);
    canvas.pushCanvas(0,0,UPDATE_MODE_DU4);

}