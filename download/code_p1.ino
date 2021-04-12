#define IRsensor 2
#define DCwater_pump 8
void setup()
{
  pinMode(IRsensor, INPUT);
  pinMode(DCwater_pump, OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
int readPin = 0;
void loop()
{
 readPin = digitalRead(IRsensor);
 if (readPin == LOW)
{
 digitalWrite(DCwater_pump,HIGH);
 digitalWrite(9,HIGH);
 Serial.println("on");
 delay(1000);
}
else
{
 digitalWrite(DCwater_pump,LOW);
 digitalWrite(9,LOW);
 Serial.println("off");
 delay(1000);

}
}