void setup()
{
  pinMode(12, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop()
{
long dur;
long dis;
long tocm;
  
digitalWrite(2,LOW);
delayMicroseconds(2);
digitalWrite(2,HIGH);
delayMicroseconds(10);
digitalWrite(2,LOW);
dur=pulseIn(4,HIGH);
tocm=microsecondsToCentimeters(dur);
  if(tocm<=150)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
  
}
long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}