#include <Arduino.h>
#include "MyTFT.h"

MyTFT tft;

void setup() {
    tft.begin();
}

void loop() {
    // Rainbow animation
    tft.showRainbow();
    delay(1000);
}
