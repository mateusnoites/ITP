#include <stdio.h>

int main () {
    int ini, fim, duracao;

    scanf("%i %i", &ini, &fim);

    if (ini < fim) {
        duracao = fim - ini;
        printf("O JOGO DUROU %i HORA(S)\n", duracao);
    } else if (ini == fim) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else {
        duracao = (fim + 24) - ini;
        printf("O JOGO DUROU %i HORA(S)\n", duracao);
    }

    return 0;
}
