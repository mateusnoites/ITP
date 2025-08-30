#include <stdio.h>
#include <stdlib.h>

int main() {
    int pulo, n_canos, cano_atual, proximo_cano;
    short ganhou = 1;

    scanf("%d %d", &pulo, &n_canos);

    for (int i = 0; i < n_canos; i++) {
        if (i == 0) scanf(" %d", &cano_atual);
        else {
            scanf(" %d", &proximo_cano);

            if (abs(proximo_cano - cano_atual) > pulo) {
                ganhou = 0;
            }

            cano_atual = proximo_cano;
        }
    }

    printf(ganhou ? "YOU WIN\n" : "GAME OVER\n");

    return 0;
}