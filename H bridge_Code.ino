//motor1
#define En1 10
#define input1 9 
#define input2 8

//motor2
#define En2 11
#define input3 12 
#define input4 13


void setup() 
{

  pinMode(En1, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  
  pinMode(En2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
}

void loop() 
{
  
  digitalWrite(input1,HIGH); 
  digitalWrite(input2, LOW);
  analogWrite(En1, 120);
  
  digitalWrite(input3, HIGH); 
  digitalWrite(input4, LOW);
  analogWrite(En2, 120);
  
}