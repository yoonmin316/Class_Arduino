#include <ESP32Servo.h>
#define pin 13

Servo sv;

void setup() {
  sv.attach(pin);  //서보모터가 몇번 핀인지 알려주고, 서보모터를 켜기
}

void loop() {
  sv.write(0);  //서보모터 몇도 움직이라고 명령하는 코드
  delay(1000);  //1초동안 대기
  sv.write(180);
  delay(1000);
}
