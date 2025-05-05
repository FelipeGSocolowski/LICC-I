#include <stdio.h>

int main() {
    int tesouro;

    scanf("%d", &tesouro);

    printf("Valor inicial do tesouro: %d\n", tesouro);

    int *mapa = &tesouro;

    printf("Valor do tesouro usando mapa: %d\n", *mapa);

    *mapa += 10;

    printf("Valor do tesouro usando mapa depois de adicionarmos 10 moedas: %d\n", *mapa);

    int **mapa2 = &mapa;

    printf("Valor do tesouro usando mapa para o mapa: %d\n", **mapa2);

    **mapa2 += 10;

    printf("Valor do tesouro usando mapa para o mapa depois de adicionarmos 10 moedas: %d\n", **mapa2);

    return 0;
}