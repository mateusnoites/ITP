#include <stdio.h>
#include <math.h>

double distance(int xa, int ya, int za, int xb, int yb, int zb) {
    return sqrt(pow(xb - xa, 2) + pow(yb - ya, 2) + pow(zb - za, 2));
}

int main() {
    int ships_ammount;
    scanf("%d", &ships_ammount);
    int positions[ships_ammount][3];
    
    for (int i = 0; i < ships_ammount; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %d", &positions[i][j]);
        }
    }

    for (int i = 0; i < ships_ammount; i++) {
        double shortest_distance = 9999;
        for (int j = 0; j < ships_ammount; j++) {
            if (i == j) continue;
            double dist = distance(positions[i][0], positions[i][1], positions[i][2], positions[j][0], positions[j][1], positions[j][2]);
            if (dist < shortest_distance) shortest_distance = dist;
        }
        if (shortest_distance <= 20) printf("A\n");
        else if (shortest_distance > 20 && shortest_distance <= 50) printf("M\n");
        else if (shortest_distance > 50) printf("B\n");
    }

    return 0;
}