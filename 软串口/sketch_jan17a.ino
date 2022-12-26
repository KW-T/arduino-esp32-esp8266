
//可用于代替ch340进行PC和单片机之间通讯
#include <SoftwareSerial.h>
//调用虚拟串口的库
SoftwareSerial BT(10, 11);
//虚拟一个串口定义为BT引脚为10,11
char val;
void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  //开启两个串口,Serial为硬件串口引脚为0,1
}

void loop() {
  if (Serial.available()) {
    //当串口接收到数据时
    val = Serial.read();
    //反复读取串口的数据并赋值给val
    BT.print(val);
    //在虚拟串口打印val
  }

  if (BT.available()) {
    //当虚拟串口接收到数据时
    val = BT.read();
    //反复读取虚拟串口的数据并赋值给val
    Serial.print(val);
    //在串口打印val
  }
}