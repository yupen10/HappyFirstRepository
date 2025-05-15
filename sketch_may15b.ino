#include<FastLED.h>

#define NUM 30
int i=0;
CRGB leds[NUM];


void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<WS2812,6>(leds,NUM);
}

void loop() 
{
  // put your main code here, to run repeatedly:
 i++;
 leds[i].r=15;
 leds[i].g=50;
 leds[i].b=30;
 
 delay(100);
  
 leds[i-1].r=0;
 leds[i-1].g=0;
 leds[i-1].b=0;
 delay(100);
 
 if(i>30)
 {
  i=0;

 }
 
 
 
 FastLED.show();
 
 
 
}
