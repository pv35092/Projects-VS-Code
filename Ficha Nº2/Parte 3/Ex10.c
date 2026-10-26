#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, soma, p;

    printf("Introduza um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, introduza um número inteiro positivo.\n");
        return 1;
    }
    else {
        soma = 0;
        p = 0; // O primeiro par a ser testado será o 2 (0 + 2)

        // O ciclo testa se ao adicionarmos o PRÓXIMO número par (p + 2) à soma atual,
        // o total continua a ser ESTRITAMENTE INFERIOR ao 'num' (N).
        while ((soma + (p + 2)) < num) {
            p = p + 2;       // Avança para o próximo par (2, 4, 6, 8, etc.)
            soma = soma + p; // Adiciona esse par à soma total acumulada
        }
        
        // Trata o caso em que o N é demasiado pequeno (ex: se N for 1 ou 2)
        if (p == 0) {
            printf("Nao existem numeros pares cuja soma seja inferior a %d\n", num);
        } else {
            // Imprime o resultado final, conforme o exemplo do enunciado
            printf("P=%d\n", p);
        }
    }

    return 0;
}