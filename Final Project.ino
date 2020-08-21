#include "FastLED.h"
#define NUM_LEDS 36

CRGB leds[NUM_LEDS];

int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;        // variable to store the value read

void setup() { FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS); }

void loop() {

val = analogRead(analogPin);  // read the input pin

  leds[0] = CRGB::Blue; FastLED.show();
  leds[3] = CRGB::Blue; FastLED.show();
  leds[6] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[0] = CRGB::Black; FastLED.show();
  leds[3] = CRGB::Black; FastLED.show();
  leds[6] = CRGB::Black; FastLED.show(); //0
  
  leds[1] = CRGB::Blue; FastLED.show();
  leds[4] = CRGB::Blue; FastLED.show();
  leds[7] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[1] = CRGB::Black; FastLED.show();
  leds[4] = CRGB::Black; FastLED.show();
  leds[7] = CRGB::Black; FastLED.show(); //1
  
  leds[2] = CRGB::Blue; FastLED.show();
  leds[5] = CRGB::Blue; FastLED.show();
  leds[8] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[2] = CRGB::Black; FastLED.show();
  leds[5] = CRGB::Black; FastLED.show();
  leds[8] = CRGB::Black; FastLED.show(); //2



  leds[9] = CRGB::Blue; FastLED.show();
  leds[12] = CRGB::Blue; FastLED.show();
  leds[15] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[9] = CRGB::Black; FastLED.show();
  leds[12] = CRGB::Black; FastLED.show();
  leds[15] = CRGB::Black; FastLED.show(); //3
  
  leds[10] = CRGB::Blue; FastLED.show();
  leds[13] = CRGB::Blue; FastLED.show();
  leds[16] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[10] = CRGB::Black; FastLED.show();
  leds[13] = CRGB::Black; FastLED.show();
  leds[16] = CRGB::Black; FastLED.show(); //4
  
  leds[11] = CRGB::Blue; FastLED.show();
  leds[14] = CRGB::Blue; FastLED.show();
  leds[17] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[11] = CRGB::Black; FastLED.show();
  leds[14] = CRGB::Black; FastLED.show();
  leds[17] = CRGB::Black; FastLED.show(); //5



  leds[18] = CRGB::Blue; FastLED.show();
  leds[21] = CRGB::Blue; FastLED.show();
  leds[24] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[18] = CRGB::Black; FastLED.show();
  leds[21] = CRGB::Black; FastLED.show();
  leds[24] = CRGB::Black; FastLED.show(); //6
  
  leds[19] = CRGB::Blue; FastLED.show();
  leds[22] = CRGB::Blue; FastLED.show();
  leds[25] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[19] = CRGB::Black; FastLED.show();
  leds[22] = CRGB::Black; FastLED.show();
  leds[25] = CRGB::Black; FastLED.show(); //7
  
  leds[20] = CRGB::Blue; FastLED.show();
  leds[23] = CRGB::Blue; FastLED.show();
  leds[26] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[20] = CRGB::Black; FastLED.show();
  leds[23] = CRGB::Black; FastLED.show();
  leds[26] = CRGB::Black; FastLED.show(); //8



  leds[27] = CRGB::Blue; FastLED.show();
  leds[30] = CRGB::Blue; FastLED.show();
  leds[33] = CRGB::Blue; FastLED.show();
  delay(val);
  leds[27] = CRGB::Black; FastLED.show();
  leds[30] = CRGB::Black; FastLED.show();
  leds[33] = CRGB::Black; FastLED.show(); //9



/////////////////////////////////////////////////////

int a = 1;

  leds[20] = CRGB::Blue; FastLED.show();
  leds[23] = CRGB::Blue; FastLED.show();
  leds[26] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[20] = CRGB::Black; FastLED.show();
  leds[23] = CRGB::Black; FastLED.show();
  leds[26] = CRGB::Black; FastLED.show(); //8

  leds[19] = CRGB::Blue; FastLED.show();
  leds[22] = CRGB::Blue; FastLED.show();
  leds[25] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[19] = CRGB::Black; FastLED.show();
  leds[22] = CRGB::Black; FastLED.show();
  leds[25] = CRGB::Black; FastLED.show(); //7

  leds[18] = CRGB::Blue; FastLED.show();
  leds[21] = CRGB::Blue; FastLED.show();
  leds[24] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[18] = CRGB::Black; FastLED.show();
  leds[21] = CRGB::Black; FastLED.show();
  leds[24] = CRGB::Black; FastLED.show(); //6

  leds[11] = CRGB::Blue; FastLED.show();
  leds[14] = CRGB::Blue; FastLED.show();
  leds[17] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[11] = CRGB::Black; FastLED.show();
  leds[14] = CRGB::Black; FastLED.show();
  leds[17] = CRGB::Black; FastLED.show(); //5

  leds[10] = CRGB::Blue; FastLED.show();
  leds[13] = CRGB::Blue; FastLED.show();
  leds[16] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[10] = CRGB::Black; FastLED.show();
  leds[13] = CRGB::Black; FastLED.show();
  leds[16] = CRGB::Black; FastLED.show(); //4

  leds[9] = CRGB::Blue; FastLED.show();
  leds[12] = CRGB::Blue; FastLED.show();
  leds[15] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[9] = CRGB::Black; FastLED.show();
  leds[12] = CRGB::Black; FastLED.show();
  leds[15] = CRGB::Black; FastLED.show(); //3

  leds[2] = CRGB::Blue; FastLED.show();
  leds[5] = CRGB::Blue; FastLED.show();
  leds[8] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[2] = CRGB::Black; FastLED.show();
  leds[5] = CRGB::Black; FastLED.show();
  leds[8] = CRGB::Black; FastLED.show(); //2

  leds[1] = CRGB::Blue; FastLED.show();
  leds[4] = CRGB::Blue; FastLED.show();
  leds[7] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[1] = CRGB::Black; FastLED.show();
  leds[4] = CRGB::Black; FastLED.show();
  leds[7] = CRGB::Black; FastLED.show(); //1

  leds[0] = CRGB::Blue; FastLED.show();
  leds[3] = CRGB::Blue; FastLED.show();
  leds[6] = CRGB::Blue; FastLED.show();
  delay(a);
  leds[0] = CRGB::Black; FastLED.show();
  leds[3] = CRGB::Black; FastLED.show();
  leds[6] = CRGB::Black; FastLED.show(); //0

  
}
