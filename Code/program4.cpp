
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
  SetLedAll(g, 64, 0);
  delayMicroseconds(50000);
}

for (int g = 0; g < 64; g++)
{
  SetLedAll(0, 64, g);
  delayMicroseconds(50000);
}

for (int g = 64; g >= 0; g--)
{
  SetLedAll(0, g, 64);
  delayMicroseconds(50000);
}

for (int g = 0; g < 64; g++)
{
  SetLedAll(g, 0, 64);
  delayMicroseconds(50000);
}

for (int g = 64; g >= 0; g--)
{
  SetLedAll(64, 0, g);
  delayMicroseconds(50000);
}

  leds.wait();  
  leds.show();
}
