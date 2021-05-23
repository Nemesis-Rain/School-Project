void setup()
{
    WiFi::startAp("LEDLED", "ledkyledky"); 

    gProt = new Protocol("Kralova", "Ovladani", "Compiled at " __DATE__ " " __TIME__, onPacketReceived);
    gProt->start();

    rb_web_start(80);

    UI.begin(gProt);

    auto builder = Layout.begin();
  
    builder.Slider1.onChanged([&slider](Slider &s) {
        printf("Slider changed: %d\n", (int)s.value());
        slider = (int)s.value();
    });

    builder.Button1.onPress([&](Button &) {
        stav = 1;
    });

    builder.Button2.onPress([&](Button &) {
        stav = 2;
    });

    builder.Button3.onPress([&](Button &) {
        stav = 3;
    });

    builder.Button4.onPress([&](Button &) {
        stav = 4;
    });

    builder.Button5.onPress([&](Button &) {
        stav = 5;
    });

    builder.commit();

    Serial.begin(115200);
}