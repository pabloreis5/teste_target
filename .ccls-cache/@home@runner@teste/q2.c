#include <stdio.h>

void pertenceFibonacci(int n) {
  int a = 0, b = 1, c = a + b;

  // Casos base
  if (n == 0 || n == 1) {
    printf("O número %d pertence à sequência de Fibonacci.\n", n);
    return;
  }

  // Verifica se n pertence à sequência de Fibonacci
  while (c <= n) {
    if (c == n) {
      printf("O número %d pertence à sequência de Fibonacci.\n", n);
      return;
    }
    a = b;
    b = c;
    c = a + b;
  }

  printf("O número %d não pertence à sequência de Fibonacci.\n", n);
}

int main() {
  int numero = 13; // Defina o número aqui
  pertenceFibonacci(numero);

  return 0;
}