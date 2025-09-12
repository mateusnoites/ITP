#include <stdio.h>

int main() {
    int n[20], auxiliar;
    int j = 19;

    for (int i = 0; i < 20; i++) scanf("%d", &n[i]);

    for (int i = 0; i < 10 && j > 9; i++) {
        auxiliar = n[i];
        n[i] = n[j];
        n[j] = auxiliar;
        j--;
    }

    for (int i = 0; i < 20; i++) printf("N[%d] = %d\n", i, n[i]);

    return 0;
}