/*To control the brightness of the led using PWM(analogwrite)*/

const int analog_LDR = A1;
const int LED = 3;
unsigned int inputVal = 0;

void setup() {
  pinMode (LED, OUTPUT);
}

void loop() {
  //read the values fromn LDR sensor
  inputVal = analogRead(analog_LDR);
  //scale it down from (0 to 1023) to (0 to 255)
  inputVal = inputVal/4;
  //set the PWM from 255 to 0
  inputVal = 255 - inputVal;

  analogWrite (LED, inputVal);

  delay(100);
}
