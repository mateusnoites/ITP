#include <stdio.h>
#include <math.h>

void bhaskara(double a, double b, double c) {
    double r1, r2, delta;

    delta = (pow(b, 2)) + (-4 * a * c);

    if (delta < 0 || a == 0) {
        printf("Impossivel calcular\n");
        return;
    }

    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    bhaskara(a, b, c);

    return 0;
}