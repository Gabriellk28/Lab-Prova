#include <stdio.h>

int main()
{
  // Define o número de caracteres por linha
  int caracteres_por_linha = 10;

  // Imprime o cabeçalho da tabela
  printf("Valores ASCII de 0 a 127:\n");

  // Laço para iterar de 0 a 127
  for (int i = 0; i <= 127; i++) {
    // Imprime o código ASCII e o caractere correspondente
    printf("%3d: %c  ", i, (char)i);

    // Verifica se é o final da linha
    if ((i + 1) % caracteres_por_linha == 0) {
      // Imprime uma nova linha
      printf("\n");
    }
  }

  return 0;
}
