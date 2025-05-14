#include <stdio.h>

int readInt() {
    int val;

    scanf("%d", &val);

    return val;
}

double readDouble() {
    double val;

    scanf("%lf", &val);

    return val;
}

double printDouble(double val) {
    printf("%.2lf\n", val);
}

int main(){
    int N = readInt();

    double Mah = 0, notas[N];

    for (int i = 0; i < N; i++) {
        notas[i] = readDouble();
    }

    for(int i = 0; i < N; i++) {
        Mah += 1/(notas[i] + 1);
    }

    Mah = N/Mah - 1;

    printDouble(Mah);

    return 0;
}