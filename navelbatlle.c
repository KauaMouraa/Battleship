#include <stdio.h>
#include <string.h>

void main() {
    //tabuleiro

    int x, y;
    char tabuleiro[10][10];

    // Local inicial do barco na Vertical
    int linha_inicialV = 2;
    int colunaV = 4;

    //Local inicial do barco da horizontal
    int linha_inicialH = 8;
    int colunaH = 7;

    //criando o tabuleiro
    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 10; y++)
        {
            tabuleiro[x][y] = '0';
        }     
    }

    //adicionando barco na vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicialV + i][colunaV] = '3';
    }

    //adicionando barco na horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_inicialH][colunaH + i] = '3';
    }

    //Exibindo o tabuleiro
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("%c ", tabuleiro[x][y]);
        }
        printf("\n");
    }
    
}