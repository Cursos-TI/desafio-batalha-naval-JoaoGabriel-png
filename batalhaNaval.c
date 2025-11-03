#include <stdio.h>

//eu programo em um programa externo e depois passo para ca

//modo iniciante: feito
//modo aventureiro:
//modo mestre:

int main() {
    int h[10][10] = {0};

    //barcos
    for (int j = 4; j <= 6; j++) {
        h[3][j] = 3;
    }

    for (int i = 3; i <= 5; i++) {
        h[i][1] = 3;
    }

    //tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", h[i][j]);
        }
        printf("\n");
    }

    return 0;
}