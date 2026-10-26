#include <stdio.h>
#include <stdlib.h>

int main() {

    int quantidade_ramos, i, j;

    printf("Insira a quantidade de ramos na árvore que quer introduzir: ");
    scanf("%d", &quantidade_ramos);

    for (i = 1; i <= quantidade_ramos; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}