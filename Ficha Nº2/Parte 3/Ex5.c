#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, multiplo, total;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    if (num1 <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");

    }

    else {

    printf("Introduza a quantidade de múltiplos a serem exibidos: ");
    scanf("%d", &multiplo);

        if (multiplo <= 0) {
            printf("Por favor, insira uma quantidade de múltiplos positiva.\n"); 
        }

        else {

            printf("Os %d primeiros múltiplos de %d são:\n", multiplo, num1);
    
        total = num1 * multiplo;
        multiplo = num1;
        while (multiplo <= total)
            {
            printf("%d\n", multiplo);
            multiplo = multiplo + num1;
        }

    }
    }
    return 0;
}