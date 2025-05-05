#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, *ptr;
    
    ptr = (int*) malloc(2 * sizeof(int));

    scanf("%d %d", &n1, &n2);

    printf("%d %d\n", n1, n2);

    *(ptr + 0) = n1;

    *(ptr + 1) = n2;

    n1 = *(ptr + 1);

    n2 = *(ptr + 0);

    printf("%d %d\n", n1, n2);

    free(ptr);

    return 0;
}