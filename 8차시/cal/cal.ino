void setup(){
	Serial.begin(9600);
}
void loop(){
  Serial.println(9 + 3);
  Serial.println(51 - 1);
  Serial.println(5 * 6);
  Serial.println(49 / 7);

  float circum = 3.14;
  int radius = 5;
	Serial.print("원주율: ");
	Serial.println(circum);
	Serial.print("원의 반지름: ");
	Serial.println(radius);
	Serial.print("원의 둘레: ");
	Serial.println(circum * radius * 2);
	Serial.print("원의 넓이: ");
	Serial.println(circum * radius * radius);
	Serial.print("원기둥의 부피: ");
	Serial.println(circum * radius * radius * 5);
	Serial.print("원뿔의 부피: ");
	Serial.println(circum * radius * radius * 5 / 3);
	Serial.print("구의 부피: ");
	Serial.println(circum * radius * radius * radius * 4 / 3);
	delay(5000);

  int degree = 45;
  if(n <= 90){
    Serial.println("less!");
    degree = 135;
  }
  else if(n <= 180){
    Serial.println("Middle");
    degree = 360;
  }
  else{
    Serial.println("Over!");
    degree = 45;
  }

  int grade = 85;
  if(){

  }
  else if(){

  }
  else if(){

  }
  else if(){

  }
  else{

  }

  Serial.println("1 and 2 and 3");
  delay(1000);
  Serial.println("1 and 2 and 3");
  delay(1000);
  Serial.println("1 and 2 and 3");
  delay(1000);
  Serial.println("1 and 2 and 3");
  delay(1000);
  Serial.println("1 and 2 and 3");
  delay(1000);
  Serial.println("1 and 2 and 3");
  delay(1000);

  int i = 1;
  while(i <= 10){
    Serial.println(i);
    i = i + 1;
  }
  delay(3000);

  for(int i = 1;i <= 10;i++){
    Serial.println(i);
    delay(500);
  }
}

int add(int x, int y){
  //code here
  int sum = x + y

  return sum;
}
