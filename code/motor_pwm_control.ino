##start here
const int potPin = A0;
const int motorPin = 9;   // PWM pin

int potValue = 0;
int pwmValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);

  // Map ADC value (0-1023) to PWM (0-255)
  pwmValue = map(potValue, 0, 1023, 0, 255);

  analogWrite(motorPin, pwmValue);

  Serial.print("PWM Duty Cycle: ");
  Serial.print((pwmValue / 255.0) * 100);
  Serial.println(" %");

  delay(500);
}
