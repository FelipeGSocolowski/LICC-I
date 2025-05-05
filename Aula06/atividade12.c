#include <stdio.h>

int swap(int *num1, int *num2) {
    int temp = *num1;

    *num1 = *num2;

    *num2 = temp;
    
    return 0;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int *ca = &a, *cb = &b;

    swap(ca, cb);

    printf("%d %d\n", a, b);

    return 0;
}