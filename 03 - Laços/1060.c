#include <stdio.h>

int main() {
    int positivos = 0;
    double num;

    for (int i = 0; i < 6; i++) {
        scanf(" %lf", &num);
        if (num > 0) positivos++;
    }

    printf("%d valores positivos\n", positivos);

    return 0;
}