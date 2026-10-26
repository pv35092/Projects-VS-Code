#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int num1;
    SetConsoleOutputCP(CP_UTF8);

    printf("Introduza um número inteiro entre 0 e 9: ");
    scanf("%d", &num1);

    while (num1 < 0 || num1 >9) {
        printf("Número inválido. Introduza um número inteiro entre 0 e 9: ");
        scanf("%d", &num1);
    }

return 0;
}


