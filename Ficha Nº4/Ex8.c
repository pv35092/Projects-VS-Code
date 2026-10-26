#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

void populate_vector(int vector[], int size);
void print_vector(int vector[], int size);
void change_vector(int vector[], int size);

int main() {
    int size, vetor[MAX_SIZE];
    
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &size);

    populate_vector(vetor, size);
    print_vector(vetor, size);
    change_vector(vetor, size);
    
    return 0;
}

void populate_vector(int vetor[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Inira o valor para o elemnto do vetor %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void print_vector(int vetor[], int size) {
    printf("Vetor: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void change_vector(int vetor[], int size) {
    unsigned int pos_p, pos_q;
    printf("Insira a as posições");
    scanf("%d %d", &pos_p, &pos_q);

    if (pos_q >= MAX_SIZE || pos_q >= MAX_SIZE) {
        printf("Posição invalida");
        return;
    }

    int value = pos_q;
    vetor[pos_q] = vetor[pos_p];
    vetor[pos_p] = value;
    printf("Vetor alterado: ");
    print_vector(vetor, size);
}