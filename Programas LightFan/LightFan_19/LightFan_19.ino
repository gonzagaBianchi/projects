#include<stdlib.h>
#include<stdio.h>

int timer = 20;
void setup() {
  int  i;
  // put your setup code here, to run once:
  for (i = 4; i < 14; i++)
  {
    pinMode (i, OUTPUT);

  }
}


void loop() {
  // put your main code here, to run repeatedly:
  int i, j;
  for (i = 4; i < 9; i++) {
    digitalWrite (i, HIGH);
    delay(timer);

  }
  for (j = 13; j > 8; j--) {
    digitalWrite (j, HIGH);
    delay(timer);
    digitalWrite (j, LOW);
    delay(timer);
  }
}
