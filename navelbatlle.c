#include <stdio.h>
#include <string.h>

void main() {
    //tabuleiro

    int x, y;
    char tabuleiro[10][10];


    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 10; y++)
        {
            tabuleiro[x][y] = '0';
        }     
    }

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("%c ", tabuleiro[x][y]);
        }
        printf("\n");
    }
    
}