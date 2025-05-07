#include <stdio.h>

int main() {
    int length, check = 0;

    scanf("%d", &length);
    
    char titulo[100000];

    scanf("%s", titulo);

    for (int i = 97; i < 123; i++) {
        int num = 0;

        for(int j = 0; j < length ; j++) {
            if(titulo[j] == (char)i) {
                num++;
            }
        }

        if(num % 2 == 1) {
            check++;
        }
    }

    if ((length % 2 == 0 && check == 0) || (length % 2 == 1 && check == 1)) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }
    
    return 0;
}