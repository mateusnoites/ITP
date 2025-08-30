#include <stdio.h>

int main() {
    int num, pos, maior;

    for(int i = 1; i <= 100; i++) {
        scanf("%d", &num);
        if (i == 1 || num > maior) {
            maior = num;
            pos = i;
        }
    }

    printf("%d\n%d\n", maior, pos);
}