// ===============================
// Smart Street Light using Arduino Uno
// 3 IR Sensors + 3 LEDs
// ===============================

// LED Pins
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;

// IR Sensor Pins
const int IR1 = 8;
const int IR2 = 9;
const int IR3 = 10;

void setup()
{
  // Configure IR sensor pins as INPUT
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);

  // Configure LED pins as OUTPUT
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  // Initially turn OFF all LEDs
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}

void loop()
{
  // Read sensor values
  int sensor1 = digitalRead(IR1);
  int sensor2 = digitalRead(IR2);
  int sensor3 = digitalRead(IR3);

  // Most IR sensors give LOW when an object is detected

  // Control LED 1
  if (sensor1 == LOW)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }

  // Control LED 2
  if (sensor2 == LOW)
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }

  // Control LED 3
  if (sensor3 == LOW)
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
}