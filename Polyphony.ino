void setup() {
  // start the serial buffer
  Serial.begin(9600);
  
}

void loop() {

  // set up pot
  int pot0, pot1, pot2, pot3, pot4, pot5;

  pot0 = analogRead(A0);
  pot1 = analogRead(A1);
  pot2 = analogRead(A2);
  pot3 = analogRead(A3);
  pot4 = analogRead(A4);
  pot5 = analogRead(A5);
  
  // write the pot values to the buffer
  Serial.print(pot0);
  Serial.print(" ");
  Serial.print(pot1);
  Serial.print(" ");
  Serial.print(pot2);
  Serial.print(" ");
  Serial.print(pot3);
  Serial.print(" ");
  Serial.print(pot4);
  Serial.print(" ");
  
  Serial.println(pot5);
}
