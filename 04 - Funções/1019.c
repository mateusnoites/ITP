#include <stdio.h>

int converter(int n) {
    int horas = n / 3600;
    int minutos = (n % 3600) / 60;
    int segundos = n % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}

int main() {
    int n;
    scanf("%d", &n);
    converter(n);

    return 0;
}