#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
    char dia[3];
    char mes[3];
    char ano[5];
};

struct Hora {
    char hora[3];
    char minuto[3];
    char segundo[3];
};

struct Registro {

    struct Data data;

    struct Hora hora;

    char descricao[101];
};

int main() {
    int n;

    scanf("%d", &n);

    struct Registro registros[n];

    for(int i = 0; i < n; i++) {
        scanf(" %[^\n]s", registros[i].data.dia);
        scanf(" %[^\n]s", registros[i].data.mes);
        scanf(" %[^\n]s", registros[i].data.ano);
        scanf(" %[^\n]s", registros[i].hora.hora);
        scanf(" %[^\n]s", registros[i].hora.minuto);
        scanf(" %[^\n]s", registros[i].hora.segundo);
        scanf(" %[^\n]s", registros[i].descricao);
    }

    for(int i = 0; i < n; i++) {
        printf("%s/%s/%s - %s:%s:%s\n%s\n", registros[i].data.dia, registros[i].data.mes, registros[i].data.ano, registros[i].hora.hora, registros[i].hora.minuto, registros[i].hora.segundo, registros[i].descricao);
    }

    return 0;
}