#include<FastLED.h>

#define NUM 50
int count=0;

CRGB leds[NUM];


void setup() {
  FastLED.addLeds<WS2812,6>(leds,NUM);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<15;i++)
  {
    leds[i].r=15 * count;
    leds[i].g=50;
    leds[i].b=30 * count;
      
  }
count++;

if(count > 200)
{
  count = 0;
}
  FastLED.show();
  delay(100);
}
