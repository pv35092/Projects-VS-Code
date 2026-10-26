#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operacao;
    float n1, n2, resultado;


    printf("Bem-vindo à calculadora simplificada.\n\n");
    printf("Que operação quer executar? (+, -, x, :): ");
    scanf("%c", &operacao);

    printf("Qual é o primeiro número?: ");
    scanf("%f", &n1);

    printf("Qual é o segundo número?: ");
    scanf("%f", &n2);

    switch(operacao)
    {
    case '+':
        resultado = n1 + n2;
        printf("%.1f + %.1f = %.1f\n", n1, n2, resultado);
        break;

    case '-':
        resultado = n1 - n2;
        printf("%.1f - %.1f = %.1f\n", n1, n2, resultado);
        break;

    case 'x':
        resultado = n1 * n2;
        printf("%.1f x %.1f = %.1f\n", n1, n2, resultado);
        break;

    case ':':
        resultado = n1 / n2;
        printf("%.1f : %.1f = %.1f\n", n1, n2, resultado);
        break;
    }

    return 0;
}