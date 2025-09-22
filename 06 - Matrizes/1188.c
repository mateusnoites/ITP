#include <stdio.h>

double sum(double matrix[12][12]) {
    double total = 0;

    for (short line = 7; line < 12; line++) {
        short start = 12 - line;
        short end = line - 1;
        
        for (short column = start; column <= end; column++) {
            total += matrix[line][column];
        }
    }

    return total;
}

double average(double matrix[12][12]) {
    return sum(matrix) / 30;
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