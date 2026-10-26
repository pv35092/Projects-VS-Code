#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, tabuada, resultado;

    printf("Introduza um número inteiro: ");
    scanf("%d", &i);

    printf("Tabuada do %d:\n", i);

    
    while (tabuada <= 10)
    {
        resultado = i * tabuada; 
        printf("%d x %d = %d\n", i, tabuada, resultado);
        tabuada = tabuada + 1;
    }

    return 0;
}
