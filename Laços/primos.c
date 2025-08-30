#include <stdio.h>

int main() {
    int ini, fim;

    scanf("%d %d", &ini, &fim);

    for (int a = ini; a <= fim; a++) {
        int i = 2;
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                i = a + 1;
            }
        }
        if (i <= a) {
            printf("%d ", a);
        }
    }

    printf("\n");
    
}