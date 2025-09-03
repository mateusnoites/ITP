#include <stdio.h>
#include <string.h>

void decode(char sentenca[], int posicoes) {
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char texto_decode[50]= "";

    for(int i = 0; i < strlen(sentenca); i++) {
        int posicao = sentenca[i] - 'A';
        posicao -= posicoes;
        if (posicao < 0) posicao += 26;
        int tamanho = strlen(texto_decode);
        texto_decode[tamanho] = alfabeto[posicao];
        texto_decode[tamanho + 1] = '\0';
    }

    for(int i = 0; i < strlen(texto_decode); i++) {
        printf("%c", texto_decode[i]);
    }

    printf("\n");
}

int main() {
    int n;
    char sentenca[50];
    int posicoes;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", &sentenca);
        scanf(" %d", &posicoes);

        decode(sentenca, posicoes);
    }

    return 0;
}