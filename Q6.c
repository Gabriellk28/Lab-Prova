#include <stdio.h>

// Função para calcular o Máximo Divisor Comum (MDC) de dois números inteiros
int mdc(int a, int b) {
  // Se o segundo número (b) for igual a zero, o MDC é o primeiro número (a)
  if (b == 0) {
    return a;
  } else {
    // Chama a função recursivamente com o segundo número (b) e o resto da divisão do primeiro número (a) pelo segundo (b)
    return mdc(b, a % b);
  }
}

int main(void) {
  // Variáveis para armazenar os dois números inteiros
  int numero1, numero2;

  // Solicita ao usuário que informe dois números inteiros
  printf("Informe dois números inteiros: ");
  scanf("%d %d", &numero1, &numero2);

  // Chama a função `mdc` para calcular o MDC e armazena o resultado
  int resultado = mdc(numero1, numero2);

  // Imprime o resultado do MDC
  printf("O Máximo Divisor Comum é: %d\n", resultado);

  return 0;
}
