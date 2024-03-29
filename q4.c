#include <stdio.h>

//Função para converter um número decimal em numeral romano
void decimalParaRomano(int numero){
  //Arrays para armazenar valores e símbolos dos numerais romanos
  int valores[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
  const char* simbolos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

  //Laço para percorrer cada valor do numeral romano
  for (int i = 0; i < 9; i++){
    //Enquanto o número for maior ou igual ao valor atual,
    //imprima repetidamente o símbolo correspondente e subtraia o valor do número
    while (numero >= valores[i]){
      printf("%s", simbolos[i]);
      numero -= valores[i];
    }
  }
}

int main()
{
  //Imprime o cabeçalho da tabela
  printf("Número Decimal\tNúmero Romano\n");
  printf("--------------\t--------------\n");

  //Laço para percorrer números de 1 a 100
  for (int i = 1; i <= 100; i++){
    //Imprime o número decimal
    printf("%d\t\t", i);

    //Chama a função para converter e imprimir o numeral romano
    decimalParaRomano(i);

    //Imprime uma nova linha
    printf("\n");
  }

  return 0;
}

