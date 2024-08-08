#define pin_vr 33  //가변저항 몇번 핀인지 설정

void setup() {
  Serial.begin(115200);  //모니터에 출력할 시리얼 정의
}

void loop() {
  int read_value = analogRead(pin_vr); //가변저항 값을 읽는 코드
  Serial.println(read_value);  //시리얼 모니터에 출력
  delay(50);
}
