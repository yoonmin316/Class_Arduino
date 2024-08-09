#include ?  //LED NeoPixel 라이브러리 호출!

#define pin_led ?  //LED 몇번 핀인지
#define num_led 30

#define pin_btn1 ?  //버튼1 몇번 핀인지
#define pin_btn2 ?  //버튼2 몇번 핀인지

Adafruit_NeoPixel led(num_led, pin_led, NEO_GRB + NEO_KHZ800);

void setup() {
  //버튼1과 2 정의 (힌트: p로 시작하는 함수)
  ?
  ?

  led.begin();
}

void loop() {
  led.clear();
  

}
