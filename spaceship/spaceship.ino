void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int switchState = digitalRead(2);

  if (switchState == LOW) {
    // The button is not pressed
    digitalWrite(3, HIGH);  // Green LED
    digitalWrite(4, LOW);  // Red LED
    digitalWrite(5, LOW);  // Red LED
  }
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);   // Wait for a quarter second
    // Toggle the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);  // Wait for a quarter second
  }

}  // Go back to the beginning of the loop