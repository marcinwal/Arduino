
int d=5;

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
 for(int a = 0;a < 256; a++)
 {
   analogWrite(3,a);  
   delay(d);
 } 
 digitalWrite(2,HIGH);
 delay(d*40);
 digitalWrite(2,LOW);
 for(int a =255; a >0 ;a--)
 {
   analogWrite(3,a);
   delay(d);
 }
 
 delay(d*40);
}
