#include <stdio.h>
#include <math.h>

int main() {
    int n, vzs;

    while (scanf("%d", &n) != EOF) {
        vzs = (int)(log(n) / log(2));
        printf("%d\n", vzs);
    }

    return 0;
}