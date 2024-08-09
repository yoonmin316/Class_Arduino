#define pin_r 12
#define pin_g 13
#define pin_b 14
#define pin_pm 32

void setup() {
  pinMode(pin_r, OUTPUT);
  pinMode(pin_g, OUTPUT);
  pinMode(pin_b, OUTPUT);

  Serial.begin(115200);
  digitalWrite(pin_r, HIGH);
  digitalWrite(pin_g, HIGH);
  digitalWrite(pin_b, HIGH);
  delay(200);
}

void loop() {
  int input = analogRead(pin_pm);
  int angle = map(input, 0, 4095, 0, 180);
  Serial.println(angle);

  if(angle > 90){ //각도가 90도 보다 크면
    //LED가 전부 켜지게
    digitalWrite(pin_r, HIGH);
    digitalWrite(pin_g, HIGH);
    digitalWrite(pin_b, HIGH);
  } 
  else{
    //LED가 전부 꺼지게
    digitalWrite(pin_r, LOW);
    digitalWrite(pin_g, LOW);
    digitalWrite(pin_b, LOW);
  }

  // 0 ~ 60: 빨간색 LED on
  // 60 ~ 120: 초록색 LED on
  // 120 ~ 180: 파란색 LED on
  if(angle < 60){
    digitalWrite(pin_r, HIGH);
    digitalWrite(pin_g, LOW);
    digitalWrite(pin_b, LOW);
  }
  else if(angle < 120 && angle >= 60){
    digitalWrite(pin_r, LOW);
    digitalWrite(pin_g, HIGH);
    digitalWrite(pin_b, LOW);
  }
  else{
    digitalWrite(pin_r, LOW);
    digitalWrite(pin_g, LOW);
    digitalWrite(pin_b, HIGH);
  }

  delay(100);
}
