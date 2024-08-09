#include ?  //LED NeoPixel 라이브러리 호출!

#define pin_led ?  //LED 몇번 핀인지
#define num_led 30

#define pin_btn1 ?  //버튼1 몇번 핀인지
#define pin_btn2 ?  //버튼2 몇번 핀인지
#define pin_btn3 ?  //버튼3 몇번 핀인지

Adafruit_NeoPixel led(num_led, pin_led, NEO_GRB + NEO_KHZ800);

int value_r = 0;
int value_g = 0;
int value_b = 0;

void setup() {
  //버튼1, 2, 3 정의 (힌트: p로 시작하는 함수)
  ?
  ?
  ?

  led.begin();
}

void loop() {
  led.clear();
  
  int btn_1 = digitalRead(pin_btn1);
  int btn_2 = digitalRead(pin_btn2);
  int btn_3 = ?;  //버튼3 입력값 받기

  if(btn_1 == 1){
    if(value_r == 0){
      value_r = 255;
    }
    else{
      value_r = 0;
    }
  }
  if(btn_2 == 1){
    if(value_g == 0){
      value_g = 255;
    }
    else{
      value_g = 0;
    }
  }
  if(btn_3 == 1){
    if(value_b == 0){
      value_b = 255;
    }
    else{
      value_b = 0;
    }
  }
  
  ? //반복문 이용해서 LED 켜기
  //LED RGB값은 value_r, value_g, value_b
  delay(300);
}
