#include <stdio.h>

int main() {
    short order;

    // hd é o formatador para sinalizar um short.
    // EOF sinaliza o fim do arquivo de testes.
    while(scanf(" %hd", &order) != EOF) {
        int matrix[order][order];
        int square_start = order / 3;
        int square_end = order - (order / 3) - 1;
        int center = order / 2;
        for (short i = 0; i < order; i++) {
            for (short j = 0; j < order; j++) {
                if (i == j)
                    // diagonal principal
                    matrix[i][j] = 2; 
                else if (i + j == order - 1)
                    // diagonal secundaria
                    matrix[i][j] = 3;
                else
                    // o resto :)
                    matrix[i][j] = 0;

                if (i >= square_start && i <= square_end && j >= square_start && j <= square_end)
                    // quadrado
                    matrix[i][j] = 1;
                if (i == j && i == center)
                    // centro
                    matrix[i][j] = 4;
            }
        }

        for (short i = 0; i < order; i++) {
            for (short j = 0; j < order; j++)
                printf("%d", matrix[i][j]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}