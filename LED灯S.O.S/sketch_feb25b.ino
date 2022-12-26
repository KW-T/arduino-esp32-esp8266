

//在大多数Arduino控制板上13号引脚都连接了一个标有"L"的LED灯
int led = 13;  //给13号引脚连接的设备起一个别名"led"

void setup() {
  pinMode(led, OUTPUT); //将"led"引脚设置为输出状态
}

void loop() {
  digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(200);  //等待200s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(200);  //等待200s
   digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(200);  //等待200s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(200);  //等待200s
   digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(200);  //等待200s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(500);  //等待500s
   digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(400);  //等待400s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(200);  //等待200s
  digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(400);  //等待400s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(200);  //等待200s
  digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(400);  //等待400s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(500);  //等待500s
  digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(200);  //等待200s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(200);  //等待200s
   digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(200);  //等待200s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(200);  //等待200s
  digitalWrite(led,  HIGH); //引脚输出高电平1,点亮LED
  delay(200);  //等待200s
  digitalWrite(led, LOW); //引脚输出低电平0,熄灭LED
  delay(1300);  //等待1300s
}
