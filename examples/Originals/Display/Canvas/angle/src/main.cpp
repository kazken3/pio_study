#include <Arduino.h>
#include <M5EPD.h>

M5EPD_Canvas canvas(&M5.EPD);

void setup()
{
    M5.begin();
    M5.EPD.SetRotation(90);
    M5.EPD.Clear(true);
    canvas.createCanvas(540, 960);
    canvas.drawCircle(40, 40, 40, WHITE);
    canvas.drawCircleHelper(120, 40, 40, 2, WHITE);
    canvas.fillCircle(200, 40, 40, WHITE);
    canvas.fillCircleHelper(280, 40, 40, 4, 20, WHITE); //?

    canvas.drawLine(40, 120, 280, 120, WHITE);
    canvas.drawLine(40, 150, 280, 150, 10, 15);
    canvas.drawFastVLine(40, 180, 100, WHITE);
    canvas.drawFastVLine(80, 180, 100, 10, 15);
    canvas.drawEllipse(100, 300, 40, 20, 15);
    canvas.fillEllipse(100, 350, 40, 20, 15);

    canvas.drawRect(200, 300, 200, 200, 15);
    canvas.fillRect(200, 500, 200, 200, 15);

    canvas.pushCanvas(0,0,UPDATE_MODE_DU4);
}

void loop()
{

}
