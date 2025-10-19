#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *list, int size) {
    for (int i = size; i > 1; i--) {
        int changes = 0;
        
        for (int j = 0; j < i - 1; j++) {
            if (*(list + j) > *(list + (j + 1))) {
                int temp = *(list + j);
                *(list + j) = *(list + (j + 1));
                *(list + (j + 1)) = temp;

                changes++;
            }
        }

        if (changes == 0) break;
    }
}

int main() {
    int *packages, size = 0;
    int transferring = 0;
    int temp_package;
    int running = 1;

    while (running) {
        if (transferring && scanf("Package %d", &temp_package) == 1) {
            // Lógica dos packages
            size++;
            packages = realloc(packages, sizeof(int) * size);
            packages[size - 1] = temp_package;
        } else if (transferring && scanf("%d", &transferring) == 1) {
            // imprimir cada um dos packages
            // zerar o tamanho e o conteúdo dos packages e o size.

            bubbleSort(packages, size);

            for (int i = 0; i < size; i++) {
                printf("Package %03d\n", packages[i]);
            }

            printf("\n");

            size = 0;
            free(packages);
        } else if (!transferring && scanf("%d", &transferring) == 1) {
            // Lógica para começar a transferir.
            packages = calloc(size, sizeof(int));
        } else if (scanf("%d") == EOF) {
            running = 0;
            break;
        }
    }

    return 0;
}