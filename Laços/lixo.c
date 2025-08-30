#include <stdio.h>

int main() {
    char material;
    int vidro, plastico, papel, organicos, metal, eletronicos;

    vidro = plastico = papel = organicos = metal = eletronicos = 0;

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &material);

        switch(material) {
            case 'V' : vidro++; break;
            case 'L' : plastico++; break;
            case 'P' : papel++; break;
            case 'O' : organicos++; break;
            case 'M' : metal++; break;
            case 'E' : eletronicos++; break;
        }
    }

    printf("Vidro: %d\n", vidro);
    printf("Plastico: %d\n", plastico);
    printf("Papel: %d\n", papel);
    printf("Organicos: %d\n", organicos);
    printf("Metal: %d\n", metal);
    printf("Eletronicos: %d\n", eletronicos);

    return 0;
}