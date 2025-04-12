#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a0, a1, b, d = 0, i = 0;

    scanf("%d %d", &a0, &b);

    a1 = a0;

    while((a0 + pow(-2, i) > b && b < a0) || (a0 < b && b > a0 + pow(-2, i))) {
        d += abs(a1 - (a0 + pow(-2, i)));

        a1 = a0 + pow(-2, i);

        i++;
    }

    d += abs(b - a1);

    printf("%d\n", d);

    return 0;
}