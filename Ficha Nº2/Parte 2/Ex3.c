#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numGerado, iteracao, valorFimCiclo;
    iteracao = 1;
    valorFimCiclo = 7;
    numGerado = -1;   // valor fora de [0,9], garante que o ciclo executa pelo menos uma vez
    printf("O intervalo dos números aleatórios gerados é: [0,%d]\n", RAND_MAX);
    srand(time(NULL));

    while (numGerado != valorFimCiclo) {
        numGerado = rand() % 10;
        printf("\nNa %dª iteração, o número aleatório gerado foi: %d", iteracao, numGerado);
        iteracao++;
    }
    printf("\nO número total de iterações foi: %d", iteracao - 1);
    return 0;
    
}