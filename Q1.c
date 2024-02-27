#include <stdio.h>

void desenha(int numero)
{
    if (numero > 0) {
        desenha(numero - 1);
        printf("*");
    }
}

int main(void)
{
    int num = 0;

    printf("Informe o número: ");
    scanf("%d", &num);

    desenha(num);
    printf("\n");

    return 0;
}