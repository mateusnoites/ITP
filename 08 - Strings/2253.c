#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 500

#define MIN_SIZE 6
#define MAX_SIZE 32

int validation1(char password[], int size) {
    int up, low, digit;
    up = low = digit = 0;

    for (int i = 0; i < size; i++) {
        if (up && low && digit) break;

        if (up == 0 && isupper(password[i])) {
            up = 1;
        } else if (low == 0 && islower(password[i])) {
            low = 1;
        } else if (digit == 0 && isdigit(password[i])) {
            digit = 1;
        }
    }

    return (up && low && digit);
}

int validation2(char password[], int size) {
    int isAlphanumeric = 1;

    for(int i = 0; i < size; i++) {
        if (!isalnum(password[i])) {
            isAlphanumeric = 0;
            break;
        }
    }

    return isAlphanumeric;
}

int validation3(char password[], int size) {
    if (size >= MIN_SIZE && size <= MAX_SIZE) return 1;
    return 0;
}

int main() {
    char password[TAM]= {0};

    while(fgets(password, TAM, stdin) != NULL) {
        password[strcspn(password, "\n")] = '\0';

        int size = strlen(password);

        int isValid = validation1(password, size) && validation2(password, size) && validation3(password, size);

        if (isValid) printf("Senha valida.\n");
        else printf("Senha invalida.\n");
    }

    return 0;
}