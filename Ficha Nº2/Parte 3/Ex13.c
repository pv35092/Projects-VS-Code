#include <stdio.h>


int main() {
    int n;
    int soma = 0;
    int fatorial = 1;

    printf("Introduza um valor para n (máximo 12): ");
    if (scanf("%d", &n) != 1) {
        printf("Erro na leitura do valor.\n");
        return 1;
    }

    if (n < 1) {
        printf("Por favor, introduza um número inteiro positivo.\n");
        return 1;
    }

    if (n > 12) {
        printf("Erro: O valor de n não deve ser superior a 12 para evitar overflow do tipo int.\n");
        return 1;
    }

    printf("\nIteração | Fatorial | Somatório\n");
    printf("----------------------------------\n");

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
        soma += fatorial;
        printf("%d        | %d    | %d\n", i, fatorial, soma);
    }

    printf("----------------------------------\n");
    printf("O somatorio final para n = %d e: %d\n", n, soma);

    return 0;
}

