int led=D4; // led is connected at D4 of ESP8266
void setup() {
pinMode(led,OUTPUT);
}
void loop() {
  digitalWrite(led,LOW); //for turning ON the led "LOW" because it is active LOW
  delay(1000); 
  digitalWrite(led,HIGH); // for turning OFF the led "HIGH" because it is active LOW 
  delay(1000);
}
