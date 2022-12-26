#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); 
//使用软串口连接蓝牙
void setup()  
{
  pinMode(13, OUTPUT);
  BT.begin(115200);
  //设置与蓝牙通讯的波特率
  BT.println("Hello from Arduino");
}
char a; // stores incoming character from other device
void loop() 
{
  if (BT.available())
  {
    a=(BT.read());
    if (a=='1')
    //收到蓝牙发来得信息1执行一下
    {
      digitalWrite(13, HIGH);
      //13脚输出高电平
      BT.println("LED on");
      //蓝牙反馈LED on
    }
    if (a=='2')
    //收到蓝牙发来得信息2执行一下
    {
      digitalWrite(13, LOW);
      //13脚输出低电平
      BT.println("LED off");
      //蓝牙反馈LED off
    }
    if (a=='?')
    {
      BT.println("Send '1' to turn LED on");
      BT.println("Send '2' to turn LED on");
    }   

  }

}
