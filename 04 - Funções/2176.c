#include <stdio.h>
#include <string.h>

int contar_um(char texto[]) {
    int contagem;
    char caractere;

    for(int i = 0; i < strlen(texto); i++) {
        caractere = texto[i];
        if(caractere == '1') contagem++;
    }

    return contagem;
}

void bitextra(char mensagem[]) {
    int contagem = contar_um(mensagem);
    int tamanho = strlen(mensagem);

    if (contagem % 2 == 0) {
        mensagem[tamanho] = '0';
    } else {
        mensagem[tamanho] = '1';
    }

    mensagem[tamanho + 1] = '\0';

    printf("%s\n", mensagem);
}

int main() {
    char s[150];

    scanf("%s", &s);
    bitextra(s);

    return 0;
}