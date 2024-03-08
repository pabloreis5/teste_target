#include <stdio.h>

int questao1(int INDICE) {
  int SOMA = 0, K = 0;

  while (K < INDICE) {
    K = K + 1;
    SOMA = SOMA + K;
  }

  return SOMA;
}

int main() {
  int resultado = questao1(13);
  printf("%d", resultado);

  return 0;
}