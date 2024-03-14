/*  Soil Mosture Sensor With Arduino And LCD
 * 
 *  
 * Components
 * ----------
 *  - Arduino Uno
 *  - MQ 135
 *  - Connecting cables
 *  - Arduino IDE
 *  
 *  
 */

int sensorValue; 
int digitalValue; 
void setup() 
{ 
Serial.begin(9600); 
pinMode(13, OUTPUT); 
} 
void loop() 
{ 
sensorValue = analogRead(A5); 
if (sensorValue < 150 && sensorValue >64) 
{ 
Serial.print("SENSOR VALUE = "); 
Serial.print(sensorValue, DEC); 
Serial.println(" (NORMAL)"); 
} 
else 
{ 
Serial.print("SENSOR VALUE = "); 
Serial.print(sensorValue, DEC); 
Serial.println(" (IMPURE AIR)"); 
} 
delay(1000); 
}

