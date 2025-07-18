#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Discente {

    char nome[101];

    int numeroUSP;

    char assunto[101];
};

int main() {
    int n;

    scanf("%d", &n);

    struct Discente *discentes;

    discentes = (struct Discente *) malloc(n * sizeof(struct Discente));

    for(int i = 0; i < n; i++) {
        scanf(" %[^\n]s", discentes[i].nome);
        scanf("%d", &discentes[i].numeroUSP);
        scanf(" %[^\n]s", discentes[i].assunto);
    }

    int m;

    scanf("%d", &m);

    discentes = (struct Discente *) realloc(discentes, (n+m) * sizeof(struct Discente));

    for(int i = n; i < (n+m); i++) {
        scanf(" %[^\n]s", discentes[i].nome);
        scanf("%d", &discentes[i].numeroUSP);
        scanf(" %[^\n]s", discentes[i].assunto);
    }

    for(int i = 0; i < (n+m); i++) {
        printf("Discente %d:\nNome: %s\nNúmero USP: %d\nAssunto: %s\n\n", i+1, discentes[i].nome, discentes[i].numeroUSP, discentes[i].assunto);
    }

    return 0;
}