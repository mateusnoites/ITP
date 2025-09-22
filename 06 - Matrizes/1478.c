#include <stdio.h>

int main() {
    int order, value;

    while (scanf(" %d", &order) && order != 0) {
        int matrix[order][order];

        for (int col = 0; col < order; col++) {
            value = col + 1;
            int have_number_one = 0;
            for (int line = 0; line < order; line++) {
                matrix[line][col] = value;
                if (value == 1) have_number_one = 1;
                value = value > 1 && !(have_number_one) ? value - 1 : value + 1;
            }
        }

        for (int i = 0; i < order; i++) {
                for (int j = 0; j < order; j++) {
                    printf("%3d", matrix[i][j]);
                    if (j < order - 1) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            printf("\n");
    }

    return 0;
}