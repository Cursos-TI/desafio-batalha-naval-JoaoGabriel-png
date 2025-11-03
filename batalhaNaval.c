#include <stdio.h>

//eu programo em um programa externo e depois passo para ca

//modo iniciante: feito
//modo aventureiro:
//modo mestre:


int main() {

    char l[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int h[10][10] = {0};
    int i, j;

    //barcos
    for (int j = 4; j <= 6; j++) {
        h[3][j] = 3;
    }

    for (int i = 3; i <= 5; i++) {
        h[i][1] = 3;
    }


    //Colocar as letras no topo
    for (int h = 0; h < 10; h ++)
    {
        if (h <= 0)
        {
            printf("    ");
        }

        printf("%c ", l[h]);
        if (h >= 9)
                {
                    printf("\n");
                }
    }

    //tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%2d. ", i+1);
        for (j = 0; j < 10; j++) {
            printf("%d ", h[i][j]);
        }
        printf("\n");
    }

    return 0;
}