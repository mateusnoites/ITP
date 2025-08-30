#include <stdio.h>

int main() {
    int a, b, sum = 0;

    scanf(" %d %d", &a, &b);

    while (a > 0 && b > 0) {
        if (a < b) {
            for (int i = a; i <= b; i++) {
                printf("%d ", i);
                sum += i;
            }
        } else {
            for (int i = b; i <= a; i++) {
                printf("%d ", i);
                sum += i;
            }
        }
        
        printf("Sum=%d\n", sum);
        scanf(" %d %d", &a, &b);
        sum = 0;
    }

    return 0;
}