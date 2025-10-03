// AULA 07 - SENSORES INFRAVERMELHOS
// EDUBOT
// DANIELY, LARA, NÍCOLAS E GUILHERME

#include <Sparki.h>

int botao;

void setup() {

}

void loop() {
  botao = sparki.readIR();
  if (botao == 70){
    sparki.moveStop();
    sparki.moveForward();
 }
  else if (botao == 67){
    sparki.moveStop();
    sparki.moveRight();
  }
  else if (botao == 68){
    sparki.moveStop();
    sparki.moveLeft();
  }
  else if (botao == 21){
    sparki.moveStop();
    sparki.moveBackward();
  }
  else if (botao == 64){
    sparki.moveStop();
  }
  delay(1000);
}
