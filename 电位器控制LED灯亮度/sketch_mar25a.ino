/*
   通过电位器改变LED灯亮度
*/

int ledPin = 6;

int readValue = 0; //保存读到的模拟值
int ledValue = 0;  //保存LED灯占空比

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);     //数字口要选择带~号的具有pwm功能的输出口
}

void loop()
{
  readValue = analogRead(A1);     //读取A0模拟口的数值（0-5V 对应 0-1204取值）
  float volt = readValue;
  Serial.print(volt); //串口输出电压值
  Serial.println(" V"); //输出单位，并且换行
  delay(10);
  ledValue = map(readValue, 885, 945, 0, 255); //将0到1024之间的数据映射成0到255之间的数据
  analogWrite(ledPin, ledValue);   //PWM最大取值255
}
