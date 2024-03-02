
#include <stdio.h>

// Função de Ackermann (A)
int A(int m, int n) {
  // Caso base 1: Se m for igual a 0, retorna n + 1
  if (m == 0) {
    return n + 1;
  }

  // Caso base 2: Se m for maior que 0 e n for igual a 0, chama A(m-1, 1)
  else if (m > 0 && n == 0) {
    return A(m - 1, 1);
  }

  // Caso recursivo: Se m e n forem ambos maiores que 0, chama A(m-1, A(m, n-1)) mas **não retorna o resultado** (explicado posteriormente)
  else if (m > 0 && n > 0) {
    A(m - 1, A(m, n - 1)); // Chamada recursiva sem retorno
  }

  // Esta linha é inalcançável no fluxo normal de execução devido à ausência de um comando return no caso anterior.
  // É incluída para completude e potencialmente para tratamento de erros.
  return 0;
}

int main(void) {
  // Variáveis para entrada e valor de retorno
  int num1, num2, resultado;

  // Solicita entrada ao usuário
  printf("Informe dois números: ");
  scanf("%d %d", &num1, &num2);

  // Chama a função de Ackermann e armazena o resultado
  resultado = A(num1, num2);

  // Imprime o resultado
  printf("Retorno: %d\n", resultado);

  return 0;
}