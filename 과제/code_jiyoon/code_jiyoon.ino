#include ? //서보모터 라이브러리 호출

#define pin_sv1  ?  //서보모터1 핀번호
#define pin_sv2  ?  //서보모터2 핀번호

#define pin_pm1  ?  //가변저항1 핀번호
#define pin_pm2  ?  //가변저항2 핀번호

Servo sv1;
Servo sv2;

void setup() {
  ?  //서보모터1 핀번호 설정 & on
  ?  //서보모터2 핀번호 설정 & on
}

void loop() {
  int input1 = ?  //가변저항1 입력 (힌트: a로 시작하는 함수) 
  int input2 = ?  //가변저항2 입력 (힌트: a로 시작하는 함수) 
  int angle1 = ?  //입력값을 각도로 맵핑하기!
  int angle2 = ?  //입력값을 각도로 맵핑하기!

  ?  //해당 각도만큼 서보모터1 움직이기!!
  ?  //해당 각도만큼 서보모터2 움직이기!!

  delay(200);
}
