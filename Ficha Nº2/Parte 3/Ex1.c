#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int num1;
    SetConsoleOutputCP(CP_UTF8);

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    if (num1 <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    else if (num1 >= 100) {
        printf("Por favor, insira um número inteiro menor que 100.\n"); 
    }

    else {

        printf("Multiplos de %d inferiores a 100:\n", num1);

        int multiplo = num1;
        while (multiplo < 100)
            {
            printf("%d\n", multiplo);
            multiplo = multiplo + num1;
        }
    
    }
    return 0;
}