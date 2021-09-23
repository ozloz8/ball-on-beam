#define PIN_LED 13
unsigned int count, toggle;

void setup() {
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(115200); // Initialize serial port
    while (!Serial) {
     ; // wait for serial port to connect.
    }
    count = toggle = 1;
    digitalWrite(PIN_LED, 0); // turn off LED. 
}

void loop() {
  while (count > 0) {
     toggle = toggle_state(toggle); // toggle LED value.
     Serial.println(count);
     digitalWrite(PIN_LED, toggle); // update LED status.
     delay(1000); // wait for 1,000 milliseconds
     count += 1;
     toggle += 1;
  }
}

int toggle_state(int toggle) {
  return toggle%2 ;
  }
