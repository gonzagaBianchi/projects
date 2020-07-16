#include<stdlib.h>
#include<stdio.h>

int timer;
void setup()
{
  int i;
  for (i = 4; i < 14; i++)
  {
    int timer = 50;
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

    case '*':
      timer = timer + 50;
      Serial.println("*");
      break;

    case '/':
      timer = timer - 50;
      break;

    case '=':
      timer = 0;
      break;

    case '+':
      timer = timer + 10;
      break;

    case '-':
      timer = timer - 10;
      if (timer < 0)
      {
        timer = 0;
      }
      break;

    case '0':
      for (i = 4; i < 13; i++)
      {
        digitalWrite (i, LOW);


      }
      break;

    case '1':
      do
      {
        for (i = 4; i < 13; i++)
        {
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (i, LOW);

        }
        for (i = 13; i > 4; i--)
        {
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (i, LOW);

          char aux;
          aux = Serial.read();
          if (aux == 'p')
            bluetooth = 'p';

        }
      } while (bluetooth != 'p');
      break;

    case '2':

      for (i = 4; i < 13; i++)
      {
        digitalWrite (i, HIGH);



      }


      break;

    case '3':
      do
      {
        j = 8;
        i = 9;
        do
        {
          digitalWrite (i, HIGH);
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (i, LOW);
          digitalWrite (j, LOW);

          i++;
          j--;
        } while (i != 13);

        do
        {
          digitalWrite (i, HIGH);
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (i, LOW);
          digitalWrite (j, LOW);

          i--;
          j++;
        } while (i != 9);
        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');

      break;


    case'4':
      do
      {
        j = 8;
        i = 9;
        do
        {
          digitalWrite (i, HIGH);
          digitalWrite (j, HIGH);
          delay(timer);
          i++;
          j--;
        } while (i != 13);

        do
        {
          digitalWrite (i, HIGH);
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (i, LOW);
          digitalWrite (j, LOW);

          i--;
          j++;
        } while (i != 8);

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');

      break;

    case'5':
      do
      {
        i = 4;

        for (j = 9; j < 14; j++) {
          digitalWrite (j, HIGH);
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (j, LOW);
          digitalWrite (i, LOW);
          i++;

        }

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'6':
      do
      {
        i = 4;

        for (j = 9; j < 14; j++) {
          digitalWrite (j, HIGH);
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (j, LOW);
          digitalWrite (i, LOW);
          i++;

        }
        for (j = 13; j > 8; j--) {
          i--;
          digitalWrite (j, HIGH);
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (j, LOW);
          digitalWrite (i, LOW);


        }
        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'7':
      do
      {
        i = 4;

        for (j = 9; j < 14; j++) {
          digitalWrite (j, HIGH);
          digitalWrite (i, HIGH);
          delay(timer);
          i++;

        }

        for (j = 13; j > 8; j--) {
          i--;
          digitalWrite (j, LOW);
          digitalWrite (i, LOW);
          delay(timer);


        }
        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;
    case'8':
      do
      {
        j = 8;
        i = 9;
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
          digitalWrite (i - 1, LOW);
          digitalWrite (j + 1, LOW);
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
          digitalWrite (i + 1, LOW);
          digitalWrite (j - 1, LOW);
        } while (i != 9);

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'9':
      do
      {
        j = 8;
        i = 9;
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
          digitalWrite (i - 1, LOW);
          digitalWrite (j + 1, LOW);
        } while (i != 13);

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'A':
      do
      {
        j = 4;
        i = 13;
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


        } while (j != 3);

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'B':
      do
      {
        for (i = 4; i < 9; i++) {
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (i, LOW);


        }
        for (j = 13; j > 8; j--) {
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (j, LOW);

        }

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'C':
      do
      {
        for (i = 4; i < 9; i++) {
          digitalWrite (i, HIGH);
          delay(timer);

        }
        for (j = 13; j > 8; j--) {
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (j, LOW);

        }
        for (j = 9; j < 14; j++) {
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (j, LOW);

        }
        for (i = 8; i > 3; i--) {
          delay(timer);
          digitalWrite (i, LOW);
          delay(timer);
        }

        for (j = 13; j > 8; j--) {
          digitalWrite (j, HIGH);
          delay(timer);
        }
        for (i = 4; i < 9; i++) {
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (i, LOW);

        }
        for (i = 8; i > 3; i--) {
          digitalWrite (i, HIGH);
          delay(timer);
          digitalWrite (i, LOW);

        }
        for (j = 9; j < 14; j++) {
          delay(timer);
          digitalWrite (j, LOW);
          delay(timer);
        }

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;
    case'D':
      do
      {
        for (i = 4; i < 9; i++) {
          digitalWrite (i, HIGH);
        }
        for (j = 13; j > 8; j--) {
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (j, LOW);

        }
        for (j = 9; j < 13; j++) {
          digitalWrite (j, HIGH);
          delay(timer);
          digitalWrite (j, LOW);

        }

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
      break;

    case'E':
      do
      {
        for (i = 4; i < 9; i++)
        {
          digitalWrite (i, HIGH);
          delay(timer);
        }
        for (i = 4; i < 9; i++)
        {
          digitalWrite (i, LOW);

        }
        for (j = 13; j > 8; j--)
        {
          digitalWrite (j, HIGH);
          delay(timer);
        }
        for (j = 13; j > 8; j--)
        {
          digitalWrite (j, LOW);
        }

        char aux;
        aux = Serial.read();
        if (aux == 'p')
          bluetooth = 'p';


      } while (bluetooth != 'p');
  }
}

