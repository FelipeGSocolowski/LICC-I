#include <stdio.h>
#include <math.h>

double calcDist(int Q, double coords[][2]) {
    double distance = 0;

    if(Q > 1) {
        for (int i = 1; i < Q; i++) {
            distance += sqrt(pow(coords[i][0]-coords[i-1][0], 2) + pow(coords[i][1]-coords[i-1][1], 2));
        }
    }

    return distance;
}

int main(){
    int N;

    scanf("%d\n", &N);

    double dist = 0, matrix[N][2];

    for(int i = 0; i < N; i++) {
        scanf("%lf %lf", &matrix[i][0], &matrix[i][1]);
    }

    dist = calcDist(N, matrix);

    printf("%.4lf\n", dist);

    return 0;
}