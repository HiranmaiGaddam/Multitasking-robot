#include<SoftwareSerial.h>
#include<Servo.h>
Servo base;
int pos1,pos2,pos3,pos4;
char motion;
void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(5,OUTPUT);
  base.attach(4);
  Serial.begin(9600);
  motion=0;
}
void loop() {
  delay(1000);
  base.write(90);
  if (Serial.available() > 0 )
  {
     motion = Serial.read();
       Serial.println(motion);
       if (motion =='f')
       {
        // forward motion
        
        digitalWrite(6, HIGH);
        digitalWrite(7,LOW);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
          if (motion =='l')
       {
        // LEFT motion
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        }
          if (motion =='r')
       {
        // RIGHT motion
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(10,HIGH );
        digitalWrite(11, LOW );
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
          if (motion =='b')
       {
        // BACK motion
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
          if (motion =='s')
       {
        // TO STOP
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
           if (motion =='c')
       {
        // clockwise arm
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
           if (motion =='p')
       {
        // anticlockwise arm
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
          if (motion =='d')
       {
        // TO STOP
        digitalWrite(12, LOW);
        digitalWrite(5, HIGH);
        
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
           if (motion =='g')
       {
        // TO STOP
        digitalWrite(12, LOW);
        digitalWrite(5, LOW);
        
        for(pos2=90;pos2<=180;pos2+=1)
         {
             base.write(pos2);
             delay(15);
          }
           delay(1000);
         for(pos2=180;pos2>=90;pos2-=1)
          {
                base.write(pos2);
                delay(15);
          }  
        }
       
     
      
  }
       
  }
