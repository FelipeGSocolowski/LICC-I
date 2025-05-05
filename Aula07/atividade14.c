#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long double S = 1;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        long double fat = 1;

        for (int j = i; j > 1; j--) {
            fat *= j;
        }
        
        S += pow(-1, i) * (1/fat);
    }
    
    printf("%Lf\n", S);

    return 0;
}