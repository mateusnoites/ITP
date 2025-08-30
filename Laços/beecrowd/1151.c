#include <stdio.h>

int main() {
    int n, anterior, anterior2, atual;

    anterior2 = 0;
    anterior = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i == 0) printf("%d ", anterior2);
        else if (i == 1) printf("%d ", anterior);
        else {
            atual = anterior2 + anterior;

            if (i == n - 1) printf("%d\n", atual);
            else printf("%d ", atual);
            anterior2 = anterior;
            anterior = atual;
        }
    }

    return 0;
}