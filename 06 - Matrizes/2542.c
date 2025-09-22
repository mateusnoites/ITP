#include <stdio.h>

int main() {
    int attribute_ammount, drawn_attr;
    int mcard_ammount, mchosen_card;
    int lcard_ammount, lchosen_card;

    while (scanf("%d", &attribute_ammount) != EOF) {
        scanf(" %d %d", &mcard_ammount, &lcard_ammount);
        
        int marcos_cards[mcard_ammount][attribute_ammount];
        int leo_cards[lcard_ammount][attribute_ammount];

        for (int i = 0; i < mcard_ammount; i++) {
            for (int j = 0; j < attribute_ammount; j++) {
                scanf(" %d", &marcos_cards[i][j]);
            }
        }

        for (int i = 0; i < lcard_ammount; i++) {
            for (int j = 0; j < attribute_ammount; j++) {
                scanf(" %d", &leo_cards[i][j]);
            }
        }

        scanf(" %d %d", &mchosen_card, &lchosen_card);
        scanf(" %d", &drawn_attr);

        if (marcos_cards[mchosen_card - 1][drawn_attr - 1] > leo_cards[lchosen_card - 1][drawn_attr - 1])
            printf("Marcos\n");
        else if (leo_cards[lchosen_card - 1][drawn_attr - 1] > marcos_cards[mchosen_card - 1][drawn_attr - 1])
            printf("Leonardo\n");
        else
            printf("Empate\n");
    }

    return 0;
}