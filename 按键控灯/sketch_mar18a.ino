   // 数字量
void setup() {
  pinMode(13, OUTPUT);  //设置LED管脚输出模式
  Serial.begin(115200);
}

void loop() {
int v = analogRead(A8);   
 Serial.print(v); Serial.print(",");
  Serial.println();
  delay(0.1);
  if (v == 0) // 若按键被按下
  {
    digitalWrite(13, 1); // 点亮LED灯
  }
  else {   //否则
      digitalWrite(13, 0); // 熄灭LED灯
  }

 
}
