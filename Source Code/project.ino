int ledPinG = 2;
int ledPinY1 = 7;
int ledPinY2 = 8;
int ledPinR = 3;
int Sin = A0;
int Svalue;
int trigger = 13;
int echo = 12;
int pulseWidth;
int cm;
int ledB = 9;
int ledR = 10;

void setup() {
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinY1, OUTPUT);
  pinMode(ledPinY2, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(Sin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledR, OUTPUT);
  Serial.begin(9600);
}

void checkSoundSensor() {
  Svalue = analogRead(Sin);
  Serial.println("Decibel : ");
  Serial.println(Svalue);
}

void checkDistanceSensor() {
  digitalWrite(trigger, HIGH);
  digitalWrite(trigger, LOW);
  pulseWidth = pulseIn(echo, HIGH);
  cm = (pulseWidth / 2.0) / 29.1;
}

void controlLEDs() {
  digitalWrite(ledPinG, HIGH);
  digitalWrite(ledPinY1, HIGH);
  digitalWrite(ledPinY2, HIGH);
  digitalWrite(ledPinR, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledR, HIGH);

  if (cm < 5 || cm > 12) {
    digitalWrite(ledB, LOW);
  } else {
    digitalWrite(ledR, LOW);
    if (Svalue > 570) {
      digitalWrite(ledPinG, LOW);
      delay(100);
    } else {
      digitalWrite(ledPinG, HIGH);
    }
    if (Svalue > 650) {
      digitalWrite(ledPinY1, LOW);
      digitalWrite(ledPinY2, LOW);
      delay(100);
    } else {
      digitalWrite(ledPinY1, HIGH);
      digitalWrite(ledPinY2, HIGH);
    }
    if (Svalue > 800) {
      digitalWrite(ledPinR, LOW);
      delay(100);
    } else {
      digitalWrite(ledPinR, HIGH);
    }
  }
}

void loop() {
  checkSoundSensor();
  checkDistanceSensor();
  controlLEDs();
}


