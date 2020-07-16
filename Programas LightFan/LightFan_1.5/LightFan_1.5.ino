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
  int j = 8, i = 9;
  int timer = 50;

  do
  {
    digitalWrite (i, HIGH);
    digitalWrite (j, HIGH);
    i++;
    j--;
    digitalWrite (i, HIGH);
    digitalWrite (j, HIGH);
    delay(timer);
    digitalWrite (i, LOW);
    digitalWrite (j, LOW);
    digitalWrite (i-1,LOW);
    digitalWrite (j+1,LOW);
  } while (i != 13);

  do
  {
    digitalWrite (i, HIGH);
    digitalWrite (j, HIGH);
    i--;
    j++;
    digitalWrite (i, HIGH);
    digitalWrite (j, HIGH);
    delay(timer);
    digitalWrite (i, LOW);
    digitalWrite (j, LOW);
    digitalWrite (i+1,LOW);
    digitalWrite (j-1,LOW);
  } while (i != 9);
}

