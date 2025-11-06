#include <stdio.h>

//eu programo em um programa externo e depois passo para ca

//modo iniciante: feito
//modo aventureiro: feito
//modo mestre: feito


int main() {

    char l[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int h[10][10] = {0};
    int m[5][5] = {0}, c[3][5] = {0}, o[5][5] = {0}; //as coisas do 'mestre' que esqueci o nome
    int i, j, in_i, in_j;

    /*
    //barcos
    for (int j = 4; j <= 6; j++) {
        h[3][j] = 3;
    }

    for (int i = 3; i <= 5; i++) {
        h[i][1] = 3;
    }
    */


    //cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                h[i + 4][j + 4]= 5;
            }
        }
    }

    //cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                h[i][j + 5]= 1;
            }
        }
    }

    //octaedro
    for (int i = 0; i < 5; i++) {
        int d = i <= 2 ? i : 4 - i;
        for (int j = 2 - d; j <= 2 + d; j++) {
            h[i + 2][j]= 3;
        }
    }


    /*
    //diagonal do canto esquerdo ao direito
    for (int i = 0; i < 10; i++) {
        h[i][i] = 3;
    }

    //diagonal do canto direito ao esquerdo
    for (int i = 0; i < 10; i++) {
        h[i][9 - i] = 5; //mudei para ficar mais facil a visualização
    }*/


    //Colocar as letras no topo
    printf("=====Batalha Naval=====\n\n");
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