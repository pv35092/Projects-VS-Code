#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, tabuada, resultado;
    i = 2;

    while (i <= 10)
    {
        printf("Tabuada do %d:\n", i);
        tabuada = 1;
        
        while (tabuada <= 10)
        {
            resultado = i * tabuada; 
            printf("%d x %d = %d\n", i, tabuada, resultado);
            tabuada = tabuada + 1;
        }
        
        printf("\nPressione Enter para ver a proxima tabuada...");
        getchar();
        
        i = i + 1;
        
    }
    
    return 0;
}