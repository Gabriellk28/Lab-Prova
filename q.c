#include <stdio.h>

int main() {
    int i;
    
    printf("Valores ASCII de 0 a 127:\n");

    for (i = 0; i <= 127; i++) {
        printf("%3d: %c   ", i, i);
        
        // Imprime uma nova linha após cada 10 caracteres
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}