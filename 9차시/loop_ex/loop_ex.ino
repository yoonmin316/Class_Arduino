void setup() {
  Serial.begin(115200);
}

void loop() {
  //while
  int i = 1;
  while(i <= 10){
    Serial.println(i);
    delay(500);
    i = i + 1;
  }

  //for
  for(int i = 0;i <= 10;i++){
    Serial.println(i);
    delay(500);
  }
}
