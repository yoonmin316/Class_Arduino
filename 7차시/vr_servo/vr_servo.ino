#include <ESP32Servo.h>

#define pin_vr 35  //가변저항 핀번호
#define pin_sv1 13 //서보모터1 핀번호
#define pin_sv2 14 //서보모터2 핀번호

Servo sv1;  //서보모터1 객체 정의
Servo sv2;  //서보모터2 객체 정의

void setup() {
  sv1.attach(pin_sv1);  //서보모터1 on, 핀 설정
  sv2.attach(pin_sv2);  //서보모터2 on, 핀 설정
}

void loop() {
  int input = analogRead(pin_vr);  //가변저항 값 읽어들임
  int angle = map(input, 0, 4095, 0, 180);  //가변저항 입력을 각도로 변환: 맵핑
  sv1.write(angle);  //서보모터를 각도만큼 움직임
  sv2.write(180-angle);
  delay(100);
}
