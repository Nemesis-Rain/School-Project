void loop()
{
    switch (stav)
    {
    case 1: //blikání jedna, svítí červeně

        SetLedAll(64, 0, 0);
        delayMicroseconds(50000);

        break;

    case 2: // blikání dva, ledová růže
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

    case 3: // blikání tři, barevný přechod
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

    case 4: // blikání čtyři, duha
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

    case 5: //Vypnutí
        SetLedAll(0, 0, 0);
        delayMicroseconds(50000);
        break;

    default:
        break;
    }