#include <stdio.h>

void swap(int list[], int pos1, int pos2) {
    int aux = list[pos1];

    list[pos1] = list[pos2];

    list[pos2] = aux;
}

int bubblesort(int array[], int l) {
    int check;

    do {
        check = 1;

        for(int i = 0; i < l - 1; i++) {
            if(array[i] > array[i+1]) {
                check = 0;
                swap(array, i, i+1);
            }
        }
    } while(check == 0);
}

int main(){
    int N;

    scanf("%d", &N);

    int numbers[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    bubblesort(numbers, N);

    for (int i = 0; i < N; i++) {
        if(i == N - 1) {
            printf("%d\n", numbers[i]);
        } else {
            printf("%d ", numbers[i]);
        }
    }
    
    return 0;
}