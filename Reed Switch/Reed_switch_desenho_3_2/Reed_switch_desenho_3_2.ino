const int switchPin = 2;
int led[10] = {
  4, 5, 6, 7, 8, 9, 10, 11, 12, 13
};
int state = HIGH;
int reading;
int previous = LOW;
float angulo, x, y, r = 9;
/*
  int mat[10][40] = {
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  ,
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  ,
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  ,
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  ,
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  };
*/
int mat[21][10] = {
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  ,
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  , {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
  ,
  {
    0, 1, 0, 1, 0, 1, 0, 1, 0, 1
  }
  ,
  {
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0
  }
};
void setup()
{
  //Serial.begin(9600);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
  for (int i = 0; i < 10; i++)
  {
    pinMode (led[i], OUTPUT);
  }

  //init
  angulo = 0;
  x = 0;
  y = 0;




}

void loop()
{

  int reading = digitalRead(switchPin);
  if (reading == HIGH && previous == LOW)
  {
    angulo = 0;// o milagreeeeeee
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

    //LED7();
    //LED6();

  }
  angulo = angulo + 0.1;
  //if (angulo > 10)
  //angulo = 0;


  //x = (int)(r * sin(angulo));
  //y = (int)(r * cos(angulo));

  /*digitalWrite(led[0], mat[(int)angulo][9]);
    digitalWrite(led[1], mat[(int)angulo][8]);
    digitalWrite(led[2], mat[(int)angulo][7]);
    digitalWrite(led[3], mat[(int)angulo][6]);
    digitalWrite(led[4], mat[(int)angulo][5]);
    digitalWrite(led[5], mat[(int)angulo][4]);
    digitalWrite(led[6], mat[(int)angulo][3]);
    digitalWrite(led[7], mat[(int)angulo][2]);
    digitalWrite(led[8], mat[(int)angulo][1]);
    digitalWrite(led[9], mat[(int)angulo][0]);*/
  for (int i = 0; i < 10; i++)
  {
    digitalWrite(led[i], mat[(int)angulo][i]);
    digitalWrite(led[i], LOW);
  }


  //Serial.println(angulo);
  previous = reading;
  //delay(500);

  //delayMicroseconds(1000);


}

int LED7 (void)
{
  delayMicroseconds(190000);
  digitalWrite(led[7], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[7], LOW);

  delayMicroseconds(9808000);
  digitalWrite(led[7], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[7], LOW);

  delayMicroseconds(9808200);
  digitalWrite(led[7], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[7], LOW);

  delayMicroseconds(9808300);
  digitalWrite(led[7], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[7], LOW);
}

int LED6 (void)
{
  delayMicroseconds(80000);
  digitalWrite(led[6], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[6], LOW);

  delayMicroseconds(9709800);
  digitalWrite(led[6], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[6], LOW);

  delayMicroseconds(9709800);
  digitalWrite(led[6], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[6], LOW);

  delayMicroseconds(9709800);
  digitalWrite(led[6], HIGH);
  delayMicroseconds(200);
  digitalWrite(led[6], LOW);
}










