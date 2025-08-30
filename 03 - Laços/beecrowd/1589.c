#include <stdio.h>

int main() {
    int r1, r2, t, raio;
    scanf(" %d", &t);
    for (int i = 0; i < t; i++) {
        scanf(" %d %d", &r1, &r2);
        raio = r1 + r2;
        printf("%d\n", raio);
    }
    return 0;
} 