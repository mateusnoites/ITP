#include <stdio.h>

int main() {
    short order;

    // hd é o formatador para sinalizar um short.
    // EOF sinaliza o fim do arquivo de testes.
    while(scanf(" %hd", &order) != EOF) {
        int matrix[order][order];
        for (short i = 0; i < order; i++) {
            for (short j = 0; j < order; j++) {
                if (i == j) {
                    matrix[i][j] = order % 2 != 0 && i == order / 2 ? 2 : 1;
                } else if (i + j == order - 1) {
                    matrix[i][j] = 2;
                } else {
                    matrix[i][j] = 3;
                }
            }
        }

        for (short i = 0; i < order; i++) {
            for (short j = 0; j < order; j++) {
                printf("%d", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}