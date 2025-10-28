#include <stdio.h>
#include <string.h>

int check_word(char word[], char accepted[3][6]) {
    if (strlen(word) == 5) return 3;

    for (int i = 0; i < 2; i++) {
        int matches = 0;
        int len = strlen(accepted[i]);

        for (int j = 0; j < strlen(word); j++) {
            if (word[j] == accepted[i][j]) matches++;
        }

        if (matches >= len - 1) return i + 1;
    }

    return 0;
}

int main() {
    int n;
    char accepted_words[3][6] = {"one", "two", "three"};
    char word[10] = {0};
    scanf("%d ", &n);

    for (int instance = 0; instance < n; instance++) {
        fgets(word, 10, stdin);
        word[strcspn(word, "\n")] = '\0';

        int word_number = check_word(word, accepted_words);

        if(word_number >= 1 && word_number <= 3) {
            printf("%d\n", word_number);
        }
    }

    return 0;
}