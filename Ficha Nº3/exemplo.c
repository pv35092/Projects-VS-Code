// Exercício 8 — perímetro do triângulo
// struct Ponto {double x, y;}. Teste: A(-3,-2), B(4,-2), C(3,3).
#include <stdio.h>
#include <math.h>

typedef struct ponto {
    double x, y;
} Ponto;


int main(void)
{

    //      c(3,3)
    //       /\
    // lado1 /  \ lado2
    //      /     \
    // a(-3,-2) -- lado3 -- b(4,-2)

Ponto a, b, c;                     // vértices do triângulo
double perimetro, lado1, lado2, lado3;
perimetro = lado1 = lado2 = lado3 = 0.0;

printf("\nPonto 1 - coordenadas x e y do ponto a: ");
scanf("%lf %lf", &a.x, &a.y);

printf("\nPonto 2 - coordenadas x e y do ponto b: ");
scanf("%lf %lf", &b.x, &b.y);

printf("\nPonto 3 - coordenadas x e y do ponto c: ");
scanf("%lf %lf", &c.x, &c.y);

// distância entre P1(x1,y1) e P2(x2,y2): d = sqrt((x2-x1)² + (y2-y1)²)
lado1 = sqrt((a.x-c.x)*(a.x-c.x) + (a.y-c.y)*(a.y-c.y));
lado2 = sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
lado3 = sqrt((c.x-b.x)*(c.x-b.x) + (c.y-b.y)*(c.y-b.y));

perimetro = lado1 + lado2 + lado3;

printf("\nO perímetro do triângulo de lados %.2f, %.2f e %.2f é: %.2f\n\n",
lado1, lado2, lado3, perimetro);

return 0;
}