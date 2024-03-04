#include <stdio.h>

int isPrime(int n, int divisor){
  if (n <= 1){
    return 0; 
  } 
  if (divisor == 1){
    return 1; 
  }
  if (n % divisor == 0){
    return 0; 
  }
    return isPrime(n, divisor - 1);
}

int main()
{
  int num, retorno;
  printf("Digite um número: ");
  scanf("%d", &num);

  retorno = isPrime(num, num/2);

  if(retorno == 0){
    printf("%d não é primo\n", num);
  }

  if(retorno == 1){
    printf("%d é primo\n", num);
  }
  return 0;
}
