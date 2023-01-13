#include <Servo.h>

Servo horizontalMotor; // horizontal rotation motor
Servo verticalMotor;   // vertical rotation motor

int horizontalPosition = 0; // current horizontal position
int verticalPosition = 0;   // current vertical position

void setup() {
  horizontalMotor.attach(9); // attach horizontal motor to pin 9
  verticalMotor.attach(10);  // attach vertical motor to pin 10

  // set initial positions
  horizontalMotor.write(horizontalPosition);
  verticalMotor.write(verticalPosition);
}

void loop() {
  // increment horizontal position by 1
  horizontalPosition++;
  if (horizontalPosition > 180) {
    horizontalPosition = 0;
  }

  // increment vertical position by 1
  verticalPosition++;
  if (verticalPosition > 180) {
    verticalPosition = 0;
  }

  // write new positions to motors
  horizontalMotor.write(horizontalPosition);
  verticalMotor.write(verticalPosition);

  // delay for 15ms
  delay(15);
}
