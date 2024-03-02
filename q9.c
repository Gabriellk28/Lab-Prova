#include <stdio.h>

// Função recursiva para calcular o produto de dois números inteiros
int produto(int x1, int x2) {
  // Caso base: se o segundo número (x2) for igual a zero, o produto é zero
  if (x2 == 0) {
    return 0;
  } else {
    // Chamada recursiva: soma o primeiro número (x1) ao produto de x1 e o segundo número menos 1 (x2 - 1)
    return x1 + produto(x1, x2 - 1);
  }
}

int main(void) {
  // Variáveis para armazenar os dois números inteiros
  int numero1, numero2;

  // Solicita ao usuário que informe dois valores inteiros
  printf("Informe dois valores inteiros (x1 x2): ");
  scanf("%d %d", &numero1, &numero2);

  // Chama a função `produto` para calcular o produto e armazena o resultado
  int resultado = produto(numero1, numero2);

  // Imprime o resultado do produto
  printf("O produto de %d e %d é: %d\n", numero1, numero2, resultado);

  return 0;
}
