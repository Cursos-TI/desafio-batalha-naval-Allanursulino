#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;

    // Posições dos navios
    int lH = 2, cH = 4; // navio horizontal (linha 2)
    int lV = 5, cV = 1; // navio vertical (coluna B)

    // Navio horizontal
    if (cH + 2 < 10)
        for (int i = 0; i < 3; i++)
            tabuleiro[lH][cH + i] = 3;

    // Navio vertical (sem sobreposição)
    if (lV + 2 < 10 &&
        tabuleiro[lV][cV] == 0 &&
        tabuleiro[lV + 1][cV] == 0 &&
        tabuleiro[lV + 2][cV] == 0)
        for (int i = 0; i < 3; i++)
            tabuleiro[lV + i][cV] = 3;

    // Imprime letras no topo (colunas)
    printf("   ");
    for (int j = 0; j < 10; j++)
        printf("%c ", colunas[j]);
    printf("\n");

    // Imprime cada linha com número à esquerda
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

