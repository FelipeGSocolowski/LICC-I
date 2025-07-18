#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;

    char fnome[11];

    scanf("%s", fnome);

    fptr = fopen(fnome, "r");

    int i = -1;

    do {
        i++;
    } while (fgetc(fptr) != EOF);

    printf("%d", i);

    fclose(fptr);

    return 0;
}