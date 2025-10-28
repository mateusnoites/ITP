#include <stdio.h>
#include <string.h>

#define TAM 1000

void clean_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int n;
    char text[TAM] = {0};
    scanf("%d", &n);

    clean_buffer();

    for (int instance = 0; instance < n; instance++) {
        fgets(text, TAM, stdin);
        text[strcspn(text, "\n")] = '\0';

        char* chunk;

        int printed = 0;

        chunk = strtok(text, " ");

        while(chunk != NULL){
            printf("%c", chunk[0]);
            printed = 1;

            chunk = strtok(NULL, " ");
        }

        if (printed) printf("\n");
    }

    return 0;
}