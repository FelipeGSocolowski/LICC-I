#include <stdio.h>
#include <math.h>

int main(){
    long double n;

    scanf("%Lf", &n);

    int i = 1, z = 0;

    while(n >= pow(5, i)) {
        z += floor(n / pow(5, i));

        i++;
    }

    printf("%d\n", z);

    return 0;
}