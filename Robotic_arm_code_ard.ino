#include <Servo.h> 
Servo servoMotor;
Servo servoMotor1;
Servo servoMotor2;
Servo servoMotor3;
Servo servoMotor4;
int valore; 
int valore2;
int valore3;
int valore4;
int valore5;


void setup() {
servoMotor.attach(12);
servoMotor1.attach(11);
servoMotor2.attach(10);
servoMotor3.attach(9);
servoMotor4.attach(8);
Serial.begin(9600);
  

}
void loop()
{
  
  
valore = analogRead(A0); 
valore = map(valore, 0, 1023, 0, 90); 

servoMotor.write(valore); 

delay(15);
  Serial.print("Analog1 :");
  Serial.println(valore);
  ////
  valore2 = analogRead(A1); 
valore2 = map(valore2, 0, 1023, 0, 90); 

servoMotor1.write(valore2); 

delay(15);
   Serial.print("Analog2 :");
  Serial.println(valore2);
  ////
  valore3 = analogRead(A2); 
valore3 = map(valore3, 0, 1023, 0, 90); 

servoMotor2.write(valore3); 

delay(15);
  Serial.print("Analog3 :");
  Serial.println(valore3);
  ////
   valore4 = analogRead(A3); 
valore4 = map(valore4, 0, 1023, 0, 90); 

servoMotor3.write(valore4); 

delay(15);
  Serial.print("Analog4 :");
  Serial.println(valore4);
  ////
   valore5 = analogRead(A4); 
valore5 = map(valore5, 0, 1023, 0, 90); 

servoMotor4.write(valore5); 

delay(15);
  Serial.print("Analoge5 :");
  Serial.println(valore5);
  
 
 
}
