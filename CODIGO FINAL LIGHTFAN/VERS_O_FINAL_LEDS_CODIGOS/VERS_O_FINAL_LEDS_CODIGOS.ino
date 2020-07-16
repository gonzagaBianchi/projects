#include<stdlib.h>
#include<stdio.h>
#define sensor 2
#define led1  4
#define led2  5
#define led3  6
#define led4  7
#define led5  8
#define led6  9
#define led7  10
#define led8  11
#define led9  12
#define led10 13
int voltaCompleta;
int tempo1;
int tempo2;
int estadoSensor = 0;
int tempovolta;
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
  pinMode( sensor, INPUT);
  pinMode( led1, OUTPUT);
  pinMode( led2, OUTPUT);
  pinMode( led3, OUTPUT);
  pinMode( led4, OUTPUT);
  pinMode( led5, OUTPUT);
  pinMode( led6, OUTPUT);
  pinMode( led7, OUTPUT);
  pinMode( led8, OUTPUT);
  pinMode( led9, OUTPUT);
  pinMode( led10, OUTPUT);
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
      break;
    case'F':
      do
        estadoSensor = digitalRead(sensor);
      tempo1 = 300;
      tempo2 = 180;
      if (estadoSensor == HIGH) {
        voltaCompleta = 1;
      }
      else {

        digitalWrite(led1, 0);
        digitalWrite(led2, 0);
        digitalWrite(led3, 0);
        digitalWrite(led4, 0);
        digitalWrite(led5, 0);
        digitalWrite(led6, 0);
        digitalWrite(led7, 0);
        digitalWrite(led8, 0);
        digitalWrite(led9, 0);
        digitalWrite(led10, 0);

      }
      if (voltaCompleta == 1) {




        digitalWrite(led1, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led1, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led10, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led10, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led1, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led1, 0);

        digitalWrite(led1, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led1, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led10, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led10, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);


        digitalWrite(led1, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led1, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led10, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led10, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);

        delayMicroseconds(tempo2);
        digitalWrite(led1, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led1, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led10, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led10, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);


        delayMicroseconds(tempo2);
        digitalWrite(led1, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led1, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led10, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led10, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led9, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led9, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led8, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led8, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led7, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led7, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led6, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led6, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led5, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led5, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led4, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led4, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led3, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led3, 0);
        delayMicroseconds(tempo2);
        digitalWrite(led2, 1);
        delayMicroseconds(tempo1);
        digitalWrite(led2, 0);


        voltaCompleta = 0;
      }


  }



} while (bluetooth != 'P');
break;
case'G':
do
  estadoSensor = digitalRead(sensor);
tempo1 = 300;
tempo2 = 14000;

if (estadoSensor == HIGH) {
  voltaCompleta = 1;
}
else {

  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
  digitalWrite(led5, 0);
  digitalWrite(led6, 0);
  digitalWrite(led7, 0);
  digitalWrite(led8, 0);
  digitalWrite(led9, 0);
  digitalWrite(led10, 0);

}
if (voltaCompleta == 1) {


  digitalWrite(led1, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led1, 0);

  delayMicroseconds(3350);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);

  delayMicroseconds(6700);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);
  //____________________________________________________________


  delayMicroseconds(3350);


  digitalWrite(led1, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led1, 0);

  delayMicroseconds(3350);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);

  delayMicroseconds(6700);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);

  //____________________________________________________________


  delayMicroseconds(3350);

  digitalWrite(led1, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led1, 0);

  delayMicroseconds(3350);

  digitalWrite(led5, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led5, 0);

  delayMicroseconds(6700);

  digitalWrite(led5, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led5, 0);


  voltaCompleta = 0;
}



}

} while (bluetooth != 'p');
break;

case'H':
do
  estadoSensor = digitalRead(sensor);
tempo1 = 300;
tempo2 = 14000;

if (estadoSensor == HIGH) {
  voltaCompleta = 1;
}
else {

  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
  digitalWrite(led5, 0);
  digitalWrite(led6, 0);
  digitalWrite(led7, 0);
  digitalWrite(led8, 0);
  digitalWrite(led9, 0);
  digitalWrite(led10, 0);

}
if (voltaCompleta == 1) {


  digitalWrite(led1, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led1, 0);

  delayMicroseconds(3350);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);

  delayMicroseconds(6700);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);
  //____________________________________________________________


  delayMicroseconds(3350);


  digitalWrite(led1, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led1, 0);

  delayMicroseconds(3350);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);

  delayMicroseconds(6700);

  digitalWrite(led4, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led4, 0);

  //____________________________________________________________


  delayMicroseconds(3350);

  digitalWrite(led1, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led1, 0);

  delayMicroseconds(3350);

  digitalWrite(led5, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led5, 0);

  delayMicroseconds(6700);

  digitalWrite(led5, 1);
  delayMicroseconds(tempo1);
  digitalWrite(led5, 0);


  voltaCompleta = 0;
}



}


} while (bluetooth != 'p');
break;

