#include <Arduino.h>
#include <M5EPD.h>

M5EPD_Canvas canvas(&M5.EPD);

void setup()
{
    M5.begin();
    M5.EPD.SetRotation(90);
    M5.EPD.Clear(true);
    canvas.createCanvas(540, 960);
    canvas.setTextSize(1);
    canvas.drawString("Hello World!", 50, 130);
    canvas.setTextSize(2);
    canvas.drawString("Hello World!", 50, 150);
    canvas.setTextSize(3);
    canvas.drawString("Hello World!", 50, 180);
    canvas.setTextSize(4);
    canvas.drawString("Hello World!", 50, 230);
    canvas.setTextSize(5);
    canvas.drawString("Hello World!", 50, 300);
    canvas.setTextSize(6);
    canvas.drawString("Hello World!", 50, 370);
    canvas.setTextSize(7);
    canvas.drawString("Hello World!", 50, 440);

    canvas.pushCanvas(0,0,UPDATE_MODE_DU4);
}

void loop()
{

}
