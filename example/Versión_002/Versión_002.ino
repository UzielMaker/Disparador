int boton = 2;
int boton2 = 3;
int ledPin =  13;

int est1 = 1;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(boton, INPUT);
  pinMode(boton2, INPUT);
}

void loop() {
  if (digitalRead(boton) == HIGH && digitalRead(boton2) == LOW) {
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    delay(50);
  }

  if (digitalRead(boton) == LOW && est1 == 1) {
    est1 = 0;
    delay(50);
  }

  if (digitalRead(boton) == HIGH && digitalRead(boton2) == HIGH && est1 == 0) {
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    est1 = 1;
  }
  
  else {
    digitalWrite(ledPin, LOW);
  }
}
