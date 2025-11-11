#include <Arduino.h>
#include "MyTFT.h"

MyTFT tft;

void setup() {
    tft.begin();
    tft.showText("Hello TFT Library!");
}

void loop() {
    // Nothing to do here; static text
}
