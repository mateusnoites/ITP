#include <stdio.h>

int calc_porcentagem(double salario) {
    if (salario >= 0 && salario <= 400) return 15;
    else if (salario > 400 && salario <= 800) return 12;
    else if (salario > 800 && salario <= 1200) return 10;
    else if (salario > 1200 && salario <= 2000) return 7;
    else if (salario > 2000) return 4;

    return -1;
}

double calc_reajuste(double salario, int porcentagem) {
    return salario * (porcentagem / 100.0);
}

double calc_novo(double salario, double reajuste) {
    return salario + reajuste;
}

int main() {
    double salario, reajuste, novo_salario;
    int porcentagem;

    scanf("%lf", &salario);

    porcentagem = calc_porcentagem(salario);
    reajuste = calc_reajuste(salario, porcentagem);
    novo_salario = calc_novo(salario, reajuste);

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %\n", porcentagem);

    return 0;
}