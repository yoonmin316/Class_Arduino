void setup() {
  Serial.begin(115200);
}
void mp(int n){  //구구단 출력하는 함수
  int i = n;
  while(i <= 9*n){
    Serial.print(n);
    Serial.print(" x ");
    Serial.print(i/n);
    Serial.print(" = ");
    Serial.println(i);
    i = i + n;
  }
  delay(1000);
}
void loop() {
  mp(7); //7단 출력하는 함수 호출
}
