#include <stdio.h>

int main() {
    double a, b, c, val;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        val = a + b + c;
        printf("Perimetro = %.1lf\n", val);
    } else {
        val = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", val);
    }

    return 0;
}
