int pinA=A0;

void setup() {
  Serial.begin(115200);
  Serial.println("Inizializzazione del microfono");
  pinMode(pinD, INPUT);
  

}

void loop() {
  
  if(digitalRead(pinD)==HIGH){
    Serial.println("Martellata");
  }
  
  delay(25);
}
