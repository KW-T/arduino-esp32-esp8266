#include <WiFi.h>
const char* ssid = "你猜"; // wifi账号
const char* password = "123456789"; // WIFI密码
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(ssid,password); // 连接WiFi
  Serial.print("等待连接中");
  while(WiFi.status() != WL_CONNECTED){
    delay(50) ;
    Serial.print(".");
  }
  Serial.println("WiFi connected!");
  
  Serial.print("模块IP");
  Serial.println(WiFi.localIP()); // 打印模块IP
  
  Serial.print("子网掩码");
  Serial.println(WiFi.subnetMask()); // 打印子网掩码
  
  Serial.print("网关地址");
  Serial.println(WiFi.gatewayIP()); // 打印网关地址

  Serial.print("DNS ");
  Serial.println(WiFi.dnsIP()); // 打印DNS地址

    WiFi.setHostname(" 32"); // 设置主机名
    Serial.print("主机名 ");
    Serial.println(WiFi.getHostname()); // 打印主机名
}

void loop() {

}
