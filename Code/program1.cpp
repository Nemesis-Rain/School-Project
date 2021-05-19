void SetLedAll(uint8_t R, uint8_t G, uint8_t B)
{
  for (int i = 0; i < LED_COUNT; i++)
    leds[i] = Rgb{R, G, B};
  leds.wait();
  leds.show();
}

// ------------------------------------------------------------------------------------------------
void setup() {
  Serial.begin(9600);  
}

void loop() {
    
SetLedAll(64, 0, 0);

leds.wait();  
leds.show();
}