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
  int j = 4, i = 13;
  int timer = 100;

  do
  {
    digitalWrite (i, HIGH);
    digitalWrite (j, HIGH);
    delay(timer);
    i--;
    j++;

  
  } while (i != 8);

    do
  {
    digitalWrite (i, LOW);
    digitalWrite (j, LOW);
    delay(timer);
    i++;
    j--;

  
  } while (i != 4);
}


