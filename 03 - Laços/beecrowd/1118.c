#include <stdio.h>

int main() {
    int res = 1;
    double n1, n2, media;

    while (res == 1) {
        scanf("%lf", &n1);
    
        while (n1 < 0 || n1 > 10) {
            printf("nota invalida\n");
            scanf("%lf", &n1);
        }
    
        scanf("%lf", &n2);
    
        while (n2 < 0 || n2 > 10) {
            printf("nota invalida\n");
            scanf("%lf", &n2);
        }
    
        media = (n1 + n2) / 2;
    
        printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n", media);
    
        scanf("%d", &res);
        while (res != 1 && res != 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &res);
        }
    }

    return 0;
}