#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    float soma1 = 1;
    int soma2 = -1; 
    printf("Introduza o nº de termos que quer na sequência: ");
    scanf("%d", &N);

    printf ("A soma dos %d primeiros termos da sequência é: ", N);
    
    for (int i = 1; i <= N - 1; i++)
    {
        soma1 = soma1 + soma2 * (i / pow(2, i));
        soma2 = -soma2;
    }  

    printf("%.3f\n", soma1);
    
    return 0;
}
