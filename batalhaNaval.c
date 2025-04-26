#include <stdio.h>

int main() {
    int matriz[10][10] = {0}; // Inicializa todos os elementos com 0.

    int linhas;
    int colunas;
    
    printf("Tabuleiro: Batalha Naval \n");
    
    // loop para o navio ocupar 3 posições horizontais.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            matriz[linhas = 5][colunas + i] = 3;
        }
    }

    // loop para o navio ocupar 3 posições vertical.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            matriz[linhas + j][colunas = 9] = 3;
        }
    }

    // Mostrar a matriz no painel.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}