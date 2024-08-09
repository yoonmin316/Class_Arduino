#define pin_btn 34
#define pin_r 12
#define pin_g 13
#define pin_b 14

int state = 0;  //LED를 켜고 끄는 상태: 0이면 LED off, 1이면 LED on

void setup() {
  pinMode(pin_btn, INPUT_PULLUP);  //버튼을 입력으로 설정

  pinMode(pin_r, OUTPUT); //LED들을 출력으로 설정
  pinMode(pin_g, OUTPUT);
  pinMode(pin_b, OUTPUT);

  Serial.begin(115200);  //시리얼 통신 확인
}

void loop() {
  int input = digitalRead(pin_btn);  //버튼의 값을 확인: 0 or 1
  Serial.println(input);  //버튼 값 출력

  if(input == 1 && state == 0){ //현재 LED가 꺼져있고(state == 0), 버튼이 눌리면(input ==1)
    state = 1;  //LED를 켜라
  }
  else if(input == 1 && state == 1){ //현재 LED가 꺼져있고(state == 1), 버튼이 눌리면(input ==1)
    state = 0; //LED를 꺼라
  }
  else{
    state = state;
  }

  if(state == 1){  //LED on이면 LED 켜기
    digitalWrite(pin_r, HIGH);
    digitalWrite(pin_g, HIGH);
    digitalWrite(pin_b, HIGH);
  }
  else{  //LED off이면 LED 끄기
    digitalWrite(pin_r, LOW);
    digitalWrite(pin_g, LOW);
    digitalWrite(pin_b, LOW);
  }
  delay(300);
}
