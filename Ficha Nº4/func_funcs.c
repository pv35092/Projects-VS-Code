/* ============================================================
 * func_funcs.c
 * Ficha de Trabalho N.º 4 — Parte 1: Funções (exercícios 1 a 5)
 *
 * Cada exercício indica, em comentário, a "caixa preta" da(s)
 * função(ões) a implementar (o que recebe / o que devolve) e uma
 * simulação de um caso prático (entrada -> saída esperada), para
 * ajudar a descobrir o algoritmo antes de o codificar.
 *
 * O código a completar está assinalado com TODO. Testar sempre
 * através do main.c (ver bloco de teste correspondente a cada
 * exercício).
 * ============================================================ */

#include <stdio.h>
#include "func_funcs.h"

/* ============================================================
 * EXERCÍCIO 1 — Funções sobre o tipo char
 * ============================================================
 * Caixa preta: cada função recebe um caracter (char) e devolve
 * verdadeiro(1)/falso(0), ou o carácter transformado. NÃO usar
 * as funções de <ctype.h> — é esse o objetivo do exercício.
 */
int isDigit(char c)
{
    if (c >= '0' && c <= '9') {
        return 1; // c is a digit
    }
    /* TODO: devolver 1 se c for um dígito ('0' a '9'), 0 c.c. */
    return 0;
}

int isAlpha(char c)
{
    /* TODO: devolver 1 se c for uma letra ('a'-'z' ou 'A'-'Z'), 0 c.c. */
    return 0;
}

int isAlNum(char c)
{
    /* TODO: devolver 1 se c for dígito OU letra, 0 c.c.
       (pode reaproveitar isDigit e isAlpha) */
    return 0;
}

char toLower(char c)
{
    /* TODO: se c for maiúscula, devolver a minúscula correspondente;
       caso contrário, devolver c sem alterações. */
    return c;
}

char toUpper(char c)
{
    /* TODO: se c for minúscula, devolver a maiúscula correspondente;
       caso contrário, devolver c sem alterações. */
    return c;
}

/* ============================================================
 * EXERCÍCIO 2 — Funções sobre inteiros
 * ============================================================
 * Simulação:
 *   resto(17, 5)    -> 2          impar(7)     -> 1 (verdadeiro)
 *   perfeito(6)     -> 1 (6 = 1+2+3)            primo(13)    -> 1
 *   perfeito(10)    -> 0                        primo(10)    -> 0
 *
 * Dica: o operador % dá o resto da divisão inteira. Para saber
 * se n é perfeito/primo, é preciso percorrer (com um ciclo) os
 * números entre 1 e n-1 e ver quais dividem n sem resto.
 */
int resto(int a, int b)
{
    /* TODO: devolver o resto da divisão inteira de a por b */
    return 0;
}

int impar(int x)
{
    /* TODO: devolver 1 se x for ímpar, 0 c.c. (pode reaproveitar resto) */
    return 0;
}

int perfeito(int n)
{
    /* TODO: somar os divisores de n inferiores a n; devolver 1 se
       a soma for igual a n, 0 c.c. */
    return 0;
}

int primo(int n)
{
    /* TODO: devolver 1 se n só for divisível por 1 e por si próprio,
       0 c.c. (n <= 1 não é primo) */
    return 0;
}

/* ============================================================
 * EXERCÍCIO 3 — Reduzidos, abundantes e perfeitos
 * ============================================================
 * Caixa preta:
 *
 * Recebe um intervalo [a, b] (a < b) e escreve no ecrã cada número
 * classificado (REDUZIDO / ABUNDANTE / PERFEITO). Escreve, ainda, o total de cada categoria.
 *
 * REDUZIDO  : superior  à soma dos seus divisores (excluindo-se a si próprio)
 * ABUNDANTE : inferior  à soma dos seus divisores
 * PERFEITO  : igual     à soma dos seus divisores
 *
 * Simulação: classificarNumeros(6, 12)
 *   6  -> PERFEITO   (1+2+3 = 6)
 *   7  -> REDUZIDO   (1 < 7)
 *   12 -> ABUNDANTE  (1+2+3+4+6 = 16 > 12)
 *   ... no final: nReduzidos=.., nAbundantes=.., nPerfeitos=1
 *
 * Dica: para cada número do intervalo, somar os seus divisores
 * (como no exercício 2) e comparar a soma com o próprio número.
 */
void classificarNumeros(int a, int b, int *nReduzidos, int *nAbundantes, int *nPerfeitos)
{
    //int nReduzidos = 0;
    //int nAbundantes = 0;
    //int nPerfeitos = 0;

    /* TODO: percorrer os números de a a b, calcular a soma dos
       divisores de cada um, escrever a classificação no ecrã e
       incrementar o contador respetivo. */
}

/* ============================================================
 * EXERCÍCIO 4 — Cubo e exponenciação
 * ============================================================
 * Caixa preta:
 *   int leitura();   // pede um inteiro
 *   int cubo(int n);                     // devolve n ao cubo
 *   int exponenciacao(int x, int exp);   // devolve x elevado a exp
 *
 * Simulação:
 *   leitura()  -> (pede-se número ao utilizador que escreve 3)       -> 3
 *   cubo(3)                                                 -> 27
 *   exponenciacao(2, 5)                                     -> 32
 *
 * Dica: exponenciacao pode calcular-se com um ciclo que multiplica
 * x por si próprio, exp vezes (ou reaproveitando a lógica do cubo,
 * generalizada).
 */
int leitura()
{
    int valor = 0;

    printf("Insira um número: ");
    /* TODO: ler o inteiro introduzido pelo utilizador para "valor" */

    return valor;
}

int cubo(int n)
{
    /* TODO: devolver n * n * n */
    return 0;
}

int exponenciacao(int x, int exp)
{
    /* TODO: devolver x elevado a exp (exp >= 0) */
    return 0;
}

/* ============================================================
 * EXERCÍCIO 5 — Maior de dois números
 * ============================================================
 * Caixa preta:
 *   int maior(int a, int b);
 *
 * Simulação:
 *   maior(4, 9)  -> 9          maior(-2, -7) -> -2
 */
int maior(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
