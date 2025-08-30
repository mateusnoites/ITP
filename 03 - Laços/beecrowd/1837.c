#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a % b;
    if (r < 0) {
        if (b > 0) {
            r += b;
            q--;
        } else {
            r -= b;
            q++;
        }
    }
    printf("%d %d\n", q, r);
    return 0;
}
