#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int num1, num2, par;
    SetConsoleOutputCP(CP_UTF8);

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);

    printf("Digite um outro número inteiro maior que %d: ", num1);
    scanf("%d", &num2);

    printf("Números pares entre %d e %d:\n", num1, num2);
    
    par = num1;
    if (par % 2 != 0) {   // se num1 for ímpar, passa ao par seguinte
        par = par + 1;
    }

    while (par <= num2) {
        printf("%d\n", par);
        par = par + 2;    // salta de 2 em 2
    }

    return 0;
}