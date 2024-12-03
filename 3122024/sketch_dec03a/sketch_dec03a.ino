void setup()
{
  for(int sayac=2;sayac<=6;sayac++){
    pinMode(sayac,OUTPUT);
  }

}

void loop()
{
  for(int sayac=2;sayac<=6;sayac++){
  
    digitalWrite(sayac, HIGH);
    delay(500); 
    digitalWrite(sayac, LOW);
    delay(500);
  }
  

  for(int sayac=6; sayac>=2;sayac--){
    digitalWrite(sayac, HIGH);
    delay(500); 
    digitalWrite(sayac, LOW);
    delay(500);
  }
  
  
}                    
