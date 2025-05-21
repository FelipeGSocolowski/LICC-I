#include <stdio.h>

int main() {
    int c, matriz[4][13];

    scanf("%d", &c);

    for(int i = 0; i < 52; i++) {
        matriz[i/13][i%13] = 0;
    }

    char valor[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}, naipe[4] = "COPE", cartas[c][4];

    for (int i = 0; i < c; i++) {
        scanf("%s", cartas[i]);
    }

    for (int i = 0; i < c; i++) {
        int v = -1, n = -1;

        for (int j = 0; j < 13; j++) {
            if (cartas[i][0] == valor[j][0]) {
                v = j;
                break;
            }
        }
        
        if(v == 9) {
            for (int j = 0; j < 4; j++) {
                if (cartas[i][2] == naipe[j]) {
                    n = j;
                    break;
                }
            }
        } else {
            for (int j = 0; j < 4; j++) {
                if (cartas[i][1] == naipe[j]) {
                    n = j;
                    break;
                }
            }
        }

        if(n != -1 && v != -1) {
            matriz[n][v]++;
        }
    }

    printf("Naipe: Copas\n");

    for(int i = 0; i < 13; i++) {
        printf("%s: %d\n", valor[i], matriz[0][i]);
    }

    printf("Naipe: Ouros\n");

    for(int i = 0; i < 13; i++) {
        printf("%s: %d\n", valor[i], matriz[1][i]);
    }

    printf("Naipe: Paus\n");

    for(int i = 0; i < 13; i++) {
        printf("%s: %d\n", valor[i], matriz[2][i]);
    }

    printf("Naipe: Espadas\n");

    for(int i = 0; i < 13; i++) {
        printf("%s: %d\n", valor[i], matriz[3][i]);
    }
    
    return 0;
}