#include <stdio.h>
#include <stdlib.h>

typedef struct FRACAO {
    int num, den;
} FRACAO;

int main() {
    FRACAO f1, f2, resultado;
    char operador;
    char opcao;

    do {
        printf("\n--- Calculadora de Frações ---\n");
        printf("Introduza a primeira fração ('numerador denominador'): ");
        scanf("%d %d", &f1.num, &f1.den);

        printf("Introduza a segunda -~fração ('numerador denominador'): ");
        scanf("%d %d", &f2.num, &f2.den);

        printf("Introduza o operador (+, -, x, :): ");
        scanf(" %c", &operador);

        int valido = 1;
        switch (operador) {
            case '+':
                resultado.num = f1.num * f2.den + f2.num * f1.den;
                resultado.den = f1.den * f2.den;
                break;

            case '-':
                resultado.num = f1.num * f2.den - f2.num * f1.den;
                resultado.den = f1.den * f2.den;
                break;

            case 'x':
                resultado.num = f1.num * f2.num;
                resultado.den = f1.den * f2.den;
                break;

            case ':':
                resultado.num = f1.num * f2.den;
                resultado.den = f1.den * f2.num;
                break;
                
            default:
                printf("Operador inválido.\n");
                valido = 0;
                break;
        }

        if (valido) {
            printf("Resultado: %d/%d\n", resultado.num, resultado.den);
        }

        printf("\nQuer realizar outra operação? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    printf("Programa terminado. Até a próxima!\n");

    return 0;
}
