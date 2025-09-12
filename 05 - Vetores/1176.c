#include <stdio.h>

int main() {
    unsigned long long int fib[61];
    int n, i, t;

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i <= 60; i++) fib[i] = fib[i-1] + fib[i-2];

    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf(" %d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }

    return 0;
}