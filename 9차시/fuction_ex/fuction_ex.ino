int multiply(int a, int b, int c){ //함수 정의
  int result = a * b * c;
  return result;
}

String greeting(String name){
  String greet = "Hello, " + name;
  return greet;
}

void setup(){
  Serial.begin(115200);
}
void loop(){
  int s = multiply(3, 5, 6); //함수 호출
  Serial.println(s); //한번 출력
  String hi = greeting("Tom");
  Serial.println(hi);
  delay(5000); 

  int nums[] = {0, 7, 4, 2, 6, -1};
  String tokens[] = {"Seoyoon", "Jiyoon", "Yoons", "Minho"};

  tokens[1]  //Jiyoon
  nums[3]  //2

}