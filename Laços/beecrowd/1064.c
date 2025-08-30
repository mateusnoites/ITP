#include <stdio.h>

int main() {
    int positivos = 0;
    double num, media;

    for (int i = 0; i < 6; i++) {
        scanf(" %lf", &num);
        if (num > 0) {
            positivos++;
            media += num;
        };
    }

    media = media / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", media);

    return 0;
}