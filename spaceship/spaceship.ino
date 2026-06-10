int switchState1;
int switchState2;

void setup() {
  // put your setup code here, to run once:
  // pinMode(3, OUTPUT);
  // pinMode(4, OUTPUT);
  // pinMode(5, OUTPUT);
  // pinMode(2, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState1 = digitalRead(2);
  switchState2 = digitalRead(3);

  if (switchState1 == LOW && switchState2 == LOW) {
    // The button is not pressed
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(5, LOW);
  }
  else if (switchState1 == HIGH && switchState2 == LOW) {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    digitalWrite(4,  HIGH);
    digitalWrite(9, LOW);
    
    delay(250);

    digitalWrite(4, LOW);
    digitalWrite(9, HIGH);

    delay(250);

  }
  else if (switchState2 == HIGH && switchState1 == LOW) {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    digitalWrite(8, HIGH);
    digitalWrite(5, LOW);

    delay(250);

    digitalWrite(8, LOW);
    digitalWrite(5, HIGH);

    delay(250);
  }
  else if (switchState1 == HIGH && switchState2 == HIGH) {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    digitalWrite(4, HIGH);
    digitalWrite(5,  HIGH);

    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(100);

    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);

    delay(100);
  }
}  // Go back to the beginning of the loop