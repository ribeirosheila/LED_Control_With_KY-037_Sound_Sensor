// Defining the pin numbers for the LEDs (digital pins 2 to 11) to control the LEDs
#define pinLed1 2
#define pinLed2 3
#define pinLed3 4
#define pinLed4 5
#define pinLed5 6
#define pinLed6 7
#define pinLed7 8
#define pinLed8 9
#define pinLed9 10
#define pinLed10 11

// Setup function is called once when the Arduino initializes
void setup() {
  // Set each LED pin as an output so that we can control the LEDs
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);
}

// The loop function runs continuously while the Arduino is powered on
void loop() {
  // Read an analog value from pin A0 (potentially from a sensor or analog variable)
  int valorLido = analogRead(A0);

  // Compare the read value to various thresholds and turn on LEDs based on conditions
  digitalWrite(pinLed1, valorLido > 520); // LED 1 turns on if the read value is greater than 520
  digitalWrite(pinLed2, valorLido > 560); // LED 2 turns on if the read value is greater than 560
  digitalWrite(pinLed3, valorLido > 540); // LED 3 turns on if the read value is greater than 540
  digitalWrite(pinLed4, valorLido > 600); // LED 4 turns on if the read value is greater than 600
  digitalWrite(pinLed5, valorLido > 580); // LED 5 turns on if the read value is greater than 580
  digitalWrite(pinLed6, valorLido > 640); // LED 6 turns on if the read value is greater than 640
  digitalWrite(pinLed7, valorLido > 620); // LED 7 turns on if the read value is greater than 620
  digitalWrite(pinLed8, valorLido > 700); // LED 8 turns on if the read value is greater than 700
  digitalWrite(pinLed9, valorLido > 680); // LED 9 turns on if the read value is greater than 680
  digitalWrite(pinLed10, valorLido > 720); // LED 10 turns on if the read value is greater than 720
}
