#include <stdio.h>

double sum(double matrix[12][12]) {
    double total = 0;

    for (unsigned short i = 0; i < 12; i++) {
        for (short m = 10 - i; m >= 0; m--) {
            total += matrix[i][m];
        }
    }

    return total;
}

double average(double matrix[12][12]) {
    return sum(matrix) / 66;
}

int main() {
    char operation;
    double matrix[12][12];

    scanf("%c", &operation);

    for (unsigned short i = 0; i < 12; i++) {
        for (unsigned short j = 0; j < 12; j++)
            scanf(" %lf", &matrix[i][j]);
    }

    switch(operation) {
        case 'S' : printf("%.1lf\n", sum(matrix)); break;
        case 'M' : printf("%.1lf\n", average(matrix)); break;
    }

    return 0;
}