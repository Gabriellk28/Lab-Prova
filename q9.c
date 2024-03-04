#include <stdio.h>

int produto(int x1, int x2) {
    // Caso base: se um dos números for zero, o produto será zero
    if (x1 == 0 || x2 == 0) {
        return 0;
    }
    // Caso base: se x2 for 1, o produto será x1
    if (x2 == 1) {
        return x1;
    }
    // Caso recursivo: somamos x1 a ele mesmo (x2-1) vezes
    return x1 + produto(x1, x2 - 1);
}

int main() {
    int x1, x2;
    printf("Digite dois números:\n");
    scanf(" %d %d", &x1, &x2);

    printf("O produto de %d e %d é: %d\n", x1, x2, produto(x1, x2));

    return 0;
}