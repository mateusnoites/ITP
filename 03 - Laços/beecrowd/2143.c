#include <stdio.h>

int main() {
    int t, n, total;

    scanf("%d", &t);

    while (t != 0) {
        for (int i = 0; i < t; i++) {
            scanf(" %d", &n);
    
            if (n % 2 == 0) {
                total = 2*n - 2;
            } else {
                total = 2*n - 1;
            }
    
            printf("%d\n", total);
        }
        scanf(" %d", &t);
    }

    return 0;
}