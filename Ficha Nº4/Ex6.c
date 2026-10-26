#include <stdio.h>

void le_vetor(int x[], int tamanho)
{
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &x[i]);
    }
}




int main()
{
   int vetor[10];
   le_vetor(vetor, 10);

    return 0;
}
