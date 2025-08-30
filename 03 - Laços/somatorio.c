#include <stdio.h>

int main() {
    int numero, somatorio;

    scanf("%d", &numero);

    somatorio = numero;

    while (numero >= 0) {
        printf("SOMATORIO = %d\n", somatorio);
        scanf("%d", &numero);
        somatorio += numero;
    }

    return 0;
}