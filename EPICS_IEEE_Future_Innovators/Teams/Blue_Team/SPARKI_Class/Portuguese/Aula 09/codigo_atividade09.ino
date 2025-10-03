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
  delay(180);
  sparki.moveStop();
  delay(200);
  while (sparki.ping() > 5){
    sparki.moveForward();
    delay(100);
  }
  sparki.gripperClose(3);
  delay(3000);
  while (sparki.ping() > 20){
    sparki.moveLeft();
    delay(120);
  }
  delay(180);
  sparki.moveStop();
  while (sparki.ping() > 5){
    sparki.moveForward();
    delay(100);
  }
  sparki.gripperOpen(3);
  delay(3000);
  
}
