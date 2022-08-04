// To blink the LED 
void setup() {
  // configure pin as output pin
  pinMode (2, OUTPUT);

}

void loop() {
  //turn ON the LED
  digitalWrite(2, HIGH);
  delay(1000);
  //turn OFF the LED
  digitalWrite(2, LOW);
  delay(1000);

}
