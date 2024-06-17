
int moisture_signal=A0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int moisture= analogRead(moisture_signal);
  
  Serial.print("\nMoisture Value : ");
  Serial.println(moisture);
  Serial.print("%");
  delay(200);
  
}
