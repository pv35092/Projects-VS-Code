#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, i, j, m;

    printf("Introduza o valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        for (j = 1; j <= N - i; j++){
            printf("  ");
        }
        for (m = 1; m <= i; m++){
            printf("%d ", m);
        }
        for (m = i - 1; m > 0; m--){
            printf("%d ", m);
        }
    
        printf("\n");
    }

    return 0;
}
