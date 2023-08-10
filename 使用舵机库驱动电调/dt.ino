#include <Servo.h>

Servo myServo;
int c1 = 0;  // declares variable c1
int c2 = 0;  // declares variable c1
String comStr = "";
int comInt = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);          // start serial port
  while (Serial.read() >= 0) {}  // clear serial port's buffer
  //pinMode(pot, INPUT);
  myServo.attach(13);               // attach myServo to GPIO_09
  myServo.writeMicroseconds(1000);  // set initial PWM to minimal
}

void loop() {
  // put your main code here, to run repeatedly:
  // if (Serial.available() > 0) {
  // listen the Serial port, run the code when something catched..
  delay(10);
  comStr = Serial.readString();            // read out the string
  comInt = comStr.toInt();                 // convert the string to integer
  comInt = constrain(comInt, 1000, 2000);  // limit the integer between to 1000 and 2000
  c1 = analogRead(A6);       //ADC采样A6引脚用于控制转速
  c2 = (c1 + 977);
  Serial.println(c2);             // show the integer number on Serial Monitor
  myServo.writeMicroseconds(c2);  // write the integer number to Servo in unit of micro-second
                                  // }
}

