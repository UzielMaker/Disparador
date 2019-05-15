int boton = 2;
int ledPin =  13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(boton, INPUT);

void loop() {
  if (digitalRead(boton) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }

  else {
    digitalWrite(ledPin, LOW);
  }
}
