#include <stdio.h>

int main() {
    int n[10], v;

    scanf("%d", &v);
    n[0] = v;
    printf("N[0] = %d\n", v);

    for(int i = 1; i < 10; i++) {
        n[i] = n[i-1] * 2;
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}