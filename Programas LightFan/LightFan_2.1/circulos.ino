

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

void setup() {
 
 pinMode( sensor,INPUT);
 pinMode( led1,OUTPUT);
 pinMode( led2,OUTPUT);
 pinMode( led3,OUTPUT);
 pinMode( led4,OUTPUT);
 pinMode( led5,OUTPUT);
 pinMode( led6,OUTPUT);
 pinMode( led7,OUTPUT);
 pinMode( led8,OUTPUT);
 pinMode( led9,OUTPUT);
 pinMode( led10,OUTPUT);

 

}

void loop() {

  estadoSensor = digitalRead(sensor);
  tempo1=300;
  tempo2=575;
  if(estadoSensor == HIGH){
    voltaCompleta = 1;
  }
  else{
  
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
  if(voltaCompleta == 1){


   digitalWrite(led1,1);
   delay(200);
   digitalWrite(led1,0);
   delay(50);
   digitalWrite(led2,1);
   delay(190);
   digitalWrite(led2,0);
   delay(50);
   digitalWrite(led3,1);
   delay(180);
   digitalWrite(led3,0);
   delay(50);
   digitalWrite(led4,1);
   delay(170);
   digitalWrite(led4,0);
   delay(50);
   digitalWrite(led5,1);
   delay(150);
   digitalWrite(led5,0);
   delay(50);
   digitalWrite(led6,1);
   delay(140);
   digitalWrite(led6,0);
   delay(50);
   digitalWrite(led7,1);
   delay(130);
   digitalWrite(led7,0);
   delay(50);
   digitalWrite(led8,1);
   delay(120);
   digitalWrite(led8,0);
   delay(50);
   digitalWrite(led9,1);
   delay(110);
   digitalWrite(led9,0);
   delay(50);
   digitalWrite(led10,1);
   delay(100);
   digitalWrite(led10,0);
   
   delay(50);
   digitalWrite(led9,1);
   delay(110);
   digitalWrite(led9,0);
   delay(50);
   digitalWrite(led8,1);
   delay(120);
   digitalWrite(led8,0);
   delay(50);
   digitalWrite(led7,1);
   delay(130);
   digitalWrite(led7,0);
   delay(50);
   digitalWrite(led6,1);
   delay(140);
   digitalWrite(led6,0);
   delay(50);
   digitalWrite(led5,1);
   delay(150);
   digitalWrite(led5,0);
   delay(50);
   digitalWrite(led4,1);
   delay(160);
   digitalWrite(led4,0);
   delay(50);
   digitalWrite(led3,1);
   delay(170);
   digitalWrite(led3,0);
   delay(50);
   digitalWrite(led2,1);
   delay(180);
   digitalWrite(led2,0);
   delay(50);
   digitalWrite(led1,1);
   delay(190);
   digitalWrite(led1,0);

    
   voltaCompleta = 0;
  }


 
}

