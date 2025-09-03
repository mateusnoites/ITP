#include <stdio.h>

void imprime_linha(int n) {
    printf("%d %d %d PUM\n", n, n + 1, n + 2);
}

int main() {
    int n;

    scanf("%d", &n);

    int contador = 1;
    for (int i = 0; i < n; i++) {
        imprime_linha(contador);
        contador += 4;
    }

    return 0;
}