#include <FastLED.h>
#define NUM_LEDS 7
#define DATA_PIN 2
#define CLOCK_PIN 13
CRGB leds[NUM_LEDS];


  
void setup() {
  // put your setup code here, to run once:
 // LEDS.addLeds<WS2812,DATA_PIN,RGB>(leds,NUM_LEDS);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
//  LEDS.setBrightness(84);
}

void loop() {
//   put your main code here, to run repeatedly:
//  leds[0]=CRGB(100,0,0);
//  FastLED.show();
//  
//  leds[1]=CRGB(0,100,0);
//  FastLED.show();
//
//  leds[2]=CRGB(0,0,100);
//  FastLED.show();
//  
//
//  leds[3]=CRGB(100,0,100);
//  FastLED.show();
//
//  leds[4]=CRGB(100,100,0);
//  FastLED.show(); 
//
//  leds[5]=CRGB(0,100,100);
//  FastLED.show();
//
//  leds[6]=CRGB(100,100,100);
//  FastLED.show();
//  delay(1000);
//
//  for(int i = 0; i < NUM_LEDS; i++ )
//  {
//    leds[i] = CRGB(0,0,0);
//    FastLED.show();
//  }
//  delay(1000);


  leds[0] = CRGB::Olive;
  FastLED.show();
  leds[1] = CRGB::FireBrick;
  FastLED.show();
  leds[2] = CRGB::LimeGreen;
  FastLED.show();
  leds[3] = CRGB::DeepSkyBlue;
  FastLED.show();
  leds[4] = CRGB:: Khaki;
  FastLED.show();
  leds[5] = CRGB:: Purple;
  FastLED.show();
  leds[6] = CRGB:: Chocolate;
  FastLED.show();
  delay(1000);
  for(int i = 0; i < NUM_LEDS; i++ )
  {
    leds[i] = CRGB(0,0,0);
    FastLED.show();
  }
  delay(1000);
}
