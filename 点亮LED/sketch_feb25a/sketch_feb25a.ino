int led = 13;
void setup() {
  //设置io口为输出模式
  pinMode(led, OUTPUT);
}

void loop() {
  //向io 口写入高电平
  digitalWrite(led, HIGH);
  //延迟1秒钟
  delay(1000);
  //向io 口写入底电平
  digitalWrite(led, LOW);
  //延迟1秒钟
  delay(1000);
}
