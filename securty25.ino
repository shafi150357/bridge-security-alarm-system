const int doorButton = 7;
const int resetButton = 8;
const int redLED = 2;
const int greenLED = 3;
const int buzzer = 6;
const int ldrPin = A0;
bool alarmActive = false;
bool nightMode = false;

void setup() {
  pinMode(doorButton, INPUT);
  pinMode(resetButton, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

  Serial.println("SYSTEM STARTED - MONITORING ACTIVE");
}
void blinkGreenLED() {
  digitalWrite(greenLED, HIGH);
  delay(500);
  digitalWrite(greenLED, LOW);
  delay(500);
}
void triggerAlarm() {
  Serial.println("INTRUDER DETECTED");
  for (int i = 0; i < 10; i++) {
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    delay(200);
  }
  digitalWrite(redLED, HIGH);
  digitalWrite(buzzer, HIGH);
}

void loop() {

  int ldrValue = analogRead(ldrPin);
  if (ldrValue > 600) {
    nightMode = true;
    Serial.println("NIGHT MODE ON");
  } else {
    nightMode = false;
  }
  if (!alarmActive) {

    if (nightMode) {
      blinkGreenLED();
    } else {
      digitalWrite(greenLED, HIGH);
    }
    if (digitalRead(doorButton) == HIGH) {
      alarmActive = true;
      digitalWrite(greenLED, LOW);
      triggerAlarm();
    }
  }
  if (alarmActive && digitalRead(resetButton) == HIGH) {
    Serial.println("SYSTEM RESET");

    alarmActive = false;

    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);

    delay(500);
    Serial.println("MONITORING ACTIVE");
  }

