#include <stdio.h>
#include <string.h>

#define TAM 500

int main() {
    char sentence[TAM] = {0};

    while(fgets(sentence, TAM, stdin)) {
        int complete_line = (strchr(sentence, '\n') != NULL);

        sentence[strcspn(sentence, "\n")] = '\0';
        
        if (strlen(sentence) == 0) continue;

        int size = strlen(sentence);
        char new_sentence[TAM];
        int j = 0;
        
        for (int i = 0; i < size; i++) {
            if (!((sentence[i] == ' ') && (sentence[i + 1] == '.' || sentence[i + 1] == ','))) {
                new_sentence[j++] = sentence[i];
            }
        }

        new_sentence[j] = '\0';

        printf("%s", new_sentence);

        if (complete_line) {
            printf("\n");
        }
    }

    return 0;
}