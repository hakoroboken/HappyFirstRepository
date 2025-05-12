#include<FastLED.h>

#define NUM 50

CRGB leds[NUM];


void setup() {
  FastLED.addLeds<NEOPIXEL,6>(leds,NUM);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<3;i++)
  {
    leds[i].r=255;
    leds[i].g=0;
    leds[i].b=0;
      
  }

  FastLED.show();
}
