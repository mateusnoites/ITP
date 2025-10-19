#include <stdio.h>

int abs(int a) {
    return a < 0 ? -a : a;
}

int analyze(int n, int b, int *balls) {
    short possible = 1;

    for (int index = 0; index <= n; index++) {
        int valid = 0;
        for (int ball_1 = 0; ball_1 < b; ball_1++) {
            if (valid) break;
            for (int ball_2 = 0; ball_2 < b; ball_2++) {
                if (valid) break;
                if (abs(*(balls + ball_2) - *(balls + ball_1)) == index) valid = 1;
            }
        }
        if (!valid) {possible = 0; break;}
    }

    return possible;
}

int main() {
    int n, b;

    while(scanf("%d %d", &n, &b) == 2 && (n != 0 || b != 0)) { // para ler até q ambos sejam 0
        int balls[b];

        for (int i = 0; i < b; i++) scanf(" %d", &balls[i]);

        printf(analyze(n, b, balls) ? "Y\n" : "N\n");
    }

    return 0;
}