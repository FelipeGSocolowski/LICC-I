#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;

    scanf("%d", &n);

    char **registro = (char **) malloc(n * 154 * sizeof(char));
    
    for(int i = 0; i < n; i++) {
        registro[i] = (char *)malloc(154 * sizeof(char));

        scanf(" %[^\n]s", registro[i]);
    }

    char ***tabela = (char ***) malloc(n * 154 * sizeof(char));

    for (int i = 0; i < n; i++) {
        tabela[i] = (char **) malloc(154 * sizeof(char));

        tabela[i][2] = (char *) malloc(4 * sizeof(char));
        tabela[i][1] = (char *) malloc(50 * sizeof(char));
        tabela[i][0] = (char *) malloc(100 * sizeof(char));

        tabela[i][2] = strrchr(registro[i], ' ');;
        tabela[i][1] = strtok(strstr(registro[i], ", "), ",");
        tabela[i][0] = strtok(registro[i], ",");
    }

    printf("Catalogo de Livros:\n");

    int id = 1;

    for(int i = 0; i < n; i++) {
        int check = 1, quant = 0;

        for(int j = 0; j < i; j++) {
            if(strcmp(tabela[i][0], tabela[j][0]) == 0) {
                check = 0;
            }
        }

        for(int j = 0; j < n; j++) {
            if(strcmp(tabela[i][0], tabela[j][0]) == 0) {
                quant++;
            }
        }

        if(i != 0 && check == 1) {
            printf("\n");
        }

        if(check == 1) {
            printf("Livro %d:\nTitulo: %s\nAutor:%s\nAno:%s\nQuantidade: %d\n", id++, tabela[i][0], tabela[i][1], tabela[i][2], quant);
        }
    }

    free(registro);
    free(tabela);

    return 0;
}