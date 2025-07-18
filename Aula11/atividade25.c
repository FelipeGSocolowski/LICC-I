#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = (char *) malloc(1000 * sizeof(char));
    char *t = (char *) malloc(1000 * sizeof(char));
    
    scanf(" %[^\n]s", s);
    scanf(" %[^\n]s", t);

    char *temp = (char *) malloc(1000 * sizeof(char));

    int i = 0;

    strncpy(temp, t, i);

    while(strstr(s, temp) && i != strlen(s)) {
        i++;
        strncpy(temp, t, i);
    }

    char *prefixo = (char *) malloc(10001 * sizeof(char));

    strncpy(prefixo, t, i-1);

    printf("%d %s\n", i-1, prefixo);

    free(s);
    free(t);
    free(temp);
    free(prefixo);

    return 0;
}