int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  int ms_delay = 400;
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ms_delay);
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(ms_delay);
}
