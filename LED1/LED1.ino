
int d=500;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  //pinMode(4,OUTPUT);
  //pinMode(5,OUTPUT);
  //pinMode(6,OUTPUT);
}

void loop()
{
 for(int a=2;a<4;a++)
 {
   digitalWrite(a,HIGH);  
   delay(d);
   digitalWrite(a,LOW);
 } 
}
