// C++ code
//

#define M1_0 3
#define M1_1 5

int setPWM = 25;

void setup()
{
  pinMode(M1_0, OUTPUT);
  pinMode(M1_1, OUTPUT);
}

void loop()
{
  //For Every 3 second the motor rotates
  analogWrite(M1_0, setPWM);
  analogWrite(M1_1, 0);
  //set counter-clockwise
  delay (3000);
  
  analogWrite(M1_0, 0);
  analogWrite(M1_1, setPWM);
  //set clockwise
  delay(3000);
}
