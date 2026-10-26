#include <stdio.h>
#include <string.h>

#define MAX_FILAS 10
#define MAX_CADEIRAS 10
#define MAX_NOME 50

typedef struct {
    char nome[50];
    int ocupado;      
    int pago;         
} Reserva;

Reserva sala[MAX_FILAS][MAX_CADEIRAS];

int main() {
    int F, C;
    
    for (int i = 0; i < MAX_FILAS; i++) {
        for (int j = 0; j < MAX_CADEIRAS; j++) {
            sala[i][j].ocupado = 0;
            sala[i][j].pago = 0;
            strcpy(sala[i][j].nome, "");
        }
    }
    

    printf("=== GESTAO DE RESERVAS ===\n");
    printf("Introduza numero de filas (max %d): ", MAX_FILAS);
    scanf("%d", &F);
    printf("Introduza numero de cadeiras por fila (max %d): ", MAX_CADEIRAS);
    scanf("%d", &C);
    getchar();
    
    int opcao;
    int fila, cadeira;
    char nome[50];
    
    while (1) {
        printf("\n--- MENU ---\n");
        printf("1 - Criar nova reserva\n");
        printf("2 - Eliminar reserva\n");
        printf("3 - Ver mapa da sala\n");
        printf("4 - Listar reservas\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();
        
        switch (opcao) {
            case 1: // Criar nova reserva
                printf("\nIntroduza fila (0-%d): ", F-1);
                scanf("%d", &fila);
                printf("Introduza cadeira (0-%d): ", C-1);
                scanf("%d", &cadeira);
                getchar();
                
                if (fila < 0 || fila >= F || cadeira < 0 || cadeira >= C) {
                    printf("Posicao invalida!\n");
                } else if (sala[fila][cadeira].ocupado) {
                    printf("Lugar ja ocupado!\n");
                } else {
                    printf("Nome do cliente: ");
                    fgets(nome, 50, stdin);
                    nome[strcspn(nome, "\n")] = 0;
                    
                    strcpy(sala[fila][cadeira].nome, nome);
                    sala[fila][cadeira].ocupado = 1;
                    sala[fila][cadeira].pago = 0;
                    
                    printf("Reserva criada para %s (Fila %d, Cadeira %d)\n", 
                           nome, fila, cadeira);
                }
                break;
                
            case 2: // Eliminar reserva
                printf("\nIntroduza fila (0-%d): ", F-1);
                scanf("%d", &fila);
                printf("Introduza cadeira (0-%d): ", C-1);
                scanf("%d", &cadeira);
                
                if (fila < 0 || fila >= F || cadeira < 0 || cadeira >= C) {
                    printf("Posicao invalida!\n");
                } else if (!sala[fila][cadeira].ocupado) {
                    printf("Este lugar ja esta vago!\n");
                } else {
                    printf("Reserva de %s eliminada.\n", sala[fila][cadeira].nome);
                    sala[fila][cadeira].ocupado = 0;
                    sala[fila][cadeira].pago = 0;
                    strcpy(sala[fila][cadeira].nome, "");
                }
                break;
                
            case 3: // Mapa da sala
                printf("\nMapa de ocupacao:\n");
                printf("   ");
                for (int j = 0; j < C; j++) {
                    printf("%2d ", j);
                }
                printf("\n");
                
                for (int i = 0; i < F; i++) {
                    printf("%2d: ", i);
                    for (int j = 0; j < C; j++) {
                        if (sala[i][j].ocupado) {
                            printf(" X ");
                        } else {
                            printf(" . ");
                        }
                    }
                    printf("\n");
                }
                printf("(X = ocupado, . = vago)\n");
                break;
                
            case 4: // Listar reservas
                printf("\n--- RESERVAS REALIZADAS ---\n");
                int total = 0;
                for (int i = 0; i < F; i++) {
                    for (int j = 0; j < C; j++) {
                        if (sala[i][j].ocupado) {
                            printf("Fila %d, Cadeira %d: %s - %s\n",
                                   i, j, sala[i][j].nome,
                                   sala[i][j].pago ? "PAGO" : "NAO PAGO");
                            total++;
                        }
                    }
                }
                printf("Total de reservas: %d\n", total);
                break;
                
            case 0:
                printf("Saindo...\n");
                return 0;
                
            default:
                printf("Opcao invalida!\n");
        }
    }
    
    return 0;
}