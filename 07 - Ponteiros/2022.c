#include <stdio.h>

struct Gift {
    char name[50];
    double price;
    char preference;
};

int alphabetIndex(char letter) {
    char alphabetCAPS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alphabetLOW[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26; i++)
        if (
            alphabetCAPS[i] == letter
                ||
            alphabetLOW[i] == letter
        ) 
        return i;
}

void sortByPreference(struct Gift *list, int size) {
    int i, j;
    int switched;
    
    for (i = 0; i < size - 1; i++) {
        switched = 0;
        
        for (j = 0; j < size - i - 1; j++) {
            if ((list + j)->preference < (list + (j+1))->preference) {
                struct Gift temp = *(list + j);
                *(list + j) = *(list + (j+1));
                *(list + (j+1)) = temp;
                
                switched = 1;
            }
        }

        if (switched == 0) {
            break;
        }
    }
}

void sortByPrice(struct Gift *list, int size) {
    int i, j;
    int switched;
    
    for (i = 0; i < size - 1; i++) {
        switched = 0;
        
        for (j = 0; j < size - i - 1; j++) {

            char pref_1 = (list + j)->preference;
            char pref_2 = (list + (j+1))->preference;

            if (pref_1 == pref_2) {
                if ((list + j)->price > (list + (j+1))->price) {
                    struct Gift temp = *(list + j);
                    *(list + j) = *(list + (j+1));
                    *(list + (j+1)) = temp;
                    
                    switched = 1;
                }
            }
        }

        if (switched == 0) {
            break;
        }
    }
}

void sortAlphabetic(struct Gift *list, int size) {
    int i, j;
    int switched;
    
    for (i = 0; i < size - 1; i++) {
        switched = 0;
        
        for (j = 0; j < size - i - 1; j++) {

            char pref_1 = (list + j)->preference;
            char pref_2 = (list + (j+1))->preference;

            char price_1 = (list + j)->price;
            char price_2 = (list + (j+1))->price;


            if (pref_1 == pref_2 && price_1 == price_2) {
                if (alphabetIndex((list + j)->name[0]) > alphabetIndex((list + (j+1))->name[0])) {
                    struct Gift temp = *(list + j);
                    *(list + j) = *(list + (j+1));
                    *(list + (j+1)) = temp;
                    
                    switched = 1;
                }
            }
        }

        if (switched == 0) {
            break;
        }
    }
}

int main() {
    char name[50];
    int gift_ammount;

    while (scanf("%s %d", name, &gift_ammount) != EOF) {
        struct Gift gifts[gift_ammount];

        for (int i = 0; i < gift_ammount; i++) {
            scanf(" %[^\n]s", gifts[i].name);
            scanf(" %lf %hhd", &gifts[i].price, &gifts[i].preference);
        }

        sortByPreference(gifts, gift_ammount);
        sortByPrice(gifts, gift_ammount);
        sortAlphabetic(gifts, gift_ammount);

        printf("Lista de %s\n", name);
        for (int i = 0; i < gift_ammount; i++) {
            printf("%s - R$%.2lf\n", gifts[i].name, gifts[i].price);
        }
        printf("\n");
    }

    return 0;
}