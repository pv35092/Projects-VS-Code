#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, total = 0;

    printf("Introduza um número inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Valor invalido! N tem de ser maior que 0.\n");
    }
    else
    {

    // Somar de 1 ate N, mostrando o total acumulado
    for (i = 1; i <= N; i++)
    {
        total = total + i;
        printf("Iteracao %d: total = %d\n", i, total);
    }

    printf("A soma dos %d primeiros inteiros positivos e %d\n", N, total);
    }
     
    return 0;
}
