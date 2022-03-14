
// C++ code
//

/*

The system should read the information from the distance sensor and turn on the LEDs based on the measured distance, in the following way:



1. If the distance is out of range, i.e. the sensor provides no reading - all LEDs should be turned off.

2. If the distance is closer than 20 cm, all LEDs should be turned on.

3. The closer the distance, the more LEDs should be turned on.

4. The color of the LEDs should be white.
*/

/*
You should provide the code that:

 implements the function for sensing the distance (2 points)

// implements the function to turn on the LEDs (2 points)

 is commented (2 points)


*/

#include <Adafruit_NeoPixel.h>

#define NEO_PIXEL_PIN 3   // pin for neopixel
#define DIST_PIN 7        // pin for distance sensor
#define NUMBER_OF_LEDS 24 // leds for neopixel

int cm = 0;
int inches = 0;

Adafruit_NeoPixel strip(NUMBER_OF_LEDS, NEO_PIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
    Serial.begin(9600);
    strip.begin();
    strip.show();
}

long readUltrasonicDistance(int triggerPin, int echoPin)
{
    pinMode(triggerPin, OUTPUT); // Clear the trigger
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    // Sets the trigger pin to HIGH state for 10 microseconds
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    pinMode(echoPin, INPUT);
    // Reads the echo pin, and returns the sound wave travel time in microseconds
    return pulseIn(echoPin, HIGH);
}

int handleDistance()
{
    int ledsOn = 0;
    if (cm == 0)
    {
        return 0;
    }
    if (cm < 20)
    {
        return 24;
    }
    if (cm < 336)
    {
        ledsOn = map(cm, 336, 0, 0, 24);
    }
    Serial.println(cm);
    return ledsOn;
}

void turnLedsOn(int leds)
{
    strip.fill(0, 0, 0);
    for (int i = 0; i < leds; i++)
    {
        strip.setPixelColor(i, 255, 0, 0);
    }
    strip.show();
}

void loop()
{
    // measure the ping time in cm
    cm = 0.01723 * readUltrasonicDistance(7, 7);
    // convert to inches by dividing by 2.54
    inches = (cm / 2.54);
    turnLedsOn(handleDistance());
    delay(100); // Wait for 100 millisecond(s)
}
