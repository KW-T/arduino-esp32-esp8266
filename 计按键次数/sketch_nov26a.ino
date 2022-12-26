int pushButton=7;  //定义按键为管脚7
int buttonState=0;  //按键初始值为0
int beforeState=0;   //检测上一次按下是否松开
int presstime=0;  //记录按了几次
void setup() 
{
  Serial.begin(115200);  //设置波特率为115200，一旦写上这个就可以和电脑通信了
  pinMode(pushButton, INPUT);  //定义管脚7为输入管脚
}

void loop() 
{
  buttonState=digitalRead(pushButton);  //读取按键状态
  if(buttonState==1 and beforeState==0)  //如果按键按下并且上一次按下松开
  {
    Serial.print("hello:");     //打印出hello(不换行)
    Serial.println(++presstime); //打印出按了几次
   }
   if(buttonState!=beforeState)//消抖
   {
    delay(1);
    }
   beforeState=buttonState;   
   delay(1);
}
