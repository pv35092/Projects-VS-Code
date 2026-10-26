#include <stdio.h>
#include <stdlib.h>
#include "func_funcs.h"


int main()
{
    int n, matriz[100][100];
    
    printf("Introduza a dimensao da matriz (n): ");
    scanf("%d", &n);
    
    printf("\nIntroduza os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    

    printf("\nMatriz lida:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Boas");

    return 0;
}


