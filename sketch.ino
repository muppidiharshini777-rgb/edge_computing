#define PIR_PIN     14
#define GAS_PIN     34
#define GREEN_LED   25
#define RED_LED     26
#define BUZZER      27
volatile bool motionDetected = false;
const int gasThreshold = 1800;   // Adjust in Wokwi if needed
// Interrupt Service Routine
void IRAM_ATTR motionISR() {
  motionDetected = true;
}
void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(PIR_PIN), motionISR, RISING);
}
void loop() {
  int gasValue = analogRead(GAS_PIN);
  Serial.print("Gas Value: ");
  Serial.println(gasValue);
  // Safety Override
  if (gasValue > gasThreshold) {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BUZZER, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(250);
    digitalWrite(RED_LED, LOW);
    delay(250);
    return;
  }
  digitalWrite(BUZZER, LOW);
  digitalWrite(RED_LED, LOW);
  if (motionDetected) {
    Serial.println("Motion Detected");
    digitalWrite(GREEN_LED, HIGH);
    delay(5000);
    digitalWrite(GREEN_LED, LOW);
    motionDetected = false;
  }
}