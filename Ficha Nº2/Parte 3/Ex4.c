#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1;
    int pares = 0, impares = 0;

    printf("Introduza um número inteiro: ");
    scanf("%d", &num1);
    
    while (num1 >= 0) {
        if (num1 % 2 == 0) {
            pares = pares + 1;
        } 
        else {
            impares = impares + 1;
        }

        printf("Introduza outro número inteiro: ");
        scanf("%d", &num1);
    }

    printf("Pares: %d\n", pares);
    printf("Ímpares: %d\n", impares);

    return 0;
    
    }
