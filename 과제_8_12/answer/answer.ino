void setup() {
  Serial.begin(115200);
}

void loop() {
  int grade = 85;
  if(grade >= 90 && grade <= 100){
    Serial.println("A+");
  }
  else if(grade >= 80){
    Serial.println("A");
  }
  else if(grade >= 70){
    Serial.println("B+");
  }
  else if(grade >= 60){
    Serial.println("B");
  }
  else if(grade >= 50){
    Serial.println("C");
  }
  else{
    Serial.println("F");
  }
  delay(3000);
}
