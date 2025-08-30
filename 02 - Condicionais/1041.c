#include <stdio.h>

int main() {
    double x,y;

    scanf("%lf %lf", &x, &y);

    if (x == 0 && y ==0) {
        printf("Origem\n");
    } else if (x == 0 || y == 0) {
        printf(x == 0 ? "Eixo Y\n" : "Eixo X\n");
    } else {
        if (x > 0 && y > 0) {
            printf("Q1\n");
        } else if (x < 0 && y > 0) {
            printf("Q2\n");
        } else if (x < 0 && y < 0) {
            printf("Q3\n");
        } else if (x > 0 && y < 0) {
            printf("Q4\n");
        }
    }

    return 0;
}
