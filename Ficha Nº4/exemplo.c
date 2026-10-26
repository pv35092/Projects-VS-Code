#include <stdio.h>

// Função que calcula o quadrado de um número: recebe um inteiro e
// devolve o seu quadrado.
//
// Relembrando o ponto 2 da teoria, a sintaxe do cabeçalho é:
//  tipo_retorno nome_da_função(tipo_parametro1 parametro1, ...) {
//      // código da função
//      return valor; // só se a função tiver tipo de retorno
//   }
//
// Exemplo: int add(int a, int b) {     // a: 1.º parâmetro; b: 2.º
//              return a + b;           // retorna a soma de a e b
// }
// a) A função quadrado recebe um inteiro e retorna o seu quadrado:
int quadrado(int a)
{
    int resultado;
    resultado = a * a;
    return resultado;    // deve retornar o quadrado do parâmetro recebido (n)
}
// b) A função somaDosQuadrados recebe dois inteiros e, invocando a
//    função quadrado, retorna a soma dos quadrados dos dois inteiros:
int somaDosQuadrados(int a, int b)
{
    int quadradoParam1 = 0, quadradoParam2 = 0;

    // Para calcular o quadrado de um número, invoca-se a função quadrado.
    // Relembrando: invoca-se uma função pelo nome seguido de parênteses
    // com os argumentos — p. ex., para int add(int a, int b) {...},
    // a invocação poderá ser: int result = add(5, 3);

    quadradoParam1 = quadrado(a);
    // Obs.: no 1.º espaço, o nome da função a invocar;
    // no 2.º espaço, o parâmetro (aqui, só um).

    quadradoParam2 = quadrado(b);

    return ____________ + _____________;
}

int main()
{

    int num1, num2, resultado;
    num1 = num2 = resultado = 0;

    printf("Insira dois números inteiros, separados por espaço: ");
    scanf("%d %d", &num1, &num2);

    // Invocar somaDosQuadrados com os 2 números lidos:
    resultado = ____________________(_____, _____);