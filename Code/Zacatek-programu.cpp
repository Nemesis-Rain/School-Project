#include <Arduino.h>
#include <SmartLeds.h>

const int LED_COUNT = 8;
const int DATA_PIN = 21;
const int CHANNEL = 0;

// SmartLed -> RMT driver (WS2812/WS2812B/SK6812/WS2813)
SmartLed leds( LED_WS2812, LED_COUNT, DATA_PIN, CHANNEL, DoubleBuffer );