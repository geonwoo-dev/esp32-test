#define LED_PIN 2    // LED connected pin
#define BUTTON_PIN 13 // Button connected pin

void setup() {
  pinMode(LED_PIN, OUTPUT);     // Set LED pin as output
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Set button pin as input with internal pull-up resistor
  Serial.begin(115200);         // Start serial monitor
  Serial.println("ESP32 LED & Button Test Started");
}

void loop() {
  // Read button state (LOW when pressed)
  int buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH); // Turn LED on when button is pressed
    Serial.println("Button pressed - LED ON");
  } else {
    // Blink LED when button is not pressed
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
    delay(1000); // Wait for 1 second
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
    delay(1000);
  }
}