#include <stdio.h>
#include <string.h>

#define TAM 9
#define SHELDON 1
#define RAJESH 0

typedef enum {
    PEDRA,
    PAPEL,
    TESOURA,
    LAGARTO,
    SPOCK
} Play;

int find_index(Play *array, int target) {
    for (int i = 0; i < 2; i++) {
        if (*(array + i) == target) return i;
    }
    return -1;
}

int contains(Play array[], int target1, int target2) {
    int first = 0, second = 0;

    for (int i = 0; i < 2; i++) {
        if (array[i] == target1) first = 1;
        else if (array[i] == target2) second = 1;
    }

    if (first && second) return 1;

    return 0;
}


int check_winner(Play plays[]) {
    if (contains(plays, TESOURA, PAPEL)) {
        return find_index(plays, TESOURA);
    } else if (contains(plays, PEDRA, PAPEL)) {
        return find_index(plays, PAPEL);
    } else if (contains(plays, PEDRA, LAGARTO)) {
        return find_index(plays, PEDRA);
    } else if (contains(plays, LAGARTO, SPOCK)) {
        return find_index(plays, LAGARTO);
    } else if (contains(plays, TESOURA, SPOCK)) {
        return find_index(plays, SPOCK);
    } else if (contains(plays, TESOURA, LAGARTO)) {
        return find_index(plays, TESOURA);
    } else if (contains(plays, LAGARTO, PAPEL)) {
        return find_index(plays, LAGARTO);
    } else if (contains(plays, PAPEL, SPOCK)) {
        return find_index(plays, PAPEL);
    } else if (contains(plays, PEDRA, SPOCK)) {
        return find_index(plays, SPOCK); 
    } else if (contains(plays, PEDRA, TESOURA)) {
        return find_index(plays, PEDRA);
    } else {
        return -1;
    }
}

Play playType(char play[TAM]) {
    if (strcmp(play, "pedra") == 0) return PEDRA;
    else if (strcmp(play, "papel") == 0) return PAPEL;
    else if (strcmp(play, "tesoura") == 0) return TESOURA;
    else if (strcmp(play, "lagarto") == 0) return LAGARTO;
    else if (strcmp(play, "spock") == 0) return SPOCK;

    return -1;
}

int main() {
    int n;
    char sheldon_play[TAM] = {0};
    char rajesh_play[TAM] = {0};
    scanf("%d ", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", rajesh_play, sheldon_play);

        Play plays[2];

        plays[0] = playType(rajesh_play);
        plays[1] = playType(sheldon_play);

        int winner;

        if (plays[0] == plays[1]) winner = -1;
        else winner = check_winner(plays);

        if (winner == SHELDON) printf("sheldon\n");
        else if (winner == RAJESH) printf("rajesh\n");
        else printf("empate\n");
    }

    return 0;
}