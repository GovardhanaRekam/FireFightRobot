/*------ Arduino Fire Fighting Robot Code by hobby project---- */
 

/* 
 
boolean fire = false;
 
#define Left 9      // left sensor
#define Right 10    // right sensor
  //front sensor

#define LM1 2       // left motor
#define LM2 3       // left motor
#define RM1 4       // right motor
#define RM2 5       // right motor
#define led 6
 
void setup()
{
  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(pump, OUTPUT);
 

}
 
void put_off_fire()
{
    delay (500);
 
    digitalWrite(LM1,LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    
   digitalWrite(pump, HIGH);
   delay(500);
    
  digitalWrite(pump,LOW);
  
  
  fire=false;
}
 
void loop()
{
    
 
    if (digitalRead(Left) ==1 && digitalRead(Right)==1) 
    {
    
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1,LOW);
    digitalWrite(RM2, LOW);
    }
    
   
    
    else if (digitalRead(Left) ==0)
    {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    }
    
    else if (digitalRead(Right) ==0) 
    {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    }
    
delay(300);//change this value to increase the distance
 
     while (fire == true)
     {
      put_off_fire();
     }
}
*/
#define Left_sensor 9      // left fire sensor
#define Right_sensor 10    // right fire sensor
#define motor1_pin1 3     // left motor input 1
#define motor1_pin2 2     // left motor input 2
#define pump_pin1 4        // water pump input 1
#define pump_pin2 5        // water pump input 2

void setup() {
  pinMode(Left_sensor, INPUT);
  pinMode(Right_sensor, INPUT);
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);
  pinMode(pump_pin1, OUTPUT);
  pinMode(pump_pin2, OUTPUT);
}

void put_off_fire() {
  // Stop the motors
  digitalWrite(motor1_pin1, LOW);
  digitalWrite(motor1_pin2, LOW);
  
  // Activate the water pump
  digitalWrite(pump_pin1, HIGH);//speedly pump
  digitalWrite(pump_pin2, LOW);
  delay(500); // Pump runs for 500 ms
  digitalWrite(pump_pin1, LOW); // Turn off water pump
}

void move_forward_slowly() {
  // Move forward at reduced speed
  analogWrite(motor1_pin1, 48);  // PWM signal for slower speed
  digitalWrite(motor1_pin2, LOW);
  digitalWrite(pump_pin1, LOW);  // Ensure pump is off
  digitalWrite(pump_pin2, LOW);
}

void loop() {
  // Check fire sensors
  if (digitalRead(Left_sensor) == HIGH || digitalRead(Right_sensor) == HIGH) {
    put_off_fire();
  } else {
    move_forward_slowly();
  }

  delay(300); // Delay for stability, adjust as needed
}

