#include <Servo.h>

Servo servo1;
int pos;

void setup1() {
  servo1.attach(D1, 540, 2400); // min/max pulse width in ms (1e-6)
}

void loop1() {
  for(pos = 0; pos <= 180; pos += 10) {
    servo1.write(pos);
    delay(1000);
  }
}
