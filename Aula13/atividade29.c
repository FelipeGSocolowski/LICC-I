#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;

    char fnome[13], **ftexto = (char **) malloc(1000 * sizeof(char)), buff[1001];

    scanf("%s", fnome);

    fptr = fopen(fnome, "r");

    int i = -1;

    do {
        i++;
        ftexto[i] = (char *) malloc(10000 * sizeof(char));
    } while (fgets(ftexto[i], 1000, fptr));

    strcpy(ftexto[i], "\n");

    int del = 0;

    while(scanf(" %[^\n]s", buff) != EOF) {
        if(buff[0] == 'A') {
            strcat(ftexto[i], strcat(strstr(buff, " ")+1, "\n"));
            i++;
            ftexto[i] = (char *) malloc(10000 * sizeof(char));        
        } else if(buff[0] == 'D'){
            int del = atoi(strstr(buff, " ")+1);
            for(int j = del; j < i; j++) {
                strcpy(ftexto[j], ftexto[j + 1]);
                if(j+1==i) {
                    strcpy(ftexto[j], "");
                    strcpy(ftexto[i], "");
                }
            }
            i--;
            free(ftexto[i + 1]);
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%s", ftexto[j]);
    }
    
    free(ftexto);

    fclose(fptr);

    return 0;
}