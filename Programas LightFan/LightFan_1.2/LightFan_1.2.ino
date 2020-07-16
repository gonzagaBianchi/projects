#include<stdlib.h>
#include<stdio.h>

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
  int j = 13 , i = 5 ;
  int timer = 150;

  do
  {
    digitalWrite (i, HIGH);
    digitalWrite (j, HIGH);
    delay (timer);
    digitalWrite(i, LOW);
    digitalWrite (j, LOW);
    delay (timer);
    j-=2;
    i+=2;
    
  } while (i != 13);
  i=4;
  j=13;
 
}

