void setup() {
  Serial.begin(9600);  
}

void loop() {
for (int g = 0; g < 64; g++)
{
  SetLedAll(64, g, 0);
  delayMicroseconds(50000);
}

for (int g = 64; g >= 0; g--)
{
  SetLedAll(64, g, 0);
  delayMicroseconds(50000);
}

  leds.wait();  
  leds.show();
}

