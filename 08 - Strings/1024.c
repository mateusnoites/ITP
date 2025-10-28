#include <stdio.h>
#include <string.h>

void strInvert(char* text) {
    char old_text[strlen(text) + 1];
    strcpy(old_text, text);

    for(int i = strlen(text) - 1; i >= 0; i--) {
        int j = strlen(text) - (i + 1);

        text[j] = old_text[i];
    }
}

int main() {
    short n;
    char text[1001] = {0};
    scanf("%hd ", &n);

    for (int i = 0; i < n; i++) {
        fgets(text, 1001, stdin);
        text[strlen(text) - 1] = '\0';
        int text_size = strlen(text);
        char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        // Primeira passada
        for (int char_index = 0; char_index < text_size; char_index++) {
            if (strchr(alphabet, text[char_index]) != NULL)
                text[char_index] += 3;
        }

        // Segunda passada
        strInvert(text);

        // Terceira passada
        for (int char_index = text_size / 2; char_index < text_size; char_index++) {
            text[char_index]--;
        }

        printf("%s\n", text);
    }

    return 0;
}