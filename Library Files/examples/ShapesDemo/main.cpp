#include <Arduino.h>
#include "MyTFT.h"

MyTFT tft;

void setup() {
    tft.begin();
}

void loop() {
    // Draw all shapes
    tft.showShapes();
    delay(2000);
}
