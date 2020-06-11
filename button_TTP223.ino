/*
 * TTP223 capacitance touch button 
 * works with 3.3V
 * no bouncing issues
 * very sensitive
 * board has a internal led that lights up when the button is activated
 */


#define touchPin 5   // D1

int count = 0;


void setup() {
  // start serial port
  Serial.begin(115200);
  Serial.print(F("\n\n button test\n\n"));

  pinMode(touchPin, INPUT);
}


void loop() {
  int val = digitalRead(touchPin);
  if (val == 1) {
    Serial.print(F("touched "));
    Serial.println(++count);
  }
  delay(100);
}
