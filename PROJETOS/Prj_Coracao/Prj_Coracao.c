#include <stdio.h>

int main() {
    int n = 6;  // tamanho da parte de cima do coração

    // parte de cima do coração
    for (int i = n / 2; i <= n; i += 2) {

        // espaços a esquerda
        for (int j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        // parte esquerda do coração
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // espaços no meio
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // parte direita do coração
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // parte de baixo do coração
    for (int i = n; i >= 1; i--) {
        // espaços a esquerda
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // imprime a parte de baix do coração
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
