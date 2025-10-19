#include <stdio.h>

struct Team {
    char name[50];
    int score;
};

struct Game {
    char team1_name[50];
    char team2_name[50];
    int team1_goals;
    int team2_goals;
};

int compare_strings(char *a, char *b) {
    for (int i = 0; *(a + i) != '\0'; i++) {
        if (*(a + i) != *(b + i)) return 0;
    }
    return 1;
}

int calc_points(int goals_self, int goals_opponent) {
    int points = 3 * goals_self;

    if (goals_self == goals_opponent) points++;
    else if (goals_self > goals_opponent) points += 5;

    return points;
}

void add_points(char team[50], int points, struct Team *teams, int team_ammount) {
    for (int i = 0; i < team_ammount; i++) {
        if (compare_strings(team, (teams + i)->name)) {
            (teams + i)->score += points;
            return;
        }
    }
}

int main() {
    int team_ammount;

    while(scanf("%d", &team_ammount) == 1 && team_ammount != 0) {
        // Preenchendo com as entradas
        struct Team teams[team_ammount];
        struct Game games[team_ammount/2];
        
        for (int i = 0; i < team_ammount; i++)
            scanf(" %s %d", teams[i].name, &teams[i].score);

        for (int i = 0; i < team_ammount / 2; i++) {
            scanf(" %s %d-%d %s",
                games[i].team1_name,
                &games[i].team1_goals,
                &games[i].team2_goals,
                games[i].team2_name
            );

            // Cálculo dos pontos de cada time
            int points_team_1 = calc_points(games[i].team1_goals, games[i].team2_goals);
            int points_team_2 = calc_points(games[i].team2_goals,games[i].team1_goals);

            // Adição dos pontos de cada time
            add_points(games[i].team1_name, points_team_1, teams, team_ammount);
            add_points(games[i].team2_name, points_team_2, teams, team_ammount);
        }

        int winner, score = 0;

        for (int i = 0; i < team_ammount; i++) {
            if (teams[i].score > score) {
                score = teams[i].score;
                winner = i;
            }
        }

        if (compare_strings(teams[winner].name, "Sport")) {
            printf("O Sport foi o campeao com %d pontos :D\n", score);
        } else {
            printf("O Sport nao foi o campeao. O time campeao foi o %s com %d pontos :(\n",
                teams[winner].name,
                score
            );
        }

        printf("\n");
    }
    
    return 0;
}