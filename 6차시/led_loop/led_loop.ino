#include <Adafruit_NeoPixel.h>
#define NUM 30
#define PIN 13

Adafruit_NeoPixel leds(NUM, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  leds.begin();
}

void loop() {
  leds.clear();
  //LED 한번에 켜고 끄기 with 반복문
  for(int i = 0 ; i < 30 ; i++){  //LED 켜기
    leds.setPixelColor(i, 0, 255, 0);
  }
  leds.show();
  delay(500);

  for(int i = 0 ; i < 30 ; i++){ //LED 끄기
    leds.setPixelColor(i, 0, 0, 0);
  }
  leds.show();
  delay(500);
  
}
