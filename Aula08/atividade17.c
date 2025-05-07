#include <stdio.h>

int main() {
    int vendas[31], biggest = 0;

    for(int i = 0; i < 31; i++) {
        scanf("%d", &vendas[i]);
    }

    for (int i = 0; i < 31; i++) {    
        if (vendas[i] > biggest) {
            biggest = vendas[i];
        }
    }

    printf("%d\n", biggest);

    for(int i = 0; i < 31; i++) {
        if(vendas[i] == biggest) {
            printf("%d\n", i+1);
        }
    }
    
    return 0;
}