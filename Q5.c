#include <stdio.h>
#include <math.h>

// Função para verificar a existência de raízes reais para uma equação do 2º grau
int ExistenciaDeRaizes(int a, int b, int c) {
  // Calcula o discriminante (b^2 - 4ac)
  int discriminante = pow(b, 2) - (4 * a * c);

  // Verifica o número de raízes reais baseado no discriminante
  if (discriminante > 0) {
    printf("A equação possui duas raízes reais\n");
    return 2;
  } else if (discriminante == 0) {
    printf("A equação possui uma raiz real\n");
    return 1;
  } else {
    printf("A equação não possui raízes reais\n");
    return 0;
  }
}

// Função para calcular a raiz positiva da equação do 2º grau
float raizPositiva(int a, int b, int c) {
  // Utiliza a fórmula para a raiz positiva
  return (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
}

// Função para calcular a raiz negativa da equação do 2º grau
float raizNegativa(int a, int b, int c) {
  // Utiliza a fórmula para a raiz negativa
  return (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
}

int main(void) {
  // Variáveis para armazenar coeficientes, retorno da função e raízes
  int coeficiente1, coeficiente2, coeficiente3, resultadoExistencia;
  float raiz1, raiz2;

  // Solicita ao usuário que informe os coeficientes
  printf("Informe os coeficientes do polinômio do 2º grau:\n");
  scanf(" %d %d %d", &coeficiente1, &coeficiente2, &coeficiente3);

  // Chama a função para verificar a existência de raízes e armazena o resultado
  resultadoExistencia = ExistenciaDeRaizes(coeficiente1, coeficiente2, coeficiente3);

  // Verifica o número de raízes e chama as funções para calcular e imprimir
  if (resultadoExistencia == 2) {
    raiz1 = raizPositiva(coeficiente1, coeficiente2, coeficiente3);
    raiz2 = raizNegativa(coeficiente1, coeficiente2, coeficiente3);
    printf("Raizes: %.0f e %.0f\n", raiz1, raiz2);
  } else if (resultadoExistencia == 1) {
    raiz1 = raizPositiva(coeficiente1, coeficiente2, coeficiente3);
    // Como há apenas uma raiz real, raiz2 não é calculada
    printf("Raiz: %.0f\n", raiz1);
  }

  return 0;
}
