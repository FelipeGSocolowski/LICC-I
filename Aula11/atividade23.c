#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, b;

    scanf("%d %d", &n, &b);

    char *album[n];

    for(int i = 0; i < n; i++) {
        album[i] = (char*)malloc(100 * sizeof(char));

        scanf(" %[^\n]s", album[i]);
    }

    for(int i = 0; i < n; i++) {
        int length = strlen(album[i]);

        for(int j = 0; j < length; j++) {
            if(96 < album[i][j] && album[i][j] < 123 && b == 1) {
                album[i][j] -= 32;
            } else if(64 < album[i][j] && album[i][j] < 91 && b == 0) {
                album[i][j] += 32;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", album[i]);
    }

    for(int i = 0; i < n; i++) {
        free(album[i]);
    }
    
    return 0;
}