#include <Servo.h>//서보모터
int servo1 = 10;
int servo2 = 9;
int get_input;//시리얼 값 받아올 변수
Servo servoOn;//켜기 전용 서보
Servo servoOFF;//끄기 전용 서보
void setup() {
  Serial.begin(115200);
}

void loop() {
  if(Serial.available()){
    get_input = Serial.read();//시리얼 값을 받기

    if(get_input=='1'){
      on_servo(30);//거실 on
    }
    else if(get_input=='2'){
      off_servo(150);//거실 off
    }
    else if(get_input=='3'){
      on_servo(150);//화장실 on
    }
    else if(get_input=='4'){
      off_servo(30);//화장실off
    }
    else if(get_input=='5'){
      Serial.println(String(temp)+','+String(humi));
    }
  delay(100);
  }
}

//서보모터 작동 함수, 전원 공급,중단 포함(파워제어)
void off_servo(int angle){
  servoOFF.attach(servo2);//전원 공급
  servoOFF.write(angle); //입력 된 angle만큼 작동
  delay(2000);
  servoOFF.write(90);  //90도 평행으로
  delay(2000);
  servoOFF.detach();//전원 공급 중단
}

void on_servo(int angle){
  servoOn.attach(servo1);//전원 공급
  servoOn.write(angle); //입력 된 angle만큼 작동`
  delay(2000); 
  servoOn.write(90); //90도 평행으로
  delay(2000);
  servoOn.detach();//전원 공급 중단
}
