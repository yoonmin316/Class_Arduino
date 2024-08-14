void setup() {
  Serial.begin(115200);
}

//여기에 함수 만들기!!
//String 함수로 int angle을 입력받아서
//예각, 직각, 둔각을 판별하고
//"예각" or "직각" or "둔각" return하게 만들기!
//조건문을 사용하면 됩니다.

void loop() {
  int angle = 85;
  Serial.println(?);  // ? 부분에 만든 함수 호출하기!
  delay(5000); 
}
