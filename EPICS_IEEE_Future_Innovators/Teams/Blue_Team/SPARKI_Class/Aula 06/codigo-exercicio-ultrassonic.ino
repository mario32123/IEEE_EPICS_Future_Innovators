#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup() {
  sparki.begin(); // Inicia o Sparki
}

void loop() {
  float distancia = sparki.ping(); // Mede a distância com o sensor ultrassônico
  
  if (distancia < 15) { // Se a distância for menor que 15 cm
    sparki.RGB(255, 0, 0); // Acende o LED vermelho
  } else {
    sparki.RGB(0, 0, 0); // Apaga o LED
  }

  delay(100); // Pausa por 100 milissegundos antes de medir novamente
}
