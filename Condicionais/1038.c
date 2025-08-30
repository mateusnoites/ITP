#include <stdio.h>

int main () {
    int cod, qtd;
    double vlr, total;

    scanf("%d %d", &cod, &qtd);

    if (cod == 1) {
        vlr = 4.0;
    } else if (cod == 2) {
        vlr = 4.5;
    } else if (cod == 3) {
        vlr = 5.0;
    } else if (cod == 4) {
        vlr = 2.0;
    } else if (cod == 5) {
        vlr = 1.5;
    }

    total = vlr * qtd;

    printf("Total: R$ %.2lf\n", total);

    return 0;
}
