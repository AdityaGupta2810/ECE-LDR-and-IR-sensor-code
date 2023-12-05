const int ledPin = 13;//pin at which led is connected
const int ldrPin = A0;//pin at which ldr connected
int threshold = 600;
void setup() 
{Serial.begin(9600);//make led pin as output
pinMode(ldrPin, INPUT);//make ldr pin as input
 // put your setup code here, to run once
}

void loop()
{int ldrStatus = analogRead(ldrPin);//saving the analog values received from ldr
if(ldrStatus <= threshold)//set the thereshold value below at which the led will turn on 
//you can check in the serial monior to get approprite value for your ldr
  // put your main code here, to run repeatedly:
{digitalWrite(ledPin, HIGH);//turning led on 

Serial.print("Its DARK, Turn on the LED :");
Serial.println(ldrStatus);
}
else
{digitalWrite(ledPin, LOW);//turning off the led
Serial.print("Its BRIGHT, Turn off the LED : ");
}
}

