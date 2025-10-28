#include <stdio.h>
#include <string.h>

#define TAM 51

void clean_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int n, key;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        clean_buffer();
        char text[TAM];
        fgets(text, TAM, stdin);
        text[strcspn(text, "\n")] = '\0';
        if (strlen(text) == 0) continue;

        int text_len = strlen(text);

        scanf(" %d", &key);

        char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        for (int c = 0; c < text_len; c++) {
            if (text[c] >= 'A' && text[c] <= 'Z') {
                int index = strchr(alphabet, text[c]) - alphabet;
                index = (index - key % 26 + 26) % 26;
    
                text[c] = alphabet[index];
            }
        }

        text[text_len] = '\0';

        printf("%s\n", text);
    }

    return 0;
}