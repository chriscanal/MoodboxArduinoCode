// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int ledWhite = 2; 
const int ledBlue = 3; 
const int ledGreen = 5; 
const int ledRed = 5;
int delayTime = 6;
int color = 1;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  delayTime = 4;
  color = (color%4)+1;
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  
  
  switch(color)
  {
    case 1:
   
      for (int i = 0; i < 255 ; i++)
      {
        analogWrite(ledWhite, i);
        delay(delayTime);
      }
      analogWrite(ledWhite, 0);
    break;
    
    case 2:
      for (int i = 0; i < 255 ; i++)
      {
        analogWrite(ledBlue, i);
        delay(delayTime);
      }
      analogWrite(ledBlue, 0);
    break;

    case 3:
      for (int i = 0; i < 255 ; i++)
      {
        analogWrite(ledGreen, i);
        delay(delayTime);
      }
      analogWrite(ledGreen, 0);
    break;

    case 4:
      for (int i = 0; i < 255 ; i++)
      {
        analogWrite(ledRed, i);
        delay(delayTime);
      }
      analogWrite(ledRed, 0);
    break;
  }
}
