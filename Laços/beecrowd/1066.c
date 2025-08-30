#include <stdio.h>

int main() {
    int positivos, negativos, pares, impares, num;

    positivos = negativos = pares = impares = 0;

    for (int i = 0; i < 5; i++) {
        scanf(" %d", &num);
        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        if (num % 2 == 0) pares++;
        else impares++;
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}