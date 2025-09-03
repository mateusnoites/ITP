#include <stdio.h>

int diferenca(int a, int b) { return a-b; }

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", diferenca(n, m));

    return 0;
}