String girilen="";
int sari=3;
int kirmizi=4;
void setup() {
  Serial.begin(9600);
  pinMode(sari,OUTPUT);
  pinMode(kirmizi,OUTPUT);

}

void loop() {
  if(Serial.available()){
    girilen=Serial.readString();
    Serial.print("Sari için s kirmizi için k ye bas");
    Serial.println(girilen);
    if(girilen=="s"){
      Serial.println("SARI YANDI");
      digitalWrite(sari,1);
      delay(3000);
      digitalWrite(sari,0);
    }
    if(girilen=="k"){
      Serial.println("KIRMIZI YANDI");
      digitalWrite(kirmizi,1);
      delay(3000);
      digitalWrite(kirmizi,0);
      }
    }
    

}
