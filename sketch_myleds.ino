#include <FastLED.h>

#define NUM_LEDS 100
#define DATA_PIN 6

CRGB leds[NUM_LEDS];

float r = 0;
void setup() 
{
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  
  for(int i = 0; i < 9; i++)
  {
    leds[i].r = 10 * i + r;
    leds[i].g = 5 * i;
    leds[i].b = 0;
  }

  r = r + 0.5;

  if(r > 255)
  {
    r = 0;
  }

  FastLED.show();
  FastLED.setBrightness(100); // ← これで電流が1/2くらいになる
}
