#include<WiFi.h>  
//调用包含wifi功能的库

const char *wifi_SSID="ESP32";  
//热点的名称
const char *wifi_Password="ESP321234";  
//热点密码

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  //启动串口通信并设置波特率为115200
  
  WiFi.softAP(wifi_SSID,wifi_Password);  //设置AP模式热点的名称和密码，密码可不填则发出的热点为无密码热点

  Serial.print("\n ESP32建立的wifi名称为：");
  Serial.print(wifi_SSID);  //串口输出ESP32建立的wifi的名称
  Serial.print("\nESP32建立wifi的IP地址为：");
  Serial.print(WiFi.softAPIP());  //串口输出热点的IP地址
}

void loop() {

}
