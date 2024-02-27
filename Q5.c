#include <stdio.h>

int A(int m, int n)
{
    if(m == 0){
        return n+1;
    }

    if(m > 0 && n == 0){
        return A(m-1, 1);
    }

    if(m > 0 && n > 0){
        A(m-1,A(m, n-1));
    }
}

int main(void)
{
    int num1 = 0, num2 = 0, retorno = 0;

    printf("Informe dois números:");
    scanf("%d%d", &num1, &num2);

    retorno = A(num1, num2);

    printf("Retorno: %d\n", retorno);

    return 0;
}