#include <Sparki.h>

void setup(){
  
}

void loop(){

int esquerdo = sparki.lightLeft();
int centro = sparki.lightCenter();
int direita = sparki.lightRight();

if ((centro > esquerdo) && (centro > direita)){
  sparki.moveBackward();
}

if ((esquerdo > centro) && (esquerdo > direita)) {
  sparki.moveRight();
}

if ((direita > centro) && (direita > esquerdo)) {
  sparki.moveLeft();
}
  delay(1000);0
}
