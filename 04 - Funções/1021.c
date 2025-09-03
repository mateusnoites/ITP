#include <stdio.h>

int notas(int valor) {
    int cem = valor / 10000;
    valor %= 10000;

    int cinquenta = valor / 5000;
    valor %= 5000;

    int vinte = valor / 2000;
    valor %= 2000;

    int dez = valor / 1000;
    valor %= 1000;

    int cinco = valor / 500;
    valor %= 500;

    int dois = valor / 200;
    valor %= 200;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);

    return valor;
}

void moedas(int valor) {
    int um = valor / 100;
    valor %= 100;

    int cinquenta = valor / 50;
    valor %= 50;

    int vintecinco = valor / 25;
    valor %= 25;

    int dez = valor / 10;
    valor %= 10;

    int cinco = valor / 5;
    valor %= 5;

    int umcent = valor;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinquenta);
    printf("%d moeda(s) de R$ 0.25\n", vintecinco);
    printf("%d moeda(s) de R$ 0.10\n", dez);
    printf("%d moeda(s) de R$ 0.05\n", cinco);
    printf("%d moeda(s) de R$ 0.01\n", umcent);
}

int main() {
    double valor;
    int centavos;

    scanf("%lf", &valor);

    centavos = (int)(valor * 100);

    moedas(notas(centavos));

    return 0;
}