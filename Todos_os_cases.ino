#include<stdlib.h>
#include<stdio.h>

int timer;
void setup()
{
  int i;
  for (i = 4; i < 14; i++)
  {
    pinMode (i, OUTPUT);
  }

  Serial.begin(9600);
}
void loop()
{
  int j, i;
  char bluetooth = Serial.read();
  switch (bluetooth)
  {
    case'J':

      j = 14;

      for (i = 4; i < 9; i++)
      {
        j--;

        digitalWrite (i, HIGH);
        delay(timer);
        digitalWrite(i, LOW);

        digitalWrite (j, HIGH);
        delay(timer);
        digitalWrite (j, LOW);

        digitalWrite (i, HIGH);
        delay(timer);
        digitalWrite(i, LOW);

        digitalWrite (j, HIGH);
        delay(timer);
        digitalWrite (j, LOW);

        if (i == 8)
        {
          j = 14;
          
          delay (timer);

          for (i = 4; i < 9; i++)
          {
            j--;
            digitalWrite (i, HIGH);

            digitalWrite (j, HIGH);
          }

          j = 14;

          delay (timer);

          for (i = 4; i < 9; i++)
          {
            j--;
            
            digitalWrite (i, LOW);

            digitalWrite (j, LOW);
            
            if (i == 8)
            {
              j = 14;

              delay (timer);

              for (i = 4; i < 9; i++)
              {
                j--;

                digitalWrite (i, HIGH);

                digitalWrite (j, HIGH);
              }

              j = 14;

              delay (timer);

              for (i = 4; i < 9; i++)
              {
                j--;

                digitalWrite (i, LOW);

                digitalWrite (j, LOW);
              }
            }
          }
        }
      }
      break;
  }
}



