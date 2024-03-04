#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  float delta, x1, x2;

  //Leitura dos coeficientes
  printf("Digite o valor de a: ");
  scanf("%d", &a);
  printf("Digite o valor de b: ");
  scanf("%d", &b);
  printf("Digite o valor de c: ");
  scanf("%d", &c);

  //Cálculo do discriminante
  delta = b * b - 4 * a * c;

  //Teste para raízes reais
  if (delta < 0){
    //Não existem raízes reais
    printf("A função não possui raízes reais.\n");
    return 1;
  }

  //Cálculo das raízes
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  //Impressão das raízes
  printf("As raízes da função são: %.2f e %.2f\n", x1, x2);

  return 0;
}

