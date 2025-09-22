#include <stdio.h>

int min(int numbers[], short size) {
    int minimum = numbers[0];

    for (int i = 0; i < size; i++) {
        if (numbers[i] < minimum) minimum = numbers[i];
    }

    return minimum;
}

int main() {
    unsigned short order;

    while (scanf("%d", &order) && order != 0) {
        int matrix[order][order];

        for (int i = 0; i < order; i++) {
            for (int j = 0; j < order; j++) {
                int dist_top = i;
                int dist_bot = (order - 1) - i;
                int dist_left = j;
                int dist_right = (order - 1) - j;
                int dists[4] = {dist_top, dist_bot, dist_left, dist_right};

                matrix[i][j] = min(dists, 4) + 1;
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