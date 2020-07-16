const int switchPin = 2;
int led[10] = {
  4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int state = HIGH;
int reading;
int previous = LOW;

void setup()
{
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
  for (int i = 0; i < 10; i++)
  {
    pinMode (led[i], OUTPUT);
  }
}

void loop()
{
  int reading = digitalRead(switchPin);
  if (reading == HIGH && previous == LOW)
  {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

    LED7();
    LED6();
  }
  previous = reading;
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

