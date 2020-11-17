/*
   Funktion:        Verschiedene Zahlenfolgen sollen über den seriellen Monitor ausgegeben werden
   Programierer:    Eric Junker
   letzte Änderung: 17.11.2020
   Version:         1.0
   Hardware:        -

*/
void setup()
{
  Serial.begin(9600);


}

void loop()
{
  for (int i = -5; i <= 19; i =  i + 3)
  {
    Serial.println(i);
  }

}
