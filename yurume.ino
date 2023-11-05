#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6, servo7, servo8;

void setup() {
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);
}

void loop() {
  walkForward(); // İleri yürüme işlemi
  delay(1000);
  walkBackward(); // Geri yürüme işlemi
  delay(1000);
}

void moveServo(Servo servo, int angle) {
  servo.write(angle);
}

void walkForward() {
  int stepDelay = 500;

  // Adım 1
  moveServo(servo1, 90);
  moveServo(servo2, 90);
  moveServo(servo3, 90);
  moveServo(servo4, 90);
  delay(stepDelay);

  // Adım 2
  moveServo(servo5, 90);
  moveServo(servo6, 90);
  moveServo(servo7, 90);
  moveServo(servo8, 90);
  delay(stepDelay);

  // Adım 3
  moveServo(servo1, 45);
  moveServo(servo2, 45);
  moveServo(servo3, 135);
  moveServo(servo4, 135);
  delay(stepDelay);

  // Adım 4
  moveServo(servo5, 135);
  moveServo(servo6, 135);
  moveServo(servo7, 45);
  moveServo(servo8, 45);
  delay(stepDelay);
}

void walkBackward() {
  int stepDelay = 500;

  // Geri Adım 1
  moveServo(servo1, 45);
  moveServo(servo2, 45);
  moveServo(servo3, 135);
  moveServo(servo4, 135);
  delay(stepDelay);

  // Geri Adım 2
  moveServo(servo5, 135);
  moveServo(servo6, 135);
  moveServo(servo7, 45);
  moveServo(servo8, 45);
  delay(stepDelay);

  // Geri Adım 3
  moveServo(servo1, 90);
  moveServo(servo2, 90);
  moveServo(servo3, 90);
  moveServo(servo4, 90);
  delay(stepDelay);

  // Geri Adım 4
  moveServo(servo5, 90);
  moveServo(servo6, 90);
  moveServo(servo7, 90);
  moveServo(servo8, 90);
  delay(stepDelay);
}

