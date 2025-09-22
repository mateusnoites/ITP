#include <stdio.h>

double sum(double matrix[12][12], int column) {
    double total = 0;

    for (int i = 0; i < 12; i++) {
        total += matrix[i][column];
    }

    return total;
}

double average(double matrix[12][12], int column) {
    return sum(matrix, column) / 12;
}

int main() {
    int column;
    char operation;
    double matrix[12][12];

    scanf("%d %c", &column, &operation);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++)
            scanf(" %lf", &matrix[i][j]);
    }

    switch(operation) {
        case 'S' : printf("%.1lf\n", sum(matrix, column)); break;
        case 'M' : printf("%.1lf\n", average(matrix, column)); break;
    }

    return 0;
}