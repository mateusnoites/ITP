#include <stdio.h>
#include <string.h>

void converter(int v) {
    char resultado[50] = "";
    char hexabeto[] = "0123456789ABCDEF";
    int resto;
    int tamanho;

    while(v > 0) {
        tamanho = strlen(resultado);
        int i = v % 16;
        resultado[tamanho] = hexabeto[i];
        resultado[tamanho + 1] = '\0';
        v /= 16;
    }

    for (int i = strlen(resultado) - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }

    printf("\n");
}

int main() {
    int numero;

    scanf("%d", &numero);

    converter(numero);

    return 0;
}