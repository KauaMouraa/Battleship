#include <stdio.h>

void aplicarHabilidade(char tabuleiro[10][10], int origemX, int origemY, int habilidade) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            int x = origemX + i;
            int y = origemY + j;

            // Verifica se está dentro do tabuleiro
            if (x >= 0 && x < 10 && y >= 0 && y < 10) {
                int absI = i > 0 ? i : -i;
                int absJ = j > 0 ? j : -j;

                // Cone (habilidade 1)
                if (habilidade == 1 && i >= 0 && absJ <= i) {
                    tabuleiro[x][y] = '5';
                }

                // Cruz (habilidade 2)
                if (habilidade == 2 && (i == 0 || j == 0)) {
                    tabuleiro[x][y] = '5';
                }

                // Octaedro (habilidade 3)
                if (habilidade == 3 && absI + absJ <= 2) {
                    tabuleiro[x][y] = '5';
                }
            }
        }
    }
}

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

    //local inicial do barco da diagonal 1
    int linha_inicialD1 = 0;
    int colunaD1 = 0;

    //local inicial do barco da diagonal 2
    int linha_inicialD2 = 7;
    int colunaD2 = 2;

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

    //exibindo na diagonal
    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            tabuleiro[linha_inicialD1 + i][colunaD1 + i] = '3';
            tabuleiro[linha_inicialD2 + i][colunaD2 + i] = '3';
        }
        
    }

    aplicarHabilidade(tabuleiro, 5, 2, 1); // Cone
    aplicarHabilidade(tabuleiro, 1, 7, 2); // Cruz
    aplicarHabilidade(tabuleiro, 6, 6, 3); // Octaedro
    

    //Exibindo o tabuleiro
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("%c ", tabuleiro[x][y]);
        }
        printf("\n");
    }
    
}