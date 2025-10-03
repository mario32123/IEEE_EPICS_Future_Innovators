#include <Sparki.h>
void setup() {
  // put your setup code here, to run once:
  sparki.servo(SERVO_CENTER);
}

void loop() {  
  // put your main code here, to run repeatedly:
  while (sparki.ping() > 20){
    sparki.moveLeft();
    delay(120);
  }
  sparki.moveLeft(20);
  delay(180);
  sparki.moveStop();
  delay(200);
  while (sparki.ping() > 3){
    sparki.moveForward();
    delay(150);
  }
  sparki.gripperClose(2);
  delay(3000);
  while (sparki.ping() > 100){
    sparki.moveLeft();
    delay(150);
  }
  delay(180);
  sparki.moveStop();
  while (sparki.ping() > 5){
    sparki.moveForward();
    delay(100);
  }
  sparki.gripperOpen(2);
  sparki.moveStop();
  delay(3000);
  
}
