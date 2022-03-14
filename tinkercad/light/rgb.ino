// C++ code
//

#define LED_R 13
#define LED_B 12
#define LED_G 11

#define LIGHT_PIN A0


void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop()
{
  int lightReading = analogRead(LIGHT_PIN);
  int color = map(lightReading, 0, 679, 1, 3);
  turnOnLED(color);
}

void turnOffLEDs(){
  	digitalWrite(LED_R, LOW);
  	digitalWrite(LED_G, LOW);
  	digitalWrite(LED_B, LOW);

}

void turnOnLED(int color){
  turnOffLEDs();
  if(color == 1){
  	digitalWrite(LED_B, HIGH);
  } else if(color == 2){
  	digitalWrite(LED_G, HIGH);
  } else {
  	digitalWrite(LED_R, HIGH);
  }
}