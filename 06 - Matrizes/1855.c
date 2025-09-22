#include <stdio.h>

int is_path(char position) {
    return position == '.' ? 1 : 0;
}

int is_arrow(char position) {
    switch (position) {
        case '>':
            return 1;
            break;
        case 'v':
            return 2;
            break;
        case '<':
            return 3;
            break;
        case '^':
            return 4;
            break;
        default:
            return 0;
            break;
    }
}

int is_chest(char position) {
    if (position == '*') return 1;
    return 0;
}

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    char map[height][width];
    int visited[height][width];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) scanf(" %c", &map[i][j]);
            else scanf("%c", &map[i][j]);
            visited[i][j] = 0;
        }
    }

    int position_x, position_y;
    int direction = 0;
    char current_pos;
    position_x = position_y = 0;

    while(1) {
        current_pos = map[position_y][position_x];

        if (visited[position_y][position_x] == 1) {
            printf("!\n");
            return 0;
        } else {
            visited[position_y][position_x] = 1;
        }

        if(is_chest(current_pos)) {
            printf("*\n");
            return 0;
        }

        if (is_arrow(current_pos)) {
            direction = is_arrow(current_pos);
        }

        if (direction) {
            switch (direction) {
                case 1:
                    if (position_x + 1 < width) position_x++;
                    else {
                        printf("!\n");
                        return 0;
                    }
                    break;
                    case 2:
                    if (position_y + 1 < height) position_y++;
                    else {
                        printf("!\n");
                        return 0;
                    }
                    break;
                case 3:
                    if (position_x > 0) position_x--;
                    else {
                        printf("!\n");
                        return 0;
                    }
                    break;
                case 4:
                    if (position_y > 0) position_y--;
                    else {
                        printf("!\n");
                        return 0;
                    }
                    break;
            }

            if (position_x == position_y && position_x == 0) {
                printf("!\n");
                return 0;
            }
        } else {
            if (position_x == position_y && position_x == 0) {
                printf("!\n");
                return 0;
            }
        }
    }

    return 0;
}