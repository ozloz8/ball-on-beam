#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  while (!Serial) {
    ;
  }
  count = toggle = 1;
  digitalWrite(PIN_LED, 0);
  delay(1000);
  digitalWrite(PIN_LED, 1);
  
}

void loop() {
  while(count < 12) {
      toggle = toggle_state(toggle);
      digitalWrite(PIN_LED, toggle);
      delay(100);
      count += 1;
      toggle += 1;
  }
}

int toggle_state(int toggle) {
  return toggle % 2 ;
  }
