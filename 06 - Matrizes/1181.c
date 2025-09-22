#include <stdio.h>

double sum(double matrix[12][12], int row) {
    double total = 0;

    for (int i = 0; i < 12; i++) {
        total += matrix[row][i];
    }

    return total;
}

double average(double matrix[12][12], int row) {
    return sum(matrix, row) / 12;
}

int main() {
    int row;
    char operation;
    double matrix[12][12];

    scanf("%d %c", &row, &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf(" %lf", &matrix[i][j]);
    }

    switch(operation) {
        case 'S' : printf("%.1lf\n", sum(matrix, row)); break;
        case 'M' : printf("%.1lf\n", average(matrix, row)); break;
    }

    return 0;
}