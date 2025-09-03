#include <stdio.h>
#include <string.h>

int contar_leds(char v[]) {
    int soma_leds = 0;

    for(int i = 0; i < strlen(v); i++) {
        switch(v[i]) {
            case '1': soma_leds += 2; break;
            case '2': soma_leds += 5; break;
            case '3': soma_leds += 5; break;
            case '4': soma_leds += 4; break;
            case '5': soma_leds += 5; break;
            case '6': soma_leds += 6; break;
            case '7': soma_leds += 3; break;
            case '8': soma_leds += 7; break;
            case '9': soma_leds += 6; break;
            case '0': soma_leds += 6; break;
        }
    }

    return soma_leds;
}

int main() {
    int n;
    char v[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %s", &v);
        printf("%d leds\n", contar_leds(v));
    }

    return 0;
}