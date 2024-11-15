/*------ Arduino Fire Fighting Robot Code by hobby project---- */
 

 
 
boolean fire = false;
 
#define Left 8     // left sensor
#define Right 10    // right sensor
  //front sensor

#define LM1 3      // left motor
#define LM2 5       // left motor
#define RM1 6       // right motor
#define RM2 9       // right motor
//#define pump 6
 
void setup()
{
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  //pinMode(pump, OUTPUT);
 

}
 
void put_off_fire()
{
    delay (500);
 
    digitalWrite(LM1,LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    
   
   delay(500);
    

  
  
  fire=false;
}
 
void loop()
{
    
 
    if (digitalRead(Left) ==1 && digitalRead(Right)==1) 
    {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1,LOW);
   analogWrite(RM2, 100);
   
    }
    else{
     
    digitalWrite(LM1, LOW);
    analogWrite(LM2, 50);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2, LOW);
    }
   
    
    
delay(300);//change this value to increase the distance
}
    