#include <stdio.h>
#include <math.h>

int main() {
    int a, b, porcentagem, area;
    double area_total, lado;
    scanf(" %d", &a);
    while (a != 0) {
        scanf(" %d %d", &b, &porcentagem);
        area = a * b;
        area_total = (100 * area) / porcentagem;
        lado = sqrt(area_total);
        printf("%d\n", (int)lado);
        scanf(" %d", &a);
    }
    return 0;
}
