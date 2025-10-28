#include <stdio.h>
#include <string.h>

#define TAM 25

int validation1(char RA[]) {
    if (RA[0] == 'R' && RA[1] == 'A') return 1;
    return 0;
}

int validation2(char RA[]) {
    if (strlen(RA + 2) == 18) return 1;
    return 0;
}

int main() {
    int n;
    char RA[TAM] = {0};
    scanf("%d ", &n);

    for (int instance = 0; instance < n; instance++) {
        fgets(RA, TAM, stdin);
        RA[strcspn(RA, "\n")] = '\0';

        int valid_RA = validation1(RA) && validation2(RA);

        if (valid_RA) {
            char number[TAM - 2] = {0};
            strcpy(number, (RA + 2));

            int i = 0;

            while (number[i] == '0') {
                i++;
            }

            printf("%s\n", number + i);
        } else {
            printf("INVALID DATA\n");
        }
    }

    return 0;
}