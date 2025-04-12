#include <stdio.h>

int main() {
    int bin;

    scanf("%4d", &bin);

    printf("%d\n", bin/1000 * 2*2*2 + (bin%1000)/100 * 2*2 + (bin%100)/10 * 2 + bin%10);

    return 0;
}