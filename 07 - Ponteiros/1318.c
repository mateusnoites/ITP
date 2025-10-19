#include <stdio.h>

int count_repeat(int *number_list, int size, int n) {
    int repeat = 0;

    for (int i = 1; i <= n; i++) {
        int increment = 0;

        for (int j = 0; j < size; j++) {
            if (increment > 1) break;
            if (*(number_list + j) == i) {
                increment++;
            }
        }

        if (increment > 1) repeat++;
    }

    return repeat;
}

int main() {
    int n, ticket_ammount;

    while (
        scanf("%d %d", &n, &ticket_ammount) == 2
            &&
        (n != 0 || ticket_ammount != 0)
    ) {
        int tickets[ticket_ammount];

        for (int i = 0; i < ticket_ammount; i++) {
            scanf(" %d", &tickets[i]);
        }

        printf("%d\n", count_repeat(tickets, ticket_ammount, n));
    }

    return 0;
}