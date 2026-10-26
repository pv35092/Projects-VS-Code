#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, divisor, resultado;

    printf("Introduza um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, introduza um número inteiro positivo.\n");
        return 1; // Exit with an error code
    }

    else {
        printf("Divisores de %d:\n", num);
        divisor = num;

        while (divisor >= 1) {
            if (num % divisor == 0) {
                printf("%d\n", divisor);
            }
            divisor--;
        }
    }
    
    return 0;
}