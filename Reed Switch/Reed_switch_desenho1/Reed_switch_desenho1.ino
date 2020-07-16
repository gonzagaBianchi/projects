const int switchPin = 2;
int ledPin = 13; // // LED is on digital pin 13
int state = HIGH; // the current state of the output pin
int reading; // the current reading from the input pin
int previous = LOW; // the previous reading from the input pin

void setup()
{
  pinMode(switchPin, INPUT);
  for (int led = 4; led <= 13; led++)
    pinMode (led, OUTPUT);

  digitalWrite(switchPin, HIGH);
  Serial.begin(9600);
}

void loop()
{
  int reading = digitalRead(switchPin);
 // Serial.println(digitalRead(switchPin)); // Display current value
  //delay (10);
  if (reading == HIGH && previous == LOW)
  {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;
    digitalWrite(7, HIGH);
    delayMicroseconds(100);
    digitalWrite(7, LOW);

    
    delayMicroseconds(20000);
    digitalWrite(9, HIGH);
    delayMicroseconds(100);
    digitalWrite(9, LOW);
    //delay(1);
  }
  previous = reading;
}
