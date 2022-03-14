// C++ code
//

#define LED_1 13
#define LED_2 12
#define LED_3 11
#define LED_4 10
#define LED_5 9
#define LED_6 7
#define LED_7 6
#define LED_8 5
#define LED_9 4
#define LED_10 3

#define TEMP A0

void setup()
{
    Serial.begin(9600);
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
    pinMode(LED_4, OUTPUT);
    pinMode(LED_5, OUTPUT);
    pinMode(LED_6, OUTPUT);
    pinMode(LED_7, OUTPUT);
    pinMode(LED_8, OUTPUT);
    pinMode(LED_9, OUTPUT);
    pinMode(LED_10, OUTPUT);
}

void loop()
{
    int tempReading = analogRead(TEMP);               // read analog value of temperature
    float calc = ((float)tempReading * 5.0) / 1024.0; // calculate voltage
    float temp = (calc - 0.5) * 100;                  // covert to celsuis
    int ledsOn = map(temp, 0, 125, 0, 11);
    Serial.println(ledsOn);
    turnOnLeds(ledsOn);
    delay(1000);
}

void turnOffAllLeds()
{
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
    digitalWrite(LED_5, LOW);
    digitalWrite(LED_6, LOW);
    digitalWrite(LED_7, LOW);
    digitalWrite(LED_8, LOW);
    digitalWrite(LED_9, LOW);
    digitalWrite(LED_10, LOW);
}

void turnOnLeds(int ledsOn)
{
    // turnOffAllLeds();
    if (ledsOn == 1)
    {
        digitalWrite(LED_1, HIGH);
    }
    else if (ledsOn == 2)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
    }
    else if (ledsOn == 3)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
    }
    else if (ledsOn == 4)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
    }
    else if (ledsOn == 5)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
        digitalWrite(LED_5, HIGH);
    }
    else if (ledsOn == 6)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
        digitalWrite(LED_5, HIGH);
        digitalWrite(LED_6, HIGH);
    }
    else if (ledsOn == 7)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
        digitalWrite(LED_5, HIGH);
        digitalWrite(LED_6, HIGH);
        digitalWrite(LED_7, HIGH);
    }
    else if (ledsOn == 8)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
        digitalWrite(LED_5, HIGH);
        digitalWrite(LED_6, HIGH);
        digitalWrite(LED_7, HIGH);
        digitalWrite(LED_8, HIGH);
    }
    else if (ledsOn == 9)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
        digitalWrite(LED_5, HIGH);
        digitalWrite(LED_6, HIGH);
        digitalWrite(LED_7, HIGH);
        digitalWrite(LED_8, HIGH);
        digitalWrite(LED_9, HIGH);
    }
    else if (ledsOn == 10)
    {
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, HIGH);
        digitalWrite(LED_3, HIGH);
        digitalWrite(LED_4, HIGH);
        digitalWrite(LED_5, HIGH);
        digitalWrite(LED_6, HIGH);
        digitalWrite(LED_7, HIGH);
        digitalWrite(LED_8, HIGH);
        digitalWrite(LED_9, HIGH);
        digitalWrite(LED_10, HIGH);
    }
}
