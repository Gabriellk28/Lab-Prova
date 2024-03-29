#include <stdio.h>

//Função para encontrar triplos pitagóricos até um determinado valor
void encontrarTriplosPitagoricos(int n)
{
  //Imprime o cabeçalho da tabela
  printf("Triplos pitagóricos até %d:\n", n);

  //Laço para iterar sobre o primeiro cateto
  for (int cateto1 = 1; cateto1 <= n; cateto1++){
    //Laço para iterar sobre o segundo cateto
    for (int cateto2 = cateto1; cateto2 <= n; cateto2++){
      //Laço para iterar sobre a hipotenusa
      for (int hipotenusa = cateto2; hipotenusa <= n; hipotenusa++){
        //Verifica se os números formam um triângulo pitagórico
        if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa){
          //Imprime o triângulo pitagórico
          printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
        }
      }
    }
  }
}

int main(void)
{
  int n;

  //Solicita ao usuário que digite o valor de n
  printf("Informe o valor de n: ");
  
  //Lê o valor de n digitado pelo usuário
  scanf("%d", &n);

  //Chama a função para encontrar triplos pitagóricos
  encontrarTriplosPitagoricos(n);

  return 0;
}

