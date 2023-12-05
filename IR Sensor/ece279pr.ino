const int Proxsensor=4;
const int led=13;

void setup() 
{
pinMode(led,OUTPUT);
pinMode(Proxsensor,INPUT);
Serial.begin(9600);
}

void loop()
 {
if (digitalRead(Proxsensor)==HIGH)
    {digitalWrite(led,HIGH);
    Serial.println("stop something ahead");
    }
else
{ 
  digitalWrite(led,LOW);
  Serial.println("path is clear");
  }
  delay(1000);
}



