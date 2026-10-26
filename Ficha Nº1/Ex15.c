#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() 
{
    float a, b, c, x, y;
    SetConsoleOutputCP(CP_UTF8);

    printf("Cálculo de uma equação de 2º grau\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("O valor de 'a' não pode ser zero.\n");
        return 1;
    }

    if (b*b - 4*a*c < 0) {
        printf("A equação não possui raízes reais.\n");

    } else if (b*b - 4*a*c == 0) {
        x = -b / (2*a);
        printf("A equação possui uma raiz real: %.2f\n", x);
        
    } else {
        x = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        y = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        printf("A equação possui duas raízes reais: %.2f e %.2f", x, y);
    }

    return 0;
}