case'I':
do
{
  estadoSensor = digitalRead(sensor);
  tempo1 = 300;
  tempo2 = 575;
  if (estadoSensor == HIGH) {
    voltaCompleta = 1;
  }
  else {

    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10, 0);

  }
  if (voltaCompleta == 1) {


    digitalWrite(led1, 1);
    delay(200);
    digitalWrite(led1, 0);
    delay(50);
    digitalWrite(led2, 1);
    delay(190);
    digitalWrite(led2, 0);
    delay(50);
    digitalWrite(led3, 1);
    delay(180);
    digitalWrite(led3, 0);
    delay(50);
    digitalWrite(led4, 1);
    delay(170);
    digitalWrite(led4, 0);
    delay(50);
    digitalWrite(led5, 1);
    delay(150);
    digitalWrite(led5, 0);
    delay(50);
    digitalWrite(led6, 1);
    delay(140);
    digitalWrite(led6, 0);
    delay(50);
    digitalWrite(led7, 1);
    delay(130);
    digitalWrite(led7, 0);
    delay(50);
    digitalWrite(led8, 1);
    delay(120);
    digitalWrite(led8, 0);
    delay(50);
    digitalWrite(led9, 1);
    delay(110);
    digitalWrite(led9, 0);
    delay(50);
    digitalWrite(led10, 1);
    delay(100);
    digitalWrite(led10, 0);

    delay(50);
    digitalWrite(led9, 1);
    delay(110);
    digitalWrite(led9, 0);
    delay(50);
    digitalWrite(led8, 1);
    delay(120);
    digitalWrite(led8, 0);
    delay(50);
    digitalWrite(led7, 1);
    delay(130);
    digitalWrite(led7, 0);
    delay(50);
    digitalWrite(led6, 1);
    delay(140);
    digitalWrite(led6, 0);
    delay(50);
    digitalWrite(led5, 1);
    delay(150);
    digitalWrite(led5, 0);
    delay(50);
    digitalWrite(led4, 1);
    delay(160);
    digitalWrite(led4, 0);
    delay(50);
    digitalWrite(led3, 1);
    delay(170);
    digitalWrite(led3, 0);
    delay(50);
    digitalWrite(led2, 1);
    delay(180);
    digitalWrite(led2, 0);
    delay(50);
    digitalWrite(led1, 1);
    delay(190);
    digitalWrite(led1, 0);


    voltaCompleta = 0;
  }



}



} while (bluetooth != 'p');
break;

case'J':
do
{
  estadoSensor = digitalRead(sensor);
  tempo1 = 300;
  tempo2 = 575;
  if (estadoSensor == HIGH) {
    voltaCompleta = 1;
  }
  else {

    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10, 0);

  }
  if (voltaCompleta == 1) {




    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led6, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led6, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);

    //____________________________________________________________

    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led6, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led6, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);

    //______________________________________________________________________________
    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led6, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led6, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    //_________________________________________________________________________
    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led6, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led6, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    //__________________________________________________________________________________

    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led6, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led6, 0);
    delayMicroseconds(tempo2);

    digitalWrite(led5, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led5, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led4, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led4, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);







    voltaCompleta = 0;
  }



}


} while (bluetooth != 'p');
break;

case'K':
do
{

  estadoSensor = digitalRead(sensor);
  tempo1 = 300;
  tempo2 = 2470;
  if (estadoSensor == HIGH) {
    voltaCompleta = 1;
  }
  else {

    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10, 0);

  }
  if (voltaCompleta == 1) {




    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);


    delayMicroseconds(tempo2);
    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);

    delayMicroseconds(tempo2);
    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);

    delayMicroseconds(tempo2);
    digitalWrite(led1, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led1, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led3, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led3, 0);
    delayMicroseconds(tempo2);
    digitalWrite(led2, 1);
    delayMicroseconds(tempo1);
    digitalWrite(led2, 0);

    voltaCompleta = 0;
  }



}


} while (bluetooth != 'p');
break;
}
}

