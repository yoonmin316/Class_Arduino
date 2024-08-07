#include <Adafruit_NeoPixel.h>
#define NUM 30
#define PIN 13

Adafruit_NeoPixel leds(NUM, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  leds.begin();
}

void loop() {
  leds.clear();

  leds.setPixelColor(0, 255, 255, 255); //LED 색깔을 정하는 코드 (흰색)
  leds.setPixelColor(2, 255, 255, 255); 
  leds.show(); //최종 LED를 보여주는 코드
  delay(500); //0.5초 동안 기다려라

  leds.setPixelColor(0, 0, 0, 0); //LED 색깔을 정하는 코드 (끄기)
  leds.setPixelColor(2, 0, 0, 0); 
  leds.show();
  delay(500);

  //LED를 하나씩 켜는 코드
  leds.setPixelColor(0, 0, 255, 0); 
  leds.show();
  delay(500);
  leds.setPixelColor(1, 0, 255, 0); 
  leds.show();
  delay(500);
  leds.setPixelColor(2, 0, 255, 0); 
  leds.show();
  delay(500);
  leds.setPixelColor(3, 0, 255, 0); 
  leds.show();
  delay(500);

  //LED를 한번에 끄는 코드
  leds.setPixelColor(0, 0, 0, 0); 
  leds.setPixelColor(1, 0, 0, 0);
  leds.setPixelColor(2, 0, 0, 0);
  leds.setPixelColor(3, 0, 0, 0);
  leds.show();
  delay(500);


  //새로운 코드
  //무지개 출력 7개 색깔
  //빨, 주, 노, 초, 파, 보, 흰
  //동시에 1초동안 출력하고, 0.5초동안 동시에 다 꺼지게

  //빨간색 -> 255,   0,   0
  //주황색 -> 255, 127,   0
  //노란색 -> 255, 255,   0
  //초록색 ->   0, 255,   0
  //파란색 ->   0,   0, 255
  //보라색 -> 255,   0, 255
  //흰색   -> 255, 255, 255

  int colors[7][3] = {{255, 0, 0}, {255, 127, 0}, {255, 255, 0}, {0, 255, 0}, {0, 0, 255}, {255, 0, 255}, {255, 255, 255}};
  for(int i = 0;i < 2;i++){
    for(int j = 0;j < 7;j++){
      leds.setPixelColor(j, colors[j][0], colors[j][1], colors[j][2]);
      leds.show();
      delay(500);
    }
  }
  

}
