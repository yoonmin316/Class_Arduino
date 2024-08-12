#include <ESP32Servo.h> //서보모터 라이브러리 호출

#define pin_sv1 12  //서보모터1 핀번호
#define pin_sv2 13  //서보모터2 핀번호

#define pin_vr1 32  //가변저항1 핀번호
#define pin_vr2 35  //가변저항2 핀번호

Servo sv1;
Servo sv2;

void setup() {
    sv1.attach(pin_sv1); //서보모터1 핀번호 설정 & on
    sv2.attach(pin_sv2); //서보모터2 핀번호 설정 & on
    Serial.begin(115200);
}

void loop() {
  int input1 = analogRead(pin_vr1);  //가변저항1 입력 (힌트: a로 시작하는 함수) 
  int input2 = analogRead(pin_vr2);  //가변저항2 입력 (힌트: a로 시작하는 함수) 
  int angle1 = map(input1, 0, 4095, 0, 180);  //입력값을 각도로 맵핑하기!
  int angle2 = map(input2, 0, 4095, 0, 180);  //입력값을 각도로 맵핑하기!
  Serial.println(angle1);


  sv1.write(angle1);   
  sv2.write(180-angle2);  

  delay(200);
}
