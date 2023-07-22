/****************************************step54 part****************************************/
/*
  接线：
  GND----------GND
  5V----------VCC
  2------------IN1
  3------------IN2
  4------------IN3
  5------------IN4
*/
#define step54TimeInterval 10                                                 //检测一次的时间间隔                   
unsigned long step54Times = 0;                                                //记录设备运行时间
int runStepCount = 0;
#define step54TimeInterval1 10                                                //检测一次的时间间隔                   
unsigned long step54Times1 = 0;                                               //记录设备运行时间
int runStepCount1 = 0;
/****************************************set up and loop part*********************************/
void setup() {
  Serial.begin(9600);                                                         //设置串口波特率为9600
  for (int i = 2; i < 6; i++) {
    pinMode(i, OUTPUT);                                                       //初始化四个引脚为输出模式
  }
  Serial.println("设备上线！");
}
void loop() {
  clockwise(512);                                                             //顺时针旋转512步为一圈
  //anticlockwise(512);                                                       //逆时针旋转512步为一圈
}
/****************************************step54 part****************************************/
/*顺时针旋转512步为一圈*/
void clockwise(int num) {
  //只转一次指定的角度
  if (runStepCount < num) {
    if (millis() - step54Times >= step54TimeInterval) {                       //一定时间执行一次
      step54Times = millis();
      runStepCount++;                                                         //计数
      for (int i = 2; i < 6; i++) {
        digitalWrite(i, HIGH);
        delay(60);                                                             //可以控制速度，建议不要小于2
        digitalWrite(i, LOW);
      }
    }
  }
  //不注释下面的if会一直转
  if (runStepCount >= num) {                                                  //重复转，一直转
    runStepCount = 0;
  }
}
/*逆时针旋转512步为一圈*/
void anticlockwise(int num) {
  if (runStepCount1 < num) {
    if (millis() - step54Times1 >= step54TimeInterval1) {                     //一定时间执行一次
      step54Times1 = millis();
      runStepCount1++;
      for (int i = 5; i > 1; i--) {
        digitalWrite(i, HIGH);
        delay(2);                                                             //可以控制速度，建议不要小于2
        digitalWrite(i, LOW);
      }
    }
  }
  //不注释下面的if会一直转
  //    if (runStepCount1 >= num) {                                              //重复转，一直转
  //      runStepCount1 = 0;
  //    }
}