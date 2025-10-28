#include <stdio.h>
#include <string.h>

#define TAM 105

int main() {
    char sentence[TAM] = {0};
    char biggest[TAM] = {0};

    while (fgets(sentence, TAM, stdin) && strcmp(sentence, "0\n") != 0 && strcmp(sentence, "0") != 0){
        sentence[strcspn(sentence, "\n")] = '\0';

        char *word = strtok(sentence, " ");

        char result[TAM] = {0};
        char size_text[4] = {0};

        while (word != NULL) {
            sprintf(size_text, "%d", strlen(word));
            strcat(result, size_text);
            strcat(result, "-");

            if(strlen(word) >= strlen(biggest))
                strcpy(biggest, word);

            word = strtok(NULL, " ");
        }

        result[strlen(result) - 1] = '\0';

        printf("%s\n", result);
    }

    printf("\nThe biggest word: %s\n", biggest);

    return 0;
}