#include<FastLED.h>

#define NUM 50
int i=0;

CRGB leds[NUM];
void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<WS2812,6,GRB>(leds,NUM);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0;i<50;i++)
 {
  leds[i].r=0;
  leds[i].g=15;
  leds[i].b=0;
 }
 
 i++;
  leds[i].r=15;
  leds[i].g=0;
  leds[i].b=0;

  delay(50);

  leds[i-1].r=0;
  leds[i-1].g=15;
  leds[i-1].b=0;

  delay(50);
 
  if(i>NUM)
 {
  i=0;
 }

  FastLED.show();

}
