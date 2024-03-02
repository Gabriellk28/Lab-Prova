#include <stdio.h>

// Função para verificar se um número é primo (isPrime)
int isPrime(int n, int i) {
  // Condição base: se o divisor (i) for igual a 1, o número é primo
  if (i == 1) {
    return 1;
  }

  // Se o número for divisível pelo divisor (i), não é primo
  if (n % i == 0) {
    return 0;
  } else {
    // Verifica os próximos divisores (i - 1) recursivamente
    return isPrime(n, i - 1);
  }
}

int main(void) {
  // Variável para armazenar o número
  int numero;

  // Solicita ao usuário que informe um número natural
  printf("Informe um número natural: ");
  scanf("%d", &numero);

  // Chama a função isPrime para verificar se o número é primo
  if (isPrime(numero, numero / 2)) {
    printf("%d é um número primo.\n", numero);
  } else {
    printf("%d não é um número primo.\n", numero);
  }

  return 0;
}
