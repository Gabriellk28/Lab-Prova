#include <stdio.h>

int A(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return A(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return A(m - 1, A(m, n - 1));
    }
}

void calcularA(int a, int b) {
    printf("Resultados para A(x, y) onde x < %d e y < %d:\n", a, b);
    for (int x = 0; x < a; x++) {
        for (int y = 0; y < b; y++) {
            printf("A(%d, %d) = %d\n", x, y, A(x, y));
        }
    }
}

int main() {
    int a, b;
    printf("Digite dois inteiros a e b:\n");
    scanf("%d %d", &a, &b);
    calcularA(a, b);
    return 0;
}
