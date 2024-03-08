#include <stdio.h>
#include <string.h>

int questao1(int INDICE) {
  int SOMA = 0, K = 0;

  while (K < INDICE) {
    K = K + 1;
    SOMA = SOMA + K;
  }

  return SOMA;
}

void questao2() {
  int n;
  printf("Digite um número: ");
  scanf("%d", &n);
  while (getchar() != '\n')
    ;

  int a = 0, b = 1, c = a + b;

  if (n == 0 || n == 1) {
    printf("O número %d pertence à sequência de Fibonacci.\n", n);
    return;
  }

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

void questao3() { printf("a) 9\nb) 128\nc) 49\nd) 100\ne) 13\nf) 20\n"); }

void questao4() {
  printf("Ligo o primeiro interruptor e deixo ele ligado por alguns minutos "
         "logo depois ligo o segundo interruptor e desligo o primeiro, vou ate "
         "a sala e verifico, a lampada acessa pertence ao segundo interruptor, "
         "a lampada quente ao primeiro e que restou ao terceiro");
}

void questao5() {
  char str[100];
  printf("Digite uma string: ");

  while (getchar() != '\n')
    ;

  fgets(str, 100, stdin);
  str[strlen(str) - 1] = '\0';
  printf("String original: %s\n", str);

  int n = strlen(str);
  for (int i = 0; i < n / 2; i++) {
    char temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }

  printf("String invertida: %s\n", str);
}

int main() {
  int opcao;
  char continuar;

  do {
    printf("Escolha uma questão (1-5): ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Digite um número: ");
      int num;
      scanf("%d", &num);
      printf("Resultado: %d\n", questao1(num));
      break;
    case 2:
      questao2();
      break;
    case 3:
      questao3();
      break;
    case 4:
      questao4();
      break;
    case 5:
      questao5();
      break;
    default:
      printf("Opção inválida.\n");
    }

    printf("Deseja continuar? (S/N): ");
    scanf(" %c", &continuar);
  } while (continuar == 'S' || continuar == 's');

  return 0;
}