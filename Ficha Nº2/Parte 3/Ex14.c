#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float sum = 0.0f;
    float current_term = 1.0f;

    printf("Introduza o valor de n: ");
    if (scanf("%d", &n) != 1) {
        printf("Erro na leitura do numero.\n");
        return 1;
    }

    if (n < 1) {
        printf("Por favor, introduza um numero inteiro positivo maior ou igual a 1.\n");
        return 1;
    }

    /*
       Calculo do somatorio de i=1 ate n de (2^i / i!).
       Usamos float para representar os valores decimais.
       Para evitar overflow, calculamos o termo atual com base no anterior:
       Termo(i) = Termo(i-1) * (2 / i)
    */

    for (int i = 1; i <= n; i++) {
        current_term *= (2.0f / i);
        sum += current_term;
    }

    printf("O valor do somatorio para n = %d e: %.6f\n", n, sum);

    return 0;
}
