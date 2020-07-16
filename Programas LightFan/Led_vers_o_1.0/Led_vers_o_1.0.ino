#include<stdlib.h>
#include<stdio.h>

int i;

int timer = 20;

void setup() 
{
  // put your setup code here, to run once:
  for (i = 4; i < 14; i++) 
  {
    pinMode (i, OUTPUT);
  }

}

//pinMode (led13,OUTPUT);
//pinMode (led12,OUTPUT);
//pinMode (led11,OUTPUT);
//pinMode (led10,OUTPUT);
//pinMode (led9,OUTPUT);
//pinMode (led8,OUTPUT);
//pinMode (led7,OUTPUT);
//pinMode (led6,OUTPUT);
//pinMode (led5,OUTPUT);
//pinMode (led4,OUTPUT);







void loop() {
  // put your main code here, to run repeatedly:
  int i;

  for (i = 4; i < 13; i++) {
    digitalWrite (i, HIGH);
    delay(timer);
    digitalWrite (i, LOW);
    delay(timer);

  }
  for (i = 13; i > 4; i--) {
    digitalWrite (i, HIGH);
    delay(timer);
    digitalWrite (i, LOW);
    delay(timer);

  }



}
