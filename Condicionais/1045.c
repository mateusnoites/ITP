#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, e, f;

    scanf("%lf %lf %lf", &d, &e, &f);

    if (d > e && d > f) { // D É O MAIOR
        a = d;
        if (e > f) {
            b = e;
            c = f;
        } else {
            b = f;
            c = e;
        }
    } else if (e > d && e > f) { // E É O MAIOR
        a = e;
        if (d > f) {
            b = d;
            c = f;
        } else {
            b = f;
            c = d;
        }
    } else { // F É O MAIOR
        a = f;
        if (e > d) {
            b = e;
            c = d;
        } else {
            b = d;
            c = e;
        }
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO RETANGULO\n");
        } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || b == c || a == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
