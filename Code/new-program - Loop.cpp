void loop()
{
    switch (stav)
    {
    case 1: //blikani jedna, sviti cervene

        SetLedAll(64, 0, 0);
        delayMicroseconds(50000);

        break;

    case 2: // blikani dva, ledova ruze
        for (int g = 0; g < 64; g++)
        {
            SetLedAll(0, g, g);
            delayMicroseconds(50000); // delay(50);
        }

        for (int g = 64; g >= 0; g--)
        {
            SetLedAll(0, g, g);
            delayMicroseconds(50000);
        }
        break;

    case 3: // blikani tri, barevny prechod
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
        break;

    case 4: // blikani ctyri, duha
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

        break;

    case 5: //Vypnuti
        SetLedAll(0, 0, 0);
        delayMicroseconds(50000);
        break;

    default:
        break;
    }