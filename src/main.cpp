/*
 * @Author: HeliumCYH 165759375+HeliumCYH@users.noreply.github.com
 * @Date: 2024-05-12 17:58:44
 * @LastEditors: HeliumCYH 165759375+HeliumCYH@users.noreply.github.com
 * @LastEditTime: 2024-05-17 10:22:26
 * @FilePath: \StreamLED\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>

int val = 0;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(9600);
  for (int i = 10; i <= 12; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  val = Serial.read() - '0';
  //Serial.println(val);
  if (val > 0)
  {
    Serial.println(val);
    digitalWrite(val + 10 - 1, HIGH);
    delay(500);
    digitalWrite(val + 10 - 1, LOW);
    delay(500);
  }
  
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}