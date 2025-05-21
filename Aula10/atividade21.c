#include <stdio.h>

int main() {
    int q, alunos;

    scanf("%d %d", &q, &alunos);

    char res[alunos + 1][q + 1];

    for(int i = 0; i <= alunos; i++) {
        scanf("%s", res[i]);
    }

    for (int i = 1; i <= alunos; i++) {
        double nota = 0;

        for(int j = 0; j < q; j++) {
            if(res[0][j] == res[i][j]) {
                nota += 10/(double)q;
            }
        }

        printf("%.2lf\n", nota);
    }

    return 0;
}