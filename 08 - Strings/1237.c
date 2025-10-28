#include <stdio.h>
#include <string.h>

#define TAM 51

int main() {
    char first[TAM], second[TAM];

    while (1) {
        if (!fgets(first, TAM, stdin))
            break;
        first[strcspn(first, "\n")] = '\0';
        if (strlen(first) == 0)
            continue;
        
        while (fgets(second, TAM, stdin)) {
            second[strcspn(second, "\n")] = '\0';
            if (strlen(second) != 0)
                break;
        }


        if (feof(stdin))
            break;

        int len1 = strlen(first);
        int len2 = strlen(second);

        if (len1 > len2) {
            char temp[TAM];
            strcpy(temp, first);
            strcpy(first, second);
            strcpy(second, temp);

            int tempLen = len1;
            len1 = len2;
            len2 = tempLen;
        }

        int max_len = 0;
        int dp[TAM][TAM] = {0};

        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                if (first[i - 1] == second[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    if (dp[i][j] > max_len)
                        max_len = dp[i][j];
                }
            }
        }

        printf("%d\n", max_len);
    }

    return 0;
}
