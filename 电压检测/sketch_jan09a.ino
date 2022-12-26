//

//配合文件夹内的分压电路可实现+-50v电压检测
void setup() {
  Serial.begin(115200);  //指定串口通讯比特率为2000000

  // pinMode(4, OUTPUT);
}
void loop() {

  // digitalWrite(4, LOW);

  int v = analogRead(A1);                  //从A0口读取电压，电压测量范围为0-5V，返回的值为0-1024
  //float volt = (v * (100 / 1024.0) - 50);  //将返回值换算成电压  量程+-50伏需要配合分压电路实现此功能
  //通过arduinoIDE中的串口绘图功能可当示波器使用，精度较低。
  float volt = (v * (5 / 1024.0));      //将返回值换算成电压  量程0-5伏可直接使用
  Serial.print(volt);
  Serial.print(",");  //串口
                      // Serial.print(vo); Serial.print(",");
  Serial.println();   //发送所有
  delay(10);          //输出后等待1，降低刷新速度（1为1毫秒）
